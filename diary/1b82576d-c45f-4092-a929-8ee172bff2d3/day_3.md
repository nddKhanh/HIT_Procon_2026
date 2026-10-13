# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 68
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 20 | #1 | #4 | (8, 10) | 4 | 80 |
| 34 | #3 | #4 | (11, 19) | 0 | 80 |
| 36 | #3 | #4 | (10, 19) | 79 | 80 |
| 37 | #3 | #4 | (9, 18) | 78 | 80 |
| 61 | #1 | #4 | (9, 18) | 30 | 80 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (4, 2) (ô=52)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=6, tọa độ=(18, 4))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=6, tọa độ=(18, 4))
- Mảng hành động đã gửi server: `[1, 0, 3, 4, 3, 2, 1, 2, 1, 2, 2, 2, 1, 2, 2, 3, 4, 3, 3, 2, 2, 2, 2, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (4, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 39 |
| 1 | Di chuyển hướng 0 (`0`) | (5, 1) | (4, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 0)) | 37 |
| 2-3 | Di chuyển hướng 3 (`3`) | (4, 0) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 36 |
| 4 | Di chuyển hướng 4 (`4`) | (5, 1) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 34 |
| 5 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 32 |
| 6 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 30 |
| 7 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 28 |
| 8 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 26 |
| 9 | Di chuyển hướng 1 (`1`) | (7, 2) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 24 |
| 10-11 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 23 |
| 12-14 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 21 |
| 15-16 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 20 |
| 17 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 18 |
| 18 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 0)) | 16 |
| 19-20 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 15 |
| 21 | Di chuyển hướng 3 (`3`) | (13, 0) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 13 |
| 22 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 11 |
| 23-24 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 10 |
| 25-26 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=5, tọa độ=(14, 4)) | 9 |
| 27-28 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 8 |
| 29 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 6 |
| 30-32 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 4 |
| 33-34 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 3 |
| 35-67 | Chờ 33 bước (`-33`) | (18, 4) | (18, 4) | Dự kiến đứng yên tại (18, 4); mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 3 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 14) (ô=337)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=11, tọa độ=(8, 16))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=11, tọa độ=(8, 16))
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 2, 2, 1, 2, 1, -9, 4, 5, 4, 4, 4, 4, 3, 4, 4, 0, 0, 4, 3, 4, 3, 3, 4, 3, 2, 2, 2, 2, 2, 0, 0, 1, 1, 1, 0, 0, 0, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 20 |
| 2-4 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 18 |
| 5 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 16 |
| 6 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 14 |
| 7 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 12 |
| 8 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 10 |
| 9 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 8 |
| 10 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 6 |
| 11 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 4 |
| 12-20 | Chờ 9 bước (`-9`) | (8, 10) | (8, 10) | Dự kiến đứng yên tại (8, 10); mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 80 |
| 21-22 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 79 |
| 23 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 77 |
| 24 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 75 |
| 25 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 73 |
| 26 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 71 |
| 27 | Di chuyển hướng 4 (`4`) | (5, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 69 |
| 28 | Di chuyển hướng 3 (`3`) | (5, 15) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 67 |
| 29-30 | Di chuyển hướng 4 (`4`) | (5, 16) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 66 |
| 31 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 64 |
| 32 | Di chuyển hướng 0 (`0`) | (4, 18) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 62 |
| 33-35 | Di chuyển hướng 0 (`0`) | (4, 17) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 60 |
| 36-37 | Di chuyển hướng 4 (`4`) | (3, 16) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 59 |
| 38-40 | Di chuyển hướng 3 (`3`) | (3, 17) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 57 |
| 41 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 55 |
| 42 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 53 |
| 43 | Di chuyển hướng 3 (`3`) | (3, 20) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 51 |
| 44 | Di chuyển hướng 4 (`4`) | (4, 21) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 49 |
| 45 | Di chuyển hướng 3 (`3`) | (3, 22) | (4, 23) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=15, tọa độ=(4, 23)) | 47 |
| 46-47 | Di chuyển hướng 2 (`2`) | (4, 23) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 46 |
| 48 | Di chuyển hướng 2 (`2`) | (5, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 44 |
| 49 | Di chuyển hướng 2 (`2`) | (6, 23) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 42 |
| 50 | Di chuyển hướng 2 (`2`) | (7, 23) | (8, 23) | Dự kiến đến điểm hẹn tọa độ (8, 23) | 40 |
| 51-53 | Di chuyển hướng 2 (`2`) | (8, 23) | (9, 23) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 38 |
| 54-55 | Di chuyển hướng 0 (`0`) | (9, 23) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 37 |
| 56 | Di chuyển hướng 0 (`0`) | (8, 22) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 35 |
| 57 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 33 |
| 58-59 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 32 |
| 60 | Di chuyển hướng 1 (`1`) | (9, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 80 |
| 61 | Di chuyển hướng 0 (`0`) | (9, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 78 |
| 62-63 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=11, tọa độ=(8, 16)) | 77 |
| 64-65 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 76 |
| 66-67 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=11, tọa độ=(8, 16)) | 75 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (18, 20) (ô=498)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=8, tọa độ=(23, 4))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=8, tọa độ=(23, 4))
- Mảng hành động đã gửi server: `[0, 1, 1, 2, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 2, 2, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (18, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 33 |
| 3-5 | Di chuyển hướng 1 (`1`) | (18, 19) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 31 |
| 6-8 | Di chuyển hướng 1 (`1`) | (18, 18) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 29 |
| 9-10 | Di chuyển hướng 2 (`2`) | (19, 17) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 28 |
| 11 | Di chuyển hướng 1 (`1`) | (20, 17) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 26 |
| 12 | Di chuyển hướng 1 (`1`) | (20, 16) | (21, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=12, tọa độ=(21, 15)) | 24 |
| 13-14 | Di chuyển hướng 1 (`1`) | (21, 15) | (21, 14) | Dự kiến đến điểm hẹn tọa độ (21, 14) | 23 |
| 15 | Di chuyển hướng 1 (`1`) | (21, 14) | (22, 13) | Dự kiến đến điểm hẹn tọa độ (22, 13) | 21 |
| 16-18 | Di chuyển hướng 1 (`1`) | (22, 13) | (22, 12) | Dự kiến đến điểm hẹn tọa độ (22, 12) | 19 |
| 19-20 | Di chuyển hướng 1 (`1`) | (22, 12) | (23, 11) | Dự kiến đến điểm hẹn tọa độ (23, 11) | 18 |
| 21 | Di chuyển hướng 0 (`0`) | (23, 11) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 16 |
| 22 | Di chuyển hướng 0 (`0`) | (22, 10) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 14 |
| 23-24 | Di chuyển hướng 1 (`1`) | (22, 9) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 13 |
| 25-26 | Di chuyển hướng 0 (`0`) | (22, 8) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 12 |
| 27-28 | Di chuyển hướng 0 (`0`) | (22, 7) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 11 |
| 29-30 | Di chuyển hướng 0 (`0`) | (21, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 10 |
| 31 | Di chuyển hướng 1 (`1`) | (21, 5) | (21, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(21, 4)) | 8 |
| 32-33 | Di chuyển hướng 2 (`2`) | (21, 4) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 7 |
| 34 | Di chuyển hướng 2 (`2`) | (22, 4) | (23, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(23, 4)) | 5 |
| 35-67 | Chờ 33 bước (`-33`) | (23, 4) | (23, 4) | Dự kiến đứng yên tại (23, 4); mục tiêu Spot #12 (thương hiệu=8, tọa độ=(23, 4)) | 5 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 19) (ô=467)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=9, tọa độ=(1, 9))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=9, tọa độ=(1, 9))
- Mảng hành động đã gửi server: `[-34, 5, 0, 5, 5, 5, 5, 0, 0, 5, 5, 5, 0, 1, 1, 1, 2, 1, 0, 0, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-33 | Chờ 34 bước (`-34`) | (11, 19) | (11, 19) | Dự kiến đứng yên tại (11, 19); mục tiêu Spot #18 (thương hiệu=13, tọa độ=(11, 19)) | 80 |
| 34-35 | Di chuyển hướng 5 (`5`) | (11, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 80 |
| 36 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 80 |
| 37 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 78 |
| 38-39 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 77 |
| 40-41 | Di chuyển hướng 5 (`5`) | (7, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 76 |
| 42-43 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 75 |
| 44-45 | Di chuyển hướng 0 (`0`) | (5, 18) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 74 |
| 46 | Di chuyển hướng 0 (`0`) | (5, 17) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 72 |
| 47-48 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 70 |
| 49-50 | Di chuyển hướng 5 (`5`) | (3, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 69 |
| 51 | Di chuyển hướng 5 (`5`) | (2, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 67 |
| 52 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 65 |
| 53 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 14)) | 63 |
| 54-55 | Di chuyển hướng 1 (`1`) | (1, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 62 |
| 56-58 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 60 |
| 59 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 58 |
| 60 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 56 |
| 61-63 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 54 |
| 64 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 52 |
| 65 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 50 |
| 66 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 48 |
| 67 | Chờ 1 bước (`-1`) | (1, 9) | (1, 9) | Dự kiến đứng yên tại (1, 9); mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 48 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (18, 4) (ô=114)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 18)
- Mảng hành động đã gửi server: `[0, 0, 5, 4, 4, 5, 4, 5, 4, 4, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3, 4, 3, 4, 3, 2, 5, 0, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 80 |
| 2 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 80 |
| 3 | Di chuyển hướng 5 (`5`) | (17, 2) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 80 |
| 4 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 80 |
| 5 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 80 |
| 6 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=5, tọa độ=(14, 4)) | 80 |
| 7-8 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 80 |
| 9 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 80 |
| 10 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 80 |
| 11 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 80 |
| 12 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 80 |
| 13 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 80 |
| 14 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 80 |
| 15-16 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 80 |
| 17-19 | Di chuyển hướng 4 (`4`) | (9, 9) | (8, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 80 |
| 20-21 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 80 |
| 22 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 80 |
| 23-24 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 80 |
| 25-26 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 80 |
| 27-28 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 80 |
| 29 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 80 |
| 30 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 80 |
| 31 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 80 |
| 32 | Di chuyển hướng 3 (`3`) | (9, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 80 |
| 33 | Di chuyển hướng 2 (`2`) | (10, 19) | (11, 19) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=13, tọa độ=(11, 19)) | 80 |
| 34-35 | Di chuyển hướng 5 (`5`) | (11, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 80 |
| 36 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 80 |
| 37-67 | Chờ 31 bước (`-31`) | (9, 18) | (9, 18) | Dự kiến đứng yên tại (9, 18); hướng tới tọa độ (9, 18) | 80 |

