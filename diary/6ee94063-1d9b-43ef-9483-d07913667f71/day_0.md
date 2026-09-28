# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 64
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 48 | #1 | #3 | (9, 25) | 27 | 64 |
| 63 | #0 | #3 | (9, 25) | 16 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (29, 17) (ô=573)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 25)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 25)
- Mảng hành động đã gửi server: `[4, 4, 3, 4, 3, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 2, 3, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (29, 17) | (28, 18) | Dự kiến đến điểm hẹn tọa độ (28, 18) | 63 |
| 2-3 | Di chuyển hướng 4 (`4`) | (28, 18) | (28, 19) | Dự kiến đến điểm hẹn tọa độ (28, 19) | 62 |
| 4-5 | Di chuyển hướng 3 (`3`) | (28, 19) | (28, 20) | Dự kiến đến điểm hẹn tọa độ (28, 20) | 61 |
| 6-8 | Di chuyển hướng 4 (`4`) | (28, 20) | (28, 21) | Dự kiến đến điểm hẹn tọa độ (28, 21) | 59 |
| 9 | Di chuyển hướng 3 (`3`) | (28, 21) | (28, 22) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(28, 22)) | 57 |
| 10-11 | Di chuyển hướng 5 (`5`) | (28, 22) | (27, 22) | Dự kiến đến điểm hẹn tọa độ (27, 22) | 56 |
| 12-13 | Di chuyển hướng 5 (`5`) | (27, 22) | (26, 22) | Dự kiến đến điểm hẹn tọa độ (26, 22) | 55 |
| 14 | Di chuyển hướng 5 (`5`) | (26, 22) | (25, 22) | Dự kiến đến điểm hẹn tọa độ (25, 22) | 53 |
| 15-16 | Di chuyển hướng 4 (`4`) | (25, 22) | (25, 23) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(25, 23)) | 52 |
| 17-18 | Di chuyển hướng 5 (`5`) | (25, 23) | (24, 23) | Dự kiến đến điểm hẹn tọa độ (24, 23) | 51 |
| 19-20 | Di chuyển hướng 5 (`5`) | (24, 23) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 50 |
| 21 | Di chuyển hướng 5 (`5`) | (23, 23) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 48 |
| 22-23 | Di chuyển hướng 5 (`5`) | (22, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 47 |
| 24-25 | Di chuyển hướng 5 (`5`) | (21, 23) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 46 |
| 26-27 | Di chuyển hướng 5 (`5`) | (20, 23) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 45 |
| 28-29 | Di chuyển hướng 5 (`5`) | (19, 23) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 44 |
| 30 | Di chuyển hướng 0 (`0`) | (18, 23) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 42 |
| 31-32 | Di chuyển hướng 0 (`0`) | (17, 22) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 41 |
| 33 | Di chuyển hướng 0 (`0`) | (17, 21) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 39 |
| 34 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 37 |
| 35-37 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 35 |
| 38-40 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 33 |
| 41-42 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(12, 20)) | 32 |
| 43-44 | Di chuyển hướng 5 (`5`) | (12, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 31 |
| 45-46 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 30 |
| 47-48 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 29 |
| 49-50 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 28 |
| 51 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 26 |
| 52-53 | Di chuyển hướng 4 (`4`) | (7, 20) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 25 |
| 54-55 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 21)) | 24 |
| 56-57 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 23 |
| 58-59 | Di chuyển hướng 3 (`3`) | (7, 21) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 22 |
| 60 | Di chuyển hướng 3 (`3`) | (7, 22) | (8, 23) | Dự kiến đến điểm hẹn tọa độ (8, 23) | 20 |
| 61 | Di chuyển hướng 3 (`3`) | (8, 23) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 18 |
| 62 | Di chuyển hướng 3 (`3`) | (8, 24) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 64 |
| 63 | Chờ 1 bước (`-1`) | (9, 25) | (9, 25) | Dự kiến đứng yên tại (9, 25); hướng tới tọa độ (9, 25) | 64 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (25, 24) (ô=793)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 30)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 30)
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 2, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 2, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (25, 24) | (25, 23) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(25, 23)) | 63 |
| 2-3 | Di chuyển hướng 5 (`5`) | (25, 23) | (24, 23) | Dự kiến đến điểm hẹn tọa độ (24, 23) | 62 |
| 4-5 | Di chuyển hướng 5 (`5`) | (24, 23) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 61 |
| 6 | Di chuyển hướng 5 (`5`) | (23, 23) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 59 |
| 7-8 | Di chuyển hướng 5 (`5`) | (22, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 58 |
| 9-10 | Di chuyển hướng 5 (`5`) | (21, 23) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 57 |
| 11-12 | Di chuyển hướng 5 (`5`) | (20, 23) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 56 |
| 13-14 | Di chuyển hướng 5 (`5`) | (19, 23) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 55 |
| 15 | Di chuyển hướng 0 (`0`) | (18, 23) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 53 |
| 16-17 | Di chuyển hướng 0 (`0`) | (17, 22) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 52 |
| 18 | Di chuyển hướng 0 (`0`) | (17, 21) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 50 |
| 19 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 48 |
| 20-22 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 46 |
| 23-25 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 44 |
| 26-27 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(12, 20)) | 43 |
| 28-29 | Di chuyển hướng 5 (`5`) | (12, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 42 |
| 30-31 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 41 |
| 32-33 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 40 |
| 34-35 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 39 |
| 36 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 37 |
| 37-38 | Di chuyển hướng 4 (`4`) | (7, 20) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 36 |
| 39-40 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 21)) | 35 |
| 41-42 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 34 |
| 43-44 | Di chuyển hướng 3 (`3`) | (7, 21) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 33 |
| 45 | Di chuyển hướng 3 (`3`) | (7, 22) | (8, 23) | Dự kiến đến điểm hẹn tọa độ (8, 23) | 31 |
| 46 | Di chuyển hướng 3 (`3`) | (8, 23) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 29 |
| 47 | Di chuyển hướng 3 (`3`) | (8, 24) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 64 |
| 48-49 | Di chuyển hướng 3 (`3`) | (9, 25) | (9, 26) | Dự kiến đến điểm hẹn tọa độ (9, 26) | 63 |
| 50 | Di chuyển hướng 3 (`3`) | (9, 26) | (10, 27) | Dự kiến đến điểm hẹn tọa độ (10, 27) | 61 |
| 51-52 | Di chuyển hướng 2 (`2`) | (10, 27) | (11, 27) | Dự kiến đến điểm hẹn tọa độ (11, 27) | 60 |
| 53 | Di chuyển hướng 3 (`3`) | (11, 27) | (11, 28) | Dự kiến đến điểm hẹn tọa độ (11, 28) | 58 |
| 54-55 | Di chuyển hướng 3 (`3`) | (11, 28) | (12, 29) | Dự kiến đến điểm hẹn tọa độ (12, 29) | 57 |
| 56-57 | Di chuyển hướng 3 (`3`) | (12, 29) | (12, 30) | Dự kiến đến điểm hẹn tọa độ (12, 30) | 56 |
| 58-59 | Di chuyển hướng 3 (`3`) | (12, 30) | (13, 31) | Dự kiến đến điểm hẹn tọa độ (13, 31) | 55 |
| 60 | Di chuyển hướng 2 (`2`) | (13, 31) | (14, 31) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(14, 31)) | 53 |
| 61-62 | Di chuyển hướng 0 (`0`) | (14, 31) | (13, 30) | Dự kiến đến điểm hẹn tọa độ (13, 30) | 52 |
| 63 | Chờ 1 bước (`-1`) | (13, 30) | (13, 30) | Dự kiến đứng yên tại (13, 30); hướng tới tọa độ (13, 30) | 52 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 15) (ô=488)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(28, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(28, 7)
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 1, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 2, 1, 1, 2, 1, 2, 2, 2, 1, 1, 1, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 63 |
| 2-3 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 62 |
| 4 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 60 |
| 5-6 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 59 |
| 7 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 57 |
| 8-9 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 56 |
| 10 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 54 |
| 11-12 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 53 |
| 13 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 51 |
| 14-15 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 50 |
| 16 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 48 |
| 17-18 | Di chuyển hướng 1 (`1`) | (15, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 47 |
| 19 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 45 |
| 20-21 | Di chuyển hướng 3 (`3`) | (17, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 44 |
| 22-23 | Di chuyển hướng 3 (`3`) | (17, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 43 |
| 24-26 | Di chuyển hướng 3 (`3`) | (18, 9) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 41 |
| 27-28 | Di chuyển hướng 3 (`3`) | (18, 10) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 40 |
| 29-30 | Di chuyển hướng 3 (`3`) | (19, 11) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 39 |
| 31-32 | Di chuyển hướng 3 (`3`) | (19, 12) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 38 |
| 33-35 | Di chuyển hướng 3 (`3`) | (20, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 36 |
| 36-38 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(21, 15)) | 34 |
| 39-40 | Di chuyển hướng 2 (`2`) | (21, 15) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 33 |
| 41-42 | Di chuyển hướng 1 (`1`) | (22, 15) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 32 |
| 43-44 | Di chuyển hướng 1 (`1`) | (22, 14) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 31 |
| 45 | Di chuyển hướng 2 (`2`) | (23, 13) | (24, 13) | Dự kiến đến điểm hẹn tọa độ (24, 13) | 29 |
| 46 | Di chuyển hướng 1 (`1`) | (24, 13) | (24, 12) | Dự kiến đến điểm hẹn tọa độ (24, 12) | 27 |
| 47-48 | Di chuyển hướng 2 (`2`) | (24, 12) | (25, 12) | Dự kiến đến điểm hẹn tọa độ (25, 12) | 26 |
| 49-50 | Di chuyển hướng 2 (`2`) | (25, 12) | (26, 12) | Dự kiến đến điểm hẹn tọa độ (26, 12) | 25 |
| 51-52 | Di chuyển hướng 2 (`2`) | (26, 12) | (27, 12) | Dự kiến đến điểm hẹn tọa độ (27, 12) | 24 |
| 53-54 | Di chuyển hướng 1 (`1`) | (27, 12) | (28, 11) | Dự kiến đến điểm hẹn tọa độ (28, 11) | 23 |
| 55-56 | Di chuyển hướng 1 (`1`) | (28, 11) | (28, 10) | Dự kiến đến điểm hẹn tọa độ (28, 10) | 22 |
| 57-59 | Di chuyển hướng 1 (`1`) | (28, 10) | (29, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(29, 9)) | 20 |
| 60-61 | Di chuyển hướng 0 (`0`) | (29, 9) | (28, 8) | Dự kiến đến điểm hẹn tọa độ (28, 8) | 19 |
| 62 | Di chuyển hướng 0 (`0`) | (28, 8) | (28, 7) | Dự kiến đến điểm hẹn tọa độ (28, 7) | 17 |
| 63 | Chờ 1 bước (`-1`) | (28, 7) | (28, 7) | Dự kiến đứng yên tại (28, 7); hướng tới tọa độ (28, 7) | 17 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (30, 27) (ô=894)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 25)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 25)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 0, 0, 0, 0, 5, 5, 5, 5, 4, 4, 4, 5, 4, 4, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (30, 27) | (29, 27) | Dự kiến đến điểm hẹn tọa độ (29, 27) | 64 |
| 2 | Di chuyển hướng 5 (`5`) | (29, 27) | (28, 27) | Dự kiến đến điểm hẹn tọa độ (28, 27) | 64 |
| 3-4 | Di chuyển hướng 5 (`5`) | (28, 27) | (27, 27) | Dự kiến đến điểm hẹn tọa độ (27, 27) | 64 |
| 5-6 | Di chuyển hướng 5 (`5`) | (27, 27) | (26, 27) | Dự kiến đến điểm hẹn tọa độ (26, 27) | 64 |
| 7-8 | Di chuyển hướng 5 (`5`) | (26, 27) | (25, 27) | Dự kiến đến điểm hẹn tọa độ (25, 27) | 64 |
| 9 | Di chuyển hướng 5 (`5`) | (25, 27) | (24, 27) | Dự kiến đến điểm hẹn tọa độ (24, 27) | 64 |
| 10-11 | Di chuyển hướng 5 (`5`) | (24, 27) | (23, 27) | Dự kiến đến điểm hẹn tọa độ (23, 27) | 64 |
| 12 | Di chuyển hướng 5 (`5`) | (23, 27) | (22, 27) | Dự kiến đến điểm hẹn tọa độ (22, 27) | 64 |
| 13 | Di chuyển hướng 5 (`5`) | (22, 27) | (21, 27) | Dự kiến đến điểm hẹn tọa độ (21, 27) | 64 |
| 14-15 | Di chuyển hướng 0 (`0`) | (21, 27) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 64 |
| 16-17 | Di chuyển hướng 0 (`0`) | (20, 26) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 64 |
| 18-19 | Di chuyển hướng 0 (`0`) | (20, 25) | (19, 24) | Dự kiến đến điểm hẹn tọa độ (19, 24) | 64 |
| 20-21 | Di chuyển hướng 5 (`5`) | (19, 24) | (18, 24) | Dự kiến đến điểm hẹn tọa độ (18, 24) | 64 |
| 22-23 | Di chuyển hướng 0 (`0`) | (18, 24) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 64 |
| 24 | Di chuyển hướng 0 (`0`) | (18, 23) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 64 |
| 25-26 | Di chuyển hướng 0 (`0`) | (17, 22) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 64 |
| 27 | Di chuyển hướng 0 (`0`) | (17, 21) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 64 |
| 28 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 64 |
| 29-31 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 64 |
| 32-34 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 64 |
| 35-36 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(12, 20)) | 64 |
| 37-38 | Di chuyển hướng 4 (`4`) | (12, 20) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 64 |
| 39-40 | Di chuyển hướng 4 (`4`) | (12, 21) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 64 |
| 41-42 | Di chuyển hướng 4 (`4`) | (11, 22) | (11, 23) | Dự kiến đến điểm hẹn tọa độ (11, 23) | 64 |
| 43 | Di chuyển hướng 5 (`5`) | (11, 23) | (10, 23) | Dự kiến đến điểm hẹn tọa độ (10, 23) | 64 |
| 44 | Di chuyển hướng 4 (`4`) | (10, 23) | (9, 24) | Dự kiến đến điểm hẹn tọa độ (9, 24) | 64 |
| 45-46 | Di chuyển hướng 4 (`4`) | (9, 24) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 64 |
| 47-63 | Chờ 17 bước (`-17`) | (9, 25) | (9, 25) | Dự kiến đứng yên tại (9, 25); hướng tới tọa độ (9, 25) | 64 |

