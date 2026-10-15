# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 53
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 16 | #2 | #4 | (5, 12) | 52 | 67 |
| 48 | #0 | #4 | (13, 10) | 16 | 67 |
| 48 | #2 | #4 | (13, 10) | 43 | 67 |
| 50 | #1 | #4 | (13, 11) | 20 | 67 |
| 50 | #2 | #4 | (13, 11) | 66 | 67 |
| 51 | #0 | #4 | (13, 11) | 66 | 67 |
| 52 | #2 | #4 | (12, 12) | 66 | 67 |
| 53 | #0 | #4 | (12, 12) | 66 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 13) (ô=197)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 12)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 2, 3, 2, 2, 2, 2, 2, 2, 3, 0, 5, 5, 4, 5, 1, 1, 1, 1, 1, 1, -1, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 46 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 45 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 44 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 43 |
| 8-9 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 42 |
| 10-11 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 41 |
| 12 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 39 |
| 13-14 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 38 |
| 15-16 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 37 |
| 17 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 35 |
| 18-20 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 33 |
| 21 | Di chuyển hướng 2 (`2`) | (12, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 31 |
| 22-23 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 30 |
| 24-25 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(14, 16)) | 29 |
| 26-27 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 28 |
| 28-29 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 27 |
| 30-31 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 26 |
| 32 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 24 |
| 33-34 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(10, 16)) | 23 |
| 35-36 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 22 |
| 37-39 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 20 |
| 40-41 | Di chuyển hướng 1 (`1`) | (11, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 19 |
| 42-43 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 18 |
| 44-45 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 17 |
| 46-47 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 48 | Chờ 1 bước (`-1`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); mục tiêu Spot #8 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 49-50 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 67 |
| 51-52 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 67 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (5, 0) (ô=5)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=0, tọa độ=(13, 10))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=0, tọa độ=(13, 10))
- Mảng hành động đã gửi server: `[4, 4, 3, 4, 4, 4, 3, 3, 3, 3, 3, 3, 4, 3, 2, 3, 2, 2, 3, 2, 1, 2, 2, 3, 0, 0, 0, 0, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (5, 0) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 58 |
| 2-3 | Di chuyển hướng 4 (`4`) | (5, 1) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 57 |
| 4-5 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 56 |
| 6-7 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 55 |
| 8 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 53 |
| 9 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 51 |
| 10-11 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 50 |
| 12 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 48 |
| 13 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 46 |
| 14-16 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 10)) | 44 |
| 17-18 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 43 |
| 19-20 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 42 |
| 21-22 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 41 |
| 23-24 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 40 |
| 25-26 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 39 |
| 27 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 37 |
| 28-29 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 36 |
| 30-31 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 35 |
| 32 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(10, 16)) | 33 |
| 33-34 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 32 |
| 35-36 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 31 |
| 37 | Di chuyển hướng 2 (`2`) | (12, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 29 |
| 38-39 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 28 |
| 40-41 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(14, 16)) | 27 |
| 42-43 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 26 |
| 44-45 | Di chuyển hướng 0 (`0`) | (14, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 25 |
| 46 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 23 |
| 47 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 21 |
| 48-49 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 67 |
| 50-51 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(13, 10)) | 66 |
| 52 | Chờ 1 bước (`-1`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); mục tiêu Spot #8 (thương hiệu=0, tọa độ=(13, 10)) | 66 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 2) (ô=33)
- Nhiên liệu đầu ngày: 66
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 12)
- Mảng hành động đã gửi server: `[4, 3, 3, 4, 3, 3, 4, 3, 3, 3, 3, 3, 2, 3, 2, 2, 3, 2, 1, 2, 2, 3, 0, 0, 0, 0, 1, 1, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (3, 2) | (3, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 3)) | 65 |
| 2-3 | Di chuyển hướng 3 (`3`) | (3, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 64 |
| 4-5 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 63 |
| 6 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 61 |
| 7-8 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 60 |
| 9 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 58 |
| 10 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 56 |
| 11 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 54 |
| 12-13 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 53 |
| 14-15 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 67 |
| 16-18 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 65 |
| 19-20 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 64 |
| 21-22 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 63 |
| 23 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 61 |
| 24-25 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 60 |
| 26-27 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 59 |
| 28 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(10, 16)) | 57 |
| 29-30 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 56 |
| 31-32 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 55 |
| 33 | Di chuyển hướng 2 (`2`) | (12, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 53 |
| 34-35 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 52 |
| 36-37 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(14, 16)) | 51 |
| 38-39 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 50 |
| 40-41 | Di chuyển hướng 0 (`0`) | (14, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 49 |
| 42 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 47 |
| 43 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 45 |
| 44-45 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 44 |
| 46-47 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 48-49 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 67 |
| 50-51 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 67 |
| 52 | Chờ 1 bước (`-1`) | (12, 12) | (12, 12) | Dự kiến đứng yên tại (12, 12); hướng tới tọa độ (12, 12) | 67 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (6, 4) (ô=66)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(5, 10))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(5, 10))
- Mảng hành động đã gửi server: `[2, 2, 1, 2, 2, 2, 2, 5, 4, 5, 5, 5, 5, 5, 0, 1, 0, 0, 4, 4, 5, 4, 3, 3, 4, 3, 3, 3, 3, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 41 |
| 2 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 39 |
| 3-4 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 38 |
| 5-6 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 37 |
| 7 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 35 |
| 8-9 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 34 |
| 10 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 32 |
| 11-12 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 31 |
| 13 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 29 |
| 14 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 27 |
| 15-16 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 26 |
| 17-18 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 25 |
| 19-20 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 24 |
| 21 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 22 |
| 22-23 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 21 |
| 24-25 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 20 |
| 26 | Di chuyển hướng 0 (`0`) | (6, 2) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 18 |
| 27-28 | Di chuyển hướng 0 (`0`) | (6, 1) | (5, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 0)) | 17 |
| 29-30 | Di chuyển hướng 4 (`4`) | (5, 0) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 16 |
| 31-32 | Di chuyển hướng 4 (`4`) | (5, 1) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 15 |
| 33-34 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 14 |
| 35-36 | Di chuyển hướng 4 (`4`) | (3, 2) | (3, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 3)) | 13 |
| 37-38 | Di chuyển hướng 3 (`3`) | (3, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 12 |
| 39-40 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 11 |
| 41 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 9 |
| 42-43 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 8 |
| 44 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 6 |
| 45 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 4 |
| 46-48 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 10)) | 2 |
| 49-52 | Chờ 4 bước (`-4`) | (5, 10) | (5, 10) | Dự kiến đứng yên tại (5, 10); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 10)) | 2 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (3, 3) (ô=48)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 12)
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 3, 4, 3, 3, 3, 3, 3, 2, 1, 2, 2, 1, 2, 1, 2, 1, -11, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (3, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 67 |
| 2-3 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 67 |
| 4 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 67 |
| 5-6 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 67 |
| 7 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 67 |
| 8 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 67 |
| 9 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 67 |
| 10-11 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 67 |
| 12-13 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 67 |
| 14-16 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 67 |
| 17-18 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 67 |
| 19-20 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 67 |
| 21 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 67 |
| 22-24 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 67 |
| 25-26 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 67 |
| 27-28 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 67 |
| 29-30 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 67 |
| 31-32 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 67 |
| 33-34 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 67 |
| 35-36 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 37-47 | Chờ 11 bước (`-11`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); mục tiêu Spot #8 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 48-49 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 67 |
| 50-51 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 67 |
| 52 | Chờ 1 bước (`-1`) | (12, 12) | (12, 12) | Dự kiến đứng yên tại (12, 12); hướng tới tọa độ (12, 12) | 67 |

