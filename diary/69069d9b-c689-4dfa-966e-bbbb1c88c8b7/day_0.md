# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 47
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 32 | #5 | #6 | (5, 4) | 29 | 54 |
| 36 | #3 | #7 | (4, 12) | 25 | 54 |
| 40 | #0 | #6 | (6, 2) | 26 | 54 |
| 46 | #3 | #7 | (4, 12) | 46 | 54 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (4, 6) (ô=160)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #25 (thương hiệu=25, tọa độ=(9, 5))
- Địa điểm đích kế hoạch: Spot #25 (thương hiệu=25, tọa độ=(9, 5))
- Mảng hành động đã gửi server: `[5, 5, 4, 4, 5, 4, 1, 1, 0, 1, 0, 0, 1, 1, 0, 2, 2, 2, 2, 2, 3, 3, 2, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 53 |
| 2 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 51 |
| 3 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 49 |
| 4-5 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 48 |
| 6-7 | Di chuyển hướng 5 (`5`) | (1, 8) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 47 |
| 8-9 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 9)) | 46 |
| 10-11 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 45 |
| 12-13 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 44 |
| 14-16 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 42 |
| 17-18 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 41 |
| 19-20 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 40 |
| 21-22 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đến điểm hẹn tọa độ (0, 3) | 39 |
| 23-24 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 38 |
| 25-26 | Di chuyển hướng 1 (`1`) | (0, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 37 |
| 27-28 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 36 |
| 29-30 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 35 |
| 31 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 33 |
| 32 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 31 |
| 33-34 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 30 |
| 35-36 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 29 |
| 37 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(6, 1)) | 27 |
| 38-39 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 54 |
| 40-41 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 53 |
| 42-43 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 52 |
| 44 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 50 |
| 45-46 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 49 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (24, 17) (ô=466)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(22, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(22, 14)
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 5, 5, 5, 5, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 3, 3, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (24, 17) | (23, 18) | Dự kiến đến điểm hẹn tọa độ (23, 18) | 53 |
| 2 | Di chuyển hướng 5 (`5`) | (23, 18) | (22, 18) | Dự kiến đến điểm hẹn tọa độ (22, 18) | 51 |
| 3-4 | Di chuyển hướng 5 (`5`) | (22, 18) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 50 |
| 5-6 | Di chuyển hướng 5 (`5`) | (21, 18) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 49 |
| 7-8 | Di chuyển hướng 5 (`5`) | (20, 18) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 48 |
| 9 | Di chuyển hướng 5 (`5`) | (19, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 46 |
| 10-12 | Di chuyển hướng 5 (`5`) | (18, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 44 |
| 13 | Di chuyển hướng 5 (`5`) | (17, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 42 |
| 14-15 | Di chuyển hướng 5 (`5`) | (16, 18) | (15, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 41 |
| 16-17 | Di chuyển hướng 2 (`2`) | (15, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 40 |
| 18-19 | Di chuyển hướng 2 (`2`) | (16, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 39 |
| 20 | Di chuyển hướng 2 (`2`) | (17, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 37 |
| 21-23 | Di chuyển hướng 2 (`2`) | (18, 18) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 35 |
| 24 | Di chuyển hướng 2 (`2`) | (19, 18) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 33 |
| 25-26 | Di chuyển hướng 1 (`1`) | (20, 18) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 32 |
| 27 | Di chuyển hướng 1 (`1`) | (21, 17) | (21, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(21, 16)) | 30 |
| 28-29 | Di chuyển hướng 1 (`1`) | (21, 16) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 29 |
| 30-31 | Di chuyển hướng 1 (`1`) | (22, 15) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 28 |
| 32-33 | Di chuyển hướng 1 (`1`) | (22, 14) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 27 |
| 34-35 | Di chuyển hướng 1 (`1`) | (23, 13) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 26 |
| 36-37 | Di chuyển hướng 2 (`2`) | (23, 12) | (24, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(24, 12)) | 25 |
| 38-39 | Di chuyển hướng 3 (`3`) | (24, 12) | (25, 13) | Dự kiến đến điểm hẹn tọa độ (25, 13) | 24 |
| 40 | Di chuyển hướng 3 (`3`) | (25, 13) | (25, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(25, 14)) | 22 |
| 41-42 | Di chuyển hướng 5 (`5`) | (25, 14) | (24, 14) | Dự kiến đến điểm hẹn tọa độ (24, 14) | 21 |
| 43-44 | Di chuyển hướng 5 (`5`) | (24, 14) | (23, 14) | Dự kiến đến điểm hẹn tọa độ (23, 14) | 20 |
| 45-46 | Di chuyển hướng 5 (`5`) | (23, 14) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 19 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (21, 4) (ô=125)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 9)
- Mảng hành động đã gửi server: `[3, 2, 5, 5, 5, 0, 1, 0, 0, 0, 5, 4, 4, 4, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (21, 4) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 53 |
| 2-3 | Di chuyển hướng 2 (`2`) | (22, 5) | (23, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 5)) | 52 |
| 4-5 | Di chuyển hướng 5 (`5`) | (23, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 51 |
| 6-7 | Di chuyển hướng 5 (`5`) | (22, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 50 |
| 8 | Di chuyển hướng 5 (`5`) | (21, 5) | (20, 5) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 5)) | 48 |
| 9-10 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 47 |
| 11 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 45 |
| 12-13 | Di chuyển hướng 0 (`0`) | (20, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 44 |
| 14-15 | Di chuyển hướng 0 (`0`) | (19, 2) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 43 |
| 16-18 | Di chuyển hướng 0 (`0`) | (19, 1) | (18, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(18, 0)) | 41 |
| 19-20 | Di chuyển hướng 5 (`5`) | (18, 0) | (17, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 0)) | 40 |
| 21-22 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 39 |
| 23-24 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 38 |
| 25 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 36 |
| 26-27 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 35 |
| 28-29 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 34 |
| 30-31 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 33 |
| 32-33 | Di chuyển hướng 4 (`4`) | (15, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 32 |
| 34 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 30 |
| 35-36 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 29 |
| 37 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 27 |
| 38-39 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 26 |
| 40-41 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 25 |
| 42-43 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 24 |
| 44-45 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 23 |
| 46 | Chờ 1 bước (`-1`) | (9, 9) | (9, 9) | Dự kiến đứng yên tại (9, 9); hướng tới tọa độ (9, 9) | 23 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 15) (ô=390)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 12)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 2, 3, 2, 1, 1, 1, 1, 2, 2, 3, 0, 0, 0, 0, 0, 5, 5, 5, 4, 5, 2, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 15) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 53 |
| 2-3 | Di chuyển hướng 3 (`3`) | (0, 16) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 52 |
| 4-5 | Di chuyển hướng 3 (`3`) | (1, 17) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 51 |
| 6 | Di chuyển hướng 3 (`3`) | (1, 18) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 49 |
| 7-8 | Di chuyển hướng 2 (`2`) | (2, 19) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 48 |
| 9 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 46 |
| 10-11 | Di chuyển hướng 2 (`2`) | (3, 20) | (4, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 20)) | 45 |
| 12-13 | Di chuyển hướng 1 (`1`) | (4, 20) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 44 |
| 14-15 | Di chuyển hướng 1 (`1`) | (5, 19) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 43 |
| 16-17 | Di chuyển hướng 1 (`1`) | (5, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 42 |
| 18-20 | Di chuyển hướng 1 (`1`) | (6, 17) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 40 |
| 21-22 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 39 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 38 |
| 25 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 36 |
| 26-27 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 35 |
| 28 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 33 |
| 29-30 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 32 |
| 31-32 | Di chuyển hướng 0 (`0`) | (7, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 31 |
| 33 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 29 |
| 34 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 27 |
| 35 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 54 |
| 36-37 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(3, 12)) | 53 |
| 38-39 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 52 |
| 40 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 13)) | 50 |
| 41-42 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 49 |
| 43 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 47 |
| 44-45 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 54 |
| 46 | Chờ 1 bước (`-1`) | (4, 12) | (4, 12) | Dự kiến đứng yên tại (4, 12); hướng tới tọa độ (4, 12) | 54 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (0, 16) (ô=416)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 16)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 2, 3, 4, 4, 5, 4, 3, 3, 3, 2, 1, 1, 0, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 53 |
| 2-3 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 52 |
| 4-5 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 51 |
| 6-7 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 50 |
| 8-9 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 49 |
| 10-11 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 48 |
| 12-13 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 47 |
| 14-15 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 46 |
| 16-17 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 45 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 44 |
| 20-21 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 43 |
| 22 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 13)) | 41 |
| 23-24 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 40 |
| 25 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 38 |
| 26-27 | Di chuyển hướng 4 (`4`) | (11, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 37 |
| 28 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 35 |
| 29 | Di chuyển hướng 4 (`4`) | (9, 16) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 33 |
| 30-31 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 32 |
| 32-33 | Di chuyển hướng 3 (`3`) | (9, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 31 |
| 34-35 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 30 |
| 36-37 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(11, 20)) | 29 |
| 38-39 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 28 |
| 40-41 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 27 |
| 42-43 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 26 |
| 44 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 24 |
| 45-46 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 23 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (4, 0) (ô=4)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 7)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 3, 2, 2, 2, 2, 2, 3, 2, 3, 3, 3, 5, 5, 0, 5, 5, 5, 5, 4, 5, 2, 3, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (4, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 53 |
| 2-3 | Di chuyển hướng 5 (`5`) | (3, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 52 |
| 4 | Di chuyển hướng 5 (`5`) | (2, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 50 |
| 5 | Di chuyển hướng 5 (`5`) | (1, 0) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 48 |
| 6-7 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 47 |
| 8-9 | Di chuyển hướng 2 (`2`) | (1, 1) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 46 |
| 10-11 | Di chuyển hướng 2 (`2`) | (2, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 45 |
| 12-13 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 44 |
| 14 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 42 |
| 15-16 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(6, 1)) | 41 |
| 17-18 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 40 |
| 19-20 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 39 |
| 21-22 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 38 |
| 23 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 36 |
| 24-25 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 35 |
| 26-27 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 34 |
| 28 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 32 |
| 29 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 30 |
| 30-31 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 54 |
| 32-33 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 53 |
| 34 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 51 |
| 35-36 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 50 |
| 37 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 48 |
| 38-39 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 47 |
| 40-41 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 46 |
| 42-43 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 45 |
| 44 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 43 |
| 45 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 41 |
| 46 | Chờ 1 bước (`-1`) | (4, 7) | (4, 7) | Dự kiến đứng yên tại (4, 7); hướng tới tọa độ (4, 7) | 41 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (12, 18) (ô=480)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 2)
- Mảng hành động đã gửi server: `[0, 0, 5, 5, 5, 0, 0, 0, 0, 1, 0, 0, 0, 0, 5, 1, 1, 1, 1, 1, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 54 |
| 2 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 54 |
| 3-4 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 54 |
| 5 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 54 |
| 6 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 54 |
| 7 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 54 |
| 8-9 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 54 |
| 10-11 | Di chuyển hướng 0 (`0`) | (7, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 54 |
| 12 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 54 |
| 13 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 54 |
| 14-16 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 54 |
| 17 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 54 |
| 18-19 | Di chuyển hướng 0 (`0`) | (6, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 54 |
| 20-21 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 54 |
| 22-23 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 54 |
| 24-25 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 54 |
| 26-27 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 54 |
| 28-30 | Di chuyển hướng 1 (`1`) | (5, 5) | (5, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 54 |
| 31-32 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 54 |
| 33-34 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 54 |
| 35-46 | Chờ 12 bước (`-12`) | (6, 2) | (6, 2) | Dự kiến đứng yên tại (6, 2); hướng tới tọa độ (6, 2) | 54 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (16, 4) (ô=120)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 12)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 5, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 54 |
| 2-3 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 54 |
| 4-5 | Di chuyển hướng 4 (`4`) | (15, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 54 |
| 6 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 54 |
| 7-8 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 54 |
| 9 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 54 |
| 10-11 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 54 |
| 12-13 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 54 |
| 14-15 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 54 |
| 16-17 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 54 |
| 18-19 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 54 |
| 20-21 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 54 |
| 22-23 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 54 |
| 24 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 54 |
| 25-27 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 54 |
| 28 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 54 |
| 29-46 | Chờ 18 bước (`-18`) | (4, 12) | (4, 12) | Dự kiến đứng yên tại (4, 12); hướng tới tọa độ (4, 12) | 54 |

