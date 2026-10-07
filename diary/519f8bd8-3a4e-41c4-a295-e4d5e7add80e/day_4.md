# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 48
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #3 | (9, 15) | 39 | 40 |
| 4 | #2 | #3 | (8, 15) | 39 | 40 |
| 5 | #2 | #3 | (7, 15) | 38 | 40 |
| 27 | #0 | #3 | (13, 5) | 1 | 40 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 5) (ô=93)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(2, 0))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(2, 0))
- Mảng hành động đã gửi server: `[-28, 5, 5, 0, 0, 5, 5, 5, 0, 5, 5, 0, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-27 | Chờ 28 bước (`-28`) | (13, 5) | (13, 5) | Dự kiến đứng yên tại (13, 5); hướng tới tọa độ (13, 5) | 40 |
| 28-29 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới tọa độ (7, 3) (Spot #7 (thương hiệu=4, tọa độ=(7, 3))) | 39 |
| 30-31 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (7, 3) (Spot #7 (thương hiệu=4, tọa độ=(7, 3))) | 38 |
| 32 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới tọa độ (7, 3) (Spot #7 (thương hiệu=4, tọa độ=(7, 3))) | 36 |
| 33 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (7, 3) (Spot #7 (thương hiệu=4, tọa độ=(7, 3))) | 34 |
| 34 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (7, 3) (Spot #7 (thương hiệu=4, tọa độ=(7, 3))) | 32 |
| 35-36 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (7, 3) (Spot #7 (thương hiệu=4, tọa độ=(7, 3))) | 31 |
| 37-38 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=4, tọa độ=(7, 3)) | 30 |
| 39-40 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (4, 2) (Spot #6 (thương hiệu=4, tọa độ=(4, 2))) | 29 |
| 41 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (4, 2) (Spot #6 (thương hiệu=4, tọa độ=(4, 2))) | 27 |
| 42 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(4, 2)) | 25 |
| 43-44 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (2, 0) (Spot #0 (thương hiệu=0, tọa độ=(2, 0))) | 24 |
| 45 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới tọa độ (2, 0) (Spot #0 (thương hiệu=0, tọa độ=(2, 0))) | 22 |
| 46 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 0)) | 20 |
| 47 | Chờ 1 bước (`-1`) | (2, 0) | (2, 0) | Dự kiến đứng yên tại (2, 0); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 0)) | 20 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (0, 10) (ô=160)
- Nhiên liệu đầu ngày: 30
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=8, tọa độ=(15, 12))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=8, tọa độ=(15, 12))
- Mảng hành động đã gửi server: `[2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 2, 2, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 29 |
| 2-3 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 28 |
| 4 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 26 |
| 5-6 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 25 |
| 7 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 23 |
| 8 | Di chuyển hướng 2 (`2`) | (4, 8) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 21 |
| 9-10 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 20 |
| 11-12 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 19 |
| 13-14 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 18 |
| 15 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến di chuyển đến (9, 8); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 16 |
| 16 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 14 |
| 17-18 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 13 |
| 19-20 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 12 |
| 21 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến di chuyển đến (12, 10); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 10 |
| 22 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 8 |
| 23 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 6 |
| 24 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 4 |
| 25 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(15, 12)) | 2 |
| 26-47 | Chờ 22 bước (`-22`) | (15, 12) | (15, 12) | Dự kiến đứng yên tại (15, 12); mục tiêu Spot #12 (thương hiệu=8, tọa độ=(15, 12)) | 2 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 14) (ô=233)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=3, tọa độ=(15, 1))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=3, tọa độ=(15, 1))
- Mảng hành động đã gửi server: `[4, 5, 5, 0, 0, 1, 2, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 2, 2, 2, 2, 2, 1, 3, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 40 |
| 2-3 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 40 |
| 4 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 40 |
| 5 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 38 |
| 6-8 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 36 |
| 9-10 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 35 |
| 11-13 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 33 |
| 14-15 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 32 |
| 16-17 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 31 |
| 18-19 | Di chuyển hướng 0 (`0`) | (8, 10) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 30 |
| 20-21 | Di chuyển hướng 0 (`0`) | (8, 9) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 29 |
| 22-23 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 28 |
| 24 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 26 |
| 25 | Di chuyển hướng 1 (`1`) | (8, 6) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 24 |
| 26-27 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 23 |
| 28-29 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 22 |
| 30 | Di chuyển hướng 0 (`0`) | (10, 3) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 20 |
| 31 | Di chuyển hướng 0 (`0`) | (9, 2) | (9, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(9, 1)) | 18 |
| 32-33 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến di chuyển đến (10, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 17 |
| 34-35 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 16 |
| 36-37 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến di chuyển đến (12, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 14 |
| 38 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 12 |
| 39 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 10 |
| 40 | Di chuyển hướng 1 (`1`) | (14, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 8 |
| 41-42 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 7 |
| 43-47 | Chờ 5 bước (`-5`) | (15, 1) | (15, 1) | Dự kiến đứng yên tại (15, 1); mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 7 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (9, 14) (ô=233)
- Nhiên liệu đầu ngày: 40
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #8 (thương hiệu=5, tọa độ=(13, 5))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 0, 1, 0, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 2, 1, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 2-3 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 4 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 5 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 6 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 7 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 8 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến di chuyển đến (5, 13); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 9 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 10 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 11 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 12-14 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 15-16 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 17-18 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 19-20 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 21 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 22 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 23 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 24 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 25 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 40 |
| 26 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (13, 5) | 40 |
| 27-47 | Chờ 21 bước (`-21`) | (13, 5) | (13, 5) | Dự kiến đứng yên tại (13, 5); điểm hẹn của xe tuần tra #0 tại (13, 5) | 40 |

