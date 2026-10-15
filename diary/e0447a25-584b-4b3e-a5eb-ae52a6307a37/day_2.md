# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 72
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 12 | #0 | #4 | (19, 7) | 0 | 36 |
| 34 | #2 | #4 | (19, 7) | 0 | 36 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 4) (ô=104)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(3, 9))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(3, 9))
- Mảng hành động đã gửi server: `[4, 4, 4, -7, 5, 5, 5, 4, 0, 5, 0, 5, 5, 5, 4, 4, 5, 5, 5, 4, 4, 5, 5, 0, -28]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (20, 4) | (20, 5) | Dự kiến di chuyển đến (20, 5); hướng tới tọa độ (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 4 |
| 2-4 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 2 |
| 5 | Di chuyển hướng 4 (`4`) | (19, 6) | (19, 7) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 7)) | 0 |
| 6-12 | Chờ 7 bước (`-7`) | (19, 7) | (19, 7) | Dự kiến đứng yên tại (19, 7); hướng tới tọa độ (19, 7) | 36 |
| 13-14 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến di chuyển đến (18, 7); hướng tới tọa độ (15, 8) (Spot #5 (thương hiệu=5, tọa độ=(15, 8))) | 35 |
| 15 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến di chuyển đến (17, 7); hướng tới tọa độ (15, 8) (Spot #5 (thương hiệu=5, tọa độ=(15, 8))) | 33 |
| 16-18 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới tọa độ (15, 8) (Spot #5 (thương hiệu=5, tọa độ=(15, 8))) | 31 |
| 19-21 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 8)) | 29 |
| 22-23 | Di chuyển hướng 0 (`0`) | (15, 8) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới tọa độ (9, 8) (Spot #2 (thương hiệu=2, tọa độ=(9, 8))) | 28 |
| 24-25 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (9, 8) (Spot #2 (thương hiệu=2, tọa độ=(9, 8))) | 27 |
| 26 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (9, 8) (Spot #2 (thương hiệu=2, tọa độ=(9, 8))) | 25 |
| 27 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (9, 8) (Spot #2 (thương hiệu=2, tọa độ=(9, 8))) | 23 |
| 28 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (9, 8) (Spot #2 (thương hiệu=2, tọa độ=(9, 8))) | 21 |
| 29 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (9, 8) (Spot #2 (thương hiệu=2, tọa độ=(9, 8))) | 19 |
| 30 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (9, 8) (Spot #2 (thương hiệu=2, tọa độ=(9, 8))) | 17 |
| 31 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(9, 8)) | 15 |
| 32-33 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (3, 9) (Spot #8 (thương hiệu=8, tọa độ=(3, 9))) | 14 |
| 34-36 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (3, 9) (Spot #8 (thương hiệu=8, tọa độ=(3, 9))) | 12 |
| 37-38 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (3, 9) (Spot #8 (thương hiệu=8, tọa độ=(3, 9))) | 11 |
| 39 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới tọa độ (3, 9) (Spot #8 (thương hiệu=8, tọa độ=(3, 9))) | 9 |
| 40 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (3, 9) (Spot #8 (thương hiệu=8, tọa độ=(3, 9))) | 7 |
| 41 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (3, 9) (Spot #8 (thương hiệu=8, tọa độ=(3, 9))) | 5 |
| 42 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (3, 9) (Spot #8 (thương hiệu=8, tọa độ=(3, 9))) | 3 |
| 43 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 1 |
| 44-71 | Chờ 28 bước (`-28`) | (3, 9) | (3, 9) | Dự kiến đứng yên tại (3, 9); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 1 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (20, 0) (ô=20)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 0)
- Mảng hành động đã gửi server: `[-72]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-71 | Chờ 72 bước (`-72`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); hướng tới tọa độ (20, 0) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 8) (ô=177)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(19, 7))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(19, 7))
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 2, 3, 2, 3, 4, 1, 2, 2, 2, 2, 2, 5, 5, 0, 1, 0, 1, 1, -38]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (9, 8) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (15, 11) (Spot #10 (thương hiệu=0, tọa độ=(15, 11))) | 33 |
| 2 | Di chuyển hướng 3 (`3`) | (10, 9) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới tọa độ (15, 11) (Spot #10 (thương hiệu=0, tọa độ=(15, 11))) | 31 |
| 3 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến di chuyển đến (11, 10); hướng tới tọa độ (15, 11) (Spot #10 (thương hiệu=0, tọa độ=(15, 11))) | 29 |
| 4 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến di chuyển đến (12, 10); hướng tới tọa độ (15, 11) (Spot #10 (thương hiệu=0, tọa độ=(15, 11))) | 27 |
| 5 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (15, 11) (Spot #10 (thương hiệu=0, tọa độ=(15, 11))) | 25 |
| 6 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (15, 11) (Spot #10 (thương hiệu=0, tọa độ=(15, 11))) | 23 |
| 7 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 21 |
| 8-9 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (15, 13) (Spot #9 (thương hiệu=9, tọa độ=(15, 13))) | 20 |
| 10-11 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 19 |
| 12-13 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 18 |
| 14-15 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 17 |
| 16-17 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 16 |
| 18-19 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến di chuyển đến (18, 12); hướng tới tọa độ (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 15 |
| 20-21 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 13 |
| 22-23 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 12)) | 12 |
| 24-25 | Di chuyển hướng 5 (`5`) | (20, 12) | (19, 12) | Dự kiến di chuyển đến (19, 12); hướng tới tọa độ (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 11 |
| 26-27 | Di chuyển hướng 5 (`5`) | (19, 12) | (18, 12) | Dự kiến di chuyển đến (18, 12); hướng tới tọa độ (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 10 |
| 28-29 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến di chuyển đến (18, 11); hướng tới tọa độ (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 8 |
| 30 | Di chuyển hướng 1 (`1`) | (18, 11) | (18, 10) | Dự kiến di chuyển đến (18, 10); hướng tới tọa độ (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 6 |
| 31 | Di chuyển hướng 0 (`0`) | (18, 10) | (18, 9) | Dự kiến di chuyển đến (18, 9); hướng tới tọa độ (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 4 |
| 32 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến di chuyển đến (18, 8); hướng tới tọa độ (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 2 |
| 33 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 7)) | 36 |
| 34-71 | Chờ 38 bước (`-38`) | (19, 7) | (19, 7) | Dự kiến đứng yên tại (19, 7); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 7)) | 36 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 0) (ô=3)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 0)
- Mảng hành động đã gửi server: `[-72]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-71 | Chờ 72 bước (`-72`) | (3, 0) | (3, 0) | Dự kiến đứng yên tại (3, 0); hướng tới tọa độ (3, 0) | 0 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (10, 8) (ô=178)
- Nhiên liệu đầu ngày: 36
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #6 (thương hiệu=6, tọa độ=(19, 7))
- Mảng hành động đã gửi server: `[0, 1, 2, 2, 2, 2, 2, 2, 2, 3, 2, -60]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 36 |
| 2 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 36 |
| 3 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 36 |
| 4 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 36 |
| 5 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 36 |
| 6 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 36 |
| 7 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến di chuyển đến (15, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 36 |
| 8 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 36 |
| 9 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 36 |
| 10 | Di chuyển hướng 3 (`3`) | (17, 6) | (18, 7) | Dự kiến di chuyển đến (18, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 36 |
| 11 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (19, 7) | 36 |
| 12-71 | Chờ 60 bước (`-60`) | (19, 7) | (19, 7) | Dự kiến đứng yên tại (19, 7); điểm hẹn của xe tuần tra #0 tại (19, 7) | 36 |

