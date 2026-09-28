# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 78
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 11 | #1 | #4 | (7, 9) | 46 | 65 |
| 21 | #3 | #4 | (10, 9) | 34 | 65 |
| 34 | #2 | #4 | (10, 8) | 4 | 65 |
| 41 | #0 | #4 | (10, 8) | 27 | 65 |
| 57 | #1 | #4 | (10, 8) | 28 | 65 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (4, 13) (ô=212)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(14, 1))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(14, 1))
- Mảng hành động đã gửi server: `[2, 5, 5, 0, 5, 0, 0, 0, 1, 0, 1, 1, 2, 2, 2, 3, 3, 3, 2, 3, 2, 2, 2, 1, 2, 1, 2, 2, 3, 0, 1, 1, 1, 0, 0, 0, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 59 |
| 2-3 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 58 |
| 4-5 | Di chuyển hướng 5 (`5`) | (4, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 57 |
| 6 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 55 |
| 7 | Di chuyển hướng 5 (`5`) | (2, 12) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 53 |
| 8 | Di chuyển hướng 0 (`0`) | (1, 12) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 51 |
| 9-11 | Di chuyển hướng 0 (`0`) | (1, 11) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 49 |
| 12-13 | Di chuyển hướng 0 (`0`) | (0, 10) | (0, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 9)) | 48 |
| 14-15 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 47 |
| 16 | Di chuyển hướng 0 (`0`) | (0, 8) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 45 |
| 17 | Di chuyển hướng 1 (`1`) | (0, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 43 |
| 18-19 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 5)) | 42 |
| 20-21 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 41 |
| 22-23 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 40 |
| 24 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 38 |
| 25 | Di chuyển hướng 3 (`3`) | (4, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 36 |
| 26-27 | Di chuyển hướng 3 (`3`) | (4, 6) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 35 |
| 28-29 | Di chuyển hướng 3 (`3`) | (5, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 34 |
| 30-31 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 33 |
| 32 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 31 |
| 33-34 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 9)) | 30 |
| 35-36 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 29 |
| 37-38 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 28 |
| 39-40 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 65 |
| 41-42 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 64 |
| 43 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 62 |
| 44 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 60 |
| 45 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 58 |
| 46-47 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(14, 8)) | 57 |
| 48-49 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 56 |
| 50-51 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 55 |
| 52 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 53 |
| 53-54 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 52 |
| 55 | Di chuyển hướng 0 (`0`) | (15, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 50 |
| 56-57 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 49 |
| 58 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 1)) | 47 |
| 59-77 | Chờ 19 bước (`-19`) | (14, 1) | (14, 1) | Dự kiến đứng yên tại (14, 1); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 1)) | 47 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 11) (ô=184)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(14, 1))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(14, 1))
- Mảng hành động đã gửi server: `[1, 1, 2, 5, 5, 5, 0, 5, 5, 5, 0, 0, 0, 5, 4, 4, 3, 4, 3, 3, 3, 2, 3, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, -9]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 52 |
| 2 | Di chuyển hướng 1 (`1`) | (8, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 50 |
| 3-4 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 49 |
| 5-6 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 48 |
| 7-8 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 9)) | 47 |
| 9-10 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 65 |
| 11-12 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 64 |
| 13 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 62 |
| 14-15 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 61 |
| 16 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 59 |
| 17-18 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 58 |
| 19-20 | Di chuyển hướng 0 (`0`) | (3, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 57 |
| 21 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 55 |
| 22-23 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 5)) | 54 |
| 24-25 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 53 |
| 26-27 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 52 |
| 28 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 50 |
| 29 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 9)) | 48 |
| 30-31 | Di chuyển hướng 3 (`3`) | (0, 9) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 47 |
| 32-33 | Di chuyển hướng 3 (`3`) | (0, 10) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 46 |
| 34-36 | Di chuyển hướng 3 (`3`) | (1, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 44 |
| 37 | Di chuyển hướng 2 (`2`) | (1, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 42 |
| 38 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 40 |
| 39 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 38 |
| 40-41 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 37 |
| 42-43 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 36 |
| 44 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 34 |
| 45-46 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 33 |
| 47-48 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 32 |
| 49-50 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 9)) | 31 |
| 51-52 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 30 |
| 53-54 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 29 |
| 55-56 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 65 |
| 57-58 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 64 |
| 59-60 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 63 |
| 61 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 61 |
| 62 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 59 |
| 63-64 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 58 |
| 65-66 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 57 |
| 67-68 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 1)) | 56 |
| 69-77 | Chờ 9 bước (`-9`) | (14, 1) | (14, 1) | Dự kiến đứng yên tại (14, 1); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 1)) | 56 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 8) (ô=142)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(4, 13))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(4, 13))
- Mảng hành động đã gửi server: `[0, 5, 5, 0, 5, 0, 0, 0, 1, 1, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 0, 5, 5, 5, 0, 0, 0, 5, 4, 4, 3, 4, 3, 3, 3, 2, 3, 2, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 32 |
| 2-3 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 31 |
| 4 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 29 |
| 5 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 27 |
| 6 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 25 |
| 7-8 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 24 |
| 9-10 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 23 |
| 11-12 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(9, 3)) | 22 |
| 13-14 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 21 |
| 15-16 | Di chuyển hướng 1 (`1`) | (9, 2) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 20 |
| 17-18 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 19 |
| 19 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 17 |
| 20 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 15 |
| 21 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 1)) | 13 |
| 22-23 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 12 |
| 24-25 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 11 |
| 26-27 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 10 |
| 28-29 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 9 |
| 30 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 7 |
| 31 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 5 |
| 32-33 | Di chuyển hướng 4 (`4`) | (11, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 65 |
| 34-35 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 64 |
| 36-37 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 63 |
| 38-39 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 9)) | 62 |
| 40-41 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 61 |
| 42-43 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 60 |
| 44 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 58 |
| 45-46 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 57 |
| 47 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 55 |
| 48-49 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 54 |
| 50-51 | Di chuyển hướng 0 (`0`) | (3, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 53 |
| 52 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 51 |
| 53-54 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 5)) | 50 |
| 55-56 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 49 |
| 57-58 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 48 |
| 59 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 46 |
| 60 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 9)) | 44 |
| 61-62 | Di chuyển hướng 3 (`3`) | (0, 9) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 43 |
| 63-64 | Di chuyển hướng 3 (`3`) | (0, 10) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 42 |
| 65-67 | Di chuyển hướng 3 (`3`) | (1, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 40 |
| 68 | Di chuyển hướng 2 (`2`) | (1, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 38 |
| 69 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 36 |
| 70 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 34 |
| 71-77 | Chờ 7 bước (`-7`) | (4, 13) | (4, 13) | Dự kiến đứng yên tại (4, 13); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 34 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 10) (ô=168)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=0, tọa độ=(5, 13))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=0, tọa độ=(5, 13))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 1, 1, 0, 5, 5, 4, 5, 4, 5, 5, 5, 0, 5, 5, 5, 0, 5, 0, 0, 4, 4, 3, 4, 3, 3, 3, 2, 3, 2, 2, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 50 |
| 1-2 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 49 |
| 3-4 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 48 |
| 5 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 46 |
| 6-7 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 45 |
| 8-9 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 44 |
| 10-11 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(14, 8)) | 43 |
| 12-13 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 42 |
| 14-15 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 41 |
| 16 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 39 |
| 17 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 37 |
| 18 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 35 |
| 19-20 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 65 |
| 21-22 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 64 |
| 23-24 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 9)) | 63 |
| 25-26 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 62 |
| 27-28 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 61 |
| 29 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 59 |
| 30-31 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 58 |
| 32 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 56 |
| 33-34 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 55 |
| 35-36 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(2, 7)) | 54 |
| 37-38 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 53 |
| 39-40 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 5)) | 52 |
| 41-42 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 51 |
| 43-44 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 50 |
| 45 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 48 |
| 46 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 9)) | 46 |
| 47-48 | Di chuyển hướng 3 (`3`) | (0, 9) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 45 |
| 49-50 | Di chuyển hướng 3 (`3`) | (0, 10) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 44 |
| 51-53 | Di chuyển hướng 3 (`3`) | (1, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 42 |
| 54 | Di chuyển hướng 2 (`2`) | (1, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 40 |
| 55 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 38 |
| 56 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 36 |
| 57-58 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 35 |
| 59-77 | Chờ 19 bước (`-19`) | (5, 13) | (5, 13) | Dự kiến đứng yên tại (5, 13); mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 35 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (2, 9) (ô=146)
- Nhiên liệu đầu ngày: 65
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 8)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 2, -4, 1, -55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 65 |
| 4 | Di chuyển hướng 2 (`2`) | (3, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 65 |
| 5-6 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 65 |
| 7-8 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 65 |
| 9-10 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 65 |
| 11-12 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 9)) | 65 |
| 13-14 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 65 |
| 15-16 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 65 |
| 17-20 | Chờ 4 bước (`-4`) | (10, 9) | (10, 9) | Dự kiến đứng yên tại (10, 9); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 65 |
| 21-22 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 65 |
| 23-77 | Chờ 55 bước (`-55`) | (10, 8) | (10, 8) | Dự kiến đứng yên tại (10, 8); hướng tới tọa độ (10, 8) | 65 |

