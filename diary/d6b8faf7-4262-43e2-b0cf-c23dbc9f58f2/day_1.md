# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 44
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 31 | #1 | #4 | (14, 13) | 21 | 62 |
| 31 | #3 | #4 | (14, 13) | 0 | 62 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 8) (ô=148)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=2, tọa độ=(10, 14))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=2, tọa độ=(10, 14))
- Mảng hành động đã gửi server: `[5, 0, 1, 0, 1, 0, 5, 5, 5, 5, 5, 3, 3, 4, 3, 4, 4, 3, 4, 4, 2, 1, 2, 2, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(11, 8)) | 58 |
| 1-2 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 57 |
| 3-4 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (11, 3) (Spot #7 (thương hiệu=7, tọa độ=(11, 3))) | 56 |
| 5 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (11, 3) (Spot #7 (thương hiệu=7, tọa độ=(11, 3))) | 54 |
| 6 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến di chuyển đến (11, 4); hướng tới tọa độ (11, 3) (Spot #7 (thương hiệu=7, tọa độ=(11, 3))) | 52 |
| 7-8 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 51 |
| 9-10 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (6, 3) (Spot #11 (thương hiệu=11, tọa độ=(6, 3))) | 50 |
| 11 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (6, 3) (Spot #11 (thương hiệu=11, tọa độ=(6, 3))) | 48 |
| 12-13 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (6, 3) (Spot #11 (thương hiệu=11, tọa độ=(6, 3))) | 47 |
| 14-15 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (6, 3) (Spot #11 (thương hiệu=11, tọa độ=(6, 3))) | 46 |
| 16 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 44 |
| 17-18 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 43 |
| 19 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 41 |
| 20-21 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 40 |
| 22-23 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 39 |
| 24-25 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 38 |
| 26-27 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 37 |
| 28 | Di chuyển hướng 3 (`3`) | (6, 9) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 35 |
| 29 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến di chuyển đến (6, 11); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 33 |
| 30 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 31 |
| 31-32 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (8, 11) (Spot #0 (thương hiệu=0, tọa độ=(8, 11))) | 30 |
| 33 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến di chuyển đến (7, 11); hướng tới tọa độ (8, 11) (Spot #0 (thương hiệu=0, tọa độ=(8, 11))) | 28 |
| 34-35 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(8, 11)) | 27 |
| 36-37 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới tọa độ (10, 14) (Spot #15 (thương hiệu=2, tọa độ=(10, 14))) | 26 |
| 38-39 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (10, 14) (Spot #15 (thương hiệu=2, tọa độ=(10, 14))) | 25 |
| 40-42 | Di chuyển hướng 3 (`3`) | (9, 12) | (10, 13) | Dự kiến di chuyển đến (10, 13); hướng tới tọa độ (10, 14) (Spot #15 (thương hiệu=2, tọa độ=(10, 14))) | 23 |
| 43 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(10, 14)) | 21 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 5) (ô=96)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(14, 18))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(14, 18))
- Mảng hành động đã gửi server: `[5, 0, 1, 2, 5, 5, 5, 5, 5, 3, 3, 3, 2, 3, 2, 2, 3, 2, 3, 3, 4, 3, 3, 4, 4, 4, 5, 4, 0, 1, 0, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (11, 5) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (9, 4) (Spot #14 (thương hiệu=1, tọa độ=(9, 4))) | 57 |
| 1 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(9, 4)) | 55 |
| 2-3 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (11, 3) (Spot #7 (thương hiệu=7, tọa độ=(11, 3))) | 54 |
| 4 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 52 |
| 5-6 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (6, 3) (Spot #11 (thương hiệu=11, tọa độ=(6, 3))) | 51 |
| 7 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (6, 3) (Spot #11 (thương hiệu=11, tọa độ=(6, 3))) | 49 |
| 8-9 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (6, 3) (Spot #11 (thương hiệu=11, tọa độ=(6, 3))) | 48 |
| 10-11 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (6, 3) (Spot #11 (thương hiệu=11, tọa độ=(6, 3))) | 47 |
| 12 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 45 |
| 13-14 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (11, 7) (Spot #5 (thương hiệu=5, tọa độ=(11, 7))) | 44 |
| 15 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (11, 7) (Spot #5 (thương hiệu=5, tọa độ=(11, 7))) | 42 |
| 16-17 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (11, 7) (Spot #5 (thương hiệu=5, tọa độ=(11, 7))) | 41 |
| 18 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (11, 7) (Spot #5 (thương hiệu=5, tọa độ=(11, 7))) | 39 |
| 19 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (11, 7) (Spot #5 (thương hiệu=5, tọa độ=(11, 7))) | 37 |
| 20 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (11, 7) (Spot #5 (thương hiệu=5, tọa độ=(11, 7))) | 35 |
| 21 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 33 |
| 22-23 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(11, 8)) | 32 |
| 24-25 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (14, 13) (Spot #8 (thương hiệu=8, tọa độ=(14, 13))) | 31 |
| 26 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (14, 13) (Spot #8 (thương hiệu=8, tọa độ=(14, 13))) | 29 |
| 27 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (14, 13) (Spot #8 (thương hiệu=8, tọa độ=(14, 13))) | 27 |
| 28 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (14, 13) (Spot #8 (thương hiệu=8, tọa độ=(14, 13))) | 25 |
| 29 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới tọa độ (14, 13) (Spot #8 (thương hiệu=8, tọa độ=(14, 13))) | 23 |
| 30 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 13)) | 62 |
| 31-32 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến di chuyển đến (13, 14); hướng tới tọa độ (11, 17) (Spot #4 (thương hiệu=4, tọa độ=(11, 17))) | 61 |
| 33 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (11, 17) (Spot #4 (thương hiệu=4, tọa độ=(11, 17))) | 59 |
| 34 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (11, 17) (Spot #4 (thương hiệu=4, tọa độ=(11, 17))) | 57 |
| 35 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (11, 17) (Spot #4 (thương hiệu=4, tọa độ=(11, 17))) | 55 |
| 36 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 53 |
| 37-38 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới tọa độ (10, 14) (Spot #15 (thương hiệu=2, tọa độ=(10, 14))) | 52 |
| 39 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới tọa độ (10, 14) (Spot #15 (thương hiệu=2, tọa độ=(10, 14))) | 50 |
| 40-41 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(10, 14)) | 49 |
| 42-43 | Di chuyển hướng 2 (`2`) | (10, 14) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới tọa độ (14, 18) (Spot #9 (thương hiệu=9, tọa độ=(14, 18))) | 48 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 7) (ô=130)
- Nhiên liệu đầu ngày: 62
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=2, tọa độ=(10, 14))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=2, tọa độ=(10, 14))
- Mảng hành động đã gửi server: `[5, 5, 0, 5, 5, 0, 1, 0, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 5, 4, 4, 4, 2, 1, 2, 0, 0, 0, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (6, 6) (Spot #13 (thương hiệu=0, tọa độ=(6, 6))) | 61 |
| 2 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (6, 6) (Spot #13 (thương hiệu=0, tọa độ=(6, 6))) | 59 |
| 3 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (6, 6) (Spot #13 (thương hiệu=0, tọa độ=(6, 6))) | 57 |
| 4 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (6, 6) (Spot #13 (thương hiệu=0, tọa độ=(6, 6))) | 55 |
| 5 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 53 |
| 6-7 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (6, 3) (Spot #11 (thương hiệu=11, tọa độ=(6, 3))) | 52 |
| 8-9 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (6, 3) (Spot #11 (thương hiệu=11, tọa độ=(6, 3))) | 51 |
| 10 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 49 |
| 11-12 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (11, 3) (Spot #7 (thương hiệu=7, tọa độ=(11, 3))) | 48 |
| 13 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (11, 3) (Spot #7 (thương hiệu=7, tọa độ=(11, 3))) | 46 |
| 14-15 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (11, 3) (Spot #7 (thương hiệu=7, tọa độ=(11, 3))) | 45 |
| 16-17 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (11, 3) (Spot #7 (thương hiệu=7, tọa độ=(11, 3))) | 44 |
| 18 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 42 |
| 19-20 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 41 |
| 21-22 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 40 |
| 23 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 38 |
| 24 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 36 |
| 25 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 34 |
| 26 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 32 |
| 27-28 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 31 |
| 29 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 29 |
| 30 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến di chuyển đến (6, 11); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 27 |
| 31 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 25 |
| 32-33 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (8, 11) (Spot #0 (thương hiệu=0, tọa độ=(8, 11))) | 24 |
| 34 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến di chuyển đến (7, 11); hướng tới tọa độ (8, 11) (Spot #0 (thương hiệu=0, tọa độ=(8, 11))) | 22 |
| 35-36 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(8, 11)) | 21 |
| 37-38 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (6, 8) (Spot #1 (thương hiệu=1, tọa độ=(6, 8))) | 20 |
| 39 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (6, 8) (Spot #1 (thương hiệu=1, tọa độ=(6, 8))) | 18 |
| 40 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 16 |
| 41-42 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (10, 14) (Spot #15 (thương hiệu=2, tọa độ=(10, 14))) | 15 |
| 43 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (10, 14) (Spot #15 (thương hiệu=2, tọa độ=(10, 14))) | 13 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 11) (ô=195)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(11, 3))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(11, 3))
- Mảng hành động đã gửi server: `[5, 5, 4, 3, 3, 4, 3, 2, 2, 2, 2, 3, 2, 2, 2, 3, 0, 0, 1, 0, 1, -1, 0, 0, 1, 0, 0, 5, 0, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 31 |
| 2-3 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến di chuyển đến (6, 11); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 30 |
| 4 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 28 |
| 5-6 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (11, 17) (Spot #4 (thương hiệu=4, tọa độ=(11, 17))) | 27 |
| 7 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (11, 17) (Spot #4 (thương hiệu=4, tọa độ=(11, 17))) | 25 |
| 8 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (11, 17) (Spot #4 (thương hiệu=4, tọa độ=(11, 17))) | 23 |
| 9 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến di chuyển đến (6, 16); hướng tới tọa độ (11, 17) (Spot #4 (thương hiệu=4, tọa độ=(11, 17))) | 21 |
| 10 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (11, 17) (Spot #4 (thương hiệu=4, tọa độ=(11, 17))) | 19 |
| 11 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới tọa độ (11, 17) (Spot #4 (thương hiệu=4, tọa độ=(11, 17))) | 17 |
| 12 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới tọa độ (11, 17) (Spot #4 (thương hiệu=4, tọa độ=(11, 17))) | 15 |
| 13 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới tọa độ (11, 17) (Spot #4 (thương hiệu=4, tọa độ=(11, 17))) | 13 |
| 14 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 11 |
| 15-16 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 17)) | 10 |
| 17-18 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 17)) | 9 |
| 19-20 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến di chuyển đến (14, 17); hướng tới tọa độ (14, 18) (Spot #9 (thương hiệu=9, tọa độ=(14, 18))) | 8 |
| 21-22 | Di chuyển hướng 3 (`3`) | (14, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 18)) | 7 |
| 23-24 | Di chuyển hướng 0 (`0`) | (14, 18) | (14, 17) | Dự kiến di chuyển đến (14, 17); hướng tới tọa độ (14, 13) (Spot #8 (thương hiệu=8, tọa độ=(14, 13))) | 6 |
| 25-26 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (14, 13) (Spot #8 (thương hiệu=8, tọa độ=(14, 13))) | 5 |
| 27 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến di chuyển đến (14, 15); hướng tới tọa độ (14, 13) (Spot #8 (thương hiệu=8, tọa độ=(14, 13))) | 3 |
| 28-29 | Di chuyển hướng 0 (`0`) | (14, 15) | (13, 14) | Dự kiến di chuyển đến (13, 14); hướng tới tọa độ (14, 13) (Spot #8 (thương hiệu=8, tọa độ=(14, 13))) | 2 |
| 30 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 13)) | 62 |
| 31 | Chờ 1 bước (`-1`) | (14, 13) | (14, 13) | Dự kiến đứng yên tại (14, 13); hướng tới tọa độ (14, 13) | 62 |
| 32-33 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới tọa độ (11, 8) (Spot #16 (thương hiệu=3, tọa độ=(11, 8))) | 61 |
| 34 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (11, 8) (Spot #16 (thương hiệu=3, tọa độ=(11, 8))) | 59 |
| 35 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (11, 8) (Spot #16 (thương hiệu=3, tọa độ=(11, 8))) | 57 |
| 36 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (11, 8) (Spot #16 (thương hiệu=3, tọa độ=(11, 8))) | 55 |
| 37 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (11, 8) (Spot #16 (thương hiệu=3, tọa độ=(11, 8))) | 53 |
| 38 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(11, 8)) | 51 |
| 39-40 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 50 |
| 41-42 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (11, 3) (Spot #7 (thương hiệu=7, tọa độ=(11, 3))) | 49 |
| 43 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (11, 3) (Spot #7 (thương hiệu=7, tọa độ=(11, 3))) | 47 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (11, 7) (ô=130)
- Nhiên liệu đầu ngày: 62
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #8 (thương hiệu=8, tọa độ=(14, 13))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 4, 3, 3, -35]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 13) (Spot #8 (thương hiệu=8, tọa độ=(14, 13))) | 62 |
| 2-3 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 13) (Spot #8 (thương hiệu=8, tọa độ=(14, 13))) | 62 |
| 4 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 13) (Spot #8 (thương hiệu=8, tọa độ=(14, 13))) | 62 |
| 5 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 13) (Spot #8 (thương hiệu=8, tọa độ=(14, 13))) | 62 |
| 6 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 13) (Spot #8 (thương hiệu=8, tọa độ=(14, 13))) | 62 |
| 7 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 13) (Spot #8 (thương hiệu=8, tọa độ=(14, 13))) | 62 |
| 8 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (14, 13) | 62 |
| 9-43 | Chờ 35 bước (`-35`) | (14, 13) | (14, 13) | Dự kiến đứng yên tại (14, 13); điểm hẹn của xe tuần tra #3 tại (14, 13) | 62 |

