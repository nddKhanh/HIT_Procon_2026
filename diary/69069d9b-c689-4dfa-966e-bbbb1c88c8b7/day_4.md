# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 56
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 24 | #1 | #7 | (15, 18) | 1 | 54 |
| 34 | #4 | #6 | (5, 7) | 13 | 54 |
| 42 | #5 | #6 | (1, 5) | 1 | 54 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 2) (ô=68)
- Nhiên liệu đầu ngày: 44
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(6, 1))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(6, 1))
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 3, 0, 1, 0, 0, 0, 5, 4, 4, 4, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (16, 2) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 42 |
| 1-2 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 41 |
| 3-4 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 40 |
| 5-6 | Di chuyển hướng 2 (`2`) | (18, 4) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 39 |
| 7 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 5)) | 37 |
| 8-9 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 36 |
| 10 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 34 |
| 11-12 | Di chuyển hướng 0 (`0`) | (20, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 33 |
| 13-14 | Di chuyển hướng 0 (`0`) | (19, 2) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 32 |
| 15-17 | Di chuyển hướng 0 (`0`) | (19, 1) | (18, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(18, 0)) | 30 |
| 18-19 | Di chuyển hướng 5 (`5`) | (18, 0) | (17, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 0)) | 29 |
| 20-21 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 28 |
| 22-23 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 27 |
| 24 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 25 |
| 25-26 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 24 |
| 27-28 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 23 |
| 29-30 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 22 |
| 31-32 | Di chuyển hướng 4 (`4`) | (15, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 21 |
| 33 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 19 |
| 34-35 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 18 |
| 36 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 16 |
| 37-38 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 15 |
| 39-40 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 14 |
| 41-42 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 13 |
| 43-44 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 12 |
| 45-46 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 11 |
| 47-48 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 10 |
| 49-50 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 9 |
| 51 | Di chuyển hướng 0 (`0`) | (8, 3) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 7 |
| 52-53 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 6 |
| 54-55 | Di chuyển hướng 0 (`0`) | (6, 2) | (6, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(6, 1)) | 5 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 13) (ô=356)
- Nhiên liệu đầu ngày: 9
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(22, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(22, 14)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, -16, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 3, 3, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (18, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 8 |
| 2-3 | Di chuyển hướng 4 (`4`) | (17, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 7 |
| 4 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 5 |
| 5-7 | Di chuyển hướng 4 (`4`) | (16, 16) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 3 |
| 8 | Di chuyển hướng 4 (`4`) | (16, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 1 |
| 9-24 | Chờ 16 bước (`-16`) | (15, 18) | (15, 18) | Dự kiến đứng yên tại (15, 18); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 54 |
| 25-26 | Di chuyển hướng 2 (`2`) | (15, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 53 |
| 27-28 | Di chuyển hướng 2 (`2`) | (16, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 52 |
| 29 | Di chuyển hướng 2 (`2`) | (17, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 50 |
| 30-32 | Di chuyển hướng 2 (`2`) | (18, 18) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 48 |
| 33 | Di chuyển hướng 2 (`2`) | (19, 18) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 46 |
| 34-35 | Di chuyển hướng 1 (`1`) | (20, 18) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 45 |
| 36 | Di chuyển hướng 1 (`1`) | (21, 17) | (21, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(21, 16)) | 43 |
| 37-38 | Di chuyển hướng 1 (`1`) | (21, 16) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 42 |
| 39-40 | Di chuyển hướng 1 (`1`) | (22, 15) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 41 |
| 41-42 | Di chuyển hướng 1 (`1`) | (22, 14) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 40 |
| 43-44 | Di chuyển hướng 1 (`1`) | (23, 13) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 39 |
| 45-46 | Di chuyển hướng 2 (`2`) | (23, 12) | (24, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(24, 12)) | 38 |
| 47-48 | Di chuyển hướng 3 (`3`) | (24, 12) | (25, 13) | Dự kiến đến điểm hẹn tọa độ (25, 13) | 37 |
| 49 | Di chuyển hướng 3 (`3`) | (25, 13) | (25, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(25, 14)) | 35 |
| 50-51 | Di chuyển hướng 5 (`5`) | (25, 14) | (24, 14) | Dự kiến đến điểm hẹn tọa độ (24, 14) | 34 |
| 52-53 | Di chuyển hướng 5 (`5`) | (24, 14) | (23, 14) | Dự kiến đến điểm hẹn tọa độ (23, 14) | 33 |
| 54-55 | Di chuyển hướng 5 (`5`) | (23, 14) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 32 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 20) (ô=524)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 8)
- Mảng hành động đã gửi server: `[0, 1, 0, 2, 1, 2, 2, 1, 1, 2, 1, 2, 5, 4, 5, 4, 5, 4, 5, 5, 1, 0, 1, 1, 1, 1, 1, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (4, 20) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 37 |
| 2-3 | Di chuyển hướng 1 (`1`) | (4, 19) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 36 |
| 4-5 | Di chuyển hướng 0 (`0`) | (4, 18) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 35 |
| 6-7 | Di chuyển hướng 2 (`2`) | (4, 17) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 34 |
| 8-9 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 33 |
| 10-11 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 32 |
| 12-13 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 31 |
| 14-15 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 30 |
| 16-17 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 29 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 28 |
| 20-21 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 27 |
| 22 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 13)) | 25 |
| 23-24 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 24 |
| 25 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 22 |
| 26-27 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 21 |
| 28-29 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 20 |
| 30-31 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 19 |
| 32-33 | Di chuyển hướng 4 (`4`) | (7, 15) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 18 |
| 34-35 | Di chuyển hướng 5 (`5`) | (6, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 17 |
| 36-37 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 16 |
| 38-39 | Di chuyển hướng 1 (`1`) | (4, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 15 |
| 40-41 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 14 |
| 42-43 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 13 |
| 44-45 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 12 |
| 46 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 10 |
| 47-49 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 8 |
| 50-51 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 6 |
| 52-53 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 5 |
| 54-55 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 4 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (16, 12) (ô=328)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(11, 20))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(11, 20))
- Mảng hành động đã gửi server: `[4, 4, 5, 4, 4, 5, 5, 5, 5, 5, 5, 5, 2, 3, 2, 3, 3, 3, 2, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (16, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 28 |
| 2 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 26 |
| 3-4 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 25 |
| 5 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 23 |
| 6-7 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 22 |
| 8-9 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 20 |
| 10-11 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 19 |
| 12-13 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 18 |
| 14-15 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 16 |
| 16-17 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 14 |
| 18-19 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 12 |
| 20-21 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 11 |
| 22-23 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 10 |
| 24-25 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 9 |
| 26-27 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 8 |
| 28-29 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 7 |
| 30-31 | Di chuyển hướng 3 (`3`) | (9, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 6 |
| 32-33 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 5 |
| 34-35 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(11, 20)) | 4 |
| 36-55 | Chờ 20 bước (`-20`) | (11, 20) | (11, 20) | Dự kiến đứng yên tại (11, 20); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(11, 20)) | 4 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (0, 9) (ô=234)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(2, 13))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(2, 13))
- Mảng hành động đã gửi server: `[1, 1, 0, 1, 0, 1, 1, 0, 0, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 4, 5, 4, 5, 4, 5, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 33 |
| 2-3 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 32 |
| 4-6 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 30 |
| 7-8 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 29 |
| 9-10 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 28 |
| 11-12 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 27 |
| 13-14 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 26 |
| 15-16 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 25 |
| 17-18 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 24 |
| 19-20 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 23 |
| 21-22 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 22 |
| 23-24 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 21 |
| 25-27 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 19 |
| 28 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 17 |
| 29-30 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 16 |
| 31 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 14 |
| 32-33 | Di chuyển hướng 2 (`2`) | (4, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 54 |
| 34-35 | Di chuyển hướng 3 (`3`) | (5, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 53 |
| 36-37 | Di chuyển hướng 3 (`3`) | (5, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 52 |
| 38-39 | Di chuyển hướng 3 (`3`) | (6, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 51 |
| 40-41 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 49 |
| 42-44 | Di chuyển hướng 5 (`5`) | (6, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 47 |
| 45 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 45 |
| 46-47 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(3, 12)) | 44 |
| 48-49 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 43 |
| 50 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 13)) | 41 |
| 51-55 | Chờ 5 bước (`-5`) | (2, 13) | (2, 13) | Dự kiến đứng yên tại (2, 13); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 13)) | 41 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (0, 7) (ô=182)
- Nhiên liệu đầu ngày: 9
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 5)
- Mảng hành động đã gửi server: `[3, 4, 1, 1, 0, 1, -29, 2, 1, 2, 2, 2, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 7 |
| 3-4 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 9)) | 6 |
| 5-6 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 5 |
| 7-8 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 4 |
| 9-11 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 2 |
| 12-13 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 1 |
| 14-42 | Chờ 29 bước (`-29`) | (1, 5) | (1, 5) | Dự kiến đứng yên tại (1, 5); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 54 |
| 43-44 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 53 |
| 45-46 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 52 |
| 47 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 50 |
| 48-49 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 49 |
| 50-53 | Di chuyển hướng 2 (`2`) | (4, 4) | (5, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 47 |
| 54-55 | Di chuyển hướng 4 (`4`) | (5, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 46 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (20, 5) (ô=150)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(1, 5))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(1, 5))
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 5, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 5, 0, 0, 5, 5, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (20, 5) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 54 |
| 2-4 | Di chuyển hướng 5 (`5`) | (19, 5) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 54 |
| 5-6 | Di chuyển hướng 5 (`5`) | (18, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 54 |
| 7-8 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 54 |
| 9-10 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 54 |
| 11-12 | Di chuyển hướng 4 (`4`) | (15, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 54 |
| 13 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 54 |
| 14-15 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 54 |
| 16 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 54 |
| 17-18 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 54 |
| 19-20 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 54 |
| 21-22 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 54 |
| 23-24 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 54 |
| 25-26 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 54 |
| 27-28 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 54 |
| 29-30 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 54 |
| 31-32 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 54 |
| 33-34 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 54 |
| 35-36 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 54 |
| 37 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 54 |
| 38-39 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 54 |
| 40-41 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 54 |
| 42-55 | Chờ 14 bước (`-14`) | (1, 5) | (1, 5) | Dự kiến đứng yên tại (1, 5); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 54 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (6, 15) (ô=396)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(15, 18))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(15, 18))
- Mảng hành động đã gửi server: `[2, 3, 2, 2, 2, 2, 2, 2, 3, 3, 2, -32]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 54 |
| 4-5 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 54 |
| 6-7 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 54 |
| 8-9 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 54 |
| 10-11 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 54 |
| 12-13 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 54 |
| 14-15 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 54 |
| 16-17 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 54 |
| 18-19 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 54 |
| 20-21 | Di chuyển hướng 3 (`3`) | (14, 17) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 54 |
| 22-23 | Di chuyển hướng 2 (`2`) | (14, 18) | (15, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 54 |
| 24-55 | Chờ 32 bước (`-32`) | (15, 18) | (15, 18) | Dự kiến đứng yên tại (15, 18); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 54 |

