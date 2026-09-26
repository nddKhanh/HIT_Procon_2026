# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 49
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #6 | (13, 17) | 60 | 61 |
| 2 | #3 | #6 | (13, 17) | 60 | 61 |
| 3 | #2 | #6 | (12, 16) | 59 | 61 |
| 4 | #2 | #6 | (12, 15) | 59 | 61 |
| 6 | #2 | #6 | (11, 14) | 60 | 61 |
| 9 | #2 | #6 | (11, 13) | 59 | 61 |
| 11 | #2 | #6 | (10, 12) | 60 | 61 |
| 30 | #5 | #6 | (5, 5) | 10 | 61 |
| 34 | #4 | #6 | (3, 5) | 2 | 61 |
| 49 | #4 | #6 | (7, 4) | 49 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 0) (ô=12)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(12, 0))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(12, 0))
- Mảng hành động đã gửi server: `[-49]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-48 | Chờ 49 bước (`-49`) | (12, 0) | (12, 0) | Dự kiến đứng yên tại (12, 0); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 0)) | 3 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 1) (ô=31)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=0, tọa độ=(15, 1))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=0, tọa độ=(15, 1))
- Mảng hành động đã gửi server: `[2, -46]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=0, tọa độ=(15, 1)) | 0 |
| 3-48 | Chờ 46 bước (`-46`) | (15, 1) | (15, 1) | Dự kiến đứng yên tại (15, 1); mục tiêu Spot #18 (thương hiệu=0, tọa độ=(15, 1)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 17) (ô=303)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(9, 2))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(9, 2))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 0, 1, 2, 3, 5, 5, 5, 5, 0, 0, 0, 1, 1, 0, 1, 0, 2, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 61 |
| 2 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 61 |
| 3 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 61 |
| 4-5 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 61 |
| 6-8 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 13)) | 61 |
| 9-10 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 61 |
| 11-12 | Di chuyển hướng 1 (`1`) | (10, 12) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 60 |
| 13-14 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 59 |
| 15-16 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 12)) | 58 |
| 17-18 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 57 |
| 19-21 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 55 |
| 22-23 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 54 |
| 24-26 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 52 |
| 27 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 50 |
| 28-29 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 49 |
| 30-32 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 47 |
| 33-34 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 46 |
| 35 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 44 |
| 36-37 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 6)) | 43 |
| 38-39 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 42 |
| 40 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 40 |
| 41-42 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 39 |
| 43-45 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 37 |
| 46-47 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 36 |
| 48 | Chờ 1 bước (`-1`) | (9, 2) | (9, 2) | Dự kiến đứng yên tại (9, 2); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 36 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (14, 17) (ô=303)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 10)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 4, 5, 5, 5, 0, 0, 1, 0, 0, 5, 2, 1, 2, 1, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 61 |
| 2 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 59 |
| 3-5 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 57 |
| 6-7 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 56 |
| 8-10 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 54 |
| 11 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 52 |
| 12-14 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 50 |
| 15-16 | Di chuyển hướng 4 (`4`) | (7, 17) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 49 |
| 17-18 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 48 |
| 19-21 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 46 |
| 22 | Di chuyển hướng 5 (`5`) | (4, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 44 |
| 23-25 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 17)) | 42 |
| 26-27 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 41 |
| 28-30 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 39 |
| 31-33 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(2, 14)) | 37 |
| 34-35 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 36 |
| 36-37 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(1, 13)) | 35 |
| 38-39 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 34 |
| 40-41 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 33 |
| 42 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 31 |
| 43-44 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 30 |
| 45-46 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(5, 11)) | 29 |
| 47-48 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 28 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (2, 5) (ô=87)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(7, 4))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(7, 4))
- Mảng hành động đã gửi server: `[2, -33, 1, 1, 3, 3, 3, 2, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 2 |
| 2-34 | Chờ 33 bước (`-33`) | (3, 5) | (3, 5) | Dự kiến đứng yên tại (3, 5); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 61 |
| 35-36 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 60 |
| 37 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=2, tọa độ=(4, 3)) | 58 |
| 38-39 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 57 |
| 40 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 5)) | 55 |
| 41-42 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 54 |
| 43 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 52 |
| 44-45 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 51 |
| 46-48 | Di chuyển hướng 1 (`1`) | (7, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 61 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (1, 12) (ô=205)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(12, 0))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(12, 0))
- Mảng hành động đã gửi server: `[1, 0, 0, 0, 1, 0, 1, 0, 0, 3, 2, 3, 2, 2, 2, 3, 2, 2, 1, 1, 1, 1, 2, 1, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 33 |
| 2 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 31 |
| 3-4 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 30 |
| 5-6 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 29 |
| 7-9 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 27 |
| 10 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 25 |
| 11 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 23 |
| 12-14 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 21 |
| 15 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 3)) | 19 |
| 16-17 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 18 |
| 18 | Di chuyển hướng 2 (`2`) | (0, 4) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 16 |
| 19-21 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 14 |
| 22-23 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 13 |
| 24-25 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 12 |
| 26-28 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 5)) | 10 |
| 29-30 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 60 |
| 31 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 58 |
| 32-33 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 6)) | 57 |
| 34-35 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 56 |
| 36 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 54 |
| 37-39 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 52 |
| 40-41 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 51 |
| 42-43 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 50 |
| 44-45 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 49 |
| 46 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 47 |
| 47-48 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 0)) | 46 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (14, 17) (ô=303)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(7, 4))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(7, 4))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 5, 0, 0, 5, 4, 1, 2, 1, 2, 3, 2, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 61 |
| 2 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 61 |
| 3 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 61 |
| 4-5 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 61 |
| 6-8 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 13)) | 61 |
| 9-10 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 61 |
| 11-12 | Di chuyển hướng 0 (`0`) | (10, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 61 |
| 13-15 | Di chuyển hướng 0 (`0`) | (10, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 61 |
| 16-18 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 61 |
| 19-21 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 61 |
| 22 | Di chuyển hướng 0 (`0`) | (8, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 61 |
| 23 | Di chuyển hướng 0 (`0`) | (7, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 61 |
| 24-26 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 61 |
| 27-28 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 61 |
| 29 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 5)) | 61 |
| 30-31 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 61 |
| 32 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 61 |
| 33 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 61 |
| 34-35 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 61 |
| 36 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 61 |
| 37 | Di chuyển hướng 1 (`1`) | (4, 4) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 61 |
| 38-40 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 61 |
| 41-42 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 61 |
| 43 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 61 |
| 44-48 | Chờ 5 bước (`-5`) | (7, 4) | (7, 4) | Dự kiến đứng yên tại (7, 4); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 61 |

