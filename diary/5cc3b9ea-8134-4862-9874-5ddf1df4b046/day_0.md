# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 39
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 4) (ô=83)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(6, 6))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(6, 6))
- Mảng hành động đã gửi server: `[5, 4, 5, 4, 4, 5, 4, 4, 1, 1, 1, 0, 1, 1, 2, 0, 0, 5, 0, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 44 |
| 2-4 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 42 |
| 5 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 40 |
| 6 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 38 |
| 7-8 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 37 |
| 9-10 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 36 |
| 11-12 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 35 |
| 13-14 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 9)) | 34 |
| 15-16 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 33 |
| 17-18 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 32 |
| 19-20 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 31 |
| 21-22 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 5)) | 30 |
| 23-24 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 29 |
| 25 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 27 |
| 26-27 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 3)) | 26 |
| 28-29 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 25 |
| 30-31 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 24 |
| 32 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 22 |
| 33-34 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(2, 0)) | 21 |
| 35-36 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 20 |
| 37-38 | Di chuyển hướng 3 (`3`) | (3, 1) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 19 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 15) (ô=303)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(18, 12))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(18, 12))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 5, 4, 5, 1, 1, 0, 0, 2, 1, 2, 2, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (18, 15) | (17, 16) | Dự kiến di chuyển đến (17, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 44 |
| 2-3 | Di chuyển hướng 5 (`5`) | (17, 16) | (16, 16) | Dự kiến di chuyển đến (16, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 43 |
| 4-5 | Di chuyển hướng 5 (`5`) | (16, 16) | (15, 16) | Dự kiến di chuyển đến (15, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 42 |
| 6 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 40 |
| 7-8 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 39 |
| 9-10 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 38 |
| 11-12 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 37 |
| 13-14 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 17)) | 36 |
| 15-16 | Di chuyển hướng 1 (`1`) | (11, 17) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 35 |
| 17-18 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 15)) | 34 |
| 19-20 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới tọa độ (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 33 |
| 21-23 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(11, 13)) | 31 |
| 24-25 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 30 |
| 26-28 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 28 |
| 29-30 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 27 |
| 31 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 25 |
| 32 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 23 |
| 33-34 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 12)) | 22 |
| 35-36 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (18, 12) (Spot #15 (thương hiệu=15, tọa độ=(18, 12))) | 21 |
| 37-38 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(18, 12)) | 20 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 1) (ô=32)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(5, 3))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(5, 3))
- Mảng hành động đã gửi server: `[4, 5, 4, 4, 4, 5, 5, 5, 4, 0, 5, 5, 5, 3, 4, 5, 4, 3, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 44 |
| 2-3 | Di chuyển hướng 5 (`5`) | (12, 2) | (11, 2) | Dự kiến di chuyển đến (11, 2); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 43 |
| 4 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 41 |
| 5-6 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 4)) | 40 |
| 7-8 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 39 |
| 9-10 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 38 |
| 11 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 36 |
| 12-13 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 35 |
| 14-16 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 6)) | 33 |
| 17-18 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 32 |
| 19 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 30 |
| 20 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 28 |
| 21-23 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 5)) | 26 |
| 24-25 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 25 |
| 26-27 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 7)) | 24 |
| 28-29 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 7)) | 23 |
| 30-31 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 22 |
| 32-33 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 9)) | 21 |
| 34-35 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 20 |
| 36-37 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 19 |
| 38 | Chờ 1 bước (`-1`) | (3, 7) | (3, 7) | Dự kiến đứng yên tại (3, 7); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 3)) | 45 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (18, 9) (ô=189)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 6))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 6))
- Mảng hành động đã gửi server: `[0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 5, 0, 0, 0, 0, 0, 4, 4, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (18, 9) | (17, 8) | Dự kiến di chuyển đến (17, 8); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 44 |
| 2-3 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến di chuyển đến (17, 7); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 43 |
| 4-5 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 42 |
| 6-8 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 40 |
| 9-10 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 39 |
| 11 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 37 |
| 12 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 35 |
| 13-14 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến di chuyển đến (11, 7); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 34 |
| 15-16 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 33 |
| 17 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 31 |
| 18-19 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 30 |
| 20 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 28 |
| 21-22 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 27 |
| 23-24 | Di chuyển hướng 0 (`0`) | (8, 3) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 26 |
| 25-26 | Di chuyển hướng 0 (`0`) | (7, 2) | (7, 1) | Dự kiến di chuyển đến (7, 1); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 25 |
| 27-28 | Di chuyển hướng 0 (`0`) | (7, 1) | (6, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 0)) | 24 |
| 29-30 | Di chuyển hướng 4 (`4`) | (6, 0) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 23 |
| 31-32 | Di chuyển hướng 4 (`4`) | (6, 1) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 22 |
| 33-35 | Di chuyển hướng 4 (`4`) | (5, 2) | (5, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 3)) | 20 |
| 36-37 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 19 |
| 38 | Chờ 1 bước (`-1`) | (4, 4) | (4, 4) | Dự kiến đứng yên tại (4, 4); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 19 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (10, 5) (ô=105)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(12, 15))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(12, 15))
- Mảng hành động đã gửi server: `[5, 4, 4, 4, 3, 3, 4, 4, 4, 3, 4, 3, 2, 3, 2, 2, 2, 4, 3, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 44 |
| 2 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 42 |
| 3-5 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 40 |
| 6-7 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 39 |
| 8 | Di chuyển hướng 3 (`3`) | (7, 8) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 37 |
| 9-10 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 36 |
| 11 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 34 |
| 12-14 | Di chuyển hướng 4 (`4`) | (8, 11) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 32 |
| 15-16 | Di chuyển hướng 4 (`4`) | (7, 12) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 31 |
| 17-18 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 14)) | 30 |
| 19-20 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 29 |
| 21-22 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 16)) | 28 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 27 |
| 25 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 25 |
| 26 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 23 |
| 27-29 | Di chuyển hướng 2 (`2`) | (10, 17) | (11, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 17)) | 21 |
| 30-31 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 17)) | 20 |
| 32-33 | Di chuyển hướng 4 (`4`) | (12, 17) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 44 |
| 34 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 19)) | 42 |
| 35-36 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 41 |
| 37 | Di chuyển hướng 1 (`1`) | (11, 18) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 39 |
| 38 | Chờ 1 bước (`-1`) | (12, 17) | (12, 17) | Dự kiến đứng yên tại (12, 17); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 15)) | 45 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (8, 9) (ô=179)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #4
- Điểm hẹn của xe tuần tra: Spot #13 (thương hiệu=13, tọa độ=(12, 17))
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #13 (thương hiệu=13, tọa độ=(12, 17))) | 45 |
| 2 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #13 (thương hiệu=13, tọa độ=(12, 17))) | 45 |
| 3-5 | Di chuyển hướng 4 (`4`) | (8, 11) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #13 (thương hiệu=13, tọa độ=(12, 17))) | 45 |
| 6-7 | Di chuyển hướng 4 (`4`) | (7, 12) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #13 (thương hiệu=13, tọa độ=(12, 17))) | 45 |
| 8-9 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #13 (thương hiệu=13, tọa độ=(12, 17))) | 45 |
| 10-11 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #13 (thương hiệu=13, tọa độ=(12, 17))) | 45 |
| 12-14 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #13 (thương hiệu=13, tọa độ=(12, 17))) | 45 |
| 15 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #13 (thương hiệu=13, tọa độ=(12, 17))) | 45 |
| 16 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #13 (thương hiệu=13, tọa độ=(12, 17))) | 45 |
| 17-19 | Di chuyển hướng 2 (`2`) | (10, 17) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #13 (thương hiệu=13, tọa độ=(12, 17))) | 45 |
| 20-21 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đến điểm hẹn của xe tuần tra #4 tại (12, 17) | 45 |
| 22-38 | Chờ 17 bước (`-17`) | (12, 17) | (12, 17) | Dự kiến đứng yên tại (12, 17); điểm hẹn của xe tuần tra #4 tại (12, 17) | 45 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (1, 16) (ô=305)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #17 (thương hiệu=17, tọa độ=(3, 7))
- Mảng hành động đã gửi server: `[2, 2, 1, 2, 2, 1, 1, 1, 1, 1, 0, 0, 5, 5, 5, 5, 0, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới điểm hẹn của xe tuần tra #2 tại (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 45 |
| 2-3 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến di chuyển đến (3, 16); hướng tới điểm hẹn của xe tuần tra #2 tại (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 45 |
| 4-5 | Di chuyển hướng 1 (`1`) | (3, 16) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 45 |
| 6-7 | Di chuyển hướng 2 (`2`) | (4, 15) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 45 |
| 8 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 45 |
| 9 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới điểm hẹn của xe tuần tra #2 tại (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 45 |
| 10 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới điểm hẹn của xe tuần tra #2 tại (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 45 |
| 11-12 | Di chuyển hướng 1 (`1`) | (7, 13) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 45 |
| 13-14 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới điểm hẹn của xe tuần tra #2 tại (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 45 |
| 15-17 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 45 |
| 18 | Di chuyển hướng 0 (`0`) | (8, 10) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới điểm hẹn của xe tuần tra #2 tại (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 45 |
| 19-20 | Di chuyển hướng 0 (`0`) | (8, 9) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới điểm hẹn của xe tuần tra #2 tại (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 45 |
| 21 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới điểm hẹn của xe tuần tra #2 tại (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 45 |
| 22-23 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới điểm hẹn của xe tuần tra #2 tại (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 45 |
| 24 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới điểm hẹn của xe tuần tra #2 tại (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 45 |
| 25-26 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới điểm hẹn của xe tuần tra #2 tại (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 45 |
| 27-28 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (3, 7) | 45 |
| 29-38 | Chờ 10 bước (`-10`) | (3, 7) | (3, 7) | Dự kiến đứng yên tại (3, 7); điểm hẹn của xe tuần tra #2 tại (3, 7) | 45 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (12, 12) (ô=240)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Điểm đích tọa độ=(18, 15)
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 3, 2, 2, -27]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới điểm hẹn của xe tuần tra #1 tại (18, 15) | 45 |
| 2 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới điểm hẹn của xe tuần tra #1 tại (18, 15) | 45 |
| 3 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới điểm hẹn của xe tuần tra #1 tại (18, 15) | 45 |
| 4 | Di chuyển hướng 3 (`3`) | (15, 13) | (15, 14) | Dự kiến di chuyển đến (15, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (18, 15) | 45 |
| 5-6 | Di chuyển hướng 3 (`3`) | (15, 14) | (16, 15) | Dự kiến di chuyển đến (16, 15); hướng tới điểm hẹn của xe tuần tra #1 tại (18, 15) | 45 |
| 7-8 | Di chuyển hướng 2 (`2`) | (16, 15) | (17, 15) | Dự kiến di chuyển đến (17, 15); hướng tới điểm hẹn của xe tuần tra #1 tại (18, 15) | 45 |
| 9-11 | Di chuyển hướng 2 (`2`) | (17, 15) | (18, 15) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (18, 15) | 45 |
| 12-38 | Chờ 27 bước (`-27`) | (18, 15) | (18, 15) | Dự kiến đứng yên tại (18, 15); điểm hẹn của xe tuần tra #1 tại (18, 15) | 45 |

