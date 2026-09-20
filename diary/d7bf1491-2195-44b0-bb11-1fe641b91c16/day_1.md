# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 38
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Chỉ số hiệu suất

- Patrol movement steps: 147
- Patrol wait steps: 43
- Servings mô phỏng: 35
- Servings / 100 movement steps: 23.8095

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (9, 10) (ô=179)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=1, tọa độ=(14, 7))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=1, tọa độ=(14, 7))
- Movement steps / wait steps: 32 / 6
- Servings mô phỏng: 9
- Lý do chờ cuối kế hoạch: NO_REACHABLE_STOCK
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 2, 2, 1, 2, 3, 1, 1, 1, 1, 1, 2, 1, 5, 0, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới tọa độ (8, 12) (Spot #15 (thương hiệu=2, tọa độ=(8, 12))) | 23 |
| 2 | Di chuyển hướng 4 (`4`) | (9, 11) | (8, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(8, 12)) | 21 |
| 3-4 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới tọa độ (7, 14) (Spot #2 (thương hiệu=2, tọa độ=(7, 14))) | 20 |
| 5-6 | Di chuyển hướng 4 (`4`) | (8, 13) | (7, 14) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 14)) | 19 |
| 7-8 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (10, 13) (Spot #8 (thương hiệu=8, tọa độ=(10, 13))) | 18 |
| 9-10 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến di chuyển đến (9, 14); hướng tới tọa độ (10, 13) (Spot #8 (thương hiệu=8, tọa độ=(10, 13))) | 17 |
| 11 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 13)) | 15 |
| 12-13 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới tọa độ (11, 14) (Spot #1 (thương hiệu=1, tọa độ=(11, 14))) | 14 |
| 14-15 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 14)) | 13 |
| 16-17 | Di chuyển hướng 1 (`1`) | (11, 14) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới tọa độ (15, 9) (Spot #13 (thương hiệu=0, tọa độ=(15, 9))) | 12 |
| 18-19 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới tọa độ (15, 9) (Spot #13 (thương hiệu=0, tọa độ=(15, 9))) | 11 |
| 20-21 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (15, 9) (Spot #13 (thương hiệu=0, tọa độ=(15, 9))) | 10 |
| 22 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (15, 9) (Spot #13 (thương hiệu=0, tọa độ=(15, 9))) | 8 |
| 23 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (15, 9) (Spot #13 (thương hiệu=0, tọa độ=(15, 9))) | 6 |
| 24-25 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(15, 9)) | 5 |
| 26-27 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(15, 8)) | 4 |
| 28-29 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 3 |
| 30-31 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 7)) | 2 |
| 32-37 | Chờ 6 bước (`-6`) | (14, 7) | (14, 7) | Dự kiến đứng yên tại (14, 7); mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 7)) | 2 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (10, 8) (ô=146)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=1, tọa độ=(14, 7))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=1, tọa độ=(14, 7))
- Movement steps / wait steps: 20 / 18
- Servings mô phỏng: 5
- Lý do chờ cuối kế hoạch: NO_REACHABLE_STOCK
- Mảng hành động đã gửi server: `[0, 1, 1, 0, 0, 0, 1, 2, 3, 3, 3, 3, 3, 3, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 22 |
| 2 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 20 |
| 3 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 18 |
| 4 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 16 |
| 5 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(10, 3)) | 14 |
| 6-7 | Di chuyển hướng 0 (`0`) | (10, 3) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới tọa độ (10, 1) (Spot #16 (thương hiệu=3, tọa độ=(10, 1))) | 13 |
| 8 | Di chuyển hướng 1 (`1`) | (9, 2) | (10, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(10, 1)) | 11 |
| 9-10 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (11, 2) (Spot #4 (thương hiệu=4, tọa độ=(11, 2))) | 10 |
| 11 | Di chuyển hướng 3 (`3`) | (11, 1) | (11, 2) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 2)) | 8 |
| 12-13 | Di chuyển hướng 3 (`3`) | (11, 2) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 7 |
| 14-15 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 6 |
| 16 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 4 |
| 17-18 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 3 |
| 19 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 7)) | 1 |
| 20-37 | Chờ 18 bước (`-18`) | (14, 7) | (14, 7) | Dự kiến đứng yên tại (14, 7); mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 7)) | 1 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 12) (ô=214)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(10, 13))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(10, 13))
- Movement steps / wait steps: 38 / 0
- Servings mô phỏng: 7
- Lý do chờ cuối kế hoạch: NONE
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 3, 1, 0, 0, 0, 0, 0, 5, 4, 5, 5, 4, 4, 3, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (16, 13) (Spot #10 (thương hiệu=10, tọa độ=(16, 13))) | 28 |
| 2-3 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới tọa độ (16, 13) (Spot #10 (thương hiệu=10, tọa độ=(16, 13))) | 27 |
| 4-5 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới tọa độ (16, 13) (Spot #10 (thương hiệu=10, tọa độ=(16, 13))) | 26 |
| 6-7 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (16, 13) (Spot #10 (thương hiệu=10, tọa độ=(16, 13))) | 25 |
| 8-9 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (16, 13) (Spot #10 (thương hiệu=10, tọa độ=(16, 13))) | 24 |
| 10 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(16, 13)) | 22 |
| 11-12 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 12)) | 21 |
| 13-14 | Di chuyển hướng 0 (`0`) | (16, 12) | (16, 11) | Dự kiến di chuyển đến (16, 11); hướng tới tọa độ (15, 9) (Spot #13 (thương hiệu=0, tọa độ=(15, 9))) | 20 |
| 15-17 | Di chuyển hướng 0 (`0`) | (16, 11) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới tọa độ (15, 9) (Spot #13 (thương hiệu=0, tọa độ=(15, 9))) | 18 |
| 18 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(15, 9)) | 16 |
| 19-20 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 15 |
| 21-22 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 7)) | 14 |
| 23-24 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 13 |
| 25 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 11 |
| 26-27 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 10 |
| 28-29 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 8)) | 9 |
| 30-31 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (9, 10) (Spot #7 (thương hiệu=7, tọa độ=(9, 10))) | 8 |
| 32-33 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(9, 10)) | 7 |
| 34-35 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (10, 13) (Spot #8 (thương hiệu=8, tọa độ=(10, 13))) | 6 |
| 36 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (10, 13) (Spot #8 (thương hiệu=8, tọa độ=(10, 13))) | 4 |
| 37 | Di chuyển hướng 3 (`3`) | (9, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 13)) | 2 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 2) (ô=43)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(11, 13))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(11, 13))
- Movement steps / wait steps: 19 / 19
- Servings mô phỏng: 5
- Lý do chờ cuối kế hoạch: NO_FUEL
- Mảng hành động đã gửi server: `[3, 4, 4, 3, 3, 3, 4, 4, 4, 4, 2, 3, 2, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (9, 2) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 18 |
| 1-2 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 17 |
| 3 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 15 |
| 4 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 13 |
| 5 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 11 |
| 6 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 8)) | 9 |
| 7-8 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (9, 10) (Spot #7 (thương hiệu=7, tọa độ=(9, 10))) | 8 |
| 9-10 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(9, 10)) | 7 |
| 11-12 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới tọa độ (8, 12) (Spot #15 (thương hiệu=2, tọa độ=(8, 12))) | 6 |
| 13 | Di chuyển hướng 4 (`4`) | (9, 11) | (8, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(8, 12)) | 4 |
| 14-15 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (10, 13) (Spot #8 (thương hiệu=8, tọa độ=(10, 13))) | 3 |
| 16 | Di chuyển hướng 3 (`3`) | (9, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 13)) | 1 |
| 17-18 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 13)) | 0 |
| 19-37 | Chờ 19 bước (`-19`) | (11, 13) | (11, 13) | Dự kiến đứng yên tại (11, 13); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 13)) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 2) (ô=45)
- Nhiên liệu đầu ngày: 25
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(10, 13))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(10, 13))
- Movement steps / wait steps: 38 / 0
- Servings mô phỏng: 9
- Lý do chờ cuối kế hoạch: NONE
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 3, 3, 1, 5, 5, 5, 5, 5, 4, 4, 2, 1, 4, 4, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 2) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 24 |
| 2-3 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 23 |
| 4 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 21 |
| 5-6 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 20 |
| 7 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 7)) | 18 |
| 8-9 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (15, 9) (Spot #13 (thương hiệu=0, tọa độ=(15, 9))) | 17 |
| 10-11 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(15, 9)) | 16 |
| 12-13 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(15, 8)) | 15 |
| 14-15 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 14 |
| 16-17 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến di chuyển đến (13, 8); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 13 |
| 18 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 11 |
| 19-20 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 10 |
| 21-22 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 8)) | 9 |
| 23-24 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (9, 10) (Spot #7 (thương hiệu=7, tọa độ=(9, 10))) | 8 |
| 25-26 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(9, 10)) | 7 |
| 27-28 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 10)) | 6 |
| 29-30 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 9)) | 5 |
| 31-32 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới tọa độ (10, 13) (Spot #8 (thương hiệu=8, tọa độ=(10, 13))) | 4 |
| 33-34 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (10, 13) (Spot #8 (thương hiệu=8, tọa độ=(10, 13))) | 3 |
| 35 | Di chuyển hướng 3 (`3`) | (10, 11) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (10, 13) (Spot #8 (thương hiệu=8, tọa độ=(10, 13))) | 1 |
| 36-37 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 13)) | 0 |

