# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 59
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 1 | #2 | #5 | (4, 18) | 55 | 57 |
| 27 | #0 | #5 | (17, 20) | 37 | 57 |
| 43 | #3 | #4 | (19, 1) | 3 | 57 |
| 59 | #2 | #5 | (17, 20) | 14 | 57 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 18) (ô=473)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 16)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 3, 3, 2, 2, 2, 2, 2, 3, 0, 0, 1, 1, 1, 0, 0, 0, 3, 3, 2, 3, 2, 2, 2, 2, 1, 4, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 55 |
| 2-3 | Di chuyển hướng 2 (`2`) | (6, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 54 |
| 4 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 52 |
| 5-6 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 51 |
| 7 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 49 |
| 8-9 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 48 |
| 10-11 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 19)) | 47 |
| 12-13 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 46 |
| 14-15 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 45 |
| 16-17 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 20)) | 43 |
| 18-19 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 42 |
| 20-21 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 41 |
| 22 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 20)) | 39 |
| 23-24 | Di chuyển hướng 3 (`3`) | (17, 20) | (18, 21) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 21)) | 38 |
| 25-26 | Di chuyển hướng 0 (`0`) | (18, 21) | (17, 20) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 20)) | 57 |
| 27-28 | Di chuyển hướng 0 (`0`) | (17, 20) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 56 |
| 29-30 | Di chuyển hướng 1 (`1`) | (17, 19) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 55 |
| 31-32 | Di chuyển hướng 1 (`1`) | (17, 18) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 54 |
| 33-34 | Di chuyển hướng 1 (`1`) | (18, 17) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 53 |
| 35-36 | Di chuyển hướng 0 (`0`) | (18, 16) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 52 |
| 37 | Di chuyển hướng 0 (`0`) | (18, 15) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 50 |
| 38 | Di chuyển hướng 0 (`0`) | (17, 14) | (17, 13) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(17, 13)) | 48 |
| 39-40 | Di chuyển hướng 3 (`3`) | (17, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 47 |
| 41 | Di chuyển hướng 3 (`3`) | (17, 14) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 45 |
| 42 | Di chuyển hướng 2 (`2`) | (18, 15) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 43 |
| 43-44 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 42 |
| 45-46 | Di chuyển hướng 2 (`2`) | (19, 16) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 41 |
| 47-48 | Di chuyển hướng 2 (`2`) | (20, 16) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 40 |
| 49-50 | Di chuyển hướng 2 (`2`) | (21, 16) | (22, 16) | Dự kiến đến điểm hẹn tọa độ (22, 16) | 39 |
| 51-52 | Di chuyển hướng 2 (`2`) | (22, 16) | (23, 16) | Dự kiến đến điểm hẹn tọa độ (23, 16) | 38 |
| 53 | Di chuyển hướng 1 (`1`) | (23, 16) | (24, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(24, 15)) | 36 |
| 54-55 | Di chuyển hướng 4 (`4`) | (24, 15) | (23, 16) | Dự kiến đến điểm hẹn tọa độ (23, 16) | 35 |
| 56 | Di chuyển hướng 5 (`5`) | (23, 16) | (22, 16) | Dự kiến đến điểm hẹn tọa độ (22, 16) | 33 |
| 57-58 | Di chuyển hướng 5 (`5`) | (22, 16) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 32 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (0, 10) (ô=260)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 3)
- Mảng hành động đã gửi server: `[3, 2, 2, 1, 1, 1, 1, 2, 1, 1, 0, 1, 5, 0, 0, 5, 5, 5, 3, 4, 4, 1, 1, 2, 1, 2, 2, 2, 2, 2, 1, -1, 4, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 11)) | 55 |
| 2-3 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 54 |
| 4 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 52 |
| 5-6 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 51 |
| 7-8 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 50 |
| 9 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 48 |
| 10-11 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 47 |
| 12-13 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 46 |
| 14 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 44 |
| 15 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 5)) | 42 |
| 16-17 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 41 |
| 18-19 | Di chuyển hướng 1 (`1`) | (6, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(7, 3)) | 40 |
| 20-21 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 39 |
| 22 | Di chuyển hướng 0 (`0`) | (6, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 37 |
| 23 | Di chuyển hướng 0 (`0`) | (5, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 35 |
| 24 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 33 |
| 25 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 31 |
| 26-27 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 30 |
| 28-29 | Di chuyển hướng 3 (`3`) | (2, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 29 |
| 30-31 | Di chuyển hướng 4 (`4`) | (2, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 28 |
| 32-33 | Di chuyển hướng 4 (`4`) | (2, 3) | (1, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 4)) | 27 |
| 34-35 | Di chuyển hướng 1 (`1`) | (1, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 26 |
| 36-37 | Di chuyển hướng 1 (`1`) | (2, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 25 |
| 38-39 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 24 |
| 40-41 | Di chuyển hướng 1 (`1`) | (3, 2) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 23 |
| 42 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 21 |
| 43 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 19 |
| 44-45 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 18 |
| 46-47 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 17 |
| 48 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 15 |
| 49-50 | Di chuyển hướng 1 (`1`) | (9, 1) | (9, 0) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 0)) | 14 |
| 51 | Chờ 1 bước (`-1`) | (9, 0) | (9, 0) | Dự kiến đứng yên tại (9, 0); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 0)) | 14 |
| 52-53 | Di chuyển hướng 4 (`4`) | (9, 0) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 13 |
| 54-55 | Di chuyển hướng 4 (`4`) | (9, 1) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 12 |
| 56-57 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 11 |
| 58 | Chờ 1 bước (`-1`) | (9, 3) | (9, 3) | Dự kiến đứng yên tại (9, 3); hướng tới tọa độ (9, 3) | 11 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 18) (ô=472)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(17, 20))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(17, 20))
- Mảng hành động đã gửi server: `[5, 4, 4, 4, 5, 5, 1, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 2, 2, 3, 3, 2, 2, 3, 2, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (4, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 56 |
| 2 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 54 |
| 3-4 | Di chuyển hướng 4 (`4`) | (3, 19) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 53 |
| 5-6 | Di chuyển hướng 4 (`4`) | (2, 20) | (2, 21) | Dự kiến đến điểm hẹn tọa độ (2, 21) | 52 |
| 7-8 | Di chuyển hướng 5 (`5`) | (2, 21) | (1, 21) | Dự kiến đến điểm hẹn tọa độ (1, 21) | 51 |
| 9-10 | Di chuyển hướng 5 (`5`) | (1, 21) | (0, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(0, 21)) | 50 |
| 11-12 | Di chuyển hướng 1 (`1`) | (0, 21) | (0, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(0, 20)) | 49 |
| 13-14 | Di chuyển hướng 0 (`0`) | (0, 20) | (0, 19) | Dự kiến đến điểm hẹn tọa độ (0, 19) | 48 |
| 15-16 | Di chuyển hướng 1 (`1`) | (0, 19) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 47 |
| 17 | Di chuyển hướng 1 (`1`) | (0, 18) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 45 |
| 18-19 | Di chuyển hướng 1 (`1`) | (1, 17) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 44 |
| 20-22 | Di chuyển hướng 1 (`1`) | (1, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 42 |
| 23 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 40 |
| 24-25 | Di chuyển hướng 1 (`1`) | (2, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 39 |
| 26-27 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(4, 13)) | 38 |
| 28-29 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 37 |
| 30-31 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 36 |
| 32 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 34 |
| 33 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 32 |
| 34-35 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 15)) | 31 |
| 36-37 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 30 |
| 38-39 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 29 |
| 40-41 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 28 |
| 42 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 26 |
| 43-44 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 25 |
| 45-46 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 19)) | 24 |
| 47-48 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 23 |
| 49-50 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 22 |
| 51-52 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 20)) | 20 |
| 53-54 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 19 |
| 55 | Di chuyển hướng 2 (`2`) | (15, 21) | (16, 21) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 21)) | 17 |
| 56-57 | Di chuyển hướng 1 (`1`) | (16, 21) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 16 |
| 58 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 20)) | 57 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (19, 1) (ô=45)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(17, 6))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(17, 6))
- Mảng hành động đã gửi server: `[-44, 4, 4, 5, 5, 5, 3, 3, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-43 | Chờ 44 bước (`-44`) | (19, 1) | (19, 1) | Dự kiến đứng yên tại (19, 1); mục tiêu Spot #24 (thương hiệu=0, tọa độ=(19, 1)) | 57 |
| 44-45 | Di chuyển hướng 4 (`4`) | (19, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 56 |
| 46-47 | Di chuyển hướng 4 (`4`) | (18, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 55 |
| 48 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 53 |
| 49 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 51 |
| 50-51 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(15, 3)) | 50 |
| 52-53 | Di chuyển hướng 3 (`3`) | (15, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 49 |
| 54 | Di chuyển hướng 3 (`3`) | (15, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 47 |
| 55-56 | Di chuyển hướng 2 (`2`) | (16, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 46 |
| 57-58 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(17, 6)) | 45 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (0, 9) (ô=234)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #24 (thương hiệu=0, tọa độ=(19, 1))
- Địa điểm đích kế hoạch: Spot #24 (thương hiệu=0, tọa độ=(19, 1))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 3, 2, 3, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -16]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 9) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 57 |
| 2-3 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 57 |
| 4-5 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 57 |
| 6-7 | Di chuyển hướng 2 (`2`) | (3, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 57 |
| 8 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 57 |
| 9 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 57 |
| 10 | Di chuyển hướng 3 (`3`) | (6, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 57 |
| 11 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 57 |
| 12-13 | Di chuyển hướng 3 (`3`) | (7, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 57 |
| 14-15 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 57 |
| 16-17 | Di chuyển hướng 2 (`2`) | (9, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 57 |
| 18-19 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 57 |
| 20-21 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 57 |
| 22-23 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 57 |
| 24 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 57 |
| 25-26 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 57 |
| 27 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 9)) | 57 |
| 28-29 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 57 |
| 30-31 | Di chuyển hướng 1 (`1`) | (15, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 57 |
| 32-33 | Di chuyển hướng 1 (`1`) | (16, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 57 |
| 34-35 | Di chuyển hướng 1 (`1`) | (16, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 57 |
| 36-37 | Di chuyển hướng 1 (`1`) | (17, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 57 |
| 38-39 | Di chuyển hướng 1 (`1`) | (17, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 57 |
| 40 | Di chuyển hướng 1 (`1`) | (18, 3) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 57 |
| 41-42 | Di chuyển hướng 1 (`1`) | (18, 2) | (19, 1) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=0, tọa độ=(19, 1)) | 57 |
| 43-58 | Chờ 16 bước (`-16`) | (19, 1) | (19, 1) | Dự kiến đứng yên tại (19, 1); mục tiêu Spot #24 (thương hiệu=0, tọa độ=(19, 1)) | 57 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (3, 18) (ô=471)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(17, 20))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(17, 20))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (3, 18) | (4, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 18)) | 57 |
| 1-2 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 57 |
| 3-4 | Di chuyển hướng 2 (`2`) | (5, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 57 |
| 5-6 | Di chuyển hướng 2 (`2`) | (6, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 57 |
| 7 | Di chuyển hướng 3 (`3`) | (7, 18) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 57 |
| 8-9 | Di chuyển hướng 3 (`3`) | (8, 19) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 57 |
| 10 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 57 |
| 11-12 | Di chuyển hướng 2 (`2`) | (9, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 57 |
| 13-14 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 57 |
| 15-16 | Di chuyển hướng 2 (`2`) | (11, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 57 |
| 17-18 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 57 |
| 19-20 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 20)) | 57 |
| 21-22 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 57 |
| 23-24 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 57 |
| 25 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 20)) | 57 |
| 26-58 | Chờ 33 bước (`-33`) | (17, 20) | (17, 20) | Dự kiến đứng yên tại (17, 20); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 20)) | 57 |

