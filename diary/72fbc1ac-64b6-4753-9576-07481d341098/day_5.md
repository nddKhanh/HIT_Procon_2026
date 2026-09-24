# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 53
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 5) (ô=137)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(3, 12))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(3, 12))
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 5, 0, 5, 5, 1, 0, 1, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 5, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 35 |
| 2-3 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 34 |
| 4-6 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 32 |
| 7-8 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(3, 6)) | 31 |
| 9-10 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 30 |
| 11-12 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 29 |
| 13 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 27 |
| 14-16 | Di chuyển hướng 5 (`5`) | (1, 5) | (0, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 5)) | 25 |
| 17-18 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 24 |
| 19 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đến điểm hẹn tọa độ (0, 3) | 22 |
| 20 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 20 |
| 21 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 1)) | 18 |
| 22-23 | Di chuyển hướng 3 (`3`) | (0, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 17 |
| 24 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 15 |
| 25-26 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 14 |
| 27-28 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 13 |
| 29 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 11 |
| 30-31 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 10 |
| 32-34 | Di chuyển hướng 3 (`3`) | (3, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 8 |
| 35-37 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 6 |
| 38-39 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 5 |
| 40 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 3 |
| 41-43 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 1 |
| 44-45 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 12)) | 51 |
| 46-52 | Chờ 7 bước (`-7`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 12)) | 51 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (23, 12) (ô=335)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(11, 9))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(11, 9))
- Mảng hành động đã gửi server: `[1, 2, 1, 0, 0, 0, 5, 5, 0, 5, 0, 5, 5, 0, 0, 4, 5, 4, 5, 0, 5, 4, 3, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (23, 12) | (24, 11) | Dự kiến đến điểm hẹn tọa độ (24, 11) | 24 |
| 1-2 | Di chuyển hướng 2 (`2`) | (24, 11) | (25, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(25, 11)) | 23 |
| 3-4 | Di chuyển hướng 1 (`1`) | (25, 11) | (25, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(25, 10)) | 22 |
| 5-6 | Di chuyển hướng 0 (`0`) | (25, 10) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(25, 9)) | 21 |
| 7-8 | Di chuyển hướng 0 (`0`) | (25, 9) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 20 |
| 9-10 | Di chuyển hướng 0 (`0`) | (24, 8) | (24, 7) | Dự kiến đến điểm hẹn tọa độ (24, 7) | 19 |
| 11-12 | Di chuyển hướng 5 (`5`) | (24, 7) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 18 |
| 13-14 | Di chuyển hướng 5 (`5`) | (23, 7) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 17 |
| 15-16 | Di chuyển hướng 0 (`0`) | (22, 7) | (21, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(21, 6)) | 16 |
| 17-18 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 15 |
| 19-20 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 5)) | 14 |
| 21-22 | Di chuyển hướng 5 (`5`) | (20, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 5)) | 13 |
| 23-24 | Di chuyển hướng 5 (`5`) | (19, 5) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 12 |
| 25-26 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 11 |
| 27 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 3)) | 9 |
| 28-29 | Di chuyển hướng 4 (`4`) | (17, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 8 |
| 30-31 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 7 |
| 32-33 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 6 |
| 34-36 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 4 |
| 37-39 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 2 |
| 40-41 | Di chuyển hướng 5 (`5`) | (13, 4) | (12, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(12, 4)) | 51 |
| 42-43 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 50 |
| 44-46 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 48 |
| 47-48 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 7)) | 47 |
| 49-50 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 46 |
| 51-52 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 45 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (18, 3) (ô=96)
- Nhiên liệu đầu ngày: 13
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(12, 4))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(12, 4))
- Mảng hành động đã gửi server: `[3, 3, 2, 4, 3, 3, 3, 4, 3, -1, 5, 5, 0, 5, 0, 0, 0, 5, 5, 5, 5, 4, 4, 1, 1, 1, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 12 |
| 2-4 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 5)) | 51 |
| 5-6 | Di chuyển hướng 2 (`2`) | (19, 5) | (20, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 5)) | 50 |
| 7-8 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 49 |
| 9 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 47 |
| 10 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 45 |
| 11-12 | Di chuyển hướng 3 (`3`) | (20, 8) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 44 |
| 13-14 | Di chuyển hướng 4 (`4`) | (21, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 51 |
| 15-17 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(21, 11)) | 49 |
| 18 | Chờ 1 bước (`-1`) | (21, 11) | (21, 11) | Dự kiến đứng yên tại (21, 11); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(21, 11)) | 49 |
| 19-20 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 48 |
| 21-22 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 47 |
| 23 | Di chuyển hướng 0 (`0`) | (19, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 45 |
| 24-26 | Di chuyển hướng 5 (`5`) | (18, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 43 |
| 27-28 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 42 |
| 29-30 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 41 |
| 31-32 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 40 |
| 33 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 38 |
| 34-35 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 37 |
| 36 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 35 |
| 37 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 7)) | 33 |
| 38-39 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 32 |
| 40-41 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 31 |
| 42-43 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 30 |
| 44-45 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 7)) | 29 |
| 46-47 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 28 |
| 48-49 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 27 |
| 50-52 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(12, 4)) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 16) (ô=427)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(0, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(0, 10)
- Mảng hành động đã gửi server: `[5, 4, 5, 0, 0, 0, 5, 0, 5, 0, 5, -1, 2, 1, 0, 0, 5, 4, 5, 4, 4, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 21 |
| 2-4 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 19 |
| 5-7 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 17)) | 17 |
| 8-9 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 16 |
| 10 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 14 |
| 11-13 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 12 |
| 14-16 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(6, 14)) | 10 |
| 17-18 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 9 |
| 19-21 | Di chuyển hướng 5 (`5`) | (6, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 7 |
| 22-24 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 5 |
| 25-26 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 12)) | 51 |
| 27 | Chờ 1 bước (`-1`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 12)) | 51 |
| 28-29 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 50 |
| 30-31 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 49 |
| 32-34 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 47 |
| 35 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 45 |
| 36-37 | Di chuyển hướng 5 (`5`) | (4, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 44 |
| 38-39 | Di chuyển hướng 4 (`4`) | (3, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 43 |
| 40-41 | Di chuyển hướng 5 (`5`) | (2, 10) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 42 |
| 42-44 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 40 |
| 45-47 | Di chuyển hướng 4 (`4`) | (1, 11) | (0, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(0, 12)) | 38 |
| 48-49 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 37 |
| 50-51 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 36 |
| 52 | Chờ 1 bước (`-1`) | (0, 10) | (0, 10) | Dự kiến đứng yên tại (0, 10); hướng tới tọa độ (0, 10) | 36 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (20, 0) (ô=20)
- Nhiên liệu đầu ngày: 44
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(15, 17))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(15, 17))
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 4, 5, 4, 4, 4, 4, 4, 5, 5, 4, 5, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (20, 0) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 43 |
| 2 | Di chuyển hướng 3 (`3`) | (20, 1) | (20, 2) | Dự kiến đến điểm hẹn tọa độ (20, 2) | 41 |
| 3-4 | Di chuyển hướng 3 (`3`) | (20, 2) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 40 |
| 5-6 | Di chuyển hướng 3 (`3`) | (21, 3) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 39 |
| 7 | Di chuyển hướng 3 (`3`) | (21, 4) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 37 |
| 8-10 | Di chuyển hướng 3 (`3`) | (22, 5) | (22, 6) | Dự kiến đến điểm hẹn tọa độ (22, 6) | 35 |
| 11-13 | Di chuyển hướng 3 (`3`) | (22, 6) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 33 |
| 14-15 | Di chuyển hướng 2 (`2`) | (23, 7) | (24, 7) | Dự kiến đến điểm hẹn tọa độ (24, 7) | 32 |
| 16-17 | Di chuyển hướng 3 (`3`) | (24, 7) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 31 |
| 18-19 | Di chuyển hướng 3 (`3`) | (24, 8) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(25, 9)) | 30 |
| 20-21 | Di chuyển hướng 3 (`3`) | (25, 9) | (25, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(25, 10)) | 29 |
| 22-23 | Di chuyển hướng 4 (`4`) | (25, 10) | (25, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(25, 11)) | 28 |
| 24-25 | Di chuyển hướng 5 (`5`) | (25, 11) | (24, 11) | Dự kiến đến điểm hẹn tọa độ (24, 11) | 27 |
| 26-27 | Di chuyển hướng 4 (`4`) | (24, 11) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 26 |
| 28 | Di chuyển hướng 4 (`4`) | (23, 12) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 24 |
| 29-30 | Di chuyển hướng 4 (`4`) | (23, 13) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 23 |
| 31 | Di chuyển hướng 4 (`4`) | (22, 14) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 21 |
| 32-34 | Di chuyển hướng 4 (`4`) | (22, 15) | (21, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(21, 16)) | 19 |
| 35-36 | Di chuyển hướng 5 (`5`) | (21, 16) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 18 |
| 37-39 | Di chuyển hướng 5 (`5`) | (20, 16) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 16 |
| 40-41 | Di chuyển hướng 4 (`4`) | (19, 16) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 15 |
| 42-43 | Di chuyển hướng 5 (`5`) | (19, 17) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 14 |
| 44-46 | Di chuyển hướng 5 (`5`) | (18, 17) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 12 |
| 47-48 | Di chuyển hướng 5 (`5`) | (17, 17) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 11 |
| 49-51 | Di chuyển hướng 5 (`5`) | (16, 17) | (15, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(15, 17)) | 9 |
| 52 | Chờ 1 bước (`-1`) | (15, 17) | (15, 17) | Dự kiến đứng yên tại (15, 17); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(15, 17)) | 9 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (1, 12) (ô=313)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 7)
- Mảng hành động đã gửi server: `[0, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 4, 4, 4, 4, 4, 4, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (1, 12) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 23 |
| 2-4 | Di chuyển hướng 1 (`1`) | (1, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 21 |
| 5-7 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 19 |
| 8-9 | Di chuyển hướng 1 (`1`) | (2, 10) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 18 |
| 10-11 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 51 |
| 12-14 | Di chuyển hướng 1 (`1`) | (3, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 49 |
| 15-16 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 48 |
| 17-18 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 47 |
| 19-21 | Di chuyển hướng 1 (`1`) | (5, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 45 |
| 22-24 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 43 |
| 25-26 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 42 |
| 27-29 | Di chuyển hướng 0 (`0`) | (6, 2) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 40 |
| 30-31 | Di chuyển hướng 0 (`0`) | (6, 1) | (5, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 0)) | 39 |
| 32-33 | Di chuyển hướng 4 (`4`) | (5, 0) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 38 |
| 34-36 | Di chuyển hướng 4 (`4`) | (5, 1) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 36 |
| 37-39 | Di chuyển hướng 4 (`4`) | (4, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 34 |
| 40-42 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 32 |
| 43-45 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 30 |
| 46-48 | Di chuyển hướng 4 (`4`) | (3, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 28 |
| 49-50 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 27 |
| 51-52 | Chờ 2 bước (`-2`) | (2, 7) | (2, 7) | Dự kiến đứng yên tại (2, 7); hướng tới tọa độ (2, 7) | 27 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (17, 3) (ô=95)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(12, 4))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(12, 4))
- Mảng hành động đã gửi server: `[3, 3, 2, 3, 3, 3, 3, 4, 3, 5, 5, 0, 5, 0, 0, 5, 0, 0, 0, 0, 5, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 51 |
| 2 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 51 |
| 3-4 | Di chuyển hướng 2 (`2`) | (18, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 5)) | 51 |
| 5-6 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 51 |
| 7 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 51 |
| 8 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 51 |
| 9-10 | Di chuyển hướng 3 (`3`) | (20, 8) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 51 |
| 11-12 | Di chuyển hướng 4 (`4`) | (21, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 51 |
| 13-15 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(21, 11)) | 51 |
| 16-17 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 51 |
| 18-19 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 51 |
| 20 | Di chuyển hướng 0 (`0`) | (19, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 51 |
| 21-23 | Di chuyển hướng 5 (`5`) | (18, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 51 |
| 24-25 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 51 |
| 26-27 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 51 |
| 28-29 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 51 |
| 30 | Di chuyển hướng 0 (`0`) | (15, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 51 |
| 31-32 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 51 |
| 33 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 51 |
| 34-36 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 51 |
| 37-38 | Di chuyển hướng 5 (`5`) | (13, 4) | (12, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(12, 4)) | 51 |
| 39-52 | Chờ 14 bước (`-14`) | (12, 4) | (12, 4) | Dự kiến đứng yên tại (12, 4); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(12, 4)) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (0, 5) (ô=130)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(3, 12))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(3, 12))
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 3, 3, 3, 3, 4, 5, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 5) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 51 |
| 2-4 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 51 |
| 5 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 51 |
| 6-7 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 51 |
| 8-10 | Di chuyển hướng 3 (`3`) | (3, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 51 |
| 11-13 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 51 |
| 14-15 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 51 |
| 16 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 51 |
| 17-19 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 51 |
| 20-21 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 12)) | 51 |
| 22-52 | Chờ 31 bước (`-31`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 12)) | 51 |

