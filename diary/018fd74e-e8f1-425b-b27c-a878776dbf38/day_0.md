# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 46
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 2) (ô=71)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(9, 4))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(9, 4))
- Mảng hành động đã gửi server: `[3, 4, 4, 0, 0, 5, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (21, 2) | (22, 3) | Dự kiến đến điểm hẹn tọa độ (22, 3) | 52 |
| 2 | Di chuyển hướng 4 (`4`) | (22, 3) | (21, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 4)) | 50 |
| 3-4 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 5)) | 49 |
| 5-6 | Di chuyển hướng 0 (`0`) | (21, 5) | (20, 4) | Dự kiến đến điểm hẹn tọa độ (20, 4) | 48 |
| 7-8 | Di chuyển hướng 0 (`0`) | (20, 4) | (20, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(20, 3)) | 47 |
| 9-10 | Di chuyển hướng 5 (`5`) | (20, 3) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 46 |
| 11 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 44 |
| 12-13 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 43 |
| 14-15 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 42 |
| 16 | Di chuyển hướng 4 (`4`) | (17, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 40 |
| 17-18 | Di chuyển hướng 4 (`4`) | (17, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 39 |
| 19 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(15, 8)) | 37 |
| 20-21 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 36 |
| 22-23 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 35 |
| 24-25 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 34 |
| 26 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 32 |
| 27-28 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 31 |
| 29-30 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 30 |
| 31 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 28 |
| 32-33 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(9, 4)) | 27 |
| 34-35 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 26 |
| 36-37 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 25 |
| 38-39 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 1)) | 24 |
| 40-41 | Di chuyển hướng 3 (`3`) | (8, 1) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 23 |
| 42-43 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 22 |
| 44-45 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(9, 4)) | 21 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 6) (ô=168)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 11)
- Mảng hành động đã gửi server: `[0, 0, 5, 0, 0, 0, 3, 3, 2, 2, 2, 2, 2, 3, 4, 3, 2, 2, 4, 4, 4, 4, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 52 |
| 2-3 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 51 |
| 4 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 49 |
| 5-6 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 48 |
| 7-8 | Di chuyển hướng 0 (`0`) | (16, 3) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 47 |
| 9-10 | Di chuyển hướng 0 (`0`) | (15, 2) | (15, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(15, 1)) | 46 |
| 11-12 | Di chuyển hướng 3 (`3`) | (15, 1) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 45 |
| 13-14 | Di chuyển hướng 3 (`3`) | (15, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 44 |
| 15-16 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 43 |
| 17-18 | Di chuyển hướng 2 (`2`) | (17, 3) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 42 |
| 19-20 | Di chuyển hướng 2 (`2`) | (18, 3) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 41 |
| 21 | Di chuyển hướng 2 (`2`) | (19, 3) | (20, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(20, 3)) | 39 |
| 22-23 | Di chuyển hướng 2 (`2`) | (20, 3) | (21, 3) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(21, 3)) | 38 |
| 24-25 | Di chuyển hướng 3 (`3`) | (21, 3) | (21, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 4)) | 37 |
| 26-27 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 5)) | 36 |
| 28-29 | Di chuyển hướng 3 (`3`) | (21, 5) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 35 |
| 30-31 | Di chuyển hướng 2 (`2`) | (21, 6) | (22, 6) | Dự kiến đến điểm hẹn tọa độ (22, 6) | 34 |
| 32-33 | Di chuyển hướng 2 (`2`) | (22, 6) | (23, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(23, 6)) | 33 |
| 34-35 | Di chuyển hướng 4 (`4`) | (23, 6) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 32 |
| 36-37 | Di chuyển hướng 4 (`4`) | (23, 7) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 31 |
| 38 | Di chuyển hướng 4 (`4`) | (22, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 29 |
| 39-41 | Di chuyển hướng 4 (`4`) | (22, 9) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 27 |
| 42 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 25 |
| 43-44 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 24 |
| 45 | Chờ 1 bước (`-1`) | (20, 11) | (20, 11) | Dự kiến đứng yên tại (20, 11); hướng tới tọa độ (20, 11) | 24 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (19, 15) (ô=394)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(1, 15))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(1, 15))
- Mảng hành động đã gửi server: `[1, 5, 5, 4, 5, 5, 5, 5, 5, 0, 0, 0, 5, 0, 4, 5, 5, 5, 5, 5, 4, 4, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (19, 15) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 52 |
| 2 | Di chuyển hướng 5 (`5`) | (19, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 50 |
| 3-4 | Di chuyển hướng 5 (`5`) | (18, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 49 |
| 5-6 | Di chuyển hướng 4 (`4`) | (17, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 48 |
| 7-8 | Di chuyển hướng 5 (`5`) | (17, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 47 |
| 9-10 | Di chuyển hướng 5 (`5`) | (16, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 46 |
| 11-12 | Di chuyển hướng 5 (`5`) | (15, 15) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 45 |
| 13-14 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 44 |
| 15-16 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 43 |
| 17 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 41 |
| 18 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 39 |
| 19-20 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 38 |
| 21 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 36 |
| 22-23 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 11)) | 35 |
| 24-25 | Di chuyển hướng 4 (`4`) | (9, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 34 |
| 26-27 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 33 |
| 28-29 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 32 |
| 30-31 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 31 |
| 32-34 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 29 |
| 35-36 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 12)) | 28 |
| 37-38 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 27 |
| 39-40 | Di chuyển hướng 4 (`4`) | (3, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 26 |
| 41-42 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 25 |
| 43-44 | Di chuyển hướng 5 (`5`) | (2, 15) | (1, 15) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 15)) | 24 |
| 45 | Chờ 1 bước (`-1`) | (1, 15) | (1, 15) | Dự kiến đứng yên tại (1, 15); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 15)) | 24 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (17, 9) (ô=242)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 5)
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 5, 5, 4, 0, 0, 5, 5, 5, 0, 5, 5, 0, 5, 5, 5, 2, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 52 |
| 2 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(15, 8)) | 50 |
| 3-4 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 49 |
| 5-6 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 48 |
| 7-8 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 47 |
| 9 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 45 |
| 10-11 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 44 |
| 12-13 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(10, 9)) | 43 |
| 14-15 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 42 |
| 16-17 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 41 |
| 18 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 39 |
| 19-20 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 38 |
| 21-22 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 37 |
| 23 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 35 |
| 24-25 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 34 |
| 26-27 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 33 |
| 28 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(3, 5)) | 31 |
| 29-30 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 30 |
| 31-33 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 28 |
| 34-35 | Di chuyển hướng 5 (`5`) | (1, 5) | (0, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 5)) | 27 |
| 36-37 | Di chuyển hướng 2 (`2`) | (0, 5) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 26 |
| 38-39 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 25 |
| 40-42 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(3, 5)) | 23 |
| 43-44 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 22 |
| 45 | Chờ 1 bước (`-1`) | (4, 5) | (4, 5) | Dự kiến đứng yên tại (4, 5); hướng tới tọa độ (4, 5) | 22 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (9, 16) (ô=409)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 12)
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 2, 2, 2, 3, 2, 3, 3, 4, 5, 5, 0, 5, 5, 0, 1, 1, 1, 0, 0, 0, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 52 |
| 2 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 50 |
| 3-4 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 49 |
| 5 | Di chuyển hướng 2 (`2`) | (12, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 47 |
| 6-7 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 46 |
| 8-9 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 45 |
| 10-11 | Di chuyển hướng 2 (`2`) | (15, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 44 |
| 12-13 | Di chuyển hướng 3 (`3`) | (16, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 43 |
| 14-15 | Di chuyển hướng 2 (`2`) | (16, 16) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 42 |
| 16 | Di chuyển hướng 3 (`3`) | (17, 16) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 40 |
| 17 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=0, tọa độ=(18, 18)) | 38 |
| 18-19 | Di chuyển hướng 4 (`4`) | (18, 18) | (18, 19) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 19)) | 37 |
| 20-21 | Di chuyển hướng 5 (`5`) | (18, 19) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 36 |
| 22-23 | Di chuyển hướng 5 (`5`) | (17, 19) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 35 |
| 24 | Di chuyển hướng 0 (`0`) | (16, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 33 |
| 25-26 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 32 |
| 27-28 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 31 |
| 29-30 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(13, 17)) | 30 |
| 31-32 | Di chuyển hướng 1 (`1`) | (13, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 29 |
| 33-34 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 28 |
| 35-36 | Di chuyển hướng 1 (`1`) | (14, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 27 |
| 37-38 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 26 |
| 39-41 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 24 |
| 42-43 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(13, 11)) | 23 |
| 44-45 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 22 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (14, 15) (ô=389)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 20)
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 3, 2, 5, 5, 5, 0, 5, 0, 1, 0, 5, 4, 4, 4, 4, 4, 5, 5, 0, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 52 |
| 2-3 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 51 |
| 4-5 | Di chuyển hướng 3 (`3`) | (15, 16) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 50 |
| 6-7 | Di chuyển hướng 3 (`3`) | (16, 17) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 49 |
| 8-9 | Di chuyển hướng 3 (`3`) | (16, 18) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 48 |
| 10-11 | Di chuyển hướng 2 (`2`) | (17, 19) | (18, 19) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 19)) | 47 |
| 12-13 | Di chuyển hướng 5 (`5`) | (18, 19) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 46 |
| 14-15 | Di chuyển hướng 5 (`5`) | (17, 19) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 45 |
| 16 | Di chuyển hướng 5 (`5`) | (16, 19) | (15, 19) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(15, 19)) | 43 |
| 17-18 | Di chuyển hướng 0 (`0`) | (15, 19) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 42 |
| 19-20 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 41 |
| 21-22 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(13, 17)) | 40 |
| 23-24 | Di chuyển hướng 1 (`1`) | (13, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 39 |
| 25-26 | Di chuyển hướng 0 (`0`) | (13, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 38 |
| 27-28 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 37 |
| 29 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 35 |
| 30-31 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 34 |
| 32-34 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 32 |
| 35-36 | Di chuyển hướng 4 (`4`) | (10, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 31 |
| 37-38 | Di chuyển hướng 4 (`4`) | (10, 19) | (9, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(9, 20)) | 30 |
| 39-40 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 29 |
| 41-42 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 28 |
| 43 | Di chuyển hướng 0 (`0`) | (7, 20) | (7, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 26 |
| 44-45 | Di chuyển hướng 4 (`4`) | (7, 19) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 25 |

