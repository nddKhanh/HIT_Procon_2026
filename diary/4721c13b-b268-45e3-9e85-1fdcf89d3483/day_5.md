# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 71
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 28 | #4 | #5 | (11, 8) | 0 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 20) (ô=432)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 20)
- Mảng hành động đã gửi server: `[-71]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-70 | Chờ 71 bước (`-71`) | (12, 20) | (12, 20) | Dự kiến đứng yên tại (12, 20); hướng tới tọa độ (12, 20) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 15) (ô=326)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(3, 13))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(3, 13))
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 1, 0, 5, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 1, 1, 2, 3, 3, 3, 3, 2, 5, 5, 4, 4, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 51 |
| 2-4 | Di chuyển hướng 1 (`1`) | (11, 14) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 49 |
| 5 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 47 |
| 6-7 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 46 |
| 8-9 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 45 |
| 10-11 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 44 |
| 12-13 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến di chuyển đến (12, 10); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 43 |
| 14-15 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 41 |
| 16-17 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 39 |
| 18-19 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 38 |
| 20-21 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến di chuyển đến (9, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 37 |
| 22 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 35 |
| 23-25 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 33 |
| 26 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 31 |
| 27-28 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 30 |
| 29-31 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 28 |
| 32 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 26 |
| 33-34 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 25 |
| 35-37 | Di chuyển hướng 5 (`5`) | (2, 8) | (1, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 8)) | 23 |
| 38-39 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (2, 5) (Spot #14 (thương hiệu=14, tọa độ=(2, 5))) | 22 |
| 40-42 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến di chuyển đến (1, 6); hướng tới tọa độ (2, 5) (Spot #14 (thương hiệu=14, tọa độ=(2, 5))) | 20 |
| 43-45 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 5)) | 18 |
| 46-47 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến di chuyển đến (3, 5); hướng tới tọa độ (6, 9) (Spot #2 (thương hiệu=2, tọa độ=(6, 9))) | 17 |
| 48-50 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (6, 9) (Spot #2 (thương hiệu=2, tọa độ=(6, 9))) | 15 |
| 51-52 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (6, 9) (Spot #2 (thương hiệu=2, tọa độ=(6, 9))) | 14 |
| 53 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới tọa độ (6, 9) (Spot #2 (thương hiệu=2, tọa độ=(6, 9))) | 12 |
| 54 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (6, 9) (Spot #2 (thương hiệu=2, tọa độ=(6, 9))) | 10 |
| 55-56 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 9)) | 9 |
| 57-58 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 8 |
| 59-60 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 7 |
| 61-62 | Di chuyển hướng 4 (`4`) | (4, 9) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 6 |
| 63-65 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 4 |
| 66-67 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến di chuyển đến (3, 12); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 3 |
| 68-70 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 13)) | 1 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 18) (ô=391)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(5, 16))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(5, 16))
- Mảng hành động đã gửi server: `[2, 2, 0, 5, 0, 5, 0, 5, 5, 5, 5, 5, 5, 4, -43]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến di chuyển đến (14, 18); hướng tới tọa độ (15, 18) (Spot #7 (thương hiệu=7, tọa độ=(15, 18))) | 17 |
| 2-3 | Di chuyển hướng 2 (`2`) | (14, 18) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 16 |
| 4-5 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 15 |
| 6-7 | Di chuyển hướng 5 (`5`) | (15, 17) | (14, 17) | Dự kiến di chuyển đến (14, 17); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 14 |
| 8-9 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 13 |
| 10-11 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 12 |
| 12-13 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến di chuyển đến (12, 15); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 11 |
| 14 | Di chuyển hướng 5 (`5`) | (12, 15) | (11, 15) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 9 |
| 15-16 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (8, 15) (Spot #19 (thương hiệu=4, tọa độ=(8, 15))) | 8 |
| 17-18 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (8, 15) (Spot #19 (thương hiệu=4, tọa độ=(8, 15))) | 7 |
| 19-20 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=4, tọa độ=(8, 15)) | 6 |
| 21-22 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 5 |
| 23-25 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 3 |
| 26-27 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 2 |
| 28-70 | Chờ 43 bước (`-43`) | (5, 16) | (5, 16) | Dự kiến đứng yên tại (5, 16); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 2 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (16, 11) (ô=247)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(15, 18))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(15, 18))
- Mảng hành động đã gửi server: `[2, 0, 1, 1, 0, 1, 1, 2, 0, 0, 0, 5, 0, 4, 4, 4, 3, 4, 4, 4, 3, 4, 3, 3, 3, 4, 3, 3, 4, 3, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 40 |
| 3-4 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới tọa độ (19, 5) (Spot #6 (thương hiệu=6, tọa độ=(19, 5))) | 39 |
| 5-7 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến di chuyển đến (17, 9); hướng tới tọa độ (19, 5) (Spot #6 (thương hiệu=6, tọa độ=(19, 5))) | 37 |
| 8-10 | Di chuyển hướng 1 (`1`) | (17, 9) | (17, 8) | Dự kiến di chuyển đến (17, 8); hướng tới tọa độ (19, 5) (Spot #6 (thương hiệu=6, tọa độ=(19, 5))) | 35 |
| 11-12 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến di chuyển đến (17, 7); hướng tới tọa độ (19, 5) (Spot #6 (thương hiệu=6, tọa độ=(19, 5))) | 34 |
| 13-15 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (19, 5) (Spot #6 (thương hiệu=6, tọa độ=(19, 5))) | 32 |
| 16-17 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến di chuyển đến (18, 5); hướng tới tọa độ (19, 5) (Spot #6 (thương hiệu=6, tọa độ=(19, 5))) | 31 |
| 18-19 | Di chuyển hướng 2 (`2`) | (18, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 5)) | 29 |
| 20-21 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến di chuyển đến (18, 4); hướng tới tọa độ (18, 3) (Spot #9 (thương hiệu=9, tọa độ=(18, 3))) | 28 |
| 22-23 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(18, 3)) | 27 |
| 24-25 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến di chuyển đến (17, 2); hướng tới tọa độ (16, 1) (Spot #17 (thương hiệu=2, tọa độ=(16, 1))) | 26 |
| 26-28 | Di chuyển hướng 5 (`5`) | (17, 2) | (16, 2) | Dự kiến di chuyển đến (16, 2); hướng tới tọa độ (16, 1) (Spot #17 (thương hiệu=2, tọa độ=(16, 1))) | 24 |
| 29-30 | Di chuyển hướng 0 (`0`) | (16, 2) | (16, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=2, tọa độ=(16, 1)) | 23 |
| 31-32 | Di chuyển hướng 4 (`4`) | (16, 1) | (15, 2) | Dự kiến di chuyển đến (15, 2); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 22 |
| 33-35 | Di chuyển hướng 4 (`4`) | (15, 2) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 20 |
| 36-38 | Di chuyển hướng 4 (`4`) | (15, 3) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 18 |
| 39 | Di chuyển hướng 3 (`3`) | (14, 4) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 16 |
| 40 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 14 |
| 41-42 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 13 |
| 43-44 | Di chuyển hướng 4 (`4`) | (14, 7) | (13, 8) | Dự kiến di chuyển đến (13, 8); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 12 |
| 45-47 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 10 |
| 48-49 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 9 |
| 50-51 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 8 |
| 52-53 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 7 |
| 54-55 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 6 |
| 56-57 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 5 |
| 58-59 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 4 |
| 60-61 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến di chuyển đến (15, 16); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 2 |
| 62-63 | Di chuyển hướng 4 (`4`) | (15, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 1 |
| 64-65 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 0 |
| 66-70 | Chờ 5 bước (`-5`) | (15, 18) | (15, 18) | Dự kiến đứng yên tại (15, 18); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (12, 20) (ô=432)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(5, 16))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(5, 16))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 5, -1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 3, 3, 3, 3, 2, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (12, 20) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 16 |
| 2-4 | Di chuyển hướng 1 (`1`) | (13, 19) | (13, 18) | Dự kiến di chuyển đến (13, 18); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 14 |
| 5-6 | Di chuyển hướng 1 (`1`) | (13, 18) | (14, 17) | Dự kiến di chuyển đến (14, 17); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 13 |
| 7-8 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 12 |
| 9-10 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 10 |
| 11-12 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 8 |
| 13-14 | Di chuyển hướng 1 (`1`) | (14, 14) | (15, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(15, 13)) | 7 |
| 15-16 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 6 |
| 17-18 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 5 |
| 19-20 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 4 |
| 21-22 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 3 |
| 23-25 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 1 |
| 26-27 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 8)) | 67 |
| 28 | Chờ 1 bước (`-1`) | (11, 8) | (11, 8) | Dự kiến đứng yên tại (11, 8); hướng tới tọa độ (11, 8) | 67 |
| 29-30 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 66 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến di chuyển đến (9, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 65 |
| 33 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 63 |
| 34-36 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 61 |
| 37 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 59 |
| 38-39 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 58 |
| 40-42 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 56 |
| 43 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 54 |
| 44-45 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 53 |
| 46-48 | Di chuyển hướng 5 (`5`) | (2, 8) | (1, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 8)) | 51 |
| 49-50 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 50 |
| 51-52 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 49 |
| 53 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 47 |
| 54-55 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 46 |
| 56-59 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 13)) | 44 |
| 60-61 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 43 |
| 62-64 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 41 |
| 65-66 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 40 |
| 67-69 | Di chuyển hướng 3 (`3`) | (5, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 38 |
| 70 | Chờ 1 bước (`-1`) | (5, 16) | (5, 16) | Dự kiến đứng yên tại (5, 16); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 38 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (2, 12) (ô=254)
- Nhiên liệu đầu ngày: 67
- Vai trò: Hỗ trợ xe tuần tra #4
- Điểm hẹn của xe tuần tra: Spot #12 (thương hiệu=12, tọa độ=(11, 8))
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 2, -47]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 4-5 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 6-8 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 9-10 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 11-12 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 13-14 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 15-16 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 17 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 18-20 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến di chuyển đến (9, 8); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 21 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 22-23 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn của xe tuần tra #4 tại (11, 8) | 67 |
| 24-70 | Chờ 47 bước (`-47`) | (11, 8) | (11, 8) | Dự kiến đứng yên tại (11, 8); điểm hẹn của xe tuần tra #4 tại (11, 8) | 67 |

