# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 96
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 4 | #1 | #3 | (13, 6) | 64 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 6) (ô=121)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=0, tọa độ=(6, 6))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=0, tọa độ=(6, 6))
- Mảng hành động đã gửi server: `[5, 4, 4, 5, 4, 4, 5, 5, 4, 2, 1, 2, 1, 2, 1, 1, 0, 1, 1, 1, 1, 1, 4, 4, 4, 5, 5, 4, 4, 5, 5, 5, -16]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 66 |
| 2-3 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 65 |
| 4-7 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 63 |
| 8-10 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 61 |
| 11-12 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 60 |
| 13-14 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 59 |
| 15-18 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 57 |
| 19-20 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 56 |
| 21-22 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 55 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 54 |
| 25-26 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 53 |
| 27-28 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 52 |
| 29-32 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 50 |
| 33-34 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 49 |
| 35-36 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 48 |
| 37-39 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 46 |
| 40-43 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 44 |
| 44-45 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 43 |
| 46-47 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 42 |
| 48-49 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 41 |
| 50-51 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 40 |
| 52-55 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 1)) | 38 |
| 56-57 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 37 |
| 58-61 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 35 |
| 62-63 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 34 |
| 64-65 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 33 |
| 66-67 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 32 |
| 68 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 30 |
| 69-71 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 28 |
| 72-75 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 26 |
| 76-77 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 6)) | 25 |
| 78-79 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(6, 6)) | 24 |
| 80-95 | Chờ 16 bước (`-16`) | (6, 6) | (6, 6) | Dự kiến đứng yên tại (6, 6); mục tiêu Spot #6 (thương hiệu=0, tọa độ=(6, 6)) | 24 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (13, 5) (ô=103)
- Nhiên liệu đầu ngày: 66
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=0, tọa độ=(6, 6))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=0, tọa độ=(6, 6))
- Mảng hành động đã gửi server: `[3, 5, 4, 4, 5, 4, 4, 5, 5, 5, 3, 2, 1, 2, 1, 2, 1, 1, 0, 5, 5, 5, 5, 5, -32]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 67 |
| 4-5 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 66 |
| 6-7 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 65 |
| 8-11 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 63 |
| 12-14 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 61 |
| 15-16 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 60 |
| 17-18 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 59 |
| 19-22 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 57 |
| 23-24 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 56 |
| 25-26 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 10)) | 55 |
| 27-28 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 54 |
| 29-30 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 53 |
| 31-32 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 52 |
| 33-34 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 51 |
| 35-38 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 49 |
| 39-40 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 48 |
| 41-42 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 47 |
| 43-45 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 45 |
| 46-49 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 43 |
| 50-51 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 42 |
| 52-55 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 40 |
| 56-59 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 38 |
| 60-61 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 6)) | 37 |
| 62-63 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(6, 6)) | 36 |
| 64-95 | Chờ 32 bước (`-32`) | (6, 6) | (6, 6) | Dự kiến đứng yên tại (6, 6); mục tiêu Spot #6 (thương hiệu=0, tọa độ=(6, 6)) | 36 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 6) (ô=121)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 9)
- Mảng hành động đã gửi server: `[1, 1, 0, 1, 0, 4, 4, 4, 4, 3, 4, 4, 5, 4, 4, 5, 5, 5, -1, 0, -49]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 66 |
| 2-3 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 65 |
| 4-5 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 64 |
| 6-7 | Di chuyển hướng 1 (`1`) | (14, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 63 |
| 8-10 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 1)) | 61 |
| 11-12 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 60 |
| 13-16 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 58 |
| 17-18 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 57 |
| 19-20 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 56 |
| 21-22 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 55 |
| 23-24 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 54 |
| 25-28 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 52 |
| 29-31 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 50 |
| 32-33 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 49 |
| 34-35 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 48 |
| 36-39 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 46 |
| 40-41 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 45 |
| 42-43 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 10)) | 44 |
| 44 | Chờ 1 bước (`-1`) | (6, 10) | (6, 10) | Dự kiến đứng yên tại (6, 10); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 10)) | 44 |
| 45-46 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 43 |
| 47-95 | Chờ 49 bước (`-49`) | (6, 9) | (6, 9) | Dự kiến đứng yên tại (6, 9); hướng tới tọa độ (6, 9) | 43 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (13, 6) (ô=121)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(13, 6))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(13, 6))
- Mảng hành động đã gửi server: `[-96]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-95 | Chờ 96 bước (`-96`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 67 |

