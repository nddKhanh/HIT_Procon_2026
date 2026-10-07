# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 48
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 15 | #3 | #4 | (8, 11) | 59 | 80 |
| 36 | #1 | #4 | (8, 11) | 31 | 80 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (10, 1) (ô=34)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 21)
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 3, 4, 3, 3, 4, 4, 3, 3, 3, 3, 2, 2, 2, 3, 3, 2, 3, 3, 4, 4, 4, 4, 3, 4, 4, 5, 5, 5, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 79 |
| 2 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 77 |
| 3 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 0)) | 75 |
| 4-5 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 74 |
| 6 | Di chuyển hướng 3 (`3`) | (13, 0) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 72 |
| 7 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 70 |
| 8-9 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 69 |
| 10-11 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=5, tọa độ=(14, 4)) | 68 |
| 12-13 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 67 |
| 14 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 65 |
| 15-16 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 64 |
| 17-18 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 63 |
| 19-20 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(15, 9)) | 62 |
| 21-22 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 61 |
| 23 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 59 |
| 24 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 57 |
| 25 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 55 |
| 26 | Di chuyển hướng 3 (`3`) | (18, 10) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 53 |
| 27 | Di chuyển hướng 3 (`3`) | (19, 11) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 51 |
| 28 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 49 |
| 29 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 47 |
| 30 | Di chuyển hướng 3 (`3`) | (21, 13) | (21, 14) | Dự kiến đến điểm hẹn tọa độ (21, 14) | 45 |
| 31 | Di chuyển hướng 4 (`4`) | (21, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=12, tọa độ=(21, 15)) | 43 |
| 32-33 | Di chuyển hướng 4 (`4`) | (21, 15) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 42 |
| 34 | Di chuyển hướng 4 (`4`) | (20, 16) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 40 |
| 35 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 38 |
| 36 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 36 |
| 37 | Di chuyển hướng 4 (`4`) | (20, 19) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 34 |
| 38 | Di chuyển hướng 4 (`4`) | (19, 20) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 32 |
| 39-41 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 30 |
| 42-43 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 29 |
| 44 | Di chuyển hướng 5 (`5`) | (17, 21) | (16, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=14, tọa độ=(16, 21)) | 27 |
| 45-46 | Di chuyển hướng 2 (`2`) | (16, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 26 |
| 47 | Di chuyển hướng 2 (`2`) | (17, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 24 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 6) (ô=145)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=10, tọa độ=(1, 14))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=10, tọa độ=(1, 14))
- Mảng hành động đã gửi server: `[1, 1, 0, 1, 2, 1, 1, 3, 4, 3, 4, 4, 4, 4, 4, 4, 5, 2, 2, 3, 2, 2, 2, 1, 2, 3, 4, 5, 4, 4, 4, 4, 4, 5, 5, 5, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 79 |
| 2 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 77 |
| 3 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 75 |
| 4 | Di chuyển hướng 1 (`1`) | (2, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 73 |
| 5 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 71 |
| 6 | Di chuyển hướng 1 (`1`) | (3, 2) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 69 |
| 7-9 | Di chuyển hướng 1 (`1`) | (4, 1) | (4, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 0)) | 67 |
| 10-11 | Di chuyển hướng 3 (`3`) | (4, 0) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 66 |
| 12 | Di chuyển hướng 4 (`4`) | (5, 1) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 64 |
| 13 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 62 |
| 14 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 60 |
| 15-16 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 59 |
| 17-19 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 57 |
| 20 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 55 |
| 21 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 53 |
| 22 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 51 |
| 23 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 49 |
| 24-25 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 48 |
| 26 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 46 |
| 27 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 44 |
| 28 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 42 |
| 29 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 40 |
| 30 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 38 |
| 31 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 36 |
| 32 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 34 |
| 33 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 32 |
| 34-35 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 80 |
| 36 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 78 |
| 37 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 76 |
| 38 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 74 |
| 39 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 72 |
| 40 | Di chuyển hướng 4 (`4`) | (5, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 70 |
| 41 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 68 |
| 42 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 66 |
| 43-44 | Di chuyển hướng 5 (`5`) | (3, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 65 |
| 45 | Di chuyển hướng 5 (`5`) | (2, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 63 |
| 46 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 61 |
| 47 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 14)) | 59 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (15, 13) (ô=327)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 6)
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 5, 5, 2, 2, 3, 3, 4, 3, 5, 5, 4, 4, 5, 0, 0, 5, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 79 |
| 2-3 | Di chuyển hướng 1 (`1`) | (15, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 78 |
| 4-6 | Di chuyển hướng 1 (`1`) | (16, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 76 |
| 7 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 74 |
| 8 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 72 |
| 9 | Di chuyển hướng 1 (`1`) | (18, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 70 |
| 10 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 68 |
| 11 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 66 |
| 12 | Di chuyển hướng 1 (`1`) | (20, 8) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 64 |
| 13-14 | Di chuyển hướng 1 (`1`) | (21, 7) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 63 |
| 15-16 | Di chuyển hướng 1 (`1`) | (21, 6) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 62 |
| 17 | Di chuyển hướng 1 (`1`) | (22, 5) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 60 |
| 18 | Di chuyển hướng 1 (`1`) | (22, 4) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 58 |
| 19 | Di chuyển hướng 1 (`1`) | (23, 3) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 56 |
| 20 | Di chuyển hướng 0 (`0`) | (23, 2) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 54 |
| 21 | Di chuyển hướng 0 (`0`) | (23, 1) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 52 |
| 22 | Di chuyển hướng 5 (`5`) | (22, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 50 |
| 23 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 48 |
| 24-25 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 47 |
| 26 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 45 |
| 27 | Di chuyển hướng 3 (`3`) | (22, 0) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 43 |
| 28 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 41 |
| 29 | Di chuyển hướng 4 (`4`) | (23, 2) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 39 |
| 30 | Di chuyển hướng 3 (`3`) | (23, 3) | (23, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(23, 4)) | 37 |
| 31-32 | Di chuyển hướng 5 (`5`) | (23, 4) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 36 |
| 33 | Di chuyển hướng 5 (`5`) | (22, 4) | (21, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(21, 4)) | 34 |
| 34-35 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 33 |
| 36 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 31 |
| 37 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 29 |
| 38 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 27 |
| 39 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 25 |
| 40-41 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 24 |
| 42-43 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 23 |
| 44-46 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 21 |
| 47 | Chờ 1 bước (`-1`) | (16, 6) | (16, 6) | Dự kiến đứng yên tại (16, 6); hướng tới tọa độ (16, 6) | 21 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 17) (ô=409)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=15, tọa độ=(4, 23))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=15, tọa độ=(4, 23))
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1, 4, 3, 3, 3, 4, 4, 3, 3, 3, 2, 4, 3, 4, 4, 5, 0, 0, 1, 4, 4, 4, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 17) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 79 |
| 2 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 77 |
| 3 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 75 |
| 4-5 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 74 |
| 6 | Di chuyển hướng 1 (`1`) | (4, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 72 |
| 7 | Di chuyển hướng 1 (`1`) | (5, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 70 |
| 8 | Di chuyển hướng 1 (`1`) | (5, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 68 |
| 9 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 66 |
| 10 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 64 |
| 11 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 62 |
| 12 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 60 |
| 13-14 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 80 |
| 15 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 78 |
| 16-17 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 77 |
| 18-19 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 76 |
| 20-21 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 75 |
| 22-23 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=11, tọa độ=(8, 16)) | 74 |
| 24-25 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 73 |
| 26-27 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 72 |
| 28 | Di chuyển hướng 3 (`3`) | (9, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 70 |
| 29 | Di chuyển hướng 2 (`2`) | (10, 19) | (11, 19) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=13, tọa độ=(11, 19)) | 68 |
| 30-31 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 67 |
| 32 | Di chuyển hướng 3 (`3`) | (10, 20) | (11, 21) | Dự kiến đến điểm hẹn tọa độ (11, 21) | 65 |
| 33 | Di chuyển hướng 4 (`4`) | (11, 21) | (10, 22) | Dự kiến đến điểm hẹn tọa độ (10, 22) | 63 |
| 34 | Di chuyển hướng 4 (`4`) | (10, 22) | (10, 23) | Dự kiến đến điểm hẹn tọa độ (10, 23) | 61 |
| 35 | Di chuyển hướng 5 (`5`) | (10, 23) | (9, 23) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 59 |
| 36-37 | Di chuyển hướng 0 (`0`) | (9, 23) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 58 |
| 38 | Di chuyển hướng 0 (`0`) | (8, 22) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 56 |
| 39 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 54 |
| 40-41 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 53 |
| 42 | Di chuyển hướng 4 (`4`) | (8, 21) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 51 |
| 43 | Di chuyển hướng 4 (`4`) | (7, 22) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 49 |
| 44 | Di chuyển hướng 5 (`5`) | (7, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 47 |
| 45 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 45 |
| 46 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=15, tọa độ=(4, 23)) | 43 |
| 47 | Chờ 1 bước (`-1`) | (4, 23) | (4, 23) | Dự kiến đứng yên tại (4, 23); mục tiêu Spot #21 (thương hiệu=15, tọa độ=(4, 23)) | 43 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (12, 19) (ô=468)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 11)
- Mảng hành động đã gửi server: `[5, 5, 0, 1, 0, 1, 0, 0, 0, 0, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=13, tọa độ=(11, 19)) | 80 |
| 2-3 | Di chuyển hướng 5 (`5`) | (11, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 80 |
| 4 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 80 |
| 5 | Di chuyển hướng 1 (`1`) | (9, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 80 |
| 6 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 80 |
| 7 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 80 |
| 8 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 80 |
| 9-10 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 80 |
| 11-12 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 80 |
| 13-14 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 80 |
| 15-47 | Chờ 33 bước (`-33`) | (8, 11) | (8, 11) | Dự kiến đứng yên tại (8, 11); hướng tới tọa độ (8, 11) | 80 |

