# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 42
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 9) (ô=176)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(3, 5))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(3, 5))
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 1, 2, 2, 1, 4, 5, 5, 5, 4, 4, 5, 5, 5, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 41 |
| 2 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 39 |
| 3 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 37 |
| 4-5 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 36 |
| 6-8 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 34 |
| 9-10 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 33 |
| 11-14 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 31 |
| 15-16 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 4)) | 30 |
| 17-18 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 29 |
| 19-20 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 28 |
| 21-24 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 26 |
| 25-26 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 25 |
| 27-29 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 23 |
| 30-31 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 22 |
| 32 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến di chuyển đến (5, 7); hướng tới tọa độ (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 20 |
| 33-35 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 18 |
| 36-37 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 7)) | 17 |
| 38-39 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 16 |
| 40-41 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 5)) | 15 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 15) (ô=296)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(12, 19))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(12, 19))
- Mảng hành động đã gửi server: `[4, 3, 2, 0, 1, 0, 0, 2, 2, 2, 2, 2, 1, 2, 2, 5, 5, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 15) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 33 |
| 2-3 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 17)) | 32 |
| 4-5 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 17)) | 31 |
| 6-7 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 30 |
| 8-9 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 15)) | 29 |
| 10-11 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới tọa độ (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 28 |
| 12-14 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(11, 13)) | 26 |
| 15-16 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 25 |
| 17-19 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến di chuyển đến (13, 13); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 23 |
| 20-21 | Di chuyển hướng 2 (`2`) | (13, 13) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 22 |
| 22-23 | Di chuyển hướng 2 (`2`) | (14, 13) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 21 |
| 24-25 | Di chuyển hướng 2 (`2`) | (15, 13) | (16, 13) | Dự kiến di chuyển đến (16, 13); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 19 |
| 26-27 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 12)) | 18 |
| 28-29 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (18, 12) (Spot #15 (thương hiệu=15, tọa độ=(18, 12))) | 17 |
| 30-31 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(18, 12)) | 16 |
| 32-33 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 15 |
| 34-35 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 14 |
| 36-37 | Di chuyển hướng 4 (`4`) | (16, 12) | (16, 13) | Dự kiến di chuyển đến (16, 13); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 13 |
| 38-39 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến di chuyển đến (15, 14); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 12 |
| 40-41 | Di chuyển hướng 4 (`4`) | (15, 14) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 11 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 0) (ô=2)
- Nhiên liệu đầu ngày: 31
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(2, 7))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(2, 7))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 4, 4, 4, 3, 3, 3, 4, 5, 5, 5, 1, 0, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến di chuyển đến (3, 0); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 30 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến di chuyển đến (4, 0); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 29 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến di chuyển đến (5, 0); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 28 |
| 6-8 | Di chuyển hướng 2 (`2`) | (5, 0) | (6, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 0)) | 26 |
| 9-10 | Di chuyển hướng 4 (`4`) | (6, 0) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 25 |
| 11-12 | Di chuyển hướng 4 (`4`) | (6, 1) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 24 |
| 13-15 | Di chuyển hướng 4 (`4`) | (5, 2) | (5, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 3)) | 22 |
| 16-17 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 21 |
| 18-20 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 19 |
| 21-24 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 6)) | 17 |
| 25-26 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 16 |
| 27 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến di chuyển đến (5, 7); hướng tới tọa độ (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 14 |
| 28-30 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 12 |
| 31-32 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 7)) | 11 |
| 33-34 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 10 |
| 35-36 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 5)) | 9 |
| 37-38 | Di chuyển hướng 4 (`4`) | (3, 5) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới tọa độ (2, 7) (Spot #14 (thương hiệu=14, tọa độ=(2, 7))) | 8 |
| 39-41 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 7)) | 6 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 8) (ô=153)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(6, 0))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(6, 0))
- Mảng hành động đã gửi server: `[3, 1, 1, 1, 0, 1, 1, 2, 3, 3, 3, 4, 5, 5, 5, 5, 2, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 9)) | 33 |
| 2-3 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 32 |
| 4-5 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 31 |
| 6-7 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 30 |
| 8-9 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 5)) | 29 |
| 10-11 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 28 |
| 12-13 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 26 |
| 14-15 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 3)) | 25 |
| 16-17 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 24 |
| 18-20 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 22 |
| 21-24 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 6)) | 20 |
| 25-26 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (2, 7) (Spot #14 (thương hiệu=14, tọa độ=(2, 7))) | 19 |
| 27 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến di chuyển đến (5, 7); hướng tới tọa độ (2, 7) (Spot #14 (thương hiệu=14, tọa độ=(2, 7))) | 17 |
| 28-30 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (2, 7) (Spot #14 (thương hiệu=14, tọa độ=(2, 7))) | 15 |
| 31-32 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (2, 7) (Spot #14 (thương hiệu=14, tọa độ=(2, 7))) | 14 |
| 33-34 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 7)) | 13 |
| 35-36 | Di chuyển hướng 2 (`2`) | (2, 7) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 12 |
| 37-38 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 11 |
| 39-40 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 10 |
| 41 | Chờ 1 bước (`-1`) | (4, 5) | (4, 5) | Dự kiến đứng yên tại (4, 5); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 0)) | 45 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (5, 17) (ô=328)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(11, 13))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(11, 13))
- Mảng hành động đã gửi server: `[1, 1, 2, 1, 4, 3, 3, 2, 2, 1, 1, 2, 4, 4, 4, 3, 2, -2, 1, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 21 |
| 2-3 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 20 |
| 4-5 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 18 |
| 6-7 | Di chuyển hướng 1 (`1`) | (7, 15) | (7, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 14)) | 17 |
| 8-9 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 16 |
| 10-11 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 16)) | 15 |
| 12-13 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến di chuyển đến (8, 17); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 14 |
| 14-15 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 13 |
| 16-19 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 11 |
| 20-22 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 9 |
| 23-24 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 8 |
| 25-26 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 15)) | 44 |
| 27-28 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 43 |
| 29-30 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 17)) | 42 |
| 31-32 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 41 |
| 33 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 39 |
| 34-35 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 19)) | 38 |
| 36-37 | Chờ 2 bước (`-2`) | (12, 19) | (12, 19) | Dự kiến đứng yên tại (12, 19); hướng tới tọa độ (12, 19) | 45 |
| 38-39 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 44 |
| 40-41 | Chờ 2 bước (`-2`) | (12, 18) | (12, 18) | Dự kiến đứng yên tại (12, 18); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(11, 13)) | 44 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (2, 9) (ô=173)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Điểm đích tọa độ=(4, 5)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, -34]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 5) | 45 |
| 2-3 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 5) | 45 |
| 4-5 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 5) | 45 |
| 6-7 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (4, 5) | 45 |
| 8-41 | Chờ 34 bước (`-34`) | (4, 5) | (4, 5) | Dự kiến đứng yên tại (4, 5); điểm hẹn của xe tuần tra #3 tại (4, 5) | 45 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (6, 6) (ô=120)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #4
- Điểm hẹn của xe tuần tra: Spot #8 (thương hiệu=8, tọa độ=(12, 19))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 4, 4, 4, 3, 3, 3, 3, 2, 3, 3, 2, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 2-4 | Di chuyển hướng 3 (`3`) | (7, 7) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 5-6 | Di chuyển hướng 3 (`3`) | (7, 8) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 7-8 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 9-12 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 13-15 | Di chuyển hướng 4 (`4`) | (8, 11) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 16-17 | Di chuyển hướng 4 (`4`) | (7, 12) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 18-19 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 20-21 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 22-24 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 25-26 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 27-30 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 31-33 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 34 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 35-36 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn của xe tuần tra #4 tại (12, 19) | 45 |
| 37-41 | Chờ 5 bước (`-5`) | (12, 19) | (12, 19) | Dự kiến đứng yên tại (12, 19); điểm hẹn của xe tuần tra #4 tại (12, 19) | 45 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (12, 19) (ô=373)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Điểm đích tọa độ=(11, 15)
- Mảng hành động đã gửi server: `[1, 0, 0, 0, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 15) | 45 |
| 2-4 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 15) | 45 |
| 5-6 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 15) | 45 |
| 7-8 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (11, 15) | 45 |
| 9-41 | Chờ 33 bước (`-33`) | (11, 15) | (11, 15) | Dự kiến đứng yên tại (11, 15); điểm hẹn của xe tuần tra #1 tại (11, 15) | 45 |

