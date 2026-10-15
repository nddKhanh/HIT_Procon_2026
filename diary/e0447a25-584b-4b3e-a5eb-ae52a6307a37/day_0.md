# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 36
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 32 | #2 | #4 | (19, 12) | 0 | 36 |
| 36 | #0 | #4 | (19, 12) | 1 | 36 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (17, 0) (ô=17)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(19, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(19, 12))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 2, 5, 5, 4, 4, 5, 4, 4, 5, 4, 3, 3, 4, 3, 1, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (17, 0) | (18, 1) | Dự kiến di chuyển đến (18, 1); hướng tới tọa độ (20, 4) (Spot #1 (thương hiệu=1, tọa độ=(20, 4))) | 35 |
| 2 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến di chuyển đến (18, 2); hướng tới tọa độ (20, 4) (Spot #1 (thương hiệu=1, tọa độ=(20, 4))) | 33 |
| 3 | Di chuyển hướng 3 (`3`) | (18, 2) | (19, 3) | Dự kiến di chuyển đến (19, 3); hướng tới tọa độ (20, 4) (Spot #1 (thương hiệu=1, tọa độ=(20, 4))) | 31 |
| 4-5 | Di chuyển hướng 3 (`3`) | (19, 3) | (19, 4) | Dự kiến di chuyển đến (19, 4); hướng tới tọa độ (20, 4) (Spot #1 (thương hiệu=1, tọa độ=(20, 4))) | 30 |
| 6-7 | Di chuyển hướng 2 (`2`) | (19, 4) | (20, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 4)) | 29 |
| 8-9 | Di chuyển hướng 5 (`5`) | (20, 4) | (19, 4) | Dự kiến di chuyển đến (19, 4); hướng tới tọa độ (15, 8) (Spot #5 (thương hiệu=5, tọa độ=(15, 8))) | 28 |
| 10-11 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến di chuyển đến (18, 4); hướng tới tọa độ (15, 8) (Spot #5 (thương hiệu=5, tọa độ=(15, 8))) | 27 |
| 12 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến di chuyển đến (18, 5); hướng tới tọa độ (15, 8) (Spot #5 (thương hiệu=5, tọa độ=(15, 8))) | 25 |
| 13 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (15, 8) (Spot #5 (thương hiệu=5, tọa độ=(15, 8))) | 23 |
| 14 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới tọa độ (15, 8) (Spot #5 (thương hiệu=5, tọa độ=(15, 8))) | 21 |
| 15 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới tọa độ (15, 8) (Spot #5 (thương hiệu=5, tọa độ=(15, 8))) | 19 |
| 16-18 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 8)) | 17 |
| 19-20 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (15, 13) (Spot #9 (thương hiệu=9, tọa độ=(15, 13))) | 16 |
| 21 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (15, 13) (Spot #9 (thương hiệu=9, tọa độ=(15, 13))) | 14 |
| 22 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến di chuyển đến (14, 10); hướng tới tọa độ (15, 13) (Spot #9 (thương hiệu=9, tọa độ=(15, 13))) | 12 |
| 23 | Di chuyển hướng 3 (`3`) | (14, 10) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới tọa độ (15, 13) (Spot #9 (thương hiệu=9, tọa độ=(15, 13))) | 10 |
| 24-25 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (15, 13) (Spot #9 (thương hiệu=9, tọa độ=(15, 13))) | 9 |
| 26 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 7 |
| 27-28 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 6 |
| 29-30 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 5 |
| 31-32 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 4 |
| 33-34 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến di chuyển đến (18, 12); hướng tới tọa độ (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 3 |
| 35 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 36 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 7) (ô=162)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(20, 0))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(20, 0))
- Mảng hành động đã gửi server: `[4, 4, 3, 3, 0, 0, 1, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 1, 1, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (15, 11) (Spot #10 (thương hiệu=0, tọa độ=(15, 11))) | 35 |
| 2 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (15, 11) (Spot #10 (thương hiệu=0, tọa độ=(15, 11))) | 33 |
| 3 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến di chuyển đến (14, 10); hướng tới tọa độ (15, 11) (Spot #10 (thương hiệu=0, tọa độ=(15, 11))) | 31 |
| 4 | Di chuyển hướng 3 (`3`) | (14, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 29 |
| 5-6 | Di chuyển hướng 0 (`0`) | (15, 11) | (14, 10) | Dự kiến di chuyển đến (14, 10); hướng tới tọa độ (15, 8) (Spot #5 (thương hiệu=5, tọa độ=(15, 8))) | 28 |
| 7 | Di chuyển hướng 0 (`0`) | (14, 10) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (15, 8) (Spot #5 (thương hiệu=5, tọa độ=(15, 8))) | 26 |
| 8 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (15, 8) (Spot #5 (thương hiệu=5, tọa độ=(15, 8))) | 24 |
| 9 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 8)) | 22 |
| 10-11 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới tọa độ (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 21 |
| 12-14 | Di chuyển hướng 2 (`2`) | (16, 8) | (17, 8) | Dự kiến di chuyển đến (17, 8); hướng tới tọa độ (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 19 |
| 15-17 | Di chuyển hướng 2 (`2`) | (17, 8) | (18, 8) | Dự kiến di chuyển đến (18, 8); hướng tới tọa độ (19, 7) (Spot #6 (thương hiệu=6, tọa độ=(19, 7))) | 17 |
| 18 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 7)) | 15 |
| 19-20 | Di chuyển hướng 1 (`1`) | (19, 7) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (20, 4) (Spot #1 (thương hiệu=1, tọa độ=(20, 4))) | 14 |
| 21 | Di chuyển hướng 1 (`1`) | (19, 6) | (20, 5) | Dự kiến di chuyển đến (20, 5); hướng tới tọa độ (20, 4) (Spot #1 (thương hiệu=1, tọa độ=(20, 4))) | 12 |
| 22-24 | Di chuyển hướng 1 (`1`) | (20, 5) | (20, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 4)) | 10 |
| 25-26 | Di chuyển hướng 0 (`0`) | (20, 4) | (20, 3) | Dự kiến di chuyển đến (20, 3); hướng tới tọa độ (20, 0) (Spot #4 (thương hiệu=4, tọa độ=(20, 0))) | 9 |
| 27-29 | Di chuyển hướng 0 (`0`) | (20, 3) | (19, 2) | Dự kiến di chuyển đến (19, 2); hướng tới tọa độ (20, 0) (Spot #4 (thương hiệu=4, tọa độ=(20, 0))) | 7 |
| 30 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến di chuyển đến (20, 1); hướng tới tọa độ (20, 0) (Spot #4 (thương hiệu=4, tọa độ=(20, 0))) | 5 |
| 31-32 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 0)) | 4 |
| 33-35 | Chờ 3 bước (`-3`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 0)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 9) (ô=193)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=2, tọa độ=(20, 12))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=2, tọa độ=(20, 12))
- Mảng hành động đã gửi server: `[3, 2, 1, 1, 2, 2, 2, 3, 3, 2, 2, 2, 3, 3, 3, 0, 1, 3, 2, 2, 2, 2, -1, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (9, 8) (Spot #2 (thương hiệu=2, tọa độ=(9, 8))) | 35 |
| 2 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (9, 8) (Spot #2 (thương hiệu=2, tọa độ=(9, 8))) | 33 |
| 3 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới tọa độ (9, 8) (Spot #2 (thương hiệu=2, tọa độ=(9, 8))) | 31 |
| 4 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (9, 8) (Spot #2 (thương hiệu=2, tọa độ=(9, 8))) | 29 |
| 5 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (9, 8) (Spot #2 (thương hiệu=2, tọa độ=(9, 8))) | 27 |
| 6-7 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (9, 8) (Spot #2 (thương hiệu=2, tọa độ=(9, 8))) | 26 |
| 8-10 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(9, 8)) | 24 |
| 11-12 | Di chuyển hướng 3 (`3`) | (9, 8) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (15, 13) (Spot #9 (thương hiệu=9, tọa độ=(15, 13))) | 23 |
| 13 | Di chuyển hướng 3 (`3`) | (10, 9) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới tọa độ (15, 13) (Spot #9 (thương hiệu=9, tọa độ=(15, 13))) | 21 |
| 14 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến di chuyển đến (11, 10); hướng tới tọa độ (15, 13) (Spot #9 (thương hiệu=9, tọa độ=(15, 13))) | 19 |
| 15 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến di chuyển đến (12, 10); hướng tới tọa độ (15, 13) (Spot #9 (thương hiệu=9, tọa độ=(15, 13))) | 17 |
| 16 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (15, 13) (Spot #9 (thương hiệu=9, tọa độ=(15, 13))) | 15 |
| 17 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (15, 13) (Spot #9 (thương hiệu=9, tọa độ=(15, 13))) | 13 |
| 18 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (15, 13) (Spot #9 (thương hiệu=9, tọa độ=(15, 13))) | 11 |
| 19 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 9 |
| 20-21 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (15, 11) (Spot #10 (thương hiệu=0, tọa độ=(15, 11))) | 8 |
| 22 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 6 |
| 23-24 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 5 |
| 25-26 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 4 |
| 27-28 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 3 |
| 29-30 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến di chuyển đến (18, 12); hướng tới tọa độ (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 2 |
| 31 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 36 |
| 32 | Chờ 1 bước (`-1`) | (19, 12) | (19, 12) | Dự kiến đứng yên tại (19, 12); hướng tới tọa độ (19, 12) | 36 |
| 33-34 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 12)) | 35 |
| 35 | Chờ 1 bước (`-1`) | (20, 12) | (20, 12) | Dự kiến đứng yên tại (20, 12); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 12)) | 35 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (13, 0) (ô=13)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(3, 9))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(3, 9))
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 3, 3, 4, 3, 4, 4, 3, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 0) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (3, 0) (Spot #3 (thương hiệu=3, tọa độ=(3, 0))) | 35 |
| 2-3 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (3, 0) (Spot #3 (thương hiệu=3, tọa độ=(3, 0))) | 34 |
| 4 | Di chuyển hướng 5 (`5`) | (12, 2) | (11, 2) | Dự kiến di chuyển đến (11, 2); hướng tới tọa độ (3, 0) (Spot #3 (thương hiệu=3, tọa độ=(3, 0))) | 32 |
| 5 | Di chuyển hướng 5 (`5`) | (11, 2) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới tọa độ (3, 0) (Spot #3 (thương hiệu=3, tọa độ=(3, 0))) | 30 |
| 6 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới tọa độ (3, 0) (Spot #3 (thương hiệu=3, tọa độ=(3, 0))) | 28 |
| 7 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới tọa độ (3, 0) (Spot #3 (thương hiệu=3, tọa độ=(3, 0))) | 26 |
| 8 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (3, 0) (Spot #3 (thương hiệu=3, tọa độ=(3, 0))) | 24 |
| 9 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (3, 0) (Spot #3 (thương hiệu=3, tọa độ=(3, 0))) | 22 |
| 10 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (3, 0) (Spot #3 (thương hiệu=3, tọa độ=(3, 0))) | 20 |
| 11 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (3, 0) (Spot #3 (thương hiệu=3, tọa độ=(3, 0))) | 18 |
| 12 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (3, 0) (Spot #3 (thương hiệu=3, tọa độ=(3, 0))) | 16 |
| 13-15 | Di chuyển hướng 0 (`0`) | (4, 1) | (3, 0) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 0)) | 14 |
| 16-17 | Di chuyển hướng 3 (`3`) | (3, 0) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (3, 9) (Spot #8 (thương hiệu=8, tọa độ=(3, 9))) | 13 |
| 18-20 | Di chuyển hướng 3 (`3`) | (4, 1) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (3, 9) (Spot #8 (thương hiệu=8, tọa độ=(3, 9))) | 11 |
| 21 | Di chuyển hướng 4 (`4`) | (4, 2) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (3, 9) (Spot #8 (thương hiệu=8, tọa độ=(3, 9))) | 9 |
| 22-23 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (3, 9) (Spot #8 (thương hiệu=8, tọa độ=(3, 9))) | 8 |
| 24-26 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (3, 9) (Spot #8 (thương hiệu=8, tọa độ=(3, 9))) | 6 |
| 27-29 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (3, 9) (Spot #8 (thương hiệu=8, tọa độ=(3, 9))) | 4 |
| 30 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (3, 9) (Spot #8 (thương hiệu=8, tọa độ=(3, 9))) | 2 |
| 31-32 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (3, 9) (Spot #8 (thương hiệu=8, tọa độ=(3, 9))) | 1 |
| 33-34 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 0 |
| 35 | Chờ 1 bước (`-1`) | (3, 9) | (3, 9) | Dự kiến đứng yên tại (3, 9); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 0 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (12, 3) (ô=75)
- Nhiên liệu đầu ngày: 36
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #7 (thương hiệu=7, tọa độ=(19, 12))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 4, 3, 2, 2, 2, 3, 3, 2, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới điểm hẹn của xe tuần tra #2 tại (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 36 |
| 2-3 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới điểm hẹn của xe tuần tra #2 tại (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 36 |
| 4-5 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới điểm hẹn của xe tuần tra #2 tại (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 36 |
| 6 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới điểm hẹn của xe tuần tra #2 tại (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 36 |
| 7 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới điểm hẹn của xe tuần tra #2 tại (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 36 |
| 8 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới điểm hẹn của xe tuần tra #2 tại (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 36 |
| 9 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến di chuyển đến (14, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 36 |
| 10 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 36 |
| 11 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 36 |
| 12 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến di chuyển đến (17, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 36 |
| 13 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến di chuyển đến (18, 11); hướng tới điểm hẹn của xe tuần tra #2 tại (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 36 |
| 14 | Di chuyển hướng 3 (`3`) | (18, 11) | (18, 12) | Dự kiến di chuyển đến (18, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (19, 12) (Spot #7 (thương hiệu=7, tọa độ=(19, 12))) | 36 |
| 15 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (19, 12) | 36 |
| 16-35 | Chờ 20 bước (`-20`) | (19, 12) | (19, 12) | Dự kiến đứng yên tại (19, 12); điểm hẹn của xe tuần tra #2 tại (19, 12) | 36 |

