# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 51
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 9) (ô=232)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(24, 0))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(24, 0))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 1, 1, 3, 3, 3, 2, 0, 1, 0, 1, 1, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 58 |
| 2-3 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 57 |
| 4 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 55 |
| 5-6 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến di chuyển đến (11, 9); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 54 |
| 7-8 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 53 |
| 9 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 51 |
| 10 | Di chuyển hướng 2 (`2`) | (13, 9) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 49 |
| 11-12 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 48 |
| 13-14 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến di chuyển đến (16, 9); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 47 |
| 15-16 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến di chuyển đến (17, 9); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 46 |
| 17-18 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến di chuyển đến (18, 9); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 45 |
| 19-20 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(18, 8)) | 44 |
| 21-22 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến di chuyển đến (19, 7); hướng tới tọa độ (21, 4) (Spot #7 (thương hiệu=7, tọa độ=(21, 4))) | 43 |
| 23 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (21, 4) (Spot #7 (thương hiệu=7, tọa độ=(21, 4))) | 41 |
| 24 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến di chuyển đến (20, 6); hướng tới tọa độ (21, 4) (Spot #7 (thương hiệu=7, tọa độ=(21, 4))) | 39 |
| 25 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến di chuyển đến (21, 5); hướng tới tọa độ (21, 4) (Spot #7 (thương hiệu=7, tọa độ=(21, 4))) | 37 |
| 26-28 | Di chuyển hướng 1 (`1`) | (21, 5) | (21, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(21, 4)) | 35 |
| 29-30 | Di chuyển hướng 3 (`3`) | (21, 4) | (22, 5) | Dự kiến di chuyển đến (22, 5); hướng tới tọa độ (24, 7) (Spot #10 (thương hiệu=10, tọa độ=(24, 7))) | 34 |
| 31-32 | Di chuyển hướng 3 (`3`) | (22, 5) | (22, 6) | Dự kiến di chuyển đến (22, 6); hướng tới tọa độ (24, 7) (Spot #10 (thương hiệu=10, tọa độ=(24, 7))) | 33 |
| 33 | Di chuyển hướng 3 (`3`) | (22, 6) | (23, 7) | Dự kiến di chuyển đến (23, 7); hướng tới tọa độ (24, 7) (Spot #10 (thương hiệu=10, tọa độ=(24, 7))) | 31 |
| 34-35 | Di chuyển hướng 2 (`2`) | (23, 7) | (24, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(24, 7)) | 30 |
| 36-37 | Di chuyển hướng 0 (`0`) | (24, 7) | (23, 6) | Dự kiến di chuyển đến (23, 6); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 29 |
| 38-39 | Di chuyển hướng 1 (`1`) | (23, 6) | (24, 5) | Dự kiến di chuyển đến (24, 5); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 28 |
| 40-41 | Di chuyển hướng 0 (`0`) | (24, 5) | (23, 4) | Dự kiến di chuyển đến (23, 4); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 27 |
| 42-43 | Di chuyển hướng 1 (`1`) | (23, 4) | (24, 3) | Dự kiến di chuyển đến (24, 3); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 26 |
| 44-46 | Di chuyển hướng 1 (`1`) | (24, 3) | (24, 2) | Dự kiến di chuyển đến (24, 2); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 24 |
| 47 | Di chuyển hướng 0 (`0`) | (24, 2) | (24, 1) | Dự kiến di chuyển đến (24, 1); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 22 |
| 48-49 | Di chuyển hướng 1 (`1`) | (24, 1) | (24, 0) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(24, 0)) | 21 |
| 50 | Chờ 1 bước (`-1`) | (24, 0) | (24, 0) | Dự kiến đứng yên tại (24, 0); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(24, 0)) | 21 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (24, 19) (ô=499)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(11, 20))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(11, 20))
- Mảng hành động đã gửi server: `[0, 5, 0, 5, 5, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 4, 4, 4, 5, 5, 5, 5, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (24, 19) | (23, 18) | Dự kiến di chuyển đến (23, 18); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 58 |
| 2-3 | Di chuyển hướng 5 (`5`) | (23, 18) | (22, 18) | Dự kiến di chuyển đến (22, 18); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 57 |
| 4-5 | Di chuyển hướng 0 (`0`) | (22, 18) | (22, 17) | Dự kiến di chuyển đến (22, 17); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 56 |
| 6-7 | Di chuyển hướng 5 (`5`) | (22, 17) | (21, 17) | Dự kiến di chuyển đến (21, 17); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 55 |
| 8 | Di chuyển hướng 5 (`5`) | (21, 17) | (20, 17) | Dự kiến di chuyển đến (20, 17); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 53 |
| 9 | Di chuyển hướng 0 (`0`) | (20, 17) | (19, 16) | Dự kiến di chuyển đến (19, 16); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 51 |
| 10-11 | Di chuyển hướng 0 (`0`) | (19, 16) | (19, 15) | Dự kiến di chuyển đến (19, 15); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 50 |
| 12 | Di chuyển hướng 5 (`5`) | (19, 15) | (18, 15) | Dự kiến di chuyển đến (18, 15); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 48 |
| 13-14 | Di chuyển hướng 5 (`5`) | (18, 15) | (17, 15) | Dự kiến di chuyển đến (17, 15); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 47 |
| 15-16 | Di chuyển hướng 5 (`5`) | (17, 15) | (16, 15) | Dự kiến di chuyển đến (16, 15); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 46 |
| 17-18 | Di chuyển hướng 5 (`5`) | (16, 15) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 45 |
| 19-20 | Di chuyển hướng 5 (`5`) | (15, 15) | (14, 15) | Dự kiến di chuyển đến (14, 15); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 44 |
| 21-22 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 43 |
| 23-25 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến di chuyển đến (12, 15); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 41 |
| 26 | Di chuyển hướng 5 (`5`) | (12, 15) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 39 |
| 27 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 37 |
| 28 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 35 |
| 29-30 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 34 |
| 31-32 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 33 |
| 33-34 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến di chuyển đến (7, 17); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 32 |
| 35-36 | Di chuyển hướng 4 (`4`) | (7, 17) | (6, 18) | Dự kiến di chuyển đến (6, 18); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 31 |
| 37-38 | Di chuyển hướng 4 (`4`) | (6, 18) | (6, 19) | Dự kiến di chuyển đến (6, 19); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 30 |
| 39 | Di chuyển hướng 5 (`5`) | (6, 19) | (5, 19) | Dự kiến di chuyển đến (5, 19); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 28 |
| 40-41 | Di chuyển hướng 5 (`5`) | (5, 19) | (4, 19) | Dự kiến di chuyển đến (4, 19); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 27 |
| 42-43 | Di chuyển hướng 5 (`5`) | (4, 19) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 26 |
| 44-45 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 19)) | 25 |
| 46-47 | Di chuyển hướng 2 (`2`) | (2, 19) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 24 |
| 48-49 | Di chuyển hướng 2 (`2`) | (3, 19) | (4, 19) | Dự kiến di chuyển đến (4, 19); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 23 |
| 50 | Chờ 1 bước (`-1`) | (4, 19) | (4, 19) | Dự kiến đứng yên tại (4, 19); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 20)) | 23 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (17, 1) (ô=42)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(9, 8))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(9, 8))
- Mảng hành động đã gửi server: `[3, 2, 2, 3, 2, 3, 0, 0, 0, 0, 5, 5, 5, 4, 4, 4, 5, 5, 3, 3, 3, 3, 2, 2, 2, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến di chuyển đến (17, 2); hướng tới tọa độ (21, 4) (Spot #7 (thương hiệu=7, tọa độ=(21, 4))) | 58 |
| 2 | Di chuyển hướng 2 (`2`) | (17, 2) | (18, 2) | Dự kiến di chuyển đến (18, 2); hướng tới tọa độ (21, 4) (Spot #7 (thương hiệu=7, tọa độ=(21, 4))) | 56 |
| 3 | Di chuyển hướng 2 (`2`) | (18, 2) | (19, 2) | Dự kiến di chuyển đến (19, 2); hướng tới tọa độ (21, 4) (Spot #7 (thương hiệu=7, tọa độ=(21, 4))) | 54 |
| 4-5 | Di chuyển hướng 3 (`3`) | (19, 2) | (20, 3) | Dự kiến di chuyển đến (20, 3); hướng tới tọa độ (21, 4) (Spot #7 (thương hiệu=7, tọa độ=(21, 4))) | 53 |
| 6-7 | Di chuyển hướng 2 (`2`) | (20, 3) | (21, 3) | Dự kiến di chuyển đến (21, 3); hướng tới tọa độ (21, 4) (Spot #7 (thương hiệu=7, tọa độ=(21, 4))) | 52 |
| 8-9 | Di chuyển hướng 3 (`3`) | (21, 3) | (21, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(21, 4)) | 51 |
| 10-11 | Di chuyển hướng 0 (`0`) | (21, 4) | (21, 3) | Dự kiến di chuyển đến (21, 3); hướng tới tọa độ (18, 0) (Spot #24 (thương hiệu=24, tọa độ=(18, 0))) | 50 |
| 12-13 | Di chuyển hướng 0 (`0`) | (21, 3) | (20, 2) | Dự kiến di chuyển đến (20, 2); hướng tới tọa độ (18, 0) (Spot #24 (thương hiệu=24, tọa độ=(18, 0))) | 49 |
| 14-15 | Di chuyển hướng 0 (`0`) | (20, 2) | (20, 1) | Dự kiến di chuyển đến (20, 1); hướng tới tọa độ (18, 0) (Spot #24 (thương hiệu=24, tọa độ=(18, 0))) | 48 |
| 16-17 | Di chuyển hướng 0 (`0`) | (20, 1) | (19, 0) | Dự kiến di chuyển đến (19, 0); hướng tới tọa độ (18, 0) (Spot #24 (thương hiệu=24, tọa độ=(18, 0))) | 47 |
| 18-19 | Di chuyển hướng 5 (`5`) | (19, 0) | (18, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(18, 0)) | 46 |
| 20-21 | Di chuyển hướng 5 (`5`) | (18, 0) | (17, 0) | Dự kiến di chuyển đến (17, 0); hướng tới tọa độ (13, 3) (Spot #20 (thương hiệu=20, tọa độ=(13, 3))) | 45 |
| 22-24 | Di chuyển hướng 5 (`5`) | (17, 0) | (16, 0) | Dự kiến di chuyển đến (16, 0); hướng tới tọa độ (13, 3) (Spot #20 (thương hiệu=20, tọa độ=(13, 3))) | 43 |
| 25 | Di chuyển hướng 4 (`4`) | (16, 0) | (16, 1) | Dự kiến di chuyển đến (16, 1); hướng tới tọa độ (13, 3) (Spot #20 (thương hiệu=20, tọa độ=(13, 3))) | 41 |
| 26 | Di chuyển hướng 4 (`4`) | (16, 1) | (15, 2) | Dự kiến di chuyển đến (15, 2); hướng tới tọa độ (13, 3) (Spot #20 (thương hiệu=20, tọa độ=(13, 3))) | 39 |
| 27-28 | Di chuyển hướng 4 (`4`) | (15, 2) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới tọa độ (13, 3) (Spot #20 (thương hiệu=20, tọa độ=(13, 3))) | 38 |
| 29-30 | Di chuyển hướng 5 (`5`) | (15, 3) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới tọa độ (13, 3) (Spot #20 (thương hiệu=20, tọa độ=(13, 3))) | 37 |
| 31 | Di chuyển hướng 5 (`5`) | (14, 3) | (13, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(13, 3)) | 35 |
| 32-33 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (15, 7) (Spot #19 (thương hiệu=19, tọa độ=(15, 7))) | 34 |
| 34-36 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (15, 7) (Spot #19 (thương hiệu=19, tọa độ=(15, 7))) | 32 |
| 37-38 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (15, 7) (Spot #19 (thương hiệu=19, tọa độ=(15, 7))) | 31 |
| 39-40 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(15, 7)) | 30 |
| 41-42 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 29 |
| 43-44 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến di chuyển đến (17, 7); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 28 |
| 45 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến di chuyển đến (18, 7); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 26 |
| 46-47 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(18, 8)) | 25 |
| 48-49 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến di chuyển đến (18, 9); hướng tới tọa độ (9, 8) (Spot #16 (thương hiệu=16, tọa độ=(9, 8))) | 24 |
| 50 | Chờ 1 bước (`-1`) | (18, 9) | (18, 9) | Dự kiến đứng yên tại (18, 9); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(9, 8)) | 24 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 12) (ô=303)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(7, 10))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(7, 10))
- Mảng hành động đã gửi server: `[0, 5, 5, 0, 0, 2, 1, 2, 2, 2, 2, 2, 1, 2, 3, 2, 1, 1, 0, 0, 0, 0, 5, 0, 0, 5, 5, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (0, 9) (Spot #5 (thương hiệu=5, tọa độ=(0, 9))) | 58 |
| 2-3 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (0, 9) (Spot #5 (thương hiệu=5, tọa độ=(0, 9))) | 57 |
| 4-5 | Di chuyển hướng 5 (`5`) | (2, 11) | (1, 11) | Dự kiến di chuyển đến (1, 11); hướng tới tọa độ (0, 9) (Spot #5 (thương hiệu=5, tọa độ=(0, 9))) | 56 |
| 6-7 | Di chuyển hướng 0 (`0`) | (1, 11) | (0, 10) | Dự kiến di chuyển đến (0, 10); hướng tới tọa độ (0, 9) (Spot #5 (thương hiệu=5, tọa độ=(0, 9))) | 55 |
| 8 | Di chuyển hướng 0 (`0`) | (0, 10) | (0, 9) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 9)) | 53 |
| 9-10 | Di chuyển hướng 2 (`2`) | (0, 9) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (4, 8) (Spot #18 (thương hiệu=18, tọa độ=(4, 8))) | 52 |
| 11 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (4, 8) (Spot #18 (thương hiệu=18, tọa độ=(4, 8))) | 50 |
| 12 | Di chuyển hướng 2 (`2`) | (1, 8) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (4, 8) (Spot #18 (thương hiệu=18, tọa độ=(4, 8))) | 48 |
| 13-14 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (4, 8) (Spot #18 (thương hiệu=18, tọa độ=(4, 8))) | 47 |
| 15-16 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(4, 8)) | 46 |
| 17-18 | Di chuyển hướng 2 (`2`) | (4, 8) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới tọa độ (8, 7) (Spot #6 (thương hiệu=6, tọa độ=(8, 7))) | 45 |
| 19-20 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (8, 7) (Spot #6 (thương hiệu=6, tọa độ=(8, 7))) | 44 |
| 21-22 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (8, 7) (Spot #6 (thương hiệu=6, tọa độ=(8, 7))) | 43 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 7)) | 42 |
| 25-26 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (9, 8) (Spot #16 (thương hiệu=16, tọa độ=(9, 8))) | 41 |
| 27 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(9, 8)) | 39 |
| 28-29 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (10, 6) (Spot #11 (thương hiệu=11, tọa độ=(10, 6))) | 38 |
| 30 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 6)) | 36 |
| 31-32 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (6, 0) (Spot #12 (thương hiệu=12, tọa độ=(6, 0))) | 35 |
| 33-34 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (6, 0) (Spot #12 (thương hiệu=12, tọa độ=(6, 0))) | 34 |
| 35-36 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (6, 0) (Spot #12 (thương hiệu=12, tọa độ=(6, 0))) | 33 |
| 37-38 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới tọa độ (6, 0) (Spot #12 (thương hiệu=12, tọa độ=(6, 0))) | 32 |
| 39-40 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (6, 0) (Spot #12 (thương hiệu=12, tọa độ=(6, 0))) | 31 |
| 41-42 | Di chuyển hướng 0 (`0`) | (7, 2) | (7, 1) | Dự kiến di chuyển đến (7, 1); hướng tới tọa độ (6, 0) (Spot #12 (thương hiệu=12, tọa độ=(6, 0))) | 30 |
| 43-44 | Di chuyển hướng 0 (`0`) | (7, 1) | (6, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 0)) | 29 |
| 45-46 | Di chuyển hướng 5 (`5`) | (6, 0) | (5, 0) | Dự kiến di chuyển đến (5, 0); hướng tới tọa độ (4, 0) (Spot #22 (thương hiệu=22, tọa độ=(4, 0))) | 28 |
| 47 | Di chuyển hướng 5 (`5`) | (5, 0) | (4, 0) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(4, 0)) | 26 |
| 48-49 | Di chuyển hướng 3 (`3`) | (4, 0) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (7, 10) (Spot #21 (thương hiệu=21, tọa độ=(7, 10))) | 25 |
| 50 | Di chuyển hướng 3 (`3`) | (5, 1) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (7, 10) (Spot #21 (thương hiệu=21, tọa độ=(7, 10))) | 23 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (5, 8) (ô=205)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(6, 0))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(6, 0))
- Mảng hành động đã gửi server: `[2, 1, 2, 3, 2, 4, 4, 5, 0, 5, 5, 0, 5, 5, 5, 4, 5, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (8, 7) (Spot #6 (thương hiệu=6, tọa độ=(8, 7))) | 58 |
| 2-3 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (8, 7) (Spot #6 (thương hiệu=6, tọa độ=(8, 7))) | 57 |
| 4-5 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 7)) | 56 |
| 6-7 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (9, 8) (Spot #16 (thương hiệu=16, tọa độ=(9, 8))) | 55 |
| 8 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(9, 8)) | 53 |
| 9-10 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (7, 10) (Spot #21 (thương hiệu=21, tọa độ=(7, 10))) | 52 |
| 11 | Di chuyển hướng 4 (`4`) | (9, 9) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (7, 10) (Spot #21 (thương hiệu=21, tọa độ=(7, 10))) | 50 |
| 12-13 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(7, 10)) | 49 |
| 14-15 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (4, 8) (Spot #18 (thương hiệu=18, tọa độ=(4, 8))) | 48 |
| 16-17 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới tọa độ (4, 8) (Spot #18 (thương hiệu=18, tọa độ=(4, 8))) | 47 |
| 18-19 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (4, 8) (Spot #18 (thương hiệu=18, tọa độ=(4, 8))) | 46 |
| 20-21 | Di chuyển hướng 0 (`0`) | (5, 9) | (4, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(4, 8)) | 45 |
| 22-23 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (0, 9) (Spot #5 (thương hiệu=5, tọa độ=(0, 9))) | 44 |
| 24-25 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (0, 9) (Spot #5 (thương hiệu=5, tọa độ=(0, 9))) | 43 |
| 26-27 | Di chuyển hướng 5 (`5`) | (2, 8) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (0, 9) (Spot #5 (thương hiệu=5, tọa độ=(0, 9))) | 42 |
| 28 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (0, 9) (Spot #5 (thương hiệu=5, tọa độ=(0, 9))) | 40 |
| 29 | Di chuyển hướng 5 (`5`) | (1, 9) | (0, 9) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 9)) | 38 |
| 30-31 | Di chuyển hướng 2 (`2`) | (0, 9) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (6, 0) (Spot #12 (thương hiệu=12, tọa độ=(6, 0))) | 37 |
| 32 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (6, 0) (Spot #12 (thương hiệu=12, tọa độ=(6, 0))) | 35 |
| 33 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến di chuyển đến (2, 7); hướng tới tọa độ (6, 0) (Spot #12 (thương hiệu=12, tọa độ=(6, 0))) | 33 |
| 34-35 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới tọa độ (6, 0) (Spot #12 (thương hiệu=12, tọa độ=(6, 0))) | 32 |
| 36-37 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (6, 0) (Spot #12 (thương hiệu=12, tọa độ=(6, 0))) | 31 |
| 38-39 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (6, 0) (Spot #12 (thương hiệu=12, tọa độ=(6, 0))) | 30 |
| 40-41 | Di chuyển hướng 1 (`1`) | (4, 5) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (6, 0) (Spot #12 (thương hiệu=12, tọa độ=(6, 0))) | 29 |
| 42-43 | Di chuyển hướng 1 (`1`) | (4, 4) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (6, 0) (Spot #12 (thương hiệu=12, tọa độ=(6, 0))) | 28 |
| 44-45 | Di chuyển hướng 1 (`1`) | (5, 3) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (6, 0) (Spot #12 (thương hiệu=12, tọa độ=(6, 0))) | 27 |
| 46-47 | Di chuyển hướng 1 (`1`) | (5, 2) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (6, 0) (Spot #12 (thương hiệu=12, tọa độ=(6, 0))) | 26 |
| 48-49 | Di chuyển hướng 1 (`1`) | (6, 1) | (6, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 0)) | 25 |
| 50 | Chờ 1 bước (`-1`) | (6, 0) | (6, 0) | Dự kiến đứng yên tại (6, 0); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 0)) | 25 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (14, 21) (ô=539)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(18, 8))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(18, 8))
- Mảng hành động đã gửi server: `[4, 2, 2, 2, 2, 2, 2, 3, 1, 1, 1, 1, 1, 0, 1, 1, 1, 4, 3, 3, 3, 5, 5, 0, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (14, 21) | (13, 22) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 22)) | 58 |
| 2-3 | Di chuyển hướng 2 (`2`) | (13, 22) | (14, 22) | Dự kiến di chuyển đến (14, 22); hướng tới tọa độ (18, 22) (Spot #8 (thương hiệu=8, tọa độ=(18, 22))) | 57 |
| 4-5 | Di chuyển hướng 2 (`2`) | (14, 22) | (15, 22) | Dự kiến di chuyển đến (15, 22); hướng tới tọa độ (18, 22) (Spot #8 (thương hiệu=8, tọa độ=(18, 22))) | 56 |
| 6-7 | Di chuyển hướng 2 (`2`) | (15, 22) | (16, 22) | Dự kiến di chuyển đến (16, 22); hướng tới tọa độ (18, 22) (Spot #8 (thương hiệu=8, tọa độ=(18, 22))) | 55 |
| 8-9 | Di chuyển hướng 2 (`2`) | (16, 22) | (17, 22) | Dự kiến di chuyển đến (17, 22); hướng tới tọa độ (18, 22) (Spot #8 (thương hiệu=8, tọa độ=(18, 22))) | 54 |
| 10-11 | Di chuyển hướng 2 (`2`) | (17, 22) | (18, 22) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(18, 22)) | 53 |
| 12-13 | Di chuyển hướng 2 (`2`) | (18, 22) | (19, 22) | Dự kiến di chuyển đến (19, 22); hướng tới tọa độ (20, 23) (Spot #9 (thương hiệu=9, tọa độ=(20, 23))) | 52 |
| 14-15 | Di chuyển hướng 3 (`3`) | (19, 22) | (20, 23) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(20, 23)) | 51 |
| 16-17 | Di chuyển hướng 1 (`1`) | (20, 23) | (20, 22) | Dự kiến di chuyển đến (20, 22); hướng tới tọa độ (21, 20) (Spot #15 (thương hiệu=15, tọa độ=(21, 20))) | 50 |
| 18-19 | Di chuyển hướng 1 (`1`) | (20, 22) | (21, 21) | Dự kiến di chuyển đến (21, 21); hướng tới tọa độ (21, 20) (Spot #15 (thương hiệu=15, tọa độ=(21, 20))) | 49 |
| 20 | Di chuyển hướng 1 (`1`) | (21, 21) | (21, 20) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(21, 20)) | 47 |
| 21-22 | Di chuyển hướng 1 (`1`) | (21, 20) | (22, 19) | Dự kiến di chuyển đến (22, 19); hướng tới tọa độ (22, 16) (Spot #14 (thương hiệu=14, tọa độ=(22, 16))) | 46 |
| 23-24 | Di chuyển hướng 1 (`1`) | (22, 19) | (22, 18) | Dự kiến di chuyển đến (22, 18); hướng tới tọa độ (22, 16) (Spot #14 (thương hiệu=14, tọa độ=(22, 16))) | 45 |
| 25-26 | Di chuyển hướng 0 (`0`) | (22, 18) | (22, 17) | Dự kiến di chuyển đến (22, 17); hướng tới tọa độ (22, 16) (Spot #14 (thương hiệu=14, tọa độ=(22, 16))) | 44 |
| 27-28 | Di chuyển hướng 1 (`1`) | (22, 17) | (22, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(22, 16)) | 43 |
| 29-30 | Di chuyển hướng 1 (`1`) | (22, 16) | (23, 15) | Dự kiến di chuyển đến (23, 15); hướng tới tọa độ (23, 14) (Spot #13 (thương hiệu=13, tọa độ=(23, 14))) | 42 |
| 31-32 | Di chuyển hướng 1 (`1`) | (23, 15) | (23, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(23, 14)) | 41 |
| 33-34 | Di chuyển hướng 4 (`4`) | (23, 14) | (23, 15) | Dự kiến di chuyển đến (23, 15); hướng tới tọa độ (24, 18) (Spot #25 (thương hiệu=25, tọa độ=(24, 18))) | 40 |
| 35-36 | Di chuyển hướng 3 (`3`) | (23, 15) | (23, 16) | Dự kiến di chuyển đến (23, 16); hướng tới tọa độ (24, 18) (Spot #25 (thương hiệu=25, tọa độ=(24, 18))) | 39 |
| 37-38 | Di chuyển hướng 3 (`3`) | (23, 16) | (24, 17) | Dự kiến di chuyển đến (24, 17); hướng tới tọa độ (24, 18) (Spot #25 (thương hiệu=25, tọa độ=(24, 18))) | 38 |
| 39-40 | Di chuyển hướng 3 (`3`) | (24, 17) | (24, 18) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(24, 18)) | 37 |
| 41-42 | Di chuyển hướng 5 (`5`) | (24, 18) | (23, 18) | Dự kiến di chuyển đến (23, 18); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 36 |
| 43-44 | Di chuyển hướng 5 (`5`) | (23, 18) | (22, 18) | Dự kiến di chuyển đến (22, 18); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 35 |
| 45-46 | Di chuyển hướng 0 (`0`) | (22, 18) | (22, 17) | Dự kiến di chuyển đến (22, 17); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 34 |
| 47-48 | Di chuyển hướng 5 (`5`) | (22, 17) | (21, 17) | Dự kiến di chuyển đến (21, 17); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 33 |
| 49 | Di chuyển hướng 0 (`0`) | (21, 17) | (20, 16) | Dự kiến di chuyển đến (20, 16); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 31 |
| 50 | Chờ 1 bước (`-1`) | (20, 16) | (20, 16) | Dự kiến đứng yên tại (20, 16); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(18, 8)) | 31 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (9, 10) (ô=259)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(10, 25))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(10, 25))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 3, 2, 2, 3, 3, 2, 2, 3, 4, 5, 4, 5, 5, 5, 5, 5, 4, 4, 3, 4, 3, 4, 4, 4, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 58 |
| 2-3 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến di chuyển đến (11, 9); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 57 |
| 4-5 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 56 |
| 6 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 54 |
| 7 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 52 |
| 8-9 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến di chuyển đến (14, 10); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 51 |
| 10 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 49 |
| 11-12 | Di chuyển hướng 3 (`3`) | (15, 10) | (16, 11) | Dự kiến di chuyển đến (16, 11); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 48 |
| 13 | Di chuyển hướng 3 (`3`) | (16, 11) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 46 |
| 14 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 44 |
| 15-16 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến di chuyển đến (18, 12); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 43 |
| 17-18 | Di chuyển hướng 3 (`3`) | (18, 12) | (19, 13) | Dự kiến di chuyển đến (19, 13); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 42 |
| 19 | Di chuyển hướng 4 (`4`) | (19, 13) | (18, 14) | Dự kiến di chuyển đến (18, 14); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 40 |
| 20-21 | Di chuyển hướng 5 (`5`) | (18, 14) | (17, 14) | Dự kiến di chuyển đến (17, 14); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 39 |
| 22-23 | Di chuyển hướng 4 (`4`) | (17, 14) | (17, 15) | Dự kiến di chuyển đến (17, 15); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 38 |
| 24-25 | Di chuyển hướng 5 (`5`) | (17, 15) | (16, 15) | Dự kiến di chuyển đến (16, 15); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 37 |
| 26-27 | Di chuyển hướng 5 (`5`) | (16, 15) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 36 |
| 28-29 | Di chuyển hướng 5 (`5`) | (15, 15) | (14, 15) | Dự kiến di chuyển đến (14, 15); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 35 |
| 30-31 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 34 |
| 32-34 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến di chuyển đến (12, 15); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 32 |
| 35 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 30 |
| 36-37 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 29 |
| 38 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 27 |
| 39-40 | Di chuyển hướng 4 (`4`) | (11, 18) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 26 |
| 41-42 | Di chuyển hướng 3 (`3`) | (11, 19) | (11, 20) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 20)) | 25 |
| 43-44 | Di chuyển hướng 4 (`4`) | (11, 20) | (11, 21) | Dự kiến di chuyển đến (11, 21); hướng tới tọa độ (10, 25) (Spot #23 (thương hiệu=23, tọa độ=(10, 25))) | 24 |
| 45-46 | Di chuyển hướng 4 (`4`) | (11, 21) | (10, 22) | Dự kiến di chuyển đến (10, 22); hướng tới tọa độ (10, 25) (Spot #23 (thương hiệu=23, tọa độ=(10, 25))) | 23 |
| 47-48 | Di chuyển hướng 4 (`4`) | (10, 22) | (10, 23) | Dự kiến di chuyển đến (10, 23); hướng tới tọa độ (10, 25) (Spot #23 (thương hiệu=23, tọa độ=(10, 25))) | 22 |
| 49 | Di chuyển hướng 4 (`4`) | (10, 23) | (9, 24) | Dự kiến di chuyển đến (9, 24); hướng tới tọa độ (10, 25) (Spot #23 (thương hiệu=23, tọa độ=(10, 25))) | 20 |
| 50 | Di chuyển hướng 3 (`3`) | (9, 24) | (10, 25) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 25)) | 18 |

### Xe #7 - Tuần tra

- Vị trí đầu ngày: (19, 0) (ô=19)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(13, 3))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(13, 3))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 4, 3, 4, 4, 3, 4, 3, 5, 5, 5, 5, 5, 4, 0, 5, 5, 5, 0, 0, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (19, 0) | (20, 0) | Dự kiến di chuyển đến (20, 0); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 58 |
| 2-4 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến di chuyển đến (21, 0); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 56 |
| 5-6 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến di chuyển đến (22, 0); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 55 |
| 7-8 | Di chuyển hướng 2 (`2`) | (22, 0) | (23, 0) | Dự kiến di chuyển đến (23, 0); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 54 |
| 9-10 | Di chuyển hướng 2 (`2`) | (23, 0) | (24, 0) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(24, 0)) | 53 |
| 11-12 | Di chuyển hướng 4 (`4`) | (24, 0) | (24, 1) | Dự kiến di chuyển đến (24, 1); hướng tới tọa độ (24, 7) (Spot #10 (thương hiệu=10, tọa độ=(24, 7))) | 52 |
| 13-14 | Di chuyển hướng 3 (`3`) | (24, 1) | (24, 2) | Dự kiến di chuyển đến (24, 2); hướng tới tọa độ (24, 7) (Spot #10 (thương hiệu=10, tọa độ=(24, 7))) | 51 |
| 15 | Di chuyển hướng 4 (`4`) | (24, 2) | (24, 3) | Dự kiến di chuyển đến (24, 3); hướng tới tọa độ (24, 7) (Spot #10 (thương hiệu=10, tọa độ=(24, 7))) | 49 |
| 16-18 | Di chuyển hướng 4 (`4`) | (24, 3) | (23, 4) | Dự kiến di chuyển đến (23, 4); hướng tới tọa độ (24, 7) (Spot #10 (thương hiệu=10, tọa độ=(24, 7))) | 47 |
| 19-20 | Di chuyển hướng 3 (`3`) | (23, 4) | (24, 5) | Dự kiến di chuyển đến (24, 5); hướng tới tọa độ (24, 7) (Spot #10 (thương hiệu=10, tọa độ=(24, 7))) | 46 |
| 21-22 | Di chuyển hướng 4 (`4`) | (24, 5) | (23, 6) | Dự kiến di chuyển đến (23, 6); hướng tới tọa độ (24, 7) (Spot #10 (thương hiệu=10, tọa độ=(24, 7))) | 45 |
| 23-24 | Di chuyển hướng 3 (`3`) | (23, 6) | (24, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(24, 7)) | 44 |
| 25-26 | Di chuyển hướng 5 (`5`) | (24, 7) | (23, 7) | Dự kiến di chuyển đến (23, 7); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 43 |
| 27-28 | Di chuyển hướng 5 (`5`) | (23, 7) | (22, 7) | Dự kiến di chuyển đến (22, 7); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 42 |
| 29-30 | Di chuyển hướng 5 (`5`) | (22, 7) | (21, 7) | Dự kiến di chuyển đến (21, 7); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 41 |
| 31-32 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 40 |
| 33 | Di chuyển hướng 5 (`5`) | (20, 7) | (19, 7) | Dự kiến di chuyển đến (19, 7); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 38 |
| 34 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(18, 8)) | 36 |
| 35-36 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến di chuyển đến (18, 7); hướng tới tọa độ (15, 7) (Spot #19 (thương hiệu=19, tọa độ=(15, 7))) | 35 |
| 37-38 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến di chuyển đến (17, 7); hướng tới tọa độ (15, 7) (Spot #19 (thương hiệu=19, tọa độ=(15, 7))) | 34 |
| 39 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới tọa độ (15, 7) (Spot #19 (thương hiệu=19, tọa độ=(15, 7))) | 32 |
| 40-41 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(15, 7)) | 31 |
| 42-43 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (13, 3) (Spot #20 (thương hiệu=20, tọa độ=(13, 3))) | 30 |
| 44-45 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (13, 3) (Spot #20 (thương hiệu=20, tọa độ=(13, 3))) | 29 |
| 46-47 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (13, 3) (Spot #20 (thương hiệu=20, tọa độ=(13, 3))) | 28 |
| 48-50 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(13, 3)) | 26 |

