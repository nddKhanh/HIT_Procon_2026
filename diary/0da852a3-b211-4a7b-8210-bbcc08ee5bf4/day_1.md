# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 102
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 8) (ô=268)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(24, 9))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(24, 9))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, -80]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 16 |
| 2-4 | Di chuyển hướng 2 (`2`) | (13, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 14 |
| 5-6 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 13 |
| 7-8 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 12 |
| 9-10 | Di chuyển hướng 2 (`2`) | (16, 8) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 10 |
| 11-12 | Di chuyển hướng 2 (`2`) | (17, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 9 |
| 13 | Di chuyển hướng 2 (`2`) | (18, 8) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 7 |
| 14 | Di chuyển hướng 2 (`2`) | (19, 8) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 5 |
| 15-16 | Di chuyển hướng 2 (`2`) | (20, 8) | (21, 8) | Dự kiến đến điểm hẹn tọa độ (21, 8) | 4 |
| 17 | Di chuyển hướng 2 (`2`) | (21, 8) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 2 |
| 18-19 | Di chuyển hướng 2 (`2`) | (22, 8) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 1 |
| 20-21 | Di chuyển hướng 3 (`3`) | (23, 8) | (24, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(24, 9)) | 0 |
| 22-101 | Chờ 80 bước (`-80`) | (24, 9) | (24, 9) | Dự kiến đứng yên tại (24, 9); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(24, 9)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 19) (ô=616)
- Nhiên liệu đầu ngày: 9
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(2, 22))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(2, 22))
- Mảng hành động đã gửi server: `[4, 4, 5, 4, 5, 5, 5, -89]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (8, 19) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 8 |
| 2-3 | Di chuyển hướng 4 (`4`) | (7, 20) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 7 |
| 4-5 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 6 |
| 6 | Di chuyển hướng 4 (`4`) | (6, 21) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 4 |
| 7-8 | Di chuyển hướng 5 (`5`) | (5, 22) | (4, 22) | Dự kiến đến điểm hẹn tọa độ (4, 22) | 3 |
| 9-10 | Di chuyển hướng 5 (`5`) | (4, 22) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 2 |
| 11-12 | Di chuyển hướng 5 (`5`) | (3, 22) | (2, 22) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 22)) | 1 |
| 13-101 | Chờ 89 bước (`-89`) | (2, 22) | (2, 22) | Dự kiến đứng yên tại (2, 22); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 22)) | 1 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 3) (ô=104)
- Nhiên liệu đầu ngày: 13
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(11, 14))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(11, 14))
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 4, 3, 3, 3, 3, 3, 3, -82]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 12 |
| 2-3 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 11 |
| 4-5 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 10 |
| 6 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 8 |
| 7-8 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 7 |
| 9-10 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 6 |
| 11-12 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 5 |
| 13-14 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 4 |
| 15-16 | Di chuyển hướng 3 (`3`) | (10, 11) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 3 |
| 17-18 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 2 |
| 19 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 14)) | 0 |
| 20-101 | Chờ 82 bước (`-82`) | (11, 14) | (11, 14) | Dự kiến đứng yên tại (11, 14); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 14)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 19) (ô=610)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(8, 19))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(8, 19))
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 3, 4, 3, 0, 0, 0, 2, 2, 1, 2, 2, 2, 1, 2, 2, 0, 1, -65]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 19) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 32 |
| 2 | Di chuyển hướng 4 (`4`) | (2, 20) | (2, 21) | Dự kiến đến điểm hẹn tọa độ (2, 21) | 30 |
| 3-4 | Di chuyển hướng 4 (`4`) | (2, 21) | (1, 22) | Dự kiến đến điểm hẹn tọa độ (1, 22) | 29 |
| 5-6 | Di chuyển hướng 4 (`4`) | (1, 22) | (1, 23) | Dự kiến đến điểm hẹn tọa độ (1, 23) | 28 |
| 7 | Di chuyển hướng 3 (`3`) | (1, 23) | (1, 24) | Dự kiến đến điểm hẹn tọa độ (1, 24) | 26 |
| 8 | Di chuyển hướng 4 (`4`) | (1, 24) | (1, 25) | Dự kiến đến điểm hẹn tọa độ (1, 25) | 24 |
| 9-10 | Di chuyển hướng 3 (`3`) | (1, 25) | (1, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(1, 26)) | 23 |
| 11-12 | Di chuyển hướng 0 (`0`) | (1, 26) | (1, 25) | Dự kiến đến điểm hẹn tọa độ (1, 25) | 22 |
| 13-14 | Di chuyển hướng 0 (`0`) | (1, 25) | (0, 24) | Dự kiến đến điểm hẹn tọa độ (0, 24) | 21 |
| 15-16 | Di chuyển hướng 0 (`0`) | (0, 24) | (0, 23) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 23)) | 20 |
| 17-18 | Di chuyển hướng 2 (`2`) | (0, 23) | (1, 23) | Dự kiến đến điểm hẹn tọa độ (1, 23) | 19 |
| 19 | Di chuyển hướng 2 (`2`) | (1, 23) | (2, 23) | Dự kiến đến điểm hẹn tọa độ (2, 23) | 17 |
| 20-21 | Di chuyển hướng 1 (`1`) | (2, 23) | (2, 22) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 22)) | 16 |
| 22-23 | Di chuyển hướng 2 (`2`) | (2, 22) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 15 |
| 24-25 | Di chuyển hướng 2 (`2`) | (3, 22) | (4, 22) | Dự kiến đến điểm hẹn tọa độ (4, 22) | 14 |
| 26-27 | Di chuyển hướng 2 (`2`) | (4, 22) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 13 |
| 28-29 | Di chuyển hướng 1 (`1`) | (5, 22) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 12 |
| 30 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 10 |
| 31-32 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(8, 21)) | 9 |
| 33-34 | Di chuyển hướng 0 (`0`) | (8, 21) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 8 |
| 35-36 | Di chuyển hướng 1 (`1`) | (7, 20) | (8, 19) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 19)) | 7 |
| 37-101 | Chờ 65 bước (`-65`) | (8, 19) | (8, 19) | Dự kiến đứng yên tại (8, 19); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 19)) | 7 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (24, 9) (ô=312)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=0, tọa độ=(26, 10))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=0, tọa độ=(26, 10))
- Mảng hành động đã gửi server: `[2, 3, 2, -96]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (24, 9) | (25, 9) | Dự kiến đến điểm hẹn tọa độ (25, 9) | 26 |
| 2-3 | Di chuyển hướng 3 (`3`) | (25, 9) | (25, 10) | Dự kiến đến điểm hẹn tọa độ (25, 10) | 25 |
| 4-5 | Di chuyển hướng 2 (`2`) | (25, 10) | (26, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(26, 10)) | 24 |
| 6-101 | Chờ 96 bước (`-96`) | (26, 10) | (26, 10) | Dự kiến đứng yên tại (26, 10); mục tiêu Spot #10 (thương hiệu=0, tọa độ=(26, 10)) | 24 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (2, 19) (ô=610)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(8, 19))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(8, 19))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 3, 3, 3, 0, 1, 1, 1, 2, 2, 2, 1, 2, 2, 0, 1, -66]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (2, 19) | (1, 20) | Dự kiến đến điểm hẹn tọa độ (1, 20) | 36 |
| 2-3 | Di chuyển hướng 4 (`4`) | (1, 20) | (1, 21) | Dự kiến đến điểm hẹn tọa độ (1, 21) | 35 |
| 4-5 | Di chuyển hướng 4 (`4`) | (1, 21) | (0, 22) | Dự kiến đến điểm hẹn tọa độ (0, 22) | 34 |
| 6-7 | Di chuyển hướng 4 (`4`) | (0, 22) | (0, 23) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 23)) | 33 |
| 8-9 | Di chuyển hướng 3 (`3`) | (0, 23) | (0, 24) | Dự kiến đến điểm hẹn tọa độ (0, 24) | 32 |
| 10-11 | Di chuyển hướng 3 (`3`) | (0, 24) | (1, 25) | Dự kiến đến điểm hẹn tọa độ (1, 25) | 31 |
| 12-13 | Di chuyển hướng 3 (`3`) | (1, 25) | (1, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(1, 26)) | 30 |
| 14-15 | Di chuyển hướng 0 (`0`) | (1, 26) | (1, 25) | Dự kiến đến điểm hẹn tọa độ (1, 25) | 29 |
| 16-17 | Di chuyển hướng 1 (`1`) | (1, 25) | (1, 24) | Dự kiến đến điểm hẹn tọa độ (1, 24) | 28 |
| 18 | Di chuyển hướng 1 (`1`) | (1, 24) | (2, 23) | Dự kiến đến điểm hẹn tọa độ (2, 23) | 26 |
| 19-20 | Di chuyển hướng 1 (`1`) | (2, 23) | (2, 22) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 22)) | 25 |
| 21-22 | Di chuyển hướng 2 (`2`) | (2, 22) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 24 |
| 23-24 | Di chuyển hướng 2 (`2`) | (3, 22) | (4, 22) | Dự kiến đến điểm hẹn tọa độ (4, 22) | 23 |
| 25-26 | Di chuyển hướng 2 (`2`) | (4, 22) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 22 |
| 27-28 | Di chuyển hướng 1 (`1`) | (5, 22) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 21 |
| 29 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 19 |
| 30-31 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(8, 21)) | 18 |
| 32-33 | Di chuyển hướng 0 (`0`) | (8, 21) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 17 |
| 34-35 | Di chuyển hướng 1 (`1`) | (7, 20) | (8, 19) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 19)) | 16 |
| 36-101 | Chờ 66 bước (`-66`) | (8, 19) | (8, 19) | Dự kiến đứng yên tại (8, 19); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 19)) | 16 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (2, 1) (ô=34)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=5, tọa độ=(14, 6))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=5, tọa độ=(14, 6))
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 2, 2, 3, 3, 3, 2, 3, 3, 3, 3, 1, 1, 1, 2, -68]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 26 |
| 2 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(3, 2)) | 24 |
| 3-4 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 23 |
| 5 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 21 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 20 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 19 |
| 10-11 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 3)) | 18 |
| 12-13 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 17 |
| 14-15 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 16 |
| 16-17 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 15 |
| 18-19 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 14 |
| 20-21 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 13 |
| 22-23 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 12 |
| 24-25 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 9)) | 11 |
| 26-27 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 10 |
| 28-29 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 9 |
| 30-31 | Di chuyển hướng 1 (`1`) | (13, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 8 |
| 32-33 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(14, 6)) | 7 |
| 34-101 | Chờ 68 bước (`-68`) | (14, 6) | (14, 6) | Dự kiến đứng yên tại (14, 6); mục tiêu Spot #15 (thương hiệu=5, tọa độ=(14, 6)) | 7 |

### Xe #7 - Tuần tra

- Vị trí đầu ngày: (6, 2) (ô=70)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=5, tọa độ=(14, 6))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=5, tọa độ=(14, 6))
- Mảng hành động đã gửi server: `[2, 3, 2, 3, 3, 2, 2, 2, 3, 2, -82]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 15 |
| 2-3 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 3)) | 14 |
| 4-5 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 13 |
| 6-7 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 12 |
| 8-9 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 11 |
| 10-11 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 10 |
| 12-13 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 9 |
| 14-15 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 8 |
| 16-17 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 7 |
| 18-19 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(14, 6)) | 6 |
| 20-101 | Chờ 82 bước (`-82`) | (14, 6) | (14, 6) | Dự kiến đứng yên tại (14, 6); mục tiêu Spot #15 (thương hiệu=5, tọa độ=(14, 6)) | 6 |

