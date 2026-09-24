# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 51
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 5) (ô=142)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 5)
- Mảng hành động đã gửi server: `[3, 4, 4, 4, -18, 1, 1, 1, 0, 1, 5, 4, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 4 |
| 3-4 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 7)) | 3 |
| 5-6 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 2 |
| 7-8 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 1 |
| 9-26 | Chờ 18 bước (`-18`) | (11, 9) | (11, 9) | Dự kiến đứng yên tại (11, 9); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 51 |
| 27-28 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 50 |
| 29-30 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 7)) | 49 |
| 31-32 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 48 |
| 33-34 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 47 |
| 35-37 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(12, 4)) | 45 |
| 38-39 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 44 |
| 40-41 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 43 |
| 42-43 | Di chuyển hướng 5 (`5`) | (11, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 42 |
| 44 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 40 |
| 45-47 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 38 |
| 48-50 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 36 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 16) (ô=430)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(23, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(23, 12)
- Mảng hành động đã gửi server: `[3, 0, 0, 1, 2, 1, 1, 1, 1, 0, 1, 1, 1, 1, 2, 4, 3, 3, 3, 4, 3, 2, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(15, 17)) | 37 |
| 3-4 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 36 |
| 5-7 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 34 |
| 8 | Di chuyển hướng 1 (`1`) | (14, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 32 |
| 9-11 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 30 |
| 12 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 28 |
| 13-14 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 51 |
| 15-16 | Di chuyển hướng 1 (`1`) | (16, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 50 |
| 17-18 | Di chuyển hướng 1 (`1`) | (17, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 49 |
| 19-20 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 48 |
| 21-22 | Di chuyển hướng 1 (`1`) | (17, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 47 |
| 23-25 | Di chuyển hướng 1 (`1`) | (17, 8) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 45 |
| 26-28 | Di chuyển hướng 1 (`1`) | (18, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 43 |
| 29-31 | Di chuyển hướng 1 (`1`) | (18, 6) | (19, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 5)) | 41 |
| 32-33 | Di chuyển hướng 2 (`2`) | (19, 5) | (20, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 5)) | 40 |
| 34-35 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 39 |
| 36 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 37 |
| 37 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 35 |
| 38-39 | Di chuyển hướng 3 (`3`) | (20, 8) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 34 |
| 40-41 | Di chuyển hướng 4 (`4`) | (21, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 33 |
| 42-44 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(21, 11)) | 31 |
| 45-46 | Di chuyển hướng 2 (`2`) | (21, 11) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 30 |
| 47-49 | Di chuyển hướng 3 (`3`) | (22, 11) | (22, 12) | Dự kiến đến điểm hẹn tọa độ (22, 12) | 28 |
| 50 | Di chuyển hướng 2 (`2`) | (22, 12) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 26 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (20, 16) (ô=436)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(18, 3))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(18, 3))
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 1, 1, 2, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 5, 5, 5, 4, 4, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (20, 16) | (21, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(21, 16)) | 49 |
| 3-4 | Di chuyển hướng 1 (`1`) | (21, 16) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 48 |
| 5-7 | Di chuyển hướng 1 (`1`) | (22, 15) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 46 |
| 8 | Di chuyển hướng 1 (`1`) | (22, 14) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 44 |
| 9-10 | Di chuyển hướng 1 (`1`) | (23, 13) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 43 |
| 11 | Di chuyển hướng 1 (`1`) | (23, 12) | (24, 11) | Dự kiến đến điểm hẹn tọa độ (24, 11) | 41 |
| 12-13 | Di chuyển hướng 2 (`2`) | (24, 11) | (25, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(25, 11)) | 40 |
| 14-15 | Di chuyển hướng 1 (`1`) | (25, 11) | (25, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(25, 10)) | 39 |
| 16-17 | Di chuyển hướng 0 (`0`) | (25, 10) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(25, 9)) | 38 |
| 18-19 | Di chuyển hướng 0 (`0`) | (25, 9) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 37 |
| 20-21 | Di chuyển hướng 1 (`1`) | (24, 8) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 36 |
| 22-24 | Di chuyển hướng 1 (`1`) | (25, 7) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 34 |
| 25 | Di chuyển hướng 0 (`0`) | (25, 6) | (25, 5) | Dự kiến đến điểm hẹn tọa độ (25, 5) | 32 |
| 26-28 | Di chuyển hướng 1 (`1`) | (25, 5) | (25, 4) | Dự kiến đến điểm hẹn tọa độ (25, 4) | 30 |
| 29-30 | Di chuyển hướng 0 (`0`) | (25, 4) | (25, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(25, 3)) | 29 |
| 31-32 | Di chuyển hướng 0 (`0`) | (25, 3) | (24, 2) | Dự kiến đến điểm hẹn tọa độ (24, 2) | 28 |
| 33-35 | Di chuyển hướng 0 (`0`) | (24, 2) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 26 |
| 36 | Di chuyển hướng 0 (`0`) | (24, 1) | (23, 0) | Dự kiến đến điểm hẹn tọa độ (23, 0) | 24 |
| 37 | Di chuyển hướng 5 (`5`) | (23, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 22 |
| 38-39 | Di chuyển hướng 5 (`5`) | (22, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 21 |
| 40-42 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 0)) | 19 |
| 43-44 | Di chuyển hướng 4 (`4`) | (20, 0) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 18 |
| 45 | Di chuyển hướng 4 (`4`) | (20, 1) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 16 |
| 46-48 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 14 |
| 49-50 | Di chuyển hướng 5 (`5`) | (19, 3) | (18, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 3)) | 13 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 8) (ô=211)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 16)
- Mảng hành động đã gửi server: `[0, 0, 2, 3, 3, 4, 3, 3, 4, 5, 2, 2, 3, 3, 2, 3, 3, 3, 2, 1, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 51 |
| 3-5 | Di chuyển hướng 0 (`0`) | (3, 7) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 51 |
| 6-7 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(3, 6)) | 50 |
| 8-9 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 49 |
| 10-11 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 48 |
| 12-14 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 46 |
| 15-16 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 45 |
| 17 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 43 |
| 18-20 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 41 |
| 21-22 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 12)) | 40 |
| 23-24 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 39 |
| 25-26 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 38 |
| 27-29 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 36 |
| 30-32 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(6, 14)) | 34 |
| 33-34 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 33 |
| 35-37 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 31 |
| 38-40 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 29 |
| 41 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 17)) | 27 |
| 42-43 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 26 |
| 44-46 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 24 |
| 47-49 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 22 |
| 50 | Chờ 1 bước (`-1`) | (11, 16) | (11, 16) | Dự kiến đứng yên tại (11, 16); hướng tới tọa độ (11, 16) | 22 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (25, 5) (ô=155)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(20, 0))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(20, 0))
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 0, 5, 0, 5, 0, 0, 5, -16, 2, 2, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (25, 5) | (24, 6) | Dự kiến đến điểm hẹn tọa độ (24, 6) | 18 |
| 3-5 | Di chuyển hướng 4 (`4`) | (24, 6) | (24, 7) | Dự kiến đến điểm hẹn tọa độ (24, 7) | 16 |
| 6-7 | Di chuyển hướng 5 (`5`) | (24, 7) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 15 |
| 8-9 | Di chuyển hướng 5 (`5`) | (23, 7) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 14 |
| 10-11 | Di chuyển hướng 0 (`0`) | (22, 7) | (21, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(21, 6)) | 13 |
| 12-13 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 12 |
| 14-15 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 5)) | 11 |
| 16-17 | Di chuyển hướng 5 (`5`) | (20, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 5)) | 10 |
| 18-19 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 9 |
| 20-22 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 3)) | 7 |
| 23-24 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 3)) | 6 |
| 25-40 | Chờ 16 bước (`-16`) | (17, 3) | (17, 3) | Dự kiến đứng yên tại (17, 3); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 3)) | 51 |
| 41-42 | Di chuyển hướng 2 (`2`) | (17, 3) | (18, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 3)) | 50 |
| 43-44 | Di chuyển hướng 2 (`2`) | (18, 3) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 49 |
| 45-46 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 48 |
| 47-49 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 46 |
| 50 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 0)) | 44 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (5, 0) (ô=5)
- Nhiên liệu đầu ngày: 13
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 12)
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 4, 4, 4, 4, -1, 1, 0, 1, 0, 3, 3, 3, 3, 3, 2, 5, 4, 4, 4, 4, 4, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (5, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 12 |
| 2-4 | Di chuyển hướng 5 (`5`) | (4, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 10 |
| 5 | Di chuyển hướng 5 (`5`) | (3, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 8 |
| 6-8 | Di chuyển hướng 4 (`4`) | (2, 0) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 6 |
| 9-10 | Di chuyển hướng 4 (`4`) | (2, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 5 |
| 11-13 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 3 |
| 14-15 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 2 |
| 16 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 5)) | 51 |
| 17 | Chờ 1 bước (`-1`) | (0, 5) | (0, 5) | Dự kiến đứng yên tại (0, 5); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 5)) | 51 |
| 18-19 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 50 |
| 20 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đến điểm hẹn tọa độ (0, 3) | 48 |
| 21 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 46 |
| 22 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 1)) | 44 |
| 23-24 | Di chuyển hướng 3 (`3`) | (0, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 43 |
| 25 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 41 |
| 26-27 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 40 |
| 28-29 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 39 |
| 30 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 37 |
| 31-32 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(3, 6)) | 36 |
| 33-34 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 35 |
| 35-36 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 34 |
| 37-39 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 32 |
| 40-42 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 30 |
| 43 | Di chuyển hướng 4 (`4`) | (1, 9) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 28 |
| 44-46 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 26 |
| 47-48 | Di chuyển hướng 3 (`3`) | (0, 11) | (0, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(0, 12)) | 25 |
| 49-50 | Di chuyển hướng 2 (`2`) | (0, 12) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 24 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (20, 16) (ô=436)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(17, 3))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(17, 3))
- Mảng hành động đã gửi server: `[5, 0, 0, 5, 0, 0, 0, 5, 5, 5, 0, 0, 5, 2, 1, 1, 2, 1, 1, 1, 2, 1, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (20, 16) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 51 |
| 3-4 | Di chuyển hướng 0 (`0`) | (19, 16) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 51 |
| 5-7 | Di chuyển hướng 0 (`0`) | (19, 15) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 51 |
| 8-9 | Di chuyển hướng 5 (`5`) | (18, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 51 |
| 10-12 | Di chuyển hướng 0 (`0`) | (17, 14) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 51 |
| 13-14 | Di chuyển hướng 0 (`0`) | (17, 13) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 51 |
| 15-16 | Di chuyển hướng 0 (`0`) | (16, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 51 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 51 |
| 18 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 51 |
| 19-21 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 51 |
| 22 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 51 |
| 23-24 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 51 |
| 25 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 51 |
| 26-27 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 51 |
| 28 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 51 |
| 29-30 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 51 |
| 31 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 51 |
| 32 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 51 |
| 33 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 51 |
| 34-36 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 51 |
| 37-38 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 51 |
| 39-40 | Di chuyển hướng 1 (`1`) | (16, 4) | (17, 3) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 3)) | 51 |
| 41-50 | Chờ 10 bước (`-10`) | (17, 3) | (17, 3) | Dự kiến đứng yên tại (17, 3); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 3)) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (3, 8) (ô=211)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(0, 5))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(0, 5))
- Mảng hành động đã gửi server: `[0, 0, 0, 5, 5, -39]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 51 |
| 3-5 | Di chuyển hướng 0 (`0`) | (3, 7) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 51 |
| 6-7 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 51 |
| 8 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 51 |
| 9-11 | Di chuyển hướng 5 (`5`) | (1, 5) | (0, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 5)) | 51 |
| 12-50 | Chờ 39 bước (`-39`) | (0, 5) | (0, 5) | Dự kiến đứng yên tại (0, 5); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 5)) | 51 |

