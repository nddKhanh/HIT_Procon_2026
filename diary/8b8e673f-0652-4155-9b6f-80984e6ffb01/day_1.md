# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 56
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 14 | #2 | #3 | (1, 13) | 1 | 32 |
| 18 | #2 | #3 | (2, 12) | 29 | 32 |
| 28 | #0 | #3 | (5, 6) | 0 | 32 |
| 30 | #0 | #3 | (5, 7) | 31 | 32 |
| 32 | #0 | #3 | (4, 8) | 31 | 32 |
| 34 | #0 | #3 | (5, 9) | 31 | 32 |
| 35 | #0 | #3 | (4, 10) | 30 | 32 |
| 36 | #0 | #3 | (5, 11) | 30 | 32 |
| 38 | #0 | #3 | (5, 12) | 31 | 32 |
| 40 | #0 | #3 | (6, 13) | 31 | 32 |
| 43 | #0 | #3 | (6, 14) | 30 | 32 |
| 43 | #2 | #3 | (6, 14) | 16 | 32 |
| 45 | #0 | #3 | (7, 14) | 31 | 32 |
| 46 | #0 | #3 | (8, 14) | 30 | 32 |
| 49 | #0 | #3 | (9, 14) | 30 | 32 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 2) (ô=41)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 15)
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 0, 5, 0, 5, 0, 5, 4, 4, 3, 4, -3, 4, 4, 3, 4, 3, 3, 3, 3, 2, 2, 2, 3, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 16 |
| 2 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 14 |
| 3 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 12 |
| 4-5 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(11, 5)) | 11 |
| 6-7 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 10 |
| 8-9 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 9 |
| 10-11 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 8 |
| 12-13 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 7 |
| 14-15 | Di chuyển hướng 0 (`0`) | (8, 3) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 6 |
| 16 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 4 |
| 17-18 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 3 |
| 19-20 | Di chuyển hướng 4 (`4`) | (6, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 2 |
| 21-22 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 1 |
| 23-24 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 0 |
| 25-27 | Chờ 3 bước (`-3`) | (5, 6) | (5, 6) | Dự kiến đứng yên tại (5, 6); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 32 |
| 28-29 | Di chuyển hướng 4 (`4`) | (5, 6) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 32 |
| 30-31 | Di chuyển hướng 4 (`4`) | (5, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 32 |
| 32-33 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 32 |
| 34 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 32 |
| 35 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 32 |
| 36-37 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 32 |
| 38-39 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 32 |
| 40-42 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 32 |
| 43-44 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 32 |
| 45 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 32 |
| 46-48 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 14)) | 32 |
| 49-50 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 15)) | 31 |
| 51-52 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 30 |
| 53-54 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 29 |
| 55 | Chờ 1 bước (`-1`) | (8, 15) | (8, 15) | Dự kiến đứng yên tại (8, 15); hướng tới tọa độ (8, 15) | 29 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (5, 8) (ô=117)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(1, 13))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(1, 13))
- Mảng hành động đã gửi server: `[0, 4, 3, 4, 4, 4, 2, 3, 3, 2, 2, 2, 2, 3, 5, 5, 0, 5, 5, 4, 0, 5, 0, 5, 5, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 30 |
| 2-3 | Di chuyển hướng 4 (`4`) | (5, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 29 |
| 4-5 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 28 |
| 6 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 26 |
| 7 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 24 |
| 8-9 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 12)) | 23 |
| 10-11 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 22 |
| 12-13 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 21 |
| 14-15 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 20 |
| 16-17 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 19 |
| 18-19 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 18 |
| 20 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 16 |
| 21-23 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 14)) | 14 |
| 24-25 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 15)) | 13 |
| 26-27 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 12 |
| 28-29 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 11 |
| 30-31 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 10 |
| 32 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 8 |
| 33-34 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 7 |
| 35-36 | Di chuyển hướng 4 (`4`) | (5, 14) | (5, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 15)) | 6 |
| 37-38 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 5 |
| 39-40 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 4 |
| 41-42 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 3 |
| 43-44 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 2 |
| 45 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 13)) | 0 |
| 46-55 | Chờ 10 bước (`-10`) | (1, 13) | (1, 13) | Dự kiến đứng yên tại (1, 13); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 13)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 15) (ô=218)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 11)
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 0, 5, 5, -1, 2, 1, 2, 2, 3, 3, 2, 2, 2, 2, 3, 5, 5, 0, 5, 5, 4, 0, 1, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 10 |
| 2 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 8 |
| 3-4 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 7 |
| 5-6 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 6 |
| 7-8 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 5 |
| 9-10 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 4 |
| 11-12 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 3 |
| 13 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 13)) | 32 |
| 14 | Chờ 1 bước (`-1`) | (1, 13) | (1, 13) | Dự kiến đứng yên tại (1, 13); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 13)) | 32 |
| 15-16 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 31 |
| 17 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 32 |
| 18-19 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 12)) | 31 |
| 20-21 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 30 |
| 22-23 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 29 |
| 24-25 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 28 |
| 26-27 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 27 |
| 28-29 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 26 |
| 30 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 24 |
| 31-33 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 14)) | 22 |
| 34-35 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 15)) | 21 |
| 36-37 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 20 |
| 38-39 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 19 |
| 40-41 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 18 |
| 42 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 32 |
| 43-44 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 31 |
| 45-46 | Di chuyển hướng 4 (`4`) | (5, 14) | (5, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 15)) | 30 |
| 47-48 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 29 |
| 49-50 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 28 |
| 51-52 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 27 |
| 53-54 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 26 |
| 55 | Chờ 1 bước (`-1`) | (5, 11) | (5, 11) | Dự kiến đứng yên tại (5, 11); hướng tới tọa độ (5, 11) | 26 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (5, 8) (ô=117)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(9, 14))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(9, 14))
- Mảng hành động đã gửi server: `[4, 4, 5, 4, 4, 4, 5, -4, 2, 1, 1, 1, 2, 1, 0, 1, 1, 4, 4, 3, 4, 3, 3, 3, 3, 2, 2, 2, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 32 |
| 2 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 32 |
| 3 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 32 |
| 4-5 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 32 |
| 6 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 32 |
| 7-8 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 32 |
| 9 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 13)) | 32 |
| 10-13 | Chờ 4 bước (`-4`) | (1, 13) | (1, 13) | Dự kiến đứng yên tại (1, 13); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 13)) | 32 |
| 14-15 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 32 |
| 16 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 32 |
| 17-18 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 32 |
| 19 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 32 |
| 20-21 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 32 |
| 22 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 32 |
| 23 | Di chuyển hướng 0 (`0`) | (5, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 32 |
| 24-25 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 32 |
| 26-27 | Di chuyển hướng 1 (`1`) | (5, 7) | (5, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 32 |
| 28-29 | Di chuyển hướng 4 (`4`) | (5, 6) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 32 |
| 30-31 | Di chuyển hướng 4 (`4`) | (5, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 32 |
| 32-33 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 32 |
| 34 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 32 |
| 35 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 32 |
| 36-37 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 32 |
| 38-39 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 32 |
| 40-42 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 32 |
| 43-44 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 32 |
| 45 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 32 |
| 46-48 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 14)) | 32 |
| 49-55 | Chờ 7 bước (`-7`) | (9, 14) | (9, 14) | Dự kiến đứng yên tại (9, 14); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 14)) | 32 |

