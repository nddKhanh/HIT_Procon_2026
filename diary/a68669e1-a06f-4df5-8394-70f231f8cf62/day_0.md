# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 64
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 22 | #0 | #5 | (17, 10) | 33 | 64 |
| 28 | #1 | #5 | (18, 10) | 32 | 64 |
| 43 | #0 | #4 | (5, 7) | 35 | 64 |
| 48 | #3 | #4 | (5, 7) | 20 | 64 |
| 53 | #2 | #5 | (18, 10) | 1 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (24, 0) (ô=24)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=1, tọa độ=(12, 16))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=1, tọa độ=(12, 16))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 4, 4, 3, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 0, 5, 5, 5, 4, 0, 0, 0, 0, -1, 2, 3, 3, 3, 2, 2, 3, 3, 2, 3, 2, 4, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (24, 0) | (25, 1) | Dự kiến đến điểm hẹn tọa độ (25, 1) | 63 |
| 2-3 | Di chuyển hướng 3 (`3`) | (25, 1) | (25, 2) | Dự kiến đến điểm hẹn tọa độ (25, 2) | 62 |
| 4 | Di chuyển hướng 3 (`3`) | (25, 2) | (26, 3) | Dự kiến đến điểm hẹn tọa độ (26, 3) | 60 |
| 5 | Di chuyển hướng 3 (`3`) | (26, 3) | (26, 4) | Dự kiến đến điểm hẹn tọa độ (26, 4) | 58 |
| 6 | Di chuyển hướng 4 (`4`) | (26, 4) | (26, 5) | Dự kiến đến điểm hẹn tọa độ (26, 5) | 56 |
| 7 | Di chuyển hướng 4 (`4`) | (26, 5) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 54 |
| 8 | Di chuyển hướng 3 (`3`) | (25, 6) | (26, 7) | Dự kiến đến điểm hẹn tọa độ (26, 7) | 52 |
| 9 | Di chuyển hướng 4 (`4`) | (26, 7) | (25, 8) | Dự kiến đến điểm hẹn tọa độ (25, 8) | 50 |
| 10-12 | Di chuyển hướng 4 (`4`) | (25, 8) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=3, tọa độ=(25, 9)) | 48 |
| 13-14 | Di chuyển hướng 4 (`4`) | (25, 9) | (24, 10) | Dự kiến đến điểm hẹn tọa độ (24, 10) | 47 |
| 15 | Di chuyển hướng 5 (`5`) | (24, 10) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 45 |
| 16 | Di chuyển hướng 5 (`5`) | (23, 10) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 43 |
| 17 | Di chuyển hướng 5 (`5`) | (22, 10) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 41 |
| 18 | Di chuyển hướng 5 (`5`) | (21, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 39 |
| 19 | Di chuyển hướng 5 (`5`) | (20, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 37 |
| 20 | Di chuyển hướng 5 (`5`) | (19, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 35 |
| 21 | Di chuyển hướng 5 (`5`) | (18, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 64 |
| 22 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 62 |
| 23 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 60 |
| 24 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 58 |
| 25 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 56 |
| 26 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 54 |
| 27 | Di chuyển hướng 4 (`4`) | (12, 10) | (12, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 11)) | 52 |
| 28-29 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 51 |
| 30-31 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 50 |
| 32 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 48 |
| 33 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 46 |
| 34 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 44 |
| 35 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 11)) | 42 |
| 36-37 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 41 |
| 38 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 39 |
| 39 | Di chuyển hướng 0 (`0`) | (6, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 37 |
| 40-42 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 7)) | 64 |
| 43 | Chờ 1 bước (`-1`) | (5, 7) | (5, 7) | Dự kiến đứng yên tại (5, 7); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 7)) | 64 |
| 44-45 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 63 |
| 46 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 61 |
| 47 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 59 |
| 48-49 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 58 |
| 50 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 56 |
| 51 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 54 |
| 52 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 52 |
| 53 | Di chuyển hướng 3 (`3`) | (10, 11) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 50 |
| 54 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 48 |
| 55-56 | Di chuyển hướng 3 (`3`) | (11, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 47 |
| 57-58 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 46 |
| 59-60 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 45 |
| 61 | Di chuyển hướng 3 (`3`) | (12, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 43 |
| 62-63 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 42 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (17, 19) (ô=625)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(29, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(29, 6)
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 0, 1, 1, 0, 0, 0, 0, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 0, 0, 0, 0, 1, 1, 2, 2, 2, 2, 2, 3, 3, 4, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (17, 19) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 63 |
| 2 | Di chuyển hướng 5 (`5`) | (16, 18) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 61 |
| 3 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 59 |
| 4 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 57 |
| 5 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 55 |
| 6 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=2, tọa độ=(12, 17)) | 53 |
| 7-8 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 52 |
| 9-10 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 51 |
| 11-12 | Di chuyển hướng 0 (`0`) | (13, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 50 |
| 13 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 48 |
| 14-15 | Di chuyển hướng 0 (`0`) | (12, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 47 |
| 16-17 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 46 |
| 18-19 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 11)) | 45 |
| 20-21 | Di chuyển hướng 1 (`1`) | (12, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 44 |
| 22 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 42 |
| 23 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 40 |
| 24 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 38 |
| 25 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 36 |
| 26 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 34 |
| 27 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 64 |
| 28 | Di chuyển hướng 2 (`2`) | (18, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 62 |
| 29 | Di chuyển hướng 2 (`2`) | (19, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 60 |
| 30 | Di chuyển hướng 2 (`2`) | (20, 10) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 58 |
| 31 | Di chuyển hướng 1 (`1`) | (21, 10) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 56 |
| 32 | Di chuyển hướng 1 (`1`) | (22, 9) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 54 |
| 33 | Di chuyển hướng 2 (`2`) | (22, 8) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 52 |
| 34-35 | Di chuyển hướng 1 (`1`) | (23, 8) | (24, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(24, 7)) | 51 |
| 36-37 | Di chuyển hướng 0 (`0`) | (24, 7) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 50 |
| 38 | Di chuyển hướng 0 (`0`) | (23, 6) | (23, 5) | Dự kiến đến điểm hẹn tọa độ (23, 5) | 48 |
| 39-41 | Di chuyển hướng 0 (`0`) | (23, 5) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 46 |
| 42 | Di chuyển hướng 0 (`0`) | (22, 4) | (22, 3) | Dự kiến đến điểm hẹn tọa độ (22, 3) | 44 |
| 43 | Di chuyển hướng 1 (`1`) | (22, 3) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 42 |
| 44 | Di chuyển hướng 1 (`1`) | (22, 2) | (23, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(23, 1)) | 40 |
| 45-46 | Di chuyển hướng 2 (`2`) | (23, 1) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 39 |
| 47-48 | Di chuyển hướng 2 (`2`) | (24, 1) | (25, 1) | Dự kiến đến điểm hẹn tọa độ (25, 1) | 38 |
| 49-50 | Di chuyển hướng 2 (`2`) | (25, 1) | (26, 1) | Dự kiến đến điểm hẹn tọa độ (26, 1) | 37 |
| 51 | Di chuyển hướng 2 (`2`) | (26, 1) | (27, 1) | Dự kiến đến điểm hẹn tọa độ (27, 1) | 35 |
| 52-54 | Di chuyển hướng 2 (`2`) | (27, 1) | (28, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(28, 1)) | 33 |
| 55-56 | Di chuyển hướng 3 (`3`) | (28, 1) | (28, 2) | Dự kiến đến điểm hẹn tọa độ (28, 2) | 32 |
| 57 | Di chuyển hướng 3 (`3`) | (28, 2) | (29, 3) | Dự kiến đến điểm hẹn tọa độ (29, 3) | 30 |
| 58-59 | Di chuyển hướng 4 (`4`) | (29, 3) | (28, 4) | Dự kiến đến điểm hẹn tọa độ (28, 4) | 29 |
| 60-61 | Di chuyển hướng 3 (`3`) | (28, 4) | (29, 5) | Dự kiến đến điểm hẹn tọa độ (29, 5) | 28 |
| 62-63 | Di chuyển hướng 3 (`3`) | (29, 5) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 27 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (20, 24) (ô=788)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 12)
- Mảng hành động đã gửi server: `[2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (20, 24) | (21, 24) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 24)) | 63 |
| 2-3 | Di chuyển hướng 1 (`1`) | (21, 24) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 62 |
| 4 | Di chuyển hướng 1 (`1`) | (22, 23) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 60 |
| 5 | Di chuyển hướng 2 (`2`) | (22, 22) | (23, 22) | Dự kiến đến điểm hẹn tọa độ (23, 22) | 58 |
| 6 | Di chuyển hướng 2 (`2`) | (23, 22) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 56 |
| 7 | Di chuyển hướng 2 (`2`) | (24, 22) | (25, 22) | Dự kiến đến điểm hẹn tọa độ (25, 22) | 54 |
| 8 | Di chuyển hướng 2 (`2`) | (25, 22) | (26, 22) | Dự kiến đến điểm hẹn tọa độ (26, 22) | 52 |
| 9 | Di chuyển hướng 2 (`2`) | (26, 22) | (27, 22) | Dự kiến đến điểm hẹn tọa độ (27, 22) | 50 |
| 10 | Di chuyển hướng 1 (`1`) | (27, 22) | (28, 21) | Dự kiến đến điểm hẹn tọa độ (28, 21) | 48 |
| 11-12 | Di chuyển hướng 1 (`1`) | (28, 21) | (28, 20) | Dự kiến đến điểm hẹn tọa độ (28, 20) | 47 |
| 13-15 | Di chuyển hướng 1 (`1`) | (28, 20) | (29, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(29, 19)) | 45 |
| 16-17 | Di chuyển hướng 3 (`3`) | (29, 19) | (29, 20) | Dự kiến đến điểm hẹn tọa độ (29, 20) | 44 |
| 18-20 | Di chuyển hướng 3 (`3`) | (29, 20) | (30, 21) | Dự kiến đến điểm hẹn tọa độ (30, 21) | 42 |
| 21 | Di chuyển hướng 3 (`3`) | (30, 21) | (30, 22) | Dự kiến đến điểm hẹn tọa độ (30, 22) | 40 |
| 22 | Di chuyển hướng 3 (`3`) | (30, 22) | (31, 23) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(31, 23)) | 38 |
| 23-24 | Di chuyển hướng 0 (`0`) | (31, 23) | (30, 22) | Dự kiến đến điểm hẹn tọa độ (30, 22) | 37 |
| 25 | Di chuyển hướng 0 (`0`) | (30, 22) | (30, 21) | Dự kiến đến điểm hẹn tọa độ (30, 21) | 35 |
| 26 | Di chuyển hướng 0 (`0`) | (30, 21) | (29, 20) | Dự kiến đến điểm hẹn tọa độ (29, 20) | 33 |
| 27-29 | Di chuyển hướng 0 (`0`) | (29, 20) | (29, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(29, 19)) | 31 |
| 30-31 | Di chuyển hướng 0 (`0`) | (29, 19) | (28, 18) | Dự kiến đến điểm hẹn tọa độ (28, 18) | 30 |
| 32 | Di chuyển hướng 0 (`0`) | (28, 18) | (28, 17) | Dự kiến đến điểm hẹn tọa độ (28, 17) | 28 |
| 33-34 | Di chuyển hướng 0 (`0`) | (28, 17) | (27, 16) | Dự kiến đến điểm hẹn tọa độ (27, 16) | 27 |
| 35-37 | Di chuyển hướng 0 (`0`) | (27, 16) | (27, 15) | Dự kiến đến điểm hẹn tọa độ (27, 15) | 25 |
| 38-39 | Di chuyển hướng 0 (`0`) | (27, 15) | (26, 14) | Dự kiến đến điểm hẹn tọa độ (26, 14) | 24 |
| 40 | Di chuyển hướng 0 (`0`) | (26, 14) | (26, 13) | Dự kiến đến điểm hẹn tọa độ (26, 13) | 22 |
| 41 | Di chuyển hướng 1 (`1`) | (26, 13) | (26, 12) | Dự kiến đến điểm hẹn tọa độ (26, 12) | 20 |
| 42 | Di chuyển hướng 0 (`0`) | (26, 12) | (26, 11) | Dự kiến đến điểm hẹn tọa độ (26, 11) | 18 |
| 43 | Di chuyển hướng 0 (`0`) | (26, 11) | (25, 10) | Dự kiến đến điểm hẹn tọa độ (25, 10) | 16 |
| 44 | Di chuyển hướng 0 (`0`) | (25, 10) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=3, tọa độ=(25, 9)) | 14 |
| 45-46 | Di chuyển hướng 4 (`4`) | (25, 9) | (24, 10) | Dự kiến đến điểm hẹn tọa độ (24, 10) | 13 |
| 47 | Di chuyển hướng 5 (`5`) | (24, 10) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 11 |
| 48 | Di chuyển hướng 5 (`5`) | (23, 10) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 9 |
| 49 | Di chuyển hướng 5 (`5`) | (22, 10) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 7 |
| 50 | Di chuyển hướng 5 (`5`) | (21, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 5 |
| 51 | Di chuyển hướng 5 (`5`) | (20, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 3 |
| 52 | Di chuyển hướng 5 (`5`) | (19, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 64 |
| 53 | Di chuyển hướng 5 (`5`) | (18, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 62 |
| 54 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 60 |
| 55 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 58 |
| 56 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 56 |
| 57 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 54 |
| 58 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 52 |
| 59 | Di chuyển hướng 4 (`4`) | (12, 10) | (12, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 11)) | 50 |
| 60-61 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 49 |
| 62-63 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 48 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (12, 24) (ô=780)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=0, tọa độ=(13, 13))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=0, tọa độ=(13, 13))
- Mảng hành động đã gửi server: `[4, 4, 4, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 2, 0, 5, 5, 5, 5, 4, 0, 0, 0, 0, 2, 3, 3, 3, 2, 2, 3, 3, 2, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (12, 24) | (12, 25) | Dự kiến đến điểm hẹn tọa độ (12, 25) | 63 |
| 2-3 | Di chuyển hướng 4 (`4`) | (12, 25) | (11, 26) | Dự kiến đến điểm hẹn tọa độ (11, 26) | 62 |
| 4 | Di chuyển hướng 4 (`4`) | (11, 26) | (11, 27) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 27)) | 60 |
| 5-6 | Di chuyển hướng 1 (`1`) | (11, 27) | (11, 26) | Dự kiến đến điểm hẹn tọa độ (11, 26) | 59 |
| 7 | Di chuyển hướng 1 (`1`) | (11, 26) | (12, 25) | Dự kiến đến điểm hẹn tọa độ (12, 25) | 57 |
| 8-9 | Di chuyển hướng 1 (`1`) | (12, 25) | (12, 24) | Dự kiến đến điểm hẹn tọa độ (12, 24) | 56 |
| 10-11 | Di chuyển hướng 1 (`1`) | (12, 24) | (13, 23) | Dự kiến đến điểm hẹn tọa độ (13, 23) | 55 |
| 12-13 | Di chuyển hướng 1 (`1`) | (13, 23) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 54 |
| 14 | Di chuyển hướng 1 (`1`) | (13, 22) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 52 |
| 15 | Di chuyển hướng 0 (`0`) | (14, 21) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 50 |
| 16-17 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 49 |
| 18-19 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 48 |
| 20 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=2, tọa độ=(12, 17)) | 46 |
| 21-22 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 45 |
| 23-24 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 44 |
| 25-26 | Di chuyển hướng 0 (`0`) | (13, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 43 |
| 27 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 41 |
| 28-29 | Di chuyển hướng 0 (`0`) | (12, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 40 |
| 30-31 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 39 |
| 32-33 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 11)) | 38 |
| 34-35 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 37 |
| 36 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 35 |
| 37 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 33 |
| 38 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 31 |
| 39 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 29 |
| 40 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 11)) | 27 |
| 41-42 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 26 |
| 43 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 24 |
| 44 | Di chuyển hướng 0 (`0`) | (6, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 22 |
| 45-47 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 7)) | 64 |
| 48-49 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 63 |
| 50 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 61 |
| 51 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 59 |
| 52-53 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 58 |
| 54 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 56 |
| 55 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 54 |
| 56 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 52 |
| 57 | Di chuyển hướng 3 (`3`) | (10, 11) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 50 |
| 58 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 48 |
| 59-60 | Di chuyển hướng 3 (`3`) | (11, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 47 |
| 61-62 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 46 |
| 63 | Chờ 1 bước (`-1`) | (13, 13) | (13, 13) | Dự kiến đứng yên tại (13, 13); mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 46 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (29, 28) (ô=925)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(5, 7))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(5, 7))
- Mảng hành động đã gửi server: `[1, 0, 5, 5, 5, 0, 1, 0, 0, 5, 5, 5, 0, 1, 0, 0, 5, 5, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (29, 28) | (30, 27) | Dự kiến đến điểm hẹn tọa độ (30, 27) | 64 |
| 2 | Di chuyển hướng 0 (`0`) | (30, 27) | (29, 26) | Dự kiến đến điểm hẹn tọa độ (29, 26) | 64 |
| 3 | Di chuyển hướng 5 (`5`) | (29, 26) | (28, 26) | Dự kiến đến điểm hẹn tọa độ (28, 26) | 64 |
| 4 | Di chuyển hướng 5 (`5`) | (28, 26) | (27, 26) | Dự kiến đến điểm hẹn tọa độ (27, 26) | 64 |
| 5 | Di chuyển hướng 5 (`5`) | (27, 26) | (26, 26) | Dự kiến đến điểm hẹn tọa độ (26, 26) | 64 |
| 6 | Di chuyển hướng 0 (`0`) | (26, 26) | (26, 25) | Dự kiến đến điểm hẹn tọa độ (26, 25) | 64 |
| 7 | Di chuyển hướng 1 (`1`) | (26, 25) | (26, 24) | Dự kiến đến điểm hẹn tọa độ (26, 24) | 64 |
| 8 | Di chuyển hướng 0 (`0`) | (26, 24) | (26, 23) | Dự kiến đến điểm hẹn tọa độ (26, 23) | 64 |
| 9 | Di chuyển hướng 0 (`0`) | (26, 23) | (25, 22) | Dự kiến đến điểm hẹn tọa độ (25, 22) | 64 |
| 10 | Di chuyển hướng 5 (`5`) | (25, 22) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 64 |
| 11 | Di chuyển hướng 5 (`5`) | (24, 22) | (23, 22) | Dự kiến đến điểm hẹn tọa độ (23, 22) | 64 |
| 12 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 64 |
| 13 | Di chuyển hướng 0 (`0`) | (22, 22) | (22, 21) | Dự kiến đến điểm hẹn tọa độ (22, 21) | 64 |
| 14 | Di chuyển hướng 1 (`1`) | (22, 21) | (22, 20) | Dự kiến đến điểm hẹn tọa độ (22, 20) | 64 |
| 15 | Di chuyển hướng 0 (`0`) | (22, 20) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 64 |
| 16 | Di chuyển hướng 0 (`0`) | (22, 19) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 64 |
| 17 | Di chuyển hướng 5 (`5`) | (21, 18) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 64 |
| 18 | Di chuyển hướng 5 (`5`) | (20, 18) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 64 |
| 19 | Di chuyển hướng 0 (`0`) | (19, 18) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 64 |
| 20-21 | Di chuyển hướng 0 (`0`) | (19, 17) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 64 |
| 22 | Di chuyển hướng 0 (`0`) | (18, 16) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 64 |
| 23 | Di chuyển hướng 0 (`0`) | (18, 15) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 64 |
| 24 | Di chuyển hướng 5 (`5`) | (17, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 64 |
| 25 | Di chuyển hướng 5 (`5`) | (16, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 64 |
| 26 | Di chuyển hướng 0 (`0`) | (15, 14) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 64 |
| 27-28 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 64 |
| 29 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 64 |
| 30 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 64 |
| 31 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 64 |
| 32 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 64 |
| 33 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 64 |
| 34 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 64 |
| 35 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 64 |
| 36 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 64 |
| 37 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 64 |
| 38-39 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 64 |
| 40 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 64 |
| 41 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 7)) | 64 |
| 42-63 | Chờ 22 bước (`-22`) | (5, 7) | (5, 7) | Dự kiến đứng yên tại (5, 7); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 7)) | 64 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (4, 0) (ô=4)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 10)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 4, 3, 2, 2, 2, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (4, 0) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 64 |
| 2-3 | Di chuyển hướng 3 (`3`) | (5, 1) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 64 |
| 4 | Di chuyển hướng 3 (`3`) | (5, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 64 |
| 5 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 64 |
| 6 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 64 |
| 7 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 64 |
| 8 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 64 |
| 9 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 64 |
| 10 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 64 |
| 11 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 64 |
| 12 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 64 |
| 13 | Di chuyển hướng 3 (`3`) | (10, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 64 |
| 14-15 | Di chuyển hướng 3 (`3`) | (11, 9) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 64 |
| 16 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 64 |
| 17 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 64 |
| 18 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 64 |
| 19 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 64 |
| 20 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 64 |
| 21 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 64 |
| 22 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 64 |
| 23-63 | Chờ 41 bước (`-41`) | (18, 10) | (18, 10) | Dự kiến đứng yên tại (18, 10); hướng tới tọa độ (18, 10) | 64 |

