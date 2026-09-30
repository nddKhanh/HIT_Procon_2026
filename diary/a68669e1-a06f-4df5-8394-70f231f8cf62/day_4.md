# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 256
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #1 | #5 | (12, 14) | 63 | 64 |
| 3 | #1 | #5 | (13, 15) | 62 | 64 |
| 5 | #1 | #5 | (12, 16) | 63 | 64 |
| 5 | #2 | #5 | (12, 16) | 3 | 64 |
| 7 | #1 | #5 | (12, 17) | 63 | 64 |
| 18 | #3 | #5 | (8, 23) | 0 | 64 |
| 24 | #0 | #4 | (13, 13) | 1 | 64 |
| 30 | #3 | #4 | (10, 15) | 47 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (29, 19) (ô=637)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(7, 11))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(7, 11))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 5, 5, 5, 0, 5, -4, 3, 3, 3, 3, 3, 2, 2, 3, 3, 3, 3, 2, 3, 3, 0, 0, 5, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 4, -173]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (29, 19) | (28, 18) | Dự kiến đến điểm hẹn tọa độ (28, 18) | 36 |
| 2 | Di chuyển hướng 5 (`5`) | (28, 18) | (27, 18) | Dự kiến đến điểm hẹn tọa độ (27, 18) | 34 |
| 3 | Di chuyển hướng 5 (`5`) | (27, 18) | (26, 18) | Dự kiến đến điểm hẹn tọa độ (26, 18) | 32 |
| 4 | Di chuyển hướng 5 (`5`) | (26, 18) | (25, 18) | Dự kiến đến điểm hẹn tọa độ (25, 18) | 30 |
| 5 | Di chuyển hướng 5 (`5`) | (25, 18) | (24, 18) | Dự kiến đến điểm hẹn tọa độ (24, 18) | 28 |
| 6 | Di chuyển hướng 5 (`5`) | (24, 18) | (23, 18) | Dự kiến đến điểm hẹn tọa độ (23, 18) | 26 |
| 7 | Di chuyển hướng 5 (`5`) | (23, 18) | (22, 18) | Dự kiến đến điểm hẹn tọa độ (22, 18) | 24 |
| 8 | Di chuyển hướng 5 (`5`) | (22, 18) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 22 |
| 9 | Di chuyển hướng 5 (`5`) | (21, 18) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 20 |
| 10 | Di chuyển hướng 5 (`5`) | (20, 18) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 18 |
| 11 | Di chuyển hướng 0 (`0`) | (19, 18) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 16 |
| 12-13 | Di chuyển hướng 0 (`0`) | (19, 17) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 15 |
| 14 | Di chuyển hướng 0 (`0`) | (18, 16) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 13 |
| 15 | Di chuyển hướng 0 (`0`) | (18, 15) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 11 |
| 16 | Di chuyển hướng 5 (`5`) | (17, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 9 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 7 |
| 18 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 5 |
| 19 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 3 |
| 20 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 1 |
| 21-24 | Chờ 4 bước (`-4`) | (13, 13) | (13, 13) | Dự kiến đứng yên tại (13, 13); mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 64 |
| 25-26 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 63 |
| 27-28 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 61 |
| 29 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 59 |
| 30 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 57 |
| 31-32 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 56 |
| 33 | Di chuyển hướng 2 (`2`) | (15, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 54 |
| 34 | Di chuyển hướng 2 (`2`) | (16, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 52 |
| 35 | Di chuyển hướng 3 (`3`) | (17, 18) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 50 |
| 36 | Di chuyển hướng 3 (`3`) | (18, 19) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 48 |
| 37 | Di chuyển hướng 3 (`3`) | (18, 20) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 46 |
| 38-40 | Di chuyển hướng 3 (`3`) | (19, 21) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 44 |
| 41 | Di chuyển hướng 2 (`2`) | (19, 22) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 42 |
| 42 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 40 |
| 43-45 | Di chuyển hướng 3 (`3`) | (21, 23) | (21, 24) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 24)) | 38 |
| 46-47 | Di chuyển hướng 0 (`0`) | (21, 24) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 37 |
| 48-50 | Di chuyển hướng 0 (`0`) | (21, 23) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 35 |
| 51 | Di chuyển hướng 5 (`5`) | (20, 22) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 33 |
| 52 | Di chuyển hướng 0 (`0`) | (19, 22) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 31 |
| 53-55 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 29 |
| 56 | Di chuyển hướng 0 (`0`) | (18, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 27 |
| 57 | Di chuyển hướng 0 (`0`) | (18, 19) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 25 |
| 58 | Di chuyển hướng 5 (`5`) | (17, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 23 |
| 59 | Di chuyển hướng 5 (`5`) | (16, 18) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 21 |
| 60 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 19 |
| 61 | Di chuyển hướng 0 (`0`) | (14, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 17 |
| 62 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 15 |
| 63-64 | Di chuyển hướng 0 (`0`) | (13, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 14 |
| 65-66 | Di chuyển hướng 0 (`0`) | (13, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 13 |
| 67 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 11 |
| 68-69 | Di chuyển hướng 0 (`0`) | (12, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 10 |
| 70-71 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 9 |
| 72-73 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 8 |
| 74 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 6 |
| 75-78 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 4 |
| 79-80 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 2 |
| 81-82 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 11)) | 0 |
| 83-255 | Chờ 173 bước (`-173`) | (7, 11) | (7, 11) | Dự kiến đứng yên tại (7, 11); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 11)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (13, 13) (ô=429)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(28, 1))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(28, 1))
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 1, 1, 0, 0, 0, 0, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 0, 0, 0, 0, 1, 1, 2, 2, 2, 2, 2, -199]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 64 |
| 2 | Di chuyển hướng 3 (`3`) | (12, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 64 |
| 3-4 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 64 |
| 5-6 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=2, tọa độ=(12, 17)) | 64 |
| 7-8 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 63 |
| 9-10 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 62 |
| 11-12 | Di chuyển hướng 0 (`0`) | (13, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 61 |
| 13 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 59 |
| 14-15 | Di chuyển hướng 0 (`0`) | (12, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 58 |
| 16-17 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 57 |
| 18-19 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 11)) | 56 |
| 20-21 | Di chuyển hướng 1 (`1`) | (12, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 55 |
| 22-23 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 53 |
| 24-25 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 51 |
| 26 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 49 |
| 27 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 47 |
| 28 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 45 |
| 29 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 43 |
| 30 | Di chuyển hướng 2 (`2`) | (18, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 41 |
| 31 | Di chuyển hướng 2 (`2`) | (19, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 39 |
| 32 | Di chuyển hướng 2 (`2`) | (20, 10) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 37 |
| 33 | Di chuyển hướng 1 (`1`) | (21, 10) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 35 |
| 34 | Di chuyển hướng 1 (`1`) | (22, 9) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 33 |
| 35 | Di chuyển hướng 2 (`2`) | (22, 8) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 31 |
| 36-37 | Di chuyển hướng 1 (`1`) | (23, 8) | (24, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(24, 7)) | 30 |
| 38-39 | Di chuyển hướng 0 (`0`) | (24, 7) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 29 |
| 40 | Di chuyển hướng 0 (`0`) | (23, 6) | (23, 5) | Dự kiến đến điểm hẹn tọa độ (23, 5) | 27 |
| 41-43 | Di chuyển hướng 0 (`0`) | (23, 5) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 25 |
| 44 | Di chuyển hướng 0 (`0`) | (22, 4) | (22, 3) | Dự kiến đến điểm hẹn tọa độ (22, 3) | 23 |
| 45 | Di chuyển hướng 1 (`1`) | (22, 3) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 21 |
| 46 | Di chuyển hướng 1 (`1`) | (22, 2) | (23, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(23, 1)) | 19 |
| 47-48 | Di chuyển hướng 2 (`2`) | (23, 1) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 18 |
| 49-50 | Di chuyển hướng 2 (`2`) | (24, 1) | (25, 1) | Dự kiến đến điểm hẹn tọa độ (25, 1) | 17 |
| 51-52 | Di chuyển hướng 2 (`2`) | (25, 1) | (26, 1) | Dự kiến đến điểm hẹn tọa độ (26, 1) | 16 |
| 53 | Di chuyển hướng 2 (`2`) | (26, 1) | (27, 1) | Dự kiến đến điểm hẹn tọa độ (27, 1) | 14 |
| 54-56 | Di chuyển hướng 2 (`2`) | (27, 1) | (28, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(28, 1)) | 12 |
| 57-255 | Chờ 199 bước (`-199`) | (28, 1) | (28, 1) | Dự kiến đứng yên tại (28, 1); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(28, 1)) | 12 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (12, 17) (ô=556)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(29, 19))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(29, 19))
- Mảng hành động đã gửi server: `[1, -4, 2, 3, 3, 2, 2, 2, 3, 3, 3, 3, 2, 3, 3, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, -212]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 3 |
| 2-5 | Chờ 4 bước (`-4`) | (12, 16) | (12, 16) | Dự kiến đứng yên tại (12, 16); mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 64 |
| 6-7 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 63 |
| 8-9 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 62 |
| 10 | Di chuyển hướng 3 (`3`) | (14, 17) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 60 |
| 11 | Di chuyển hướng 2 (`2`) | (14, 18) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 58 |
| 12 | Di chuyển hướng 2 (`2`) | (15, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 56 |
| 13 | Di chuyển hướng 2 (`2`) | (16, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 54 |
| 14 | Di chuyển hướng 3 (`3`) | (17, 18) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 52 |
| 15 | Di chuyển hướng 3 (`3`) | (18, 19) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 50 |
| 16 | Di chuyển hướng 3 (`3`) | (18, 20) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 48 |
| 17-19 | Di chuyển hướng 3 (`3`) | (19, 21) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 46 |
| 20 | Di chuyển hướng 2 (`2`) | (19, 22) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 44 |
| 21 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 42 |
| 22-24 | Di chuyển hướng 3 (`3`) | (21, 23) | (21, 24) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 24)) | 40 |
| 25-26 | Di chuyển hướng 1 (`1`) | (21, 24) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 39 |
| 27 | Di chuyển hướng 1 (`1`) | (22, 23) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 37 |
| 28 | Di chuyển hướng 2 (`2`) | (22, 22) | (23, 22) | Dự kiến đến điểm hẹn tọa độ (23, 22) | 35 |
| 29 | Di chuyển hướng 2 (`2`) | (23, 22) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 33 |
| 30 | Di chuyển hướng 2 (`2`) | (24, 22) | (25, 22) | Dự kiến đến điểm hẹn tọa độ (25, 22) | 31 |
| 31 | Di chuyển hướng 2 (`2`) | (25, 22) | (26, 22) | Dự kiến đến điểm hẹn tọa độ (26, 22) | 29 |
| 32 | Di chuyển hướng 2 (`2`) | (26, 22) | (27, 22) | Dự kiến đến điểm hẹn tọa độ (27, 22) | 27 |
| 33 | Di chuyển hướng 2 (`2`) | (27, 22) | (28, 22) | Dự kiến đến điểm hẹn tọa độ (28, 22) | 25 |
| 34 | Di chuyển hướng 2 (`2`) | (28, 22) | (29, 22) | Dự kiến đến điểm hẹn tọa độ (29, 22) | 23 |
| 35 | Di chuyển hướng 2 (`2`) | (29, 22) | (30, 22) | Dự kiến đến điểm hẹn tọa độ (30, 22) | 21 |
| 36 | Di chuyển hướng 3 (`3`) | (30, 22) | (31, 23) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(31, 23)) | 19 |
| 37-38 | Di chuyển hướng 0 (`0`) | (31, 23) | (30, 22) | Dự kiến đến điểm hẹn tọa độ (30, 22) | 18 |
| 39 | Di chuyển hướng 0 (`0`) | (30, 22) | (30, 21) | Dự kiến đến điểm hẹn tọa độ (30, 21) | 16 |
| 40 | Di chuyển hướng 0 (`0`) | (30, 21) | (29, 20) | Dự kiến đến điểm hẹn tọa độ (29, 20) | 14 |
| 41-43 | Di chuyển hướng 0 (`0`) | (29, 20) | (29, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(29, 19)) | 12 |
| 44-255 | Chờ 212 bước (`-212`) | (29, 19) | (29, 19) | Dự kiến đứng yên tại (29, 19); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(29, 19)) | 12 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 23) (ô=744)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(11, 27))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(11, 27))
- Mảng hành động đã gửi server: `[-18, 1, 2, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 2, 0, 5, 5, 5, 5, 4, 0, 0, 0, 0, 2, 3, 3, 2, 2, 2, 3, 3, 3, 3, 2, 4, 3, 4, 4, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, -158]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-17 | Chờ 18 bước (`-18`) | (8, 23) | (8, 23) | Dự kiến đứng yên tại (8, 23); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 23)) | 64 |
| 18-19 | Di chuyển hướng 1 (`1`) | (8, 23) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 63 |
| 20-21 | Di chuyển hướng 2 (`2`) | (8, 22) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 61 |
| 22-23 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 59 |
| 24 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 57 |
| 25 | Di chuyển hướng 0 (`0`) | (10, 20) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 55 |
| 26 | Di chuyển hướng 1 (`1`) | (10, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 53 |
| 27 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 51 |
| 28 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 49 |
| 29 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 64 |
| 30 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 62 |
| 31 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 60 |
| 32 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 58 |
| 33 | Di chuyển hướng 1 (`1`) | (10, 12) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 56 |
| 34-35 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 11)) | 55 |
| 36-37 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 54 |
| 38 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 52 |
| 39 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 50 |
| 40-43 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 48 |
| 44-45 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 46 |
| 46-47 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 11)) | 44 |
| 48-49 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 43 |
| 50 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 41 |
| 51 | Di chuyển hướng 0 (`0`) | (6, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 39 |
| 52-54 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 7)) | 37 |
| 55-56 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 36 |
| 57 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 34 |
| 58 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 32 |
| 59-60 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 31 |
| 61-62 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 30 |
| 63-65 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 28 |
| 66 | Di chuyển hướng 3 (`3`) | (10, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 26 |
| 67 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 24 |
| 68-69 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 23 |
| 70-71 | Di chuyển hướng 3 (`3`) | (11, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 22 |
| 72-73 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 21 |
| 74-75 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 20 |
| 76 | Di chuyển hướng 3 (`3`) | (12, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 18 |
| 77-78 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 17 |
| 79-80 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=2, tọa độ=(12, 17)) | 16 |
| 81-82 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 15 |
| 83 | Di chuyển hướng 3 (`3`) | (12, 18) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 13 |
| 84-85 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 12 |
| 86-87 | Di chuyển hướng 3 (`3`) | (13, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 11 |
| 88 | Di chuyển hướng 4 (`4`) | (14, 21) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 9 |
| 89-90 | Di chuyển hướng 4 (`4`) | (13, 22) | (13, 23) | Dự kiến đến điểm hẹn tọa độ (13, 23) | 7 |
| 91-92 | Di chuyển hướng 4 (`4`) | (13, 23) | (12, 24) | Dự kiến đến điểm hẹn tọa độ (12, 24) | 6 |
| 93-94 | Di chuyển hướng 4 (`4`) | (12, 24) | (12, 25) | Dự kiến đến điểm hẹn tọa độ (12, 25) | 5 |
| 95-96 | Di chuyển hướng 4 (`4`) | (12, 25) | (11, 26) | Dự kiến đến điểm hẹn tọa độ (11, 26) | 4 |
| 97 | Di chuyển hướng 4 (`4`) | (11, 26) | (11, 27) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 27)) | 2 |
| 98-255 | Chờ 158 bước (`-158`) | (11, 27) | (11, 27) | Dự kiến đứng yên tại (11, 27); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 27)) | 2 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (25, 2) (ô=89)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 15)
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 3, 4, 4, 5, 5, 5, 4, 3, 4, 4, 5, 5, 5, 4, 4, 4, 4, 5, 5, 4, -227]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 5 (`5`) | (25, 2) | (24, 2) | Dự kiến đến điểm hẹn tọa độ (24, 2) | 64 |
| 4 | Di chuyển hướng 5 (`5`) | (24, 2) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 64 |
| 5 | Di chuyển hướng 5 (`5`) | (23, 2) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 64 |
| 6 | Di chuyển hướng 4 (`4`) | (22, 2) | (22, 3) | Dự kiến đến điểm hẹn tọa độ (22, 3) | 64 |
| 7 | Di chuyển hướng 3 (`3`) | (22, 3) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 64 |
| 8 | Di chuyển hướng 4 (`4`) | (22, 4) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 64 |
| 9 | Di chuyển hướng 4 (`4`) | (22, 5) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 64 |
| 10 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 64 |
| 11 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 64 |
| 12 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 64 |
| 13 | Di chuyển hướng 4 (`4`) | (18, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 64 |
| 14 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 64 |
| 15 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 64 |
| 16 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 64 |
| 17 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 64 |
| 18 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 64 |
| 19 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 64 |
| 20 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 64 |
| 21 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 64 |
| 22-23 | Di chuyển hướng 4 (`4`) | (13, 12) | (13, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 64 |
| 24-25 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 64 |
| 26 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 64 |
| 27 | Di chuyển hướng 5 (`5`) | (11, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 64 |
| 28 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 64 |
| 29-255 | Chờ 227 bước (`-227`) | (10, 15) | (10, 15) | Dự kiến đứng yên tại (10, 15); hướng tới tọa độ (10, 15) | 64 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (13, 13) (ô=429)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(8, 23))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(8, 23))
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 4, 5, 4, 3, 4, 4, 5, 4, -238]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 64 |
| 2 | Di chuyển hướng 3 (`3`) | (12, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 64 |
| 3-4 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 64 |
| 5-6 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=2, tọa độ=(12, 17)) | 64 |
| 7-8 | Di chuyển hướng 4 (`4`) | (12, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 64 |
| 9 | Di chuyển hướng 5 (`5`) | (11, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 64 |
| 10 | Di chuyển hướng 4 (`4`) | (10, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 64 |
| 11 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 64 |
| 12 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 64 |
| 13 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 64 |
| 14-15 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 64 |
| 16-17 | Di chuyển hướng 4 (`4`) | (8, 22) | (8, 23) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 23)) | 64 |
| 18-255 | Chờ 238 bước (`-238`) | (8, 23) | (8, 23) | Dự kiến đứng yên tại (8, 23); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 23)) | 64 |

