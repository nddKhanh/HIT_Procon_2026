# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 50
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 0) (ô=20)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 5)
- Mảng hành động đã gửi server: `[3, 4, 3, 3, 3, 4, 5, 0, 5, 0, 0, 5, 4, 5, 4, 4, 4, 5, 5, 4, 4, 1, 1, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (20, 0) | (21, 1) | Dự kiến đến điểm hẹn tọa độ (21, 1) | 37 |
| 2-3 | Di chuyển hướng 4 (`4`) | (21, 1) | (20, 2) | Dự kiến đến điểm hẹn tọa độ (20, 2) | 36 |
| 4-5 | Di chuyển hướng 3 (`3`) | (20, 2) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 35 |
| 6-7 | Di chuyển hướng 3 (`3`) | (21, 3) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 34 |
| 8 | Di chuyển hướng 3 (`3`) | (21, 4) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 32 |
| 9-11 | Di chuyển hướng 4 (`4`) | (22, 5) | (21, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(21, 6)) | 30 |
| 12-13 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 29 |
| 14-15 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 5)) | 28 |
| 16-17 | Di chuyển hướng 5 (`5`) | (20, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 5)) | 27 |
| 18-19 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 26 |
| 20-22 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 3)) | 24 |
| 23-24 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 3)) | 23 |
| 25-26 | Di chuyển hướng 4 (`4`) | (17, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 22 |
| 27-28 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 21 |
| 29-30 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 20 |
| 31-33 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 18 |
| 34 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 16 |
| 35 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 14 |
| 36 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 7)) | 12 |
| 37-38 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 11 |
| 39-40 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 10 |
| 41-42 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 9 |
| 43-44 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 7)) | 8 |
| 45-46 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 7 |
| 47-48 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 6 |
| 49 | Chờ 1 bước (`-1`) | (12, 5) | (12, 5) | Dự kiến đứng yên tại (12, 5); hướng tới tọa độ (12, 5) | 6 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (24, 3) (ô=102)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 16)
- Mảng hành động đã gửi server: `[4, 3, 3, 4, 3, 3, 3, 4, 5, 4, 5, 0, 5, -1, 5, 5, 4, 5, 4, 4, 4, 4, 4, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (24, 3) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 22 |
| 3 | Di chuyển hướng 3 (`3`) | (23, 4) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 20 |
| 4-6 | Di chuyển hướng 3 (`3`) | (24, 5) | (24, 6) | Dự kiến đến điểm hẹn tọa độ (24, 6) | 18 |
| 7-9 | Di chuyển hướng 4 (`4`) | (24, 6) | (24, 7) | Dự kiến đến điểm hẹn tọa độ (24, 7) | 16 |
| 10-11 | Di chuyển hướng 3 (`3`) | (24, 7) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 15 |
| 12-13 | Di chuyển hướng 3 (`3`) | (24, 8) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(25, 9)) | 14 |
| 14-15 | Di chuyển hướng 3 (`3`) | (25, 9) | (25, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(25, 10)) | 13 |
| 16-17 | Di chuyển hướng 4 (`4`) | (25, 10) | (25, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(25, 11)) | 12 |
| 18-19 | Di chuyển hướng 5 (`5`) | (25, 11) | (24, 11) | Dự kiến đến điểm hẹn tọa độ (24, 11) | 11 |
| 20-21 | Di chuyển hướng 4 (`4`) | (24, 11) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 10 |
| 22 | Di chuyển hướng 5 (`5`) | (23, 12) | (22, 12) | Dự kiến đến điểm hẹn tọa độ (22, 12) | 8 |
| 23 | Di chuyển hướng 0 (`0`) | (22, 12) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 6 |
| 24-26 | Di chuyển hướng 5 (`5`) | (22, 11) | (21, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(21, 11)) | 4 |
| 27 | Chờ 1 bước (`-1`) | (21, 11) | (21, 11) | Dự kiến đứng yên tại (21, 11); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(21, 11)) | 4 |
| 28-29 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 3 |
| 30-31 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 51 |
| 32 | Di chuyển hướng 4 (`4`) | (19, 11) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 49 |
| 33-34 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 48 |
| 35-37 | Di chuyển hướng 4 (`4`) | (17, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 46 |
| 38-39 | Di chuyển hướng 4 (`4`) | (17, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 45 |
| 40-42 | Di chuyển hướng 4 (`4`) | (16, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 43 |
| 43-45 | Di chuyển hướng 4 (`4`) | (16, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 41 |
| 46-47 | Di chuyển hướng 4 (`4`) | (15, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(15, 17)) | 40 |
| 48-49 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 39 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (17, 14) (ô=381)
- Nhiên liệu đầu ngày: 9
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 16)
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 2, -25, 3, 3, 3, 4, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (17, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 7 |
| 3-5 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 5 |
| 6-7 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 4 |
| 8 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 2 |
| 9-10 | Di chuyển hướng 2 (`2`) | (20, 11) | (21, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(21, 11)) | 1 |
| 11-35 | Chờ 25 bước (`-25`) | (21, 11) | (21, 11) | Dự kiến đứng yên tại (21, 11); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(21, 11)) | 51 |
| 36-37 | Di chuyển hướng 3 (`3`) | (21, 11) | (21, 12) | Dự kiến đến điểm hẹn tọa độ (21, 12) | 51 |
| 38-40 | Di chuyển hướng 3 (`3`) | (21, 12) | (22, 13) | Dự kiến đến điểm hẹn tọa độ (22, 13) | 51 |
| 41-42 | Di chuyển hướng 3 (`3`) | (22, 13) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 50 |
| 43 | Di chuyển hướng 4 (`4`) | (22, 14) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 48 |
| 44-46 | Di chuyển hướng 4 (`4`) | (22, 15) | (21, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(21, 16)) | 46 |
| 47-48 | Di chuyển hướng 5 (`5`) | (21, 16) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 51 |
| 49 | Chờ 1 bước (`-1`) | (20, 16) | (20, 16) | Dự kiến đứng yên tại (20, 16); hướng tới tọa độ (20, 16) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 12) (ô=312)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 8)
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 2, 2, 2, 3, 2, 2, 3, 0, 0, 0, 5, 0, 5, 0, 5, 2, 1, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 12) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 35 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 34 |
| 4-5 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 33 |
| 6-8 | Di chuyển hướng 3 (`3`) | (2, 14) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 31 |
| 9 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 29 |
| 10 | Di chuyển hướng 2 (`2`) | (4, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 27 |
| 11 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 25 |
| 12-14 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 23 |
| 15-16 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 22 |
| 17-18 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 21 |
| 19 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 17)) | 19 |
| 20-21 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 18 |
| 22 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 16 |
| 23-25 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 14 |
| 26-28 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(6, 14)) | 12 |
| 29-30 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 11 |
| 31-33 | Di chuyển hướng 5 (`5`) | (6, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 9 |
| 34-36 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 7 |
| 37-38 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 12)) | 6 |
| 39-40 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 5 |
| 41-42 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 4 |
| 43-45 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 2 |
| 46 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 51 |
| 47-48 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 51 |
| 49 | Chờ 1 bước (`-1`) | (3, 8) | (3, 8) | Dự kiến đứng yên tại (3, 8); hướng tới tọa độ (3, 8) | 51 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 4) (ô=115)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(25, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(25, 5)
- Mảng hành động đã gửi server: `[2, 2, 3, 2, 1, 2, 2, 3, 2, 2, 5, 0, 0, 5, 2, 2, 2, 2, 2, 2, 2, 2, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(12, 4)) | 50 |
| 2-3 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 49 |
| 4-5 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 48 |
| 6-8 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 46 |
| 9-11 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 44 |
| 12-13 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 43 |
| 14-15 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 42 |
| 16 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 40 |
| 17-18 | Di chuyển hướng 2 (`2`) | (18, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 5)) | 39 |
| 19-20 | Di chuyển hướng 2 (`2`) | (19, 5) | (20, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 5)) | 38 |
| 21-22 | Di chuyển hướng 5 (`5`) | (20, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 5)) | 37 |
| 23-24 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 36 |
| 25-27 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 3)) | 34 |
| 28-29 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 3)) | 33 |
| 30-31 | Di chuyển hướng 2 (`2`) | (17, 3) | (18, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 3)) | 32 |
| 32-33 | Di chuyển hướng 2 (`2`) | (18, 3) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 31 |
| 34-35 | Di chuyển hướng 2 (`2`) | (19, 3) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 30 |
| 36 | Di chuyển hướng 2 (`2`) | (20, 3) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 28 |
| 37-38 | Di chuyển hướng 2 (`2`) | (21, 3) | (22, 3) | Dự kiến đến điểm hẹn tọa độ (22, 3) | 27 |
| 39-40 | Di chuyển hướng 2 (`2`) | (22, 3) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 26 |
| 41 | Di chuyển hướng 2 (`2`) | (23, 3) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 24 |
| 42-44 | Di chuyển hướng 2 (`2`) | (24, 3) | (25, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(25, 3)) | 22 |
| 45-46 | Di chuyển hướng 3 (`3`) | (25, 3) | (25, 4) | Dự kiến đến điểm hẹn tọa độ (25, 4) | 21 |
| 47-48 | Di chuyển hướng 4 (`4`) | (25, 4) | (25, 5) | Dự kiến đến điểm hẹn tọa độ (25, 5) | 20 |
| 49 | Chờ 1 bước (`-1`) | (25, 5) | (25, 5) | Dự kiến đứng yên tại (25, 5); hướng tới tọa độ (25, 5) | 20 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (6, 1) (ô=32)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(5, 0))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(5, 0))
- Mảng hành động đã gửi server: `[5, 4, 4, 5, 4, 5, 5, 4, 2, 2, 3, 2, 5, 0, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 50 |
| 2-4 | Di chuyển hướng 4 (`4`) | (5, 1) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 48 |
| 5-7 | Di chuyển hướng 4 (`4`) | (4, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 46 |
| 8-10 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 44 |
| 11-13 | Di chuyển hướng 4 (`4`) | (3, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 42 |
| 14-15 | Di chuyển hướng 5 (`5`) | (2, 4) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 41 |
| 16-17 | Di chuyển hướng 5 (`5`) | (1, 4) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 40 |
| 18 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 5)) | 38 |
| 19-20 | Di chuyển hướng 2 (`2`) | (0, 5) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 37 |
| 21-23 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 35 |
| 24 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 33 |
| 25-26 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(3, 6)) | 32 |
| 27-28 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 31 |
| 29-30 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 30 |
| 31 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 28 |
| 32-33 | Di chuyển hướng 0 (`0`) | (1, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 27 |
| 34-35 | Di chuyển hướng 0 (`0`) | (1, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 26 |
| 36 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 1)) | 24 |
| 37-38 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đến điểm hẹn tọa độ (0, 0) | 23 |
| 39-41 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 21 |
| 42 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 19 |
| 43-45 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 17 |
| 46 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 15 |
| 47-49 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 0)) | 13 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (6, 1) (ô=32)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 16)
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 3, 3, 3, 3, 2, 2, 2, 3, 2, 2, 3, 3, 2, 3, 2, 2, 3, 3, 4, 4, 4, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 51 |
| 2-4 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 51 |
| 5 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 51 |
| 6-8 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 51 |
| 9-10 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 51 |
| 11 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 51 |
| 12 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 51 |
| 13 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 51 |
| 14-15 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 7)) | 51 |
| 16-17 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 51 |
| 18 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 51 |
| 19 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 51 |
| 20-21 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 51 |
| 22 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 51 |
| 23-24 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 51 |
| 25-26 | Di chuyển hướng 3 (`3`) | (17, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 51 |
| 27-28 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 51 |
| 29-31 | Di chuyển hướng 3 (`3`) | (18, 10) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 51 |
| 32 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 51 |
| 33-34 | Di chuyển hướng 2 (`2`) | (20, 11) | (21, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(21, 11)) | 51 |
| 35-36 | Di chuyển hướng 3 (`3`) | (21, 11) | (21, 12) | Dự kiến đến điểm hẹn tọa độ (21, 12) | 51 |
| 37-39 | Di chuyển hướng 3 (`3`) | (21, 12) | (22, 13) | Dự kiến đến điểm hẹn tọa độ (22, 13) | 51 |
| 40-41 | Di chuyển hướng 4 (`4`) | (22, 13) | (21, 14) | Dự kiến đến điểm hẹn tọa độ (21, 14) | 51 |
| 42-44 | Di chuyển hướng 4 (`4`) | (21, 14) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 51 |
| 45-46 | Di chuyển hướng 4 (`4`) | (21, 15) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 51 |
| 47-49 | Chờ 3 bước (`-3`) | (20, 16) | (20, 16) | Dự kiến đứng yên tại (20, 16); hướng tới tọa độ (20, 16) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (11, 4) (ô=115)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 8)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 5, 5, 5, 5, 5, -29, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 51 |
| 2-3 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 51 |
| 4 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 51 |
| 5 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 51 |
| 6 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 51 |
| 7-8 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 51 |
| 9-10 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 51 |
| 11-12 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 51 |
| 13-14 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 51 |
| 15-17 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 51 |
| 18-46 | Chờ 29 bước (`-29`) | (4, 9) | (4, 9) | Dự kiến đứng yên tại (4, 9); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 51 |
| 47-48 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 51 |
| 49 | Chờ 1 bước (`-1`) | (3, 8) | (3, 8) | Dự kiến đứng yên tại (3, 8); hướng tới tọa độ (3, 8) | 51 |

