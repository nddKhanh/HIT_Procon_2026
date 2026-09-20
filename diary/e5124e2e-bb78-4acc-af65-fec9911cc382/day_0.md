# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 33
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Chỉ số hiệu suất

- Patrol movement steps: 129
- Patrol wait steps: 3
- Servings mô phỏng: 12
- Servings / 100 movement steps: 9.30233

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (6, 11) (ô=171)
- Nhiên liệu đầu ngày: 69
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(12, 6))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(12, 6))
- Movement steps / wait steps: 32 / 1
- Servings mô phỏng: 3
- Lý do chờ cuối kế hoạch: TARGET_UNREACHABLE
- Mảng hành động đã gửi server: `[0, 1, 1, 0, 1, 0, 1, 0, 1, 2, 1, 2, 3, 4, 2, 3, 3, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 11) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (9, 1) (Spot #10 (thương hiệu=1, tọa độ=(9, 1))) | 68 |
| 2 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới tọa độ (9, 1) (Spot #10 (thương hiệu=1, tọa độ=(9, 1))) | 66 |
| 3 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (9, 1) (Spot #10 (thương hiệu=1, tọa độ=(9, 1))) | 64 |
| 4 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (9, 1) (Spot #10 (thương hiệu=1, tọa độ=(9, 1))) | 62 |
| 5-6 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (9, 1) (Spot #10 (thương hiệu=1, tọa độ=(9, 1))) | 61 |
| 7-8 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (9, 1) (Spot #10 (thương hiệu=1, tọa độ=(9, 1))) | 60 |
| 9-10 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (9, 1) (Spot #10 (thương hiệu=1, tọa độ=(9, 1))) | 59 |
| 11-12 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (9, 1) (Spot #10 (thương hiệu=1, tọa độ=(9, 1))) | 58 |
| 13-14 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (9, 1) (Spot #10 (thương hiệu=1, tọa độ=(9, 1))) | 57 |
| 15-16 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (9, 1) (Spot #10 (thương hiệu=1, tọa độ=(9, 1))) | 56 |
| 17 | Di chuyển hướng 1 (`1`) | (7, 2) | (8, 1) | Dự kiến di chuyển đến (8, 1); hướng tới tọa độ (9, 1) (Spot #10 (thương hiệu=1, tọa độ=(9, 1))) | 54 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=1, tọa độ=(9, 1)) | 53 |
| 20-21 | Di chuyển hướng 3 (`3`) | (9, 1) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới tọa độ (9, 3) (Spot #2 (thương hiệu=2, tọa độ=(9, 3))) | 52 |
| 22 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(9, 3)) | 50 |
| 23-24 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (12, 6) (Spot #6 (thương hiệu=6, tọa độ=(12, 6))) | 49 |
| 25 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới tọa độ (12, 6) (Spot #6 (thương hiệu=6, tọa độ=(12, 6))) | 47 |
| 26-27 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (12, 6) (Spot #6 (thương hiệu=6, tọa độ=(12, 6))) | 46 |
| 28-29 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (12, 6) (Spot #6 (thương hiệu=6, tọa độ=(12, 6))) | 45 |
| 30-31 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 6)) | 44 |
| 32 | Chờ 1 bước (`-1`) | (12, 6) | (12, 6) | Dự kiến đứng yên tại (12, 6); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 6)) | 44 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (10, 11) (ô=175)
- Nhiên liệu đầu ngày: 69
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(9, 3))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(9, 3))
- Movement steps / wait steps: 33 / 0
- Servings mô phỏng: 4
- Lý do chờ cuối kế hoạch: INSUFFICIENT_DAY_STEPS
- Mảng hành động đã gửi server: `[1, 2, 5, 5, 4, 3, 4, 4, 4, 5, 5, 5, 5, 4, 0, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới tọa độ (11, 10) (Spot #8 (thương hiệu=8, tọa độ=(11, 10))) | 68 |
| 2-3 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 10)) | 67 |
| 4-5 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới tọa độ (9, 10) (Spot #9 (thương hiệu=0, tọa độ=(9, 10))) | 66 |
| 6-7 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(9, 10)) | 65 |
| 8-9 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới tọa độ (9, 13) (Spot #5 (thương hiệu=5, tọa độ=(9, 13))) | 64 |
| 10 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (9, 13) (Spot #5 (thương hiệu=5, tọa độ=(9, 13))) | 62 |
| 11-12 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 61 |
| 13-14 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (3, 16) (Spot #11 (thương hiệu=2, tọa độ=(3, 16))) | 60 |
| 15-16 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (3, 16) (Spot #11 (thương hiệu=2, tọa độ=(3, 16))) | 59 |
| 17-18 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (3, 16) (Spot #11 (thương hiệu=2, tọa độ=(3, 16))) | 58 |
| 19 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (3, 16) (Spot #11 (thương hiệu=2, tọa độ=(3, 16))) | 56 |
| 20-21 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (3, 16) (Spot #11 (thương hiệu=2, tọa độ=(3, 16))) | 55 |
| 22-23 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới tọa độ (3, 16) (Spot #11 (thương hiệu=2, tọa độ=(3, 16))) | 54 |
| 24-25 | Di chuyển hướng 4 (`4`) | (4, 15) | (3, 16) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=2, tọa độ=(3, 16)) | 53 |
| 26-27 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến di chuyển đến (3, 15); hướng tới tọa độ (9, 3) (Spot #2 (thương hiệu=2, tọa độ=(9, 3))) | 52 |
| 28 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới tọa độ (9, 3) (Spot #2 (thương hiệu=2, tọa độ=(9, 3))) | 50 |
| 29-30 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (9, 3) (Spot #2 (thương hiệu=2, tọa độ=(9, 3))) | 49 |
| 31-32 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (9, 3) (Spot #2 (thương hiệu=2, tọa độ=(9, 3))) | 48 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 3) (ô=47)
- Nhiên liệu đầu ngày: 69
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(14, 4))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(14, 4))
- Movement steps / wait steps: 32 / 1
- Servings mô phỏng: 5
- Lý do chờ cuối kế hoạch: TARGET_UNREACHABLE
- Mảng hành động đã gửi server: `[0, 0, 2, 2, 2, 2, 3, 2, 2, 2, 3, 2, 2, 2, 2, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến di chuyển đến (1, 2); hướng tới tọa độ (1, 1) (Spot #0 (thương hiệu=0, tọa độ=(1, 1))) | 68 |
| 2 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 1)) | 66 |
| 3-4 | Di chuyển hướng 2 (`2`) | (1, 1) | (2, 1) | Dự kiến di chuyển đến (2, 1); hướng tới tọa độ (4, 1) (Spot #1 (thương hiệu=1, tọa độ=(4, 1))) | 65 |
| 5-7 | Di chuyển hướng 2 (`2`) | (2, 1) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới tọa độ (4, 1) (Spot #1 (thương hiệu=1, tọa độ=(4, 1))) | 63 |
| 8-9 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(4, 1)) | 62 |
| 10-11 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (9, 3) (Spot #2 (thương hiệu=2, tọa độ=(9, 3))) | 61 |
| 12-13 | Di chuyển hướng 3 (`3`) | (5, 1) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (9, 3) (Spot #2 (thương hiệu=2, tọa độ=(9, 3))) | 60 |
| 14 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (9, 3) (Spot #2 (thương hiệu=2, tọa độ=(9, 3))) | 58 |
| 15-16 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (9, 3) (Spot #2 (thương hiệu=2, tọa độ=(9, 3))) | 57 |
| 17 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới tọa độ (9, 3) (Spot #2 (thương hiệu=2, tọa độ=(9, 3))) | 55 |
| 18-19 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(9, 3)) | 54 |
| 20-21 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 53 |
| 22 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 51 |
| 23-24 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 50 |
| 25-26 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 49 |
| 27-29 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(14, 3)) | 47 |
| 30-31 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(14, 4)) | 46 |
| 32 | Chờ 1 bước (`-1`) | (14, 4) | (14, 4) | Dự kiến đứng yên tại (14, 4); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(14, 4)) | 46 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (12, 17) (ô=267)
- Nhiên liệu đầu ngày: 69
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(14, 3))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(14, 3))
- Movement steps / wait steps: 32 / 1
- Servings mô phỏng: 0
- Lý do chờ cuối kế hoạch: INSUFFICIENT_DAY_STEPS
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 0, 5, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 68 |
| 2-3 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 67 |
| 4-6 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 65 |
| 7-8 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 64 |
| 9-10 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 63 |
| 11-12 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 62 |
| 13 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 60 |
| 14-15 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 59 |
| 16-18 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến di chuyển đến (5, 12); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 57 |
| 19-20 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 56 |
| 21-22 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 55 |
| 23 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 53 |
| 24 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 51 |
| 25 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 49 |
| 26-27 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 48 |
| 28-29 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 47 |
| 30-31 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (14, 3) (Spot #4 (thương hiệu=4, tọa độ=(14, 3))) | 46 |
| 32 | Chờ 1 bước (`-1`) | (6, 4) | (6, 4) | Dự kiến đứng yên tại (6, 4); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(14, 3)) | 46 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (1, 5) (ô=76)
- Nhiên liệu đầu ngày: 69
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Điểm đích tọa độ=(6, 3)
- Movement steps / wait steps: 10 / 23
- Servings mô phỏng: 0
- Lý do chờ cuối kế hoạch: REFUEL_RENDEZVOUS
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 1, 2, -23]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (6, 3) | 69 |
| 2 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến di chuyển đến (2, 4); hướng tới điểm hẹn của xe tuần tra #0 tại (6, 3) | 69 |
| 3-4 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới điểm hẹn của xe tuần tra #0 tại (6, 3) | 69 |
| 5-6 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới điểm hẹn của xe tuần tra #0 tại (6, 3) | 69 |
| 7 | Di chuyển hướng 1 (`1`) | (4, 4) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới điểm hẹn của xe tuần tra #0 tại (6, 3) | 69 |
| 8-9 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (6, 3) | 69 |
| 10-32 | Chờ 23 bước (`-23`) | (6, 3) | (6, 3) | Dự kiến đứng yên tại (6, 3); điểm hẹn của xe tuần tra #0 tại (6, 3) | 69 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (13, 0) (ô=13)
- Nhiên liệu đầu ngày: 69
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Điểm đích tọa độ=(13, 3)
- Movement steps / wait steps: 5 / 28
- Servings mô phỏng: 0
- Lý do chờ cuối kế hoạch: REFUEL_RENDEZVOUS
- Mảng hành động đã gửi server: `[3, 4, 4, -28]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (13, 0) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới điểm hẹn của xe tuần tra #2 tại (13, 3) | 69 |
| 2-3 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới điểm hẹn của xe tuần tra #2 tại (13, 3) | 69 |
| 4 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (13, 3) | 69 |
| 5-32 | Chờ 28 bước (`-28`) | (13, 3) | (13, 3) | Dự kiến đứng yên tại (13, 3); điểm hẹn của xe tuần tra #2 tại (13, 3) | 69 |

