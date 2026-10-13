# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 75
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 32 | #0 | #4 | (7, 11) | 29 | 67 |
| 36 | #3 | #4 | (7, 11) | 19 | 67 |
| 38 | #1 | #4 | (7, 11) | 38 | 67 |
| 41 | #2 | #4 | (7, 11) | 25 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 13) (ô=234)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(5, 0))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(5, 0))
- Mảng hành động đã gửi server: `[3, 1, 1, 1, 1, 0, 0, 0, 0, 5, 4, 4, 4, 4, 5, 5, 5, 4, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 0, 5, 5, 5, 5, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 14)) | 52 |
| 2-3 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 51 |
| 4-6 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 49 |
| 7 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 47 |
| 8-9 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 10)) | 46 |
| 10-11 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 45 |
| 12-13 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 44 |
| 14-15 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 43 |
| 16-17 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 42 |
| 18 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(12, 6)) | 40 |
| 19-20 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 39 |
| 21-22 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 38 |
| 23 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 36 |
| 24 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 34 |
| 25 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 32 |
| 26-27 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 31 |
| 28-29 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 30 |
| 30-31 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 67 |
| 32-33 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 66 |
| 34-35 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 65 |
| 36-37 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 64 |
| 38-39 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(9, 8)) | 63 |
| 40-41 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 62 |
| 42-43 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 61 |
| 44-45 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 60 |
| 46-47 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 59 |
| 48-49 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 58 |
| 50-51 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 57 |
| 52-53 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 56 |
| 54-55 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(14, 1)) | 55 |
| 56-57 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 54 |
| 58-59 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 53 |
| 60-61 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 52 |
| 62 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 50 |
| 63-64 | Di chuyển hướng 0 (`0`) | (10, 1) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 49 |
| 65 | Di chuyển hướng 5 (`5`) | (9, 0) | (8, 0) | Dự kiến đến điểm hẹn tọa độ (8, 0) | 47 |
| 66-67 | Di chuyển hướng 5 (`5`) | (8, 0) | (7, 0) | Dự kiến đến điểm hẹn tọa độ (7, 0) | 46 |
| 68-69 | Di chuyển hướng 5 (`5`) | (7, 0) | (6, 0) | Dự kiến đến điểm hẹn tọa độ (6, 0) | 45 |
| 70-71 | Di chuyển hướng 5 (`5`) | (6, 0) | (5, 0) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 0)) | 44 |
| 72-74 | Chờ 3 bước (`-3`) | (5, 0) | (5, 0) | Dự kiến đứng yên tại (5, 0); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 0)) | 44 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 7) (ô=130)
- Nhiên liệu đầu ngày: 66
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=0, tọa độ=(14, 1))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=0, tọa độ=(14, 1))
- Mảng hành động đã gửi server: `[4, 2, 1, 1, 3, 3, 3, 2, 3, 4, 5, 5, 4, 5, 0, 0, 0, 0, 5, 4, 4, 4, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 7) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 65 |
| 2-3 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 64 |
| 4 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 62 |
| 5-6 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(12, 6)) | 61 |
| 7-8 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 60 |
| 9 | Di chuyển hướng 3 (`3`) | (13, 7) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 58 |
| 10-11 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 57 |
| 12-13 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 56 |
| 14-15 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 10)) | 55 |
| 16-17 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 54 |
| 18-19 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 53 |
| 20 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 51 |
| 21-22 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 12)) | 50 |
| 23-24 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 49 |
| 25 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 47 |
| 26 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 45 |
| 27 | Di chuyển hướng 0 (`0`) | (10, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 43 |
| 28-29 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(9, 8)) | 42 |
| 30-31 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 41 |
| 32-33 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 40 |
| 34-35 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 39 |
| 36-37 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 67 |
| 38-39 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 66 |
| 40-41 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 65 |
| 42-43 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 64 |
| 44-45 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 63 |
| 46-47 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 62 |
| 48-49 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 61 |
| 50 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 59 |
| 51-52 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 58 |
| 53-54 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 57 |
| 55-56 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 56 |
| 57-58 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 55 |
| 59-60 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(14, 1)) | 54 |
| 61-74 | Chờ 14 bước (`-14`) | (14, 1) | (14, 1) | Dự kiến đứng yên tại (14, 1); mục tiêu Spot #8 (thương hiệu=0, tọa độ=(14, 1)) | 54 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (12, 5) (ô=97)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 10)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 4, 5, 3, 3, 3, 3, 2, 5, 5, 5, 5, 5, 0, -1, 0, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 52 |
| 2-3 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 51 |
| 4-5 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 50 |
| 6-7 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(14, 1)) | 49 |
| 8-9 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 48 |
| 10-11 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 47 |
| 12-13 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 46 |
| 14-15 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 45 |
| 16-17 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 44 |
| 18-19 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 43 |
| 20-21 | Di chuyển hướng 4 (`4`) | (11, 7) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 42 |
| 22-23 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(9, 8)) | 41 |
| 24-25 | Di chuyển hướng 3 (`3`) | (9, 8) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 40 |
| 26-27 | Di chuyển hướng 3 (`3`) | (10, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 39 |
| 28 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 37 |
| 29 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 35 |
| 30 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 12)) | 33 |
| 31-32 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 32 |
| 33 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 30 |
| 34-35 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 29 |
| 36-37 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 28 |
| 38 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 26 |
| 39-40 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 67 |
| 41 | Chờ 1 bước (`-1`) | (7, 11) | (7, 11) | Dự kiến đứng yên tại (7, 11); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 67 |
| 42-43 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 66 |
| 44-74 | Chờ 31 bước (`-31`) | (6, 10) | (6, 10) | Dự kiến đứng yên tại (6, 10); hướng tới tọa độ (6, 10) | 66 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (14, 1) (ô=31)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(13, 14))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(13, 14))
- Mảng hành động đã gửi server: `[3, 3, 4, 4, 4, 3, 3, 3, 3, 0, 0, 0, 0, 5, 4, 4, 4, 4, 5, 5, 5, 4, 1, 1, 1, 2, 2, 3, 3, 3, 3, 3, 3, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (14, 1) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 48 |
| 2-3 | Di chuyển hướng 3 (`3`) | (14, 2) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 47 |
| 4 | Di chuyển hướng 4 (`4`) | (15, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 45 |
| 5 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 43 |
| 6 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 41 |
| 7 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 39 |
| 8-9 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 38 |
| 10-11 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 37 |
| 12-13 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 10)) | 36 |
| 14-15 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 35 |
| 16-17 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 34 |
| 18-19 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 33 |
| 20-21 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 32 |
| 22 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(12, 6)) | 30 |
| 23-24 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 29 |
| 25-26 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 28 |
| 27 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 26 |
| 28 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 24 |
| 29 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 22 |
| 30-31 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 21 |
| 32-33 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 20 |
| 34-35 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 67 |
| 36-37 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 66 |
| 38-39 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 65 |
| 40-41 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 64 |
| 42-43 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(9, 8)) | 63 |
| 44-45 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 62 |
| 46-47 | Di chuyển hướng 3 (`3`) | (10, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 61 |
| 48 | Di chuyển hướng 3 (`3`) | (11, 9) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 59 |
| 49-50 | Di chuyển hướng 3 (`3`) | (11, 10) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 58 |
| 51-53 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 12)) | 56 |
| 54-55 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 55 |
| 56-57 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 14)) | 54 |
| 58-74 | Chờ 17 bước (`-17`) | (13, 14) | (13, 14) | Dự kiến đứng yên tại (13, 14); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 14)) | 54 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (10, 8) (ô=146)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(7, 11))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(7, 11))
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 4, -65]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 67 |
| 2-3 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 67 |
| 4-5 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 67 |
| 6-7 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 67 |
| 8-9 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 67 |
| 10-74 | Chờ 65 bước (`-65`) | (7, 11) | (7, 11) | Dự kiến đứng yên tại (7, 11); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 67 |

