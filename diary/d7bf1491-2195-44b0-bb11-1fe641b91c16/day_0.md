# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 33
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Chỉ số hiệu suất

- Patrol movement steps: 163
- Patrol wait steps: 2
- Servings mô phỏng: 34
- Servings / 100 movement steps: 20.8589

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 4) (ô=82)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(9, 10))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(9, 10))
- Movement steps / wait steps: 33 / 0
- Servings mô phỏng: 6
- Lý do chờ cuối kế hoạch: NONE
- Mảng hành động đã gửi server: `[4, 4, 4, 3, 4, 3, 4, 4, 4, 4, 0, 5, 0, 5, 4, 4, 1, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (11, 14) (Spot #1 (thương hiệu=1, tọa độ=(11, 14))) | 52 |
| 2-4 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (11, 14) (Spot #1 (thương hiệu=1, tọa độ=(11, 14))) | 50 |
| 5 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới tọa độ (11, 14) (Spot #1 (thương hiệu=1, tọa độ=(11, 14))) | 48 |
| 6 | Di chuyển hướng 3 (`3`) | (13, 7) | (13, 8) | Dự kiến di chuyển đến (13, 8); hướng tới tọa độ (11, 14) (Spot #1 (thương hiệu=1, tọa độ=(11, 14))) | 46 |
| 7 | Di chuyển hướng 4 (`4`) | (13, 8) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (11, 14) (Spot #1 (thương hiệu=1, tọa độ=(11, 14))) | 44 |
| 8 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (11, 14) (Spot #1 (thương hiệu=1, tọa độ=(11, 14))) | 42 |
| 9 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (11, 14) (Spot #1 (thương hiệu=1, tọa độ=(11, 14))) | 40 |
| 10 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới tọa độ (11, 14) (Spot #1 (thương hiệu=1, tọa độ=(11, 14))) | 38 |
| 11-12 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới tọa độ (11, 14) (Spot #1 (thương hiệu=1, tọa độ=(11, 14))) | 37 |
| 13-14 | Di chuyển hướng 4 (`4`) | (12, 13) | (11, 14) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 14)) | 36 |
| 15-16 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 13)) | 35 |
| 17-18 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 13)) | 34 |
| 19-20 | Di chuyển hướng 0 (`0`) | (10, 13) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (8, 12) (Spot #15 (thương hiệu=2, tọa độ=(8, 12))) | 33 |
| 21 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(8, 12)) | 31 |
| 22-23 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới tọa độ (7, 14) (Spot #2 (thương hiệu=2, tọa độ=(7, 14))) | 30 |
| 24-25 | Di chuyển hướng 4 (`4`) | (8, 13) | (7, 14) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 14)) | 29 |
| 26-27 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới tọa độ (9, 10) (Spot #7 (thương hiệu=7, tọa độ=(9, 10))) | 28 |
| 28-29 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (9, 10) (Spot #7 (thương hiệu=7, tọa độ=(9, 10))) | 27 |
| 30-31 | Di chuyển hướng 1 (`1`) | (8, 12) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới tọa độ (9, 10) (Spot #7 (thương hiệu=7, tọa độ=(9, 10))) | 26 |
| 32 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(9, 10)) | 24 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (10, 5) (ô=95)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(10, 8))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(10, 8))
- Movement steps / wait steps: 33 / 0
- Servings mô phỏng: 7
- Lý do chờ cuối kế hoạch: NONE
- Mảng hành động đã gửi server: `[0, 1, 0, 1, 2, 3, 4, 3, 4, 4, 3, 3, 4, 4, 5, 4, 4, 1, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 52 |
| 2 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(10, 3)) | 50 |
| 3-4 | Di chuyển hướng 0 (`0`) | (10, 3) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới tọa độ (10, 1) (Spot #16 (thương hiệu=3, tọa độ=(10, 1))) | 49 |
| 5 | Di chuyển hướng 1 (`1`) | (9, 2) | (10, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(10, 1)) | 47 |
| 6-7 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (11, 2) (Spot #4 (thương hiệu=4, tọa độ=(11, 2))) | 46 |
| 8 | Di chuyển hướng 3 (`3`) | (11, 1) | (11, 2) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 2)) | 44 |
| 9-10 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (11, 9) (Spot #11 (thương hiệu=11, tọa độ=(11, 9))) | 43 |
| 11-12 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến di chuyển đến (11, 4); hướng tới tọa độ (11, 9) (Spot #11 (thương hiệu=11, tọa độ=(11, 9))) | 42 |
| 13 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (11, 9) (Spot #11 (thương hiệu=11, tọa độ=(11, 9))) | 40 |
| 14 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (11, 9) (Spot #11 (thương hiệu=11, tọa độ=(11, 9))) | 38 |
| 15 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến di chuyển đến (11, 7); hướng tới tọa độ (11, 9) (Spot #11 (thương hiệu=11, tọa độ=(11, 9))) | 36 |
| 16 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (11, 9) (Spot #11 (thương hiệu=11, tọa độ=(11, 9))) | 34 |
| 17-18 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 9)) | 33 |
| 19-20 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 10)) | 32 |
| 21-22 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(9, 10)) | 31 |
| 23-24 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới tọa độ (8, 12) (Spot #15 (thương hiệu=2, tọa độ=(8, 12))) | 30 |
| 25 | Di chuyển hướng 4 (`4`) | (9, 11) | (8, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(8, 12)) | 28 |
| 26-27 | Di chuyển hướng 1 (`1`) | (8, 12) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 27 |
| 28 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 25 |
| 29-30 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 24 |
| 31-32 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 8)) | 23 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 12) (ô=218)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(10, 3))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(10, 3))
- Movement steps / wait steps: 32 / 1
- Servings mô phỏng: 7
- Lý do chờ cuối kế hoạch: INSUFFICIENT_DAY_STEPS
- Mảng hành động đã gửi server: `[2, 3, 1, 0, 0, 0, 0, 0, 5, 4, 5, 5, 4, 4, 3, 4, 3, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (16, 13) (Spot #10 (thương hiệu=10, tọa độ=(16, 13))) | 52 |
| 2 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(16, 13)) | 50 |
| 3-4 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 12)) | 49 |
| 5-6 | Di chuyển hướng 0 (`0`) | (16, 12) | (16, 11) | Dự kiến di chuyển đến (16, 11); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 48 |
| 7-9 | Di chuyển hướng 0 (`0`) | (16, 11) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 46 |
| 10 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 44 |
| 11-12 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 43 |
| 13-14 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 7)) | 42 |
| 15-16 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 41 |
| 17 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 39 |
| 18-19 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 38 |
| 20-21 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 8)) | 37 |
| 22-23 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (9, 10) (Spot #7 (thương hiệu=7, tọa độ=(9, 10))) | 36 |
| 24-25 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(9, 10)) | 35 |
| 26-27 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (10, 13) (Spot #8 (thương hiệu=8, tọa độ=(10, 13))) | 34 |
| 28 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (10, 13) (Spot #8 (thương hiệu=8, tọa độ=(10, 13))) | 32 |
| 29 | Di chuyển hướng 3 (`3`) | (9, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 13)) | 30 |
| 30-31 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 29 |
| 32 | Chờ 1 bước (`-1`) | (10, 12) | (10, 12) | Dự kiến đứng yên tại (10, 12); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(10, 3)) | 29 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 7) (ô=128)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=3, tọa độ=(10, 1))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=3, tọa độ=(10, 1))
- Movement steps / wait steps: 33 / 0
- Servings mô phỏng: 7
- Lý do chờ cuối kế hoạch: INSUFFICIENT_DAY_STEPS
- Mảng hành động đã gửi server: `[2, 3, 4, 4, 2, 2, 1, 2, 1, 1, 3, 3, 1, 5, 5, 0, 0, 5, 0, 0, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 52 |
| 2 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 8)) | 50 |
| 3-4 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (9, 10) (Spot #7 (thương hiệu=7, tọa độ=(9, 10))) | 49 |
| 5-6 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(9, 10)) | 48 |
| 7-8 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 47 |
| 9-10 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến di chuyển đến (11, 10); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 46 |
| 11 | Di chuyển hướng 1 (`1`) | (11, 10) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 44 |
| 12 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 42 |
| 13 | Di chuyển hướng 1 (`1`) | (13, 9) | (13, 8) | Dự kiến di chuyển đến (13, 8); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 40 |
| 14 | Di chuyển hướng 1 (`1`) | (13, 8) | (14, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 7)) | 38 |
| 15-16 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (15, 9) (Spot #13 (thương hiệu=0, tọa độ=(15, 9))) | 37 |
| 17-18 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(15, 9)) | 36 |
| 19-20 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(15, 8)) | 35 |
| 21-22 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 34 |
| 23-24 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến di chuyển đến (13, 8); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 33 |
| 25 | Di chuyển hướng 0 (`0`) | (13, 8) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 31 |
| 26 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 29 |
| 27 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 27 |
| 28 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 25 |
| 29 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 23 |
| 30 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(10, 3)) | 21 |
| 31-32 | Di chuyển hướng 0 (`0`) | (10, 3) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới tọa độ (10, 1) (Spot #16 (thương hiệu=3, tọa độ=(10, 1))) | 20 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (13, 4) (ô=81)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(11, 2))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(11, 2))
- Movement steps / wait steps: 32 / 1
- Servings mô phỏng: 7
- Lý do chờ cuối kế hoạch: TARGET_UNREACHABLE
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 3, 1, 5, 5, 5, 5, 5, 0, 1, 1, 0, 0, 0, 1, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 4) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 52 |
| 2-3 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (14, 7) (Spot #14 (thương hiệu=1, tọa độ=(14, 7))) | 51 |
| 4 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 7)) | 49 |
| 5-6 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (15, 9) (Spot #13 (thương hiệu=0, tọa độ=(15, 9))) | 48 |
| 7-8 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(15, 9)) | 47 |
| 9-10 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(15, 8)) | 46 |
| 11-12 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 45 |
| 13-14 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến di chuyển đến (13, 8); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 44 |
| 15 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 42 |
| 16-17 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (10, 8) (Spot #9 (thương hiệu=9, tọa độ=(10, 8))) | 41 |
| 18-19 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 8)) | 40 |
| 20-21 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 39 |
| 22 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 37 |
| 23 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 35 |
| 24 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 33 |
| 25 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(10, 3)) | 31 |
| 26-27 | Di chuyển hướng 0 (`0`) | (10, 3) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới tọa độ (10, 1) (Spot #16 (thương hiệu=3, tọa độ=(10, 1))) | 30 |
| 28 | Di chuyển hướng 1 (`1`) | (9, 2) | (10, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(10, 1)) | 28 |
| 29-30 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (11, 2) (Spot #4 (thương hiệu=4, tọa độ=(11, 2))) | 27 |
| 31 | Di chuyển hướng 3 (`3`) | (11, 1) | (11, 2) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 2)) | 25 |
| 32 | Chờ 1 bước (`-1`) | (11, 2) | (11, 2) | Dự kiến đứng yên tại (11, 2); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 2)) | 25 |

