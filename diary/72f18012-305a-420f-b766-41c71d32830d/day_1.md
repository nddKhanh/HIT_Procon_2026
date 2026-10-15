# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 56
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 27 | #0 | #4 | (12, 0) | 0 | 80 |
| 50 | #2 | #4 | (20, 0) | 0 | 80 |
| 54 | #0 | #4 | (20, 0) | 41 | 80 |
| 56 | #2 | #4 | (20, 0) | 74 | 80 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 4) (ô=117)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 0)
- Mảng hành động đã gửi server: `[4, 4, 5, 0, 0, 0, 0, 5, 5, 5, 0, 0, 5, -10, 2, 3, 2, 2, 2, 3, 3, 3, 3, 3, 2, 1, 2, 1, 2, 0, 1, 0, 0, 5, 5, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 22 |
| 2 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 20 |
| 3 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 18 |
| 4 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 16 |
| 5 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 14 |
| 6-7 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 13 |
| 8 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 11 |
| 9 | Di chuyển hướng 5 (`5`) | (17, 2) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 9 |
| 10 | Di chuyển hướng 5 (`5`) | (16, 2) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 7 |
| 11-13 | Di chuyển hướng 5 (`5`) | (15, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 5 |
| 14-15 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 4 |
| 16 | Di chuyển hướng 0 (`0`) | (14, 1) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 2 |
| 17 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 0)) | 0 |
| 18-27 | Chờ 10 bước (`-10`) | (12, 0) | (12, 0) | Dự kiến đứng yên tại (12, 0); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 0)) | 80 |
| 28-29 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 79 |
| 30 | Di chuyển hướng 3 (`3`) | (13, 0) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 77 |
| 31 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 75 |
| 32 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 73 |
| 33-35 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 71 |
| 36 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 69 |
| 37 | Di chuyển hướng 3 (`3`) | (17, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 67 |
| 38 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 65 |
| 39-40 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 64 |
| 41 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 62 |
| 42 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 60 |
| 43 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 58 |
| 44 | Di chuyển hướng 2 (`2`) | (21, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 56 |
| 45 | Di chuyển hướng 1 (`1`) | (22, 5) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 54 |
| 46 | Di chuyển hướng 2 (`2`) | (22, 4) | (23, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(23, 4)) | 52 |
| 47-48 | Di chuyển hướng 0 (`0`) | (23, 4) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 51 |
| 49 | Di chuyển hướng 1 (`1`) | (23, 3) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 49 |
| 50 | Di chuyển hướng 0 (`0`) | (23, 2) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 47 |
| 51 | Di chuyển hướng 0 (`0`) | (23, 1) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 45 |
| 52 | Di chuyển hướng 5 (`5`) | (22, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 43 |
| 53 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 80 |
| 54-55 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 79 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 14) (ô=337)
- Nhiên liệu đầu ngày: 71
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 22)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 22)
- Mảng hành động đã gửi server: `[4, 3, 2, 2, 3, 3, 2, 2, 2, 2, 3, 4, 4, 3, 3, 5, 5, 5, 5, 5, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 70 |
| 2 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 68 |
| 3 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 66 |
| 4 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 64 |
| 5-6 | Di chuyển hướng 3 (`3`) | (3, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 63 |
| 7-9 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 61 |
| 10 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 59 |
| 11-12 | Di chuyển hướng 2 (`2`) | (5, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 58 |
| 13-14 | Di chuyển hướng 2 (`2`) | (6, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 57 |
| 15-16 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 56 |
| 17-18 | Di chuyển hướng 3 (`3`) | (8, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 55 |
| 19 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 53 |
| 20-21 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 52 |
| 22 | Di chuyển hướng 3 (`3`) | (8, 21) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 50 |
| 23 | Di chuyển hướng 3 (`3`) | (8, 22) | (9, 23) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 48 |
| 24-25 | Di chuyển hướng 5 (`5`) | (9, 23) | (8, 23) | Dự kiến đến điểm hẹn tọa độ (8, 23) | 47 |
| 26-28 | Di chuyển hướng 5 (`5`) | (8, 23) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 45 |
| 29 | Di chuyển hướng 5 (`5`) | (7, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 43 |
| 30 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 41 |
| 31 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=15, tọa độ=(4, 23)) | 39 |
| 32-33 | Di chuyển hướng 2 (`2`) | (4, 23) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 38 |
| 34 | Di chuyển hướng 2 (`2`) | (5, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 36 |
| 35 | Di chuyển hướng 2 (`2`) | (6, 23) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 34 |
| 36 | Di chuyển hướng 1 (`1`) | (7, 23) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 32 |
| 37 | Di chuyển hướng 1 (`1`) | (7, 22) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 30 |
| 38 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 28 |
| 39-40 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 27 |
| 41 | Di chuyển hướng 2 (`2`) | (9, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 25 |
| 42 | Di chuyển hướng 2 (`2`) | (10, 19) | (11, 19) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=13, tọa độ=(11, 19)) | 23 |
| 43-44 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 22 |
| 45-46 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 21 |
| 47-48 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 20 |
| 49-50 | Di chuyển hướng 3 (`3`) | (13, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 19 |
| 51-52 | Di chuyển hướng 3 (`3`) | (14, 21) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 18 |
| 53 | Di chuyển hướng 3 (`3`) | (14, 22) | (15, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=17, tọa độ=(15, 23)) | 16 |
| 54-55 | Di chuyển hướng 0 (`0`) | (15, 23) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 15 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (21, 15) (ô=381)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(20, 0))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(20, 0))
- Mảng hành động đã gửi server: `[1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 5, 5, -26, 4, 5, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (21, 15) | (21, 14) | Dự kiến đến điểm hẹn tọa độ (21, 14) | 28 |
| 2 | Di chuyển hướng 0 (`0`) | (21, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 26 |
| 3 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 24 |
| 4 | Di chuyển hướng 1 (`1`) | (20, 12) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 22 |
| 5-7 | Di chuyển hướng 1 (`1`) | (21, 11) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 20 |
| 8 | Di chuyển hướng 1 (`1`) | (21, 10) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 18 |
| 9-10 | Di chuyển hướng 1 (`1`) | (22, 9) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 17 |
| 11-12 | Di chuyển hướng 0 (`0`) | (22, 8) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 16 |
| 13-14 | Di chuyển hướng 0 (`0`) | (22, 7) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 15 |
| 15-16 | Di chuyển hướng 1 (`1`) | (21, 6) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 14 |
| 17 | Di chuyển hướng 1 (`1`) | (22, 5) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 12 |
| 18 | Di chuyển hướng 1 (`1`) | (22, 4) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 10 |
| 19 | Di chuyển hướng 1 (`1`) | (23, 3) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 8 |
| 20 | Di chuyển hướng 0 (`0`) | (23, 2) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 6 |
| 21 | Di chuyển hướng 0 (`0`) | (23, 1) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 4 |
| 22 | Di chuyển hướng 5 (`5`) | (22, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 2 |
| 23 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 0 |
| 24-49 | Chờ 26 bước (`-26`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 80 |
| 50-51 | Di chuyển hướng 4 (`4`) | (20, 0) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 79 |
| 52 | Di chuyển hướng 5 (`5`) | (20, 1) | (19, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=4, tọa độ=(19, 1)) | 77 |
| 53-54 | Di chuyển hướng 2 (`2`) | (19, 1) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 76 |
| 55 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 80 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (12, 19) (ô=468)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=9, tọa độ=(1, 9))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=9, tọa độ=(1, 9))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 1, 0, 0, 0, 0, 1, 4, 3, 3, 3, 4, 4, 0, 5, 5, 0, 5, 0, 1, 0, 0, 0, 5, 5, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=13, tọa độ=(11, 19)) | 45 |
| 2-3 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 44 |
| 4-6 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 42 |
| 7 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 40 |
| 8 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 38 |
| 9 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 36 |
| 10-11 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 35 |
| 12-13 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 34 |
| 14-15 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 33 |
| 16 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 31 |
| 17-18 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 30 |
| 19 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 28 |
| 20-21 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 27 |
| 22-23 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 26 |
| 24-25 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 25 |
| 26-27 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=11, tọa độ=(8, 16)) | 24 |
| 28-29 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 23 |
| 30-31 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 22 |
| 32-33 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 21 |
| 34-35 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 20 |
| 36 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 18 |
| 37 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 16 |
| 38 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 14 |
| 39 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 12 |
| 40-42 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 10 |
| 43 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 8 |
| 44 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 6 |
| 45 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 4 |
| 46-55 | Chờ 10 bước (`-10`) | (1, 9) | (1, 9) | Dự kiến đứng yên tại (1, 9); mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 4 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (4, 16) (ô=388)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(20, 0))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(20, 0))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 0, 1, 0, 1, 2, 2, 2, 2, 2, 1, 1, 0, 5, 5, 0, 1, 1, 1, 2, 2, 3, 2, 1, 2, 3, 3, 3, 3, 3, 3, 2, 1, 2, 1, 1, 1, 0, 0, 5, 5, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 1 (`1`) | (4, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 80 |
| 4 | Di chuyển hướng 1 (`1`) | (5, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 80 |
| 5 | Di chuyển hướng 1 (`1`) | (5, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 80 |
| 6 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 80 |
| 7 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 80 |
| 8 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 80 |
| 9 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 80 |
| 10 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 80 |
| 11 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 80 |
| 12 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 80 |
| 13 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 80 |
| 14 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 80 |
| 15 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 80 |
| 16 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 80 |
| 17 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 80 |
| 18 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 80 |
| 19 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 80 |
| 20 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 80 |
| 21 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 80 |
| 22 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 80 |
| 23 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 80 |
| 24 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 80 |
| 25 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 80 |
| 26 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 0)) | 80 |
| 27-28 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 80 |
| 29 | Di chuyển hướng 3 (`3`) | (13, 0) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 80 |
| 30 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 80 |
| 31 | Di chuyển hướng 1 (`1`) | (15, 1) | (15, 0) | Dự kiến đến điểm hẹn tọa độ (15, 0) | 80 |
| 32 | Di chuyển hướng 2 (`2`) | (15, 0) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 80 |
| 33 | Di chuyển hướng 3 (`3`) | (16, 0) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 80 |
| 34 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 80 |
| 35 | Di chuyển hướng 3 (`3`) | (17, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 80 |
| 36 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 80 |
| 37-38 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 80 |
| 39 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 80 |
| 40 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 80 |
| 41 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 80 |
| 42 | Di chuyển hướng 2 (`2`) | (21, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 80 |
| 43 | Di chuyển hướng 1 (`1`) | (22, 5) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 80 |
| 44 | Di chuyển hướng 1 (`1`) | (22, 4) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 80 |
| 45 | Di chuyển hướng 1 (`1`) | (23, 3) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 80 |
| 46 | Di chuyển hướng 0 (`0`) | (23, 2) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 80 |
| 47 | Di chuyển hướng 0 (`0`) | (23, 1) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 80 |
| 48 | Di chuyển hướng 5 (`5`) | (22, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 80 |
| 49 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 80 |
| 50-55 | Chờ 6 bước (`-6`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 80 |

