# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 56
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #0 | #4 | (20, 6) | 78 | 80 |
| 3 | #0 | #4 | (19, 6) | 78 | 80 |
| 4 | #0 | #4 | (19, 5) | 78 | 80 |
| 5 | #0 | #4 | (18, 4) | 78 | 80 |
| 7 | #0 | #4 | (18, 3) | 79 | 80 |
| 8 | #0 | #4 | (17, 2) | 78 | 80 |
| 28 | #3 | #4 | (8, 10) | 0 | 80 |
| 37 | #3 | #4 | (4, 16) | 67 | 80 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 7) (ô=189)
- Nhiên liệu đầu ngày: 79
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=4, tọa độ=(19, 1))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=4, tọa độ=(19, 1))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 2, 3, 2, 2, 2, 3, 3, 3, 3, 3, 2, 1, 1, 2, 2, 0, 1, 0, 0, 5, 5, 4, 5, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (21, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 80 |
| 2 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 80 |
| 3 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 80 |
| 4 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 80 |
| 5-6 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 80 |
| 7 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 80 |
| 8 | Di chuyển hướng 0 (`0`) | (17, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 78 |
| 9 | Di chuyển hướng 0 (`0`) | (17, 1) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 76 |
| 10 | Di chuyển hướng 5 (`5`) | (16, 0) | (15, 0) | Dự kiến đến điểm hẹn tọa độ (15, 0) | 74 |
| 11 | Di chuyển hướng 5 (`5`) | (15, 0) | (14, 0) | Dự kiến đến điểm hẹn tọa độ (14, 0) | 72 |
| 12-14 | Di chuyển hướng 5 (`5`) | (14, 0) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 70 |
| 15 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 0)) | 68 |
| 16-17 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 67 |
| 18 | Di chuyển hướng 3 (`3`) | (13, 0) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 65 |
| 19 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 63 |
| 20 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 61 |
| 21-23 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 59 |
| 24 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 57 |
| 25 | Di chuyển hướng 3 (`3`) | (17, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 55 |
| 26 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 53 |
| 27-28 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 52 |
| 29 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 50 |
| 30 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 48 |
| 31 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 46 |
| 32 | Di chuyển hướng 1 (`1`) | (21, 5) | (21, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(21, 4)) | 44 |
| 33-34 | Di chuyển hướng 2 (`2`) | (21, 4) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 43 |
| 35 | Di chuyển hướng 2 (`2`) | (22, 4) | (23, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(23, 4)) | 41 |
| 36-37 | Di chuyển hướng 0 (`0`) | (23, 4) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 40 |
| 38 | Di chuyển hướng 1 (`1`) | (23, 3) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 38 |
| 39 | Di chuyển hướng 0 (`0`) | (23, 2) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 36 |
| 40 | Di chuyển hướng 0 (`0`) | (23, 1) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 34 |
| 41 | Di chuyển hướng 5 (`5`) | (22, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 32 |
| 42 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 30 |
| 43-44 | Di chuyển hướng 4 (`4`) | (20, 0) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 29 |
| 45 | Di chuyển hướng 5 (`5`) | (20, 1) | (19, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=4, tọa độ=(19, 1)) | 27 |
| 46-55 | Chờ 10 bước (`-10`) | (19, 1) | (19, 1) | Dự kiến đứng yên tại (19, 1); mục tiêu Spot #5 (thương hiệu=4, tọa độ=(19, 1)) | 27 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (3, 17) (ô=411)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=9, tọa độ=(1, 9))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=9, tọa độ=(1, 9))
- Mảng hành động đã gửi server: `[1, 5, 5, 0, 1, 2, 1, 1, 1, 0, 5, 5, 0, -32]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (3, 17) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 19 |
| 3-4 | Di chuyển hướng 5 (`5`) | (3, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 18 |
| 5 | Di chuyển hướng 5 (`5`) | (2, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 16 |
| 6 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 14 |
| 7 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 14)) | 12 |
| 8-9 | Di chuyển hướng 2 (`2`) | (1, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 11 |
| 10-11 | Di chuyển hướng 1 (`1`) | (2, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 10 |
| 12-14 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 8 |
| 15 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 6 |
| 16-18 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 4 |
| 19 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 2 |
| 20-21 | Di chuyển hướng 5 (`5`) | (2, 10) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 1 |
| 22-23 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 0 |
| 24-55 | Chờ 32 bước (`-32`) | (1, 9) | (1, 9) | Dự kiến đứng yên tại (1, 9); mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (20, 19) (ô=476)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=5, tọa độ=(14, 4))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=5, tọa độ=(14, 4))
- Mảng hành động đã gửi server: `[0, 1, 1, 1, 4, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 1, 0, 1, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (20, 19) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 30 |
| 1 | Di chuyển hướng 1 (`1`) | (19, 18) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 28 |
| 2 | Di chuyển hướng 1 (`1`) | (20, 17) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 26 |
| 3 | Di chuyển hướng 1 (`1`) | (20, 16) | (21, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=12, tọa độ=(21, 15)) | 24 |
| 4-5 | Di chuyển hướng 4 (`4`) | (21, 15) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 23 |
| 6 | Di chuyển hướng 5 (`5`) | (20, 16) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 21 |
| 7-9 | Di chuyển hướng 0 (`0`) | (19, 16) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 19 |
| 10-12 | Di chuyển hướng 0 (`0`) | (19, 15) | (18, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=11, tọa độ=(18, 14)) | 17 |
| 13-14 | Di chuyển hướng 0 (`0`) | (18, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 16 |
| 15-17 | Di chuyển hướng 0 (`0`) | (18, 13) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 14 |
| 18 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 12 |
| 19 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 10 |
| 20 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 8 |
| 21 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(15, 9)) | 6 |
| 22-23 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 5 |
| 24-25 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 4 |
| 26-27 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 3 |
| 28-29 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 2 |
| 30 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=5, tọa độ=(14, 4)) | 0 |
| 31-55 | Chờ 25 bước (`-25`) | (14, 4) | (14, 4) | Dự kiến đứng yên tại (14, 4); mục tiêu Spot #7 (thương hiệu=5, tọa độ=(14, 4)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (15, 23) (ô=567)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 22)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 22)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 1, 0, 0, 1, 0, -1, 4, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 4, 3, 2, 2, 2, 2, 2, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 23) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 18 |
| 2 | Di chuyển hướng 0 (`0`) | (14, 22) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 16 |
| 3-4 | Di chuyển hướng 0 (`0`) | (14, 21) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 15 |
| 5-6 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 14 |
| 7-8 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 13 |
| 9-10 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=13, tọa độ=(11, 19)) | 12 |
| 11-12 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 11 |
| 13-15 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 9 |
| 16 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 7 |
| 17 | Di chuyển hướng 0 (`0`) | (9, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 5 |
| 18-19 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 4 |
| 20-21 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 3 |
| 22-23 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 2 |
| 24-25 | Di chuyển hướng 1 (`1`) | (8, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 1 |
| 26-27 | Di chuyển hướng 0 (`0`) | (9, 11) | (8, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 80 |
| 28 | Chờ 1 bước (`-1`) | (8, 10) | (8, 10) | Dự kiến đứng yên tại (8, 10); mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 80 |
| 29-30 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 79 |
| 31 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 77 |
| 32 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 75 |
| 33 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 73 |
| 34 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 71 |
| 35 | Di chuyển hướng 4 (`4`) | (5, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 69 |
| 36 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 80 |
| 37 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 78 |
| 38-40 | Di chuyển hướng 4 (`4`) | (4, 17) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 76 |
| 41 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 74 |
| 42 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 72 |
| 43 | Di chuyển hướng 3 (`3`) | (3, 20) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 70 |
| 44 | Di chuyển hướng 4 (`4`) | (4, 21) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 68 |
| 45 | Di chuyển hướng 3 (`3`) | (3, 22) | (4, 23) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=15, tọa độ=(4, 23)) | 66 |
| 46-47 | Di chuyển hướng 2 (`2`) | (4, 23) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 65 |
| 48 | Di chuyển hướng 2 (`2`) | (5, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 63 |
| 49 | Di chuyển hướng 2 (`2`) | (6, 23) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 61 |
| 50 | Di chuyển hướng 2 (`2`) | (7, 23) | (8, 23) | Dự kiến đến điểm hẹn tọa độ (8, 23) | 59 |
| 51-53 | Di chuyển hướng 2 (`2`) | (8, 23) | (9, 23) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 57 |
| 54-55 | Di chuyển hướng 0 (`0`) | (9, 23) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 56 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (21, 6) (ô=165)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 16)
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 0, 0, 5, 4, 4, 5, 4, 5, 4, 4, 5, 5, 4, 4, 4, -3, 4, 5, 4, 4, 4, 4, 4, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 80 |
| 2 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 80 |
| 3 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 80 |
| 4 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 80 |
| 5-6 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 80 |
| 7 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 80 |
| 8 | Di chuyển hướng 5 (`5`) | (17, 2) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 80 |
| 9 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 80 |
| 10 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 80 |
| 11 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=5, tọa độ=(14, 4)) | 80 |
| 12-13 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 80 |
| 14 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 80 |
| 15 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 80 |
| 16 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 80 |
| 17 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 80 |
| 18 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 80 |
| 19 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 80 |
| 20-21 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 80 |
| 22-24 | Di chuyển hướng 4 (`4`) | (9, 9) | (8, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 80 |
| 25-27 | Chờ 3 bước (`-3`) | (8, 10) | (8, 10) | Dự kiến đứng yên tại (8, 10); mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 80 |
| 28-29 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 80 |
| 30 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 80 |
| 31 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 80 |
| 32 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 80 |
| 33 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 80 |
| 34 | Di chuyển hướng 4 (`4`) | (5, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 80 |
| 35 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 80 |
| 36-55 | Chờ 20 bước (`-20`) | (4, 16) | (4, 16) | Dự kiến đứng yên tại (4, 16); hướng tới tọa độ (4, 16) | 80 |

