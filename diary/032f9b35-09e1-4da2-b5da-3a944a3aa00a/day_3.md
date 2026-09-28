# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 57
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 1 | #5 | #3 | (4, 12) | 52 | 55 |
| 2 | #2 | #3 | (4, 13) | 54 | 55 |
| 3 | #5 | #3 | (4, 13) | 54 | 55 |
| 5 | #5 | #3 | (3, 14) | 54 | 55 |
| 44 | #1 | #3 | (23, 19) | 1 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 6) (ô=164)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(16, 6))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(16, 6))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, -48]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 5 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 4 |
| 4-5 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 3 |
| 6-8 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 6)) | 1 |
| 9-56 | Chờ 48 bước (`-48`) | (16, 6) | (16, 6) | Dự kiến đứng yên tại (16, 6); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 6)) | 1 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (22, 22) (ô=550)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(0, 14))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(0, 14))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 0, 1, 0, 0, 1, 0, 2, 2, 2, 2, 2, 3, 4, -13, 5, 5, 5, 5, 5, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (22, 22) | (22, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(22, 23)) | 21 |
| 2-3 | Di chuyển hướng 5 (`5`) | (22, 23) | (21, 23) | Dự kiến di chuyển đến (21, 23); hướng tới tọa độ (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 20 |
| 4-5 | Di chuyển hướng 5 (`5`) | (21, 23) | (20, 23) | Dự kiến di chuyển đến (20, 23); hướng tới tọa độ (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 19 |
| 6-7 | Di chuyển hướng 5 (`5`) | (20, 23) | (19, 23) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 23)) | 18 |
| 8-9 | Di chuyển hướng 0 (`0`) | (19, 23) | (18, 22) | Dự kiến di chuyển đến (18, 22); hướng tới tọa độ (19, 21) (Spot #5 (thương hiệu=5, tọa độ=(19, 21))) | 17 |
| 10-11 | Di chuyển hướng 1 (`1`) | (18, 22) | (19, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(19, 21)) | 16 |
| 12-13 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến di chuyển đến (18, 20); hướng tới tọa độ (18, 18) (Spot #18 (thương hiệu=18, tọa độ=(18, 18))) | 15 |
| 14 | Di chuyển hướng 0 (`0`) | (18, 20) | (18, 19) | Dự kiến di chuyển đến (18, 19); hướng tới tọa độ (18, 18) (Spot #18 (thương hiệu=18, tọa độ=(18, 18))) | 13 |
| 15 | Di chuyển hướng 1 (`1`) | (18, 19) | (18, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 18)) | 11 |
| 16-17 | Di chuyển hướng 0 (`0`) | (18, 18) | (18, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(18, 17)) | 10 |
| 18-19 | Di chuyển hướng 2 (`2`) | (18, 17) | (19, 17) | Dự kiến di chuyển đến (19, 17); hướng tới tọa độ (20, 17) (Spot #12 (thương hiệu=12, tọa độ=(20, 17))) | 9 |
| 20 | Di chuyển hướng 2 (`2`) | (19, 17) | (20, 17) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(20, 17)) | 7 |
| 21-22 | Di chuyển hướng 2 (`2`) | (20, 17) | (21, 17) | Dự kiến di chuyển đến (21, 17); hướng tới tọa độ (22, 17) (Spot #21 (thương hiệu=21, tọa độ=(22, 17))) | 6 |
| 23-24 | Di chuyển hướng 2 (`2`) | (21, 17) | (22, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(22, 17)) | 5 |
| 25-26 | Di chuyển hướng 2 (`2`) | (22, 17) | (23, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(23, 17)) | 4 |
| 27-28 | Di chuyển hướng 3 (`3`) | (23, 17) | (23, 18) | Dự kiến di chuyển đến (23, 18); hướng tới tọa độ (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 3 |
| 29-31 | Di chuyển hướng 4 (`4`) | (23, 18) | (23, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(23, 19)) | 1 |
| 32-44 | Chờ 13 bước (`-13`) | (23, 19) | (23, 19) | Dự kiến đứng yên tại (23, 19); hướng tới tọa độ (23, 19) | 55 |
| 45-46 | Di chuyển hướng 5 (`5`) | (23, 19) | (22, 19) | Dự kiến di chuyển đến (22, 19); hướng tới tọa độ (21, 19) (Spot #11 (thương hiệu=11, tọa độ=(21, 19))) | 54 |
| 47-49 | Di chuyển hướng 5 (`5`) | (22, 19) | (21, 19) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 19)) | 52 |
| 50-51 | Di chuyển hướng 5 (`5`) | (21, 19) | (20, 19) | Dự kiến di chuyển đến (20, 19); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 51 |
| 52-53 | Di chuyển hướng 5 (`5`) | (20, 19) | (19, 19) | Dự kiến di chuyển đến (19, 19); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 50 |
| 54-55 | Di chuyển hướng 5 (`5`) | (19, 19) | (18, 19) | Dự kiến di chuyển đến (18, 19); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 48 |
| 56 | Di chuyển hướng 4 (`4`) | (18, 19) | (17, 20) | Dự kiến di chuyển đến (17, 20); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 46 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 14) (ô=339)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(4, 14))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(4, 14))
- Mảng hành động đã gửi server: `[1, 1, 0, 0, 5, 4, 5, 4, 4, 3, 0, 1, 1, 1, 1, 2, 1, 1, 0, 0, 0, 1, 1, 3, 3, 3, 4, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (3, 10) (Spot #2 (thương hiệu=2, tọa độ=(3, 10))) | 55 |
| 2-3 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (3, 10) (Spot #2 (thương hiệu=2, tọa độ=(3, 10))) | 54 |
| 4-5 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (3, 10) (Spot #2 (thương hiệu=2, tọa độ=(3, 10))) | 53 |
| 6-7 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 51 |
| 8-9 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (0, 13) (Spot #19 (thương hiệu=19, tọa độ=(0, 13))) | 50 |
| 10-12 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (0, 13) (Spot #19 (thương hiệu=19, tọa độ=(0, 13))) | 48 |
| 13 | Di chuyển hướng 5 (`5`) | (2, 11) | (1, 11) | Dự kiến di chuyển đến (1, 11); hướng tới tọa độ (0, 13) (Spot #19 (thương hiệu=19, tọa độ=(0, 13))) | 46 |
| 14-15 | Di chuyển hướng 4 (`4`) | (1, 11) | (0, 12) | Dự kiến di chuyển đến (0, 12); hướng tới tọa độ (0, 13) (Spot #19 (thương hiệu=19, tọa độ=(0, 13))) | 45 |
| 16-17 | Di chuyển hướng 4 (`4`) | (0, 12) | (0, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 44 |
| 18-19 | Di chuyển hướng 3 (`3`) | (0, 13) | (0, 14) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 43 |
| 20-21 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến di chuyển đến (0, 13); hướng tới tọa độ (3, 6) (Spot #8 (thương hiệu=8, tọa độ=(3, 6))) | 42 |
| 22-23 | Di chuyển hướng 1 (`1`) | (0, 13) | (0, 12) | Dự kiến di chuyển đến (0, 12); hướng tới tọa độ (3, 6) (Spot #8 (thương hiệu=8, tọa độ=(3, 6))) | 41 |
| 24-25 | Di chuyển hướng 1 (`1`) | (0, 12) | (1, 11) | Dự kiến di chuyển đến (1, 11); hướng tới tọa độ (3, 6) (Spot #8 (thương hiệu=8, tọa độ=(3, 6))) | 40 |
| 26-27 | Di chuyển hướng 1 (`1`) | (1, 11) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (3, 6) (Spot #8 (thương hiệu=8, tọa độ=(3, 6))) | 39 |
| 28 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (3, 6) (Spot #8 (thương hiệu=8, tọa độ=(3, 6))) | 37 |
| 29-30 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (3, 6) (Spot #8 (thương hiệu=8, tọa độ=(3, 6))) | 36 |
| 31-33 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (3, 6) (Spot #8 (thương hiệu=8, tọa độ=(3, 6))) | 34 |
| 34-35 | Di chuyển hướng 1 (`1`) | (3, 8) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (3, 6) (Spot #8 (thương hiệu=8, tọa độ=(3, 6))) | 33 |
| 36-39 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 6)) | 31 |
| 40-41 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến di chuyển đến (3, 5); hướng tới tọa độ (2, 4) (Spot #6 (thương hiệu=6, tọa độ=(2, 4))) | 30 |
| 42 | Di chuyển hướng 0 (`0`) | (3, 5) | (2, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 28 |
| 43-44 | Di chuyển hướng 1 (`1`) | (2, 4) | (3, 3) | Dự kiến di chuyển đến (3, 3); hướng tới tọa độ (3, 2) (Spot #3 (thương hiệu=3, tọa độ=(3, 2))) | 27 |
| 45-46 | Di chuyển hướng 1 (`1`) | (3, 3) | (3, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 25 |
| 47-48 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(4, 3)) | 24 |
| 49-50 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 23 |
| 51 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 21 |
| 52-53 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 20 |
| 54 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 18 |
| 55-56 | Chờ 2 bước (`-2`) | (4, 7) | (4, 7) | Dự kiến đứng yên tại (4, 7); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 18 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (4, 12) (ô=292)
- Nhiên liệu đầu ngày: 55
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #17 (thương hiệu=17, tọa độ=(23, 19))
- Mảng hành động đã gửi server: `[4, 4, 5, 4, 3, 4, 3, 4, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, -13]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 2-3 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 4-5 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến di chuyển đến (2, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 6-9 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến di chuyển đến (2, 15); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 10 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 11 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến di chuyển đến (2, 17); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 12 | Di chuyển hướng 3 (`3`) | (2, 17) | (2, 18) | Dự kiến di chuyển đến (2, 18); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 13 | Di chuyển hướng 4 (`4`) | (2, 18) | (2, 19) | Dự kiến di chuyển đến (2, 19); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 14 | Di chuyển hướng 3 (`3`) | (2, 19) | (2, 20) | Dự kiến di chuyển đến (2, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 15 | Di chuyển hướng 2 (`2`) | (2, 20) | (3, 20) | Dự kiến di chuyển đến (3, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 16 | Di chuyển hướng 2 (`2`) | (3, 20) | (4, 20) | Dự kiến di chuyển đến (4, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 17 | Di chuyển hướng 2 (`2`) | (4, 20) | (5, 20) | Dự kiến di chuyển đến (5, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 18 | Di chuyển hướng 2 (`2`) | (5, 20) | (6, 20) | Dự kiến di chuyển đến (6, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 19 | Di chuyển hướng 2 (`2`) | (6, 20) | (7, 20) | Dự kiến di chuyển đến (7, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 20 | Di chuyển hướng 2 (`2`) | (7, 20) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 21 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến di chuyển đến (9, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 22 | Di chuyển hướng 2 (`2`) | (9, 20) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 23 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến di chuyển đến (11, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 24 | Di chuyển hướng 2 (`2`) | (11, 20) | (12, 20) | Dự kiến di chuyển đến (12, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 25-26 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 27-28 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến di chuyển đến (14, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 29-30 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến di chuyển đến (15, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 31-32 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến di chuyển đến (16, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 33-34 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến di chuyển đến (17, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 35-36 | Di chuyển hướng 2 (`2`) | (17, 20) | (18, 20) | Dự kiến di chuyển đến (18, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 37 | Di chuyển hướng 2 (`2`) | (18, 20) | (19, 20) | Dự kiến di chuyển đến (19, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 38-39 | Di chuyển hướng 2 (`2`) | (19, 20) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 40-41 | Di chuyển hướng 2 (`2`) | (20, 20) | (21, 20) | Dự kiến di chuyển đến (21, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 42 | Di chuyển hướng 2 (`2`) | (21, 20) | (22, 20) | Dự kiến di chuyển đến (22, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 55 |
| 43 | Di chuyển hướng 1 (`1`) | (22, 20) | (23, 19) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (23, 19) | 55 |
| 44-56 | Chờ 13 bước (`-13`) | (23, 19) | (23, 19) | Dự kiến đứng yên tại (23, 19); điểm hẹn của xe tuần tra #1 tại (23, 19) | 55 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (20, 6) (ô=164)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 6)
- Mảng hành động đã gửi server: `[-57]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-56 | Chờ 57 bước (`-57`) | (20, 6) | (20, 6) | Dự kiến đứng yên tại (20, 6); hướng tới tọa độ (20, 6) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (5, 11) (ô=269)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(20, 6))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(20, 6))
- Mảng hành động đã gửi server: `[4, 4, 4, 2, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 3, 4, 3, 2, 2, 2, 2, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (3, 14) (Spot #0 (thương hiệu=0, tọa độ=(3, 14))) | 55 |
| 1-2 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (3, 14) (Spot #0 (thương hiệu=0, tọa độ=(3, 14))) | 55 |
| 3-4 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 55 |
| 5-6 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 54 |
| 7-8 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến di chuyển đến (5, 13); hướng tới tọa độ (3, 10) (Spot #2 (thương hiệu=2, tọa độ=(3, 10))) | 53 |
| 9 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (3, 10) (Spot #2 (thương hiệu=2, tọa độ=(3, 10))) | 51 |
| 10-11 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (3, 10) (Spot #2 (thương hiệu=2, tọa độ=(3, 10))) | 50 |
| 12-13 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 48 |
| 14-15 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (16, 3) (Spot #22 (thương hiệu=22, tọa độ=(16, 3))) | 47 |
| 16-17 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới tọa độ (16, 3) (Spot #22 (thương hiệu=22, tọa độ=(16, 3))) | 45 |
| 18 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (16, 3) (Spot #22 (thương hiệu=22, tọa độ=(16, 3))) | 43 |
| 19-22 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (16, 3) (Spot #22 (thương hiệu=22, tọa độ=(16, 3))) | 41 |
| 23 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (16, 3) (Spot #22 (thương hiệu=22, tọa độ=(16, 3))) | 39 |
| 24-25 | Di chuyển hướng 1 (`1`) | (5, 5) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (16, 3) (Spot #22 (thương hiệu=22, tọa độ=(16, 3))) | 38 |
| 26 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (16, 3) (Spot #22 (thương hiệu=22, tọa độ=(16, 3))) | 36 |
| 27 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (16, 3) (Spot #22 (thương hiệu=22, tọa độ=(16, 3))) | 34 |
| 28 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (16, 3) (Spot #22 (thương hiệu=22, tọa độ=(16, 3))) | 32 |
| 29 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (16, 3) (Spot #22 (thương hiệu=22, tọa độ=(16, 3))) | 30 |
| 30 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới tọa độ (16, 3) (Spot #22 (thương hiệu=22, tọa độ=(16, 3))) | 28 |
| 31 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến di chuyển đến (11, 4); hướng tới tọa độ (16, 3) (Spot #22 (thương hiệu=22, tọa độ=(16, 3))) | 26 |
| 32 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (16, 3) (Spot #22 (thương hiệu=22, tọa độ=(16, 3))) | 24 |
| 33 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (16, 3) (Spot #22 (thương hiệu=22, tọa độ=(16, 3))) | 22 |
| 34 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (16, 3) (Spot #22 (thương hiệu=22, tọa độ=(16, 3))) | 20 |
| 35 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (16, 3) (Spot #22 (thương hiệu=22, tọa độ=(16, 3))) | 18 |
| 36 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 3)) | 16 |
| 37-38 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 15 |
| 39 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến di chuyển đến (16, 5); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 13 |
| 40 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 6)) | 11 |
| 41-42 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (20, 6) (Spot #20 (thương hiệu=20, tọa độ=(20, 6))) | 10 |
| 43-45 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (20, 6) (Spot #20 (thương hiệu=20, tọa độ=(20, 6))) | 8 |
| 46-47 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (20, 6) (Spot #20 (thương hiệu=20, tọa độ=(20, 6))) | 7 |
| 48-49 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(20, 6)) | 6 |
| 50-56 | Chờ 7 bước (`-7`) | (20, 6) | (20, 6) | Dự kiến đứng yên tại (20, 6); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(20, 6)) | 6 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (4, 3) (ô=76)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(3, 10))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(3, 10))
- Mảng hành động đã gửi server: `[0, 4, 4, 3, 3, 3, 3, 3, 4, 3, 4, 3, 4, 5, 5, 5, 5, 0, 1, 1, 2, 1, 2, -13]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 33 |
| 2-3 | Di chuyển hướng 4 (`4`) | (3, 2) | (3, 3) | Dự kiến di chuyển đến (3, 3); hướng tới tọa độ (2, 4) (Spot #6 (thương hiệu=6, tọa độ=(2, 4))) | 32 |
| 4-5 | Di chuyển hướng 4 (`4`) | (3, 3) | (2, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 30 |
| 6-7 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến di chuyển đến (3, 5); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 29 |
| 8 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 27 |
| 9-10 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 26 |
| 11-14 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 24 |
| 15 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 22 |
| 16 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 20 |
| 17 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 18 |
| 18 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 16 |
| 19-20 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến di chuyển đến (5, 13); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 15 |
| 21 | Di chuyển hướng 4 (`4`) | (5, 13) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 13 |
| 22-23 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 12 |
| 24-25 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến di chuyển đến (2, 14); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 11 |
| 26-29 | Di chuyển hướng 5 (`5`) | (2, 14) | (1, 14) | Dự kiến di chuyển đến (1, 14); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 9 |
| 30-31 | Di chuyển hướng 5 (`5`) | (1, 14) | (0, 14) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 8 |
| 32-33 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 7 |
| 34-35 | Di chuyển hướng 1 (`1`) | (0, 13) | (0, 12) | Dự kiến di chuyển đến (0, 12); hướng tới tọa độ (3, 10) (Spot #2 (thương hiệu=2, tọa độ=(3, 10))) | 6 |
| 36-37 | Di chuyển hướng 1 (`1`) | (0, 12) | (1, 11) | Dự kiến di chuyển đến (1, 11); hướng tới tọa độ (3, 10) (Spot #2 (thương hiệu=2, tọa độ=(3, 10))) | 5 |
| 38-39 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (3, 10) (Spot #2 (thương hiệu=2, tọa độ=(3, 10))) | 4 |
| 40 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (3, 10) (Spot #2 (thương hiệu=2, tọa độ=(3, 10))) | 2 |
| 41-43 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 0 |
| 44-56 | Chờ 13 bước (`-13`) | (3, 10) | (3, 10) | Dự kiến đứng yên tại (3, 10); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 0 |

