# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 44
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (23, 15) (ô=413)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 10)
- Mảng hành động đã gửi server: `[5, 4, 0, 5, 0, 0, 1, 1, 1, 2, 1, 1, 0, 0, 0, 0, 3, 3, 3, 3, 4, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (23, 15) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 50 |
| 2 | Di chuyển hướng 4 (`4`) | (22, 15) | (21, 16) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(21, 16)) | 48 |
| 3-4 | Di chuyển hướng 0 (`0`) | (21, 16) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 47 |
| 5-7 | Di chuyển hướng 5 (`5`) | (21, 15) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 45 |
| 8 | Di chuyển hướng 0 (`0`) | (20, 15) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 43 |
| 9-11 | Di chuyển hướng 0 (`0`) | (19, 14) | (19, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 41 |
| 12-13 | Di chuyển hướng 1 (`1`) | (19, 13) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 40 |
| 14 | Di chuyển hướng 1 (`1`) | (19, 12) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 38 |
| 15-16 | Di chuyển hướng 1 (`1`) | (20, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 37 |
| 17-18 | Di chuyển hướng 2 (`2`) | (20, 10) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 51 |
| 19-21 | Di chuyển hướng 1 (`1`) | (21, 10) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 49 |
| 22-23 | Di chuyển hướng 1 (`1`) | (22, 9) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 48 |
| 24-25 | Di chuyển hướng 0 (`0`) | (22, 8) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 47 |
| 26 | Di chuyển hướng 0 (`0`) | (22, 7) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 45 |
| 27-29 | Di chuyển hướng 0 (`0`) | (21, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 43 |
| 30 | Di chuyển hướng 0 (`0`) | (21, 5) | (20, 4) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(20, 4)) | 41 |
| 31-32 | Di chuyển hướng 3 (`3`) | (20, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 40 |
| 33 | Di chuyển hướng 3 (`3`) | (21, 5) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 38 |
| 34-36 | Di chuyển hướng 3 (`3`) | (21, 6) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 36 |
| 37 | Di chuyển hướng 3 (`3`) | (22, 7) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 34 |
| 38-39 | Di chuyển hướng 4 (`4`) | (22, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 33 |
| 40-41 | Di chuyển hướng 4 (`4`) | (22, 9) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 32 |
| 42-43 | Chờ 2 bước (`-2`) | (21, 10) | (21, 10) | Dự kiến đứng yên tại (21, 10); hướng tới tọa độ (21, 10) | 32 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (10, 11) (ô=296)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 1)
- Mảng hành động đã gửi server: `[0, 0, 1, 2, 1, 0, 5, 0, 1, 0, 1, 5, 5, 5, 5, 0, 5, 5, 5, 0, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 50 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 49 |
| 4-5 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 48 |
| 6 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 46 |
| 7 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 44 |
| 8-10 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 6)) | 42 |
| 11-12 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 41 |
| 13 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 39 |
| 14-16 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 4)) | 37 |
| 17-18 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 36 |
| 19-20 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 35 |
| 21-22 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 34 |
| 23-25 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 32 |
| 26-28 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 30 |
| 29-30 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 29 |
| 31 | Di chuyển hướng 0 (`0`) | (5, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 27 |
| 32-34 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 49 |
| 35-36 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 48 |
| 37-38 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 47 |
| 39-40 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 0)) | 46 |
| 41-42 | Di chuyển hướng 4 (`4`) | (1, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 51 |
| 43 | Chờ 1 bước (`-1`) | (1, 1) | (1, 1) | Dự kiến đứng yên tại (1, 1); hướng tới tọa độ (1, 1) | 51 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 6) (ô=159)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 14)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 2, 3, 2, 3, 2, 2, 3, 3, 2, 3, 3, 3, 2, 2, 1, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 6)) | 50 |
| 2-3 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 49 |
| 4-6 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 6)) | 47 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 46 |
| 9 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 44 |
| 10-11 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 43 |
| 12-14 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 41 |
| 15 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 39 |
| 16 | Di chuyển hướng 3 (`3`) | (10, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 37 |
| 17-18 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 36 |
| 19-20 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 35 |
| 21-22 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 34 |
| 23 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 32 |
| 24-26 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 30 |
| 27-28 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 29 |
| 29-31 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 27 |
| 32 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 14)) | 25 |
| 33-34 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 24 |
| 35-37 | Di chuyển hướng 2 (`2`) | (17, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 22 |
| 38-40 | Di chuyển hướng 1 (`1`) | (18, 14) | (19, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 20 |
| 41-42 | Di chuyển hướng 3 (`3`) | (19, 13) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 51 |
| 43 | Chờ 1 bước (`-1`) | (19, 14) | (19, 14) | Dự kiến đứng yên tại (19, 14); hướng tới tọa độ (19, 14) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 12) (ô=319)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(1, 7))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(1, 7))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 3, 3, 4, 3, 0, 1, 0, 0, 0, 1, 1, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 50 |
| 2-3 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 49 |
| 4 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 47 |
| 5-6 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 46 |
| 7-9 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 44 |
| 10-11 | Di chuyển hướng 5 (`5`) | (2, 12) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 43 |
| 12-14 | Di chuyển hướng 5 (`5`) | (1, 12) | (0, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 12)) | 41 |
| 15-16 | Di chuyển hướng 3 (`3`) | (0, 12) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 40 |
| 17-19 | Di chuyển hướng 3 (`3`) | (1, 13) | (1, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(1, 14)) | 38 |
| 20-21 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 37 |
| 22 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 16)) | 35 |
| 23-24 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 34 |
| 25 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(1, 14)) | 32 |
| 26-27 | Di chuyển hướng 0 (`0`) | (1, 14) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 31 |
| 28-30 | Di chuyển hướng 0 (`0`) | (1, 13) | (0, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 12)) | 29 |
| 31-32 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 28 |
| 33-35 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 10)) | 26 |
| 36-37 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 25 |
| 38-39 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 24 |
| 40-42 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(1, 7)) | 22 |
| 43 | Chờ 1 bước (`-1`) | (1, 7) | (1, 7) | Dự kiến đứng yên tại (1, 7); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(1, 7)) | 22 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (14, 16) (ô=430)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 4)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 0, 0, 5, 0, 1, 2, 3, 2, 1, 1, 2, 2, 1, 2, 2, 2, 0, 1, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 50 |
| 2-4 | Di chuyển hướng 0 (`0`) | (14, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 48 |
| 5-7 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 46 |
| 8 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 44 |
| 9-10 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 43 |
| 11-12 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 42 |
| 13 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 40 |
| 14 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 38 |
| 15-16 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 50 |
| 17-18 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 50 |
| 19 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 48 |
| 20 | Di chuyển hướng 3 (`3`) | (10, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 46 |
| 21-22 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 45 |
| 23-24 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 44 |
| 25-26 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 43 |
| 27 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 41 |
| 28 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 39 |
| 29-31 | Di chuyển hướng 1 (`1`) | (15, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 37 |
| 32-34 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 35 |
| 35-36 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 34 |
| 37 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 6)) | 32 |
| 38-39 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 31 |
| 40-41 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 4)) | 30 |
| 42-43 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 29 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (12, 16) (ô=428)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(11, 0))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(11, 0))
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 5, 0, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 0, 0, 0, 1, 1, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 50 |
| 2-4 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 48 |
| 5-7 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 46 |
| 8-9 | Di chuyển hướng 4 (`4`) | (9, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 45 |
| 10-11 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 17)) | 44 |
| 12-13 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 43 |
| 14-15 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 42 |
| 16-17 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 41 |
| 18 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 39 |
| 19-20 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 38 |
| 21 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 36 |
| 22-23 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 35 |
| 24 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 33 |
| 25-26 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 32 |
| 27-28 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 31 |
| 29-30 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 30 |
| 31 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 28 |
| 32-33 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 27 |
| 34-35 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 26 |
| 36-37 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 25 |
| 38-39 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 24 |
| 40 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 22 |
| 41-42 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 0)) | 21 |
| 43 | Chờ 1 bước (`-1`) | (11, 0) | (11, 0) | Dự kiến đứng yên tại (11, 0); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 0)) | 21 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (15, 11) (ô=301)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 14)
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 2, 2, 2, -4, 5, 4, 4, 4, 3, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 51 |
| 2-3 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 51 |
| 4-5 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 51 |
| 6-8 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 51 |
| 9-10 | Di chuyển hướng 2 (`2`) | (18, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 51 |
| 11-12 | Di chuyển hướng 2 (`2`) | (19, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 51 |
| 13-14 | Di chuyển hướng 2 (`2`) | (20, 10) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 51 |
| 15-18 | Chờ 4 bước (`-4`) | (21, 10) | (21, 10) | Dự kiến đứng yên tại (21, 10); hướng tới tọa độ (21, 10) | 51 |
| 19-21 | Di chuyển hướng 5 (`5`) | (21, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 51 |
| 22-23 | Di chuyển hướng 4 (`4`) | (20, 10) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 51 |
| 24-25 | Di chuyển hướng 4 (`4`) | (20, 11) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 51 |
| 26 | Di chuyển hướng 4 (`4`) | (19, 12) | (19, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 51 |
| 27-28 | Di chuyển hướng 3 (`3`) | (19, 13) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 51 |
| 29-43 | Chờ 15 bước (`-15`) | (19, 14) | (19, 14) | Dự kiến đứng yên tại (19, 14); hướng tới tọa độ (19, 14) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (13, 17) (ô=455)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 1)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 1, 0, 5, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 51 |
| 2-3 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 51 |
| 4-5 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 51 |
| 6-8 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 51 |
| 9-11 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 51 |
| 12-13 | Di chuyển hướng 0 (`0`) | (10, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 51 |
| 14-15 | Di chuyển hướng 0 (`0`) | (10, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 51 |
| 16-17 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 51 |
| 18-19 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 51 |
| 20-22 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 51 |
| 23-24 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 51 |
| 25 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 6)) | 51 |
| 26-27 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 51 |
| 28 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 51 |
| 29-30 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 51 |
| 31-32 | Di chuyển hướng 1 (`1`) | (5, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 51 |
| 33 | Di chuyển hướng 0 (`0`) | (5, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 51 |
| 34-36 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 51 |
| 37-38 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 51 |
| 39-40 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 51 |
| 41-42 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 51 |
| 43 | Chờ 1 bước (`-1`) | (1, 1) | (1, 1) | Dự kiến đứng yên tại (1, 1); hướng tới tọa độ (1, 1) | 51 |

