# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 102
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #0 | #3 | (9, 24) | 63 | 64 |
| 4 | #0 | #3 | (10, 23) | 63 | 64 |
| 19 | #0 | #3 | (15, 17) | 53 | 64 |
| 21 | #0 | #3 | (15, 16) | 63 | 64 |
| 22 | #0 | #3 | (15, 15) | 62 | 64 |
| 25 | #0 | #3 | (14, 14) | 62 | 64 |
| 27 | #0 | #3 | (14, 13) | 63 | 64 |
| 29 | #0 | #3 | (13, 12) | 63 | 64 |
| 62 | #2 | #3 | (29, 9) | 4 | 64 |
| 66 | #2 | #3 | (27, 8) | 61 | 64 |
| 68 | #2 | #3 | (26, 8) | 63 | 64 |
| 73 | #2 | #3 | (23, 10) | 57 | 64 |
| 75 | #2 | #3 | (22, 10) | 63 | 64 |
| 78 | #2 | #3 | (21, 11) | 61 | 64 |
| 80 | #2 | #3 | (20, 12) | 63 | 64 |
| 82 | #2 | #3 | (19, 12) | 63 | 64 |
| 98 | #2 | #3 | (19, 12) | 54 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (9, 25) (ô=809)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(2, 0))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(2, 0))
- Mảng hành động đã gửi server: `[1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 5, 5, 5, 5, 0, -43]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 25) | (9, 24) | Dự kiến đến điểm hẹn tọa độ (9, 24) | 64 |
| 2-3 | Di chuyển hướng 1 (`1`) | (9, 24) | (10, 23) | Dự kiến đến điểm hẹn tọa độ (10, 23) | 64 |
| 4 | Di chuyển hướng 2 (`2`) | (10, 23) | (11, 23) | Dự kiến đến điểm hẹn tọa độ (11, 23) | 62 |
| 5 | Di chuyển hướng 1 (`1`) | (11, 23) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 60 |
| 6-7 | Di chuyển hướng 1 (`1`) | (11, 22) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 59 |
| 8-9 | Di chuyển hướng 1 (`1`) | (12, 21) | (12, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(12, 20)) | 58 |
| 10-11 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 57 |
| 12-13 | Di chuyển hướng 1 (`1`) | (13, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 56 |
| 14-15 | Di chuyển hướng 1 (`1`) | (14, 19) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 55 |
| 16-18 | Di chuyển hướng 1 (`1`) | (14, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 64 |
| 19-20 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 64 |
| 21 | Di chuyển hướng 0 (`0`) | (15, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 64 |
| 22-24 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 64 |
| 25-26 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 64 |
| 27-28 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 64 |
| 29-30 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 63 |
| 31-32 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 62 |
| 33-35 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 60 |
| 36-37 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 59 |
| 38-39 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 58 |
| 40-41 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 57 |
| 42 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 55 |
| 43 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 53 |
| 44 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 51 |
| 45-46 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 50 |
| 47-48 | Di chuyển hướng 0 (`0`) | (8, 3) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 49 |
| 49-50 | Di chuyển hướng 0 (`0`) | (7, 2) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 48 |
| 51 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 46 |
| 52-53 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 45 |
| 54-55 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 44 |
| 56 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 42 |
| 57-58 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 0)) | 41 |
| 59-101 | Chờ 43 bước (`-43`) | (2, 0) | (2, 0) | Dự kiến đứng yên tại (2, 0); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 0)) | 41 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (13, 30) (ô=973)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(25, 23))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(25, 23))
- Mảng hành động đã gửi server: `[3, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 5, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (13, 30) | (14, 31) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(14, 31)) | 51 |
| 2-3 | Di chuyển hướng 0 (`0`) | (14, 31) | (13, 30) | Dự kiến đến điểm hẹn tọa độ (13, 30) | 50 |
| 4-5 | Di chuyển hướng 0 (`0`) | (13, 30) | (13, 29) | Dự kiến đến điểm hẹn tọa độ (13, 29) | 49 |
| 6-7 | Di chuyển hướng 0 (`0`) | (13, 29) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 48 |
| 8-9 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 47 |
| 10 | Di chuyển hướng 5 (`5`) | (12, 27) | (11, 27) | Dự kiến đến điểm hẹn tọa độ (11, 27) | 45 |
| 11 | Di chuyển hướng 5 (`5`) | (11, 27) | (10, 27) | Dự kiến đến điểm hẹn tọa độ (10, 27) | 43 |
| 12-13 | Di chuyển hướng 0 (`0`) | (10, 27) | (9, 26) | Dự kiến đến điểm hẹn tọa độ (9, 26) | 42 |
| 14 | Di chuyển hướng 0 (`0`) | (9, 26) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 40 |
| 15-16 | Di chuyển hướng 0 (`0`) | (9, 25) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 39 |
| 17 | Di chuyển hướng 0 (`0`) | (8, 24) | (8, 23) | Dự kiến đến điểm hẹn tọa độ (8, 23) | 37 |
| 18 | Di chuyển hướng 0 (`0`) | (8, 23) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 35 |
| 19 | Di chuyển hướng 0 (`0`) | (7, 22) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 33 |
| 20-21 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 21)) | 32 |
| 22-23 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 31 |
| 24-25 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 30 |
| 26-27 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 29 |
| 28 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 27 |
| 29-30 | Di chuyển hướng 2 (`2`) | (9, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 26 |
| 31-32 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 25 |
| 33-34 | Di chuyển hướng 2 (`2`) | (11, 20) | (12, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(12, 20)) | 24 |
| 35-36 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 23 |
| 37-38 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 22 |
| 39-41 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 20 |
| 42-44 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 18 |
| 45 | Di chuyển hướng 3 (`3`) | (16, 20) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 16 |
| 46 | Di chuyển hướng 3 (`3`) | (17, 21) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 14 |
| 47-48 | Di chuyển hướng 3 (`3`) | (17, 22) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 13 |
| 49 | Di chuyển hướng 2 (`2`) | (18, 23) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 11 |
| 50-51 | Di chuyển hướng 2 (`2`) | (19, 23) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 10 |
| 52-53 | Di chuyển hướng 2 (`2`) | (20, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 9 |
| 54-55 | Di chuyển hướng 2 (`2`) | (21, 23) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 8 |
| 56-57 | Di chuyển hướng 2 (`2`) | (22, 23) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 7 |
| 58 | Di chuyển hướng 2 (`2`) | (23, 23) | (24, 23) | Dự kiến đến điểm hẹn tọa độ (24, 23) | 5 |
| 59-60 | Di chuyển hướng 2 (`2`) | (24, 23) | (25, 23) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(25, 23)) | 4 |
| 61-101 | Chờ 41 bước (`-41`) | (25, 23) | (25, 23) | Dự kiến đứng yên tại (25, 23); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(25, 23)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (28, 7) (ô=252)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 10)
- Mảng hành động đã gửi server: `[0, 5, 0, 2, 3, 3, 3, 3, -48, 0, 5, 5, 4, 4, 5, 5, 5, 4, 5, 4, 5, 3, 3, 3, 0, 0, 0, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (28, 7) | (27, 6) | Dự kiến đến điểm hẹn tọa độ (27, 6) | 15 |
| 3 | Di chuyển hướng 5 (`5`) | (27, 6) | (26, 6) | Dự kiến đến điểm hẹn tọa độ (26, 6) | 13 |
| 4-5 | Di chuyển hướng 0 (`0`) | (26, 6) | (26, 5) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(26, 5)) | 12 |
| 6-7 | Di chuyển hướng 2 (`2`) | (26, 5) | (27, 5) | Dự kiến đến điểm hẹn tọa độ (27, 5) | 11 |
| 8-9 | Di chuyển hướng 3 (`3`) | (27, 5) | (27, 6) | Dự kiến đến điểm hẹn tọa độ (27, 6) | 10 |
| 10 | Di chuyển hướng 3 (`3`) | (27, 6) | (28, 7) | Dự kiến đến điểm hẹn tọa độ (28, 7) | 8 |
| 11-13 | Di chuyển hướng 3 (`3`) | (28, 7) | (28, 8) | Dự kiến đến điểm hẹn tọa độ (28, 8) | 6 |
| 14 | Di chuyển hướng 3 (`3`) | (28, 8) | (29, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(29, 9)) | 4 |
| 15-62 | Chờ 48 bước (`-48`) | (29, 9) | (29, 9) | Dự kiến đứng yên tại (29, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(29, 9)) | 64 |
| 63-64 | Di chuyển hướng 0 (`0`) | (29, 9) | (28, 8) | Dự kiến đến điểm hẹn tọa độ (28, 8) | 63 |
| 65 | Di chuyển hướng 5 (`5`) | (28, 8) | (27, 8) | Dự kiến đến điểm hẹn tọa độ (27, 8) | 64 |
| 66-67 | Di chuyển hướng 5 (`5`) | (27, 8) | (26, 8) | Dự kiến đến điểm hẹn tọa độ (26, 8) | 64 |
| 68-69 | Di chuyển hướng 4 (`4`) | (26, 8) | (26, 9) | Dự kiến đến điểm hẹn tọa độ (26, 9) | 63 |
| 70 | Di chuyển hướng 4 (`4`) | (26, 9) | (25, 10) | Dự kiến đến điểm hẹn tọa độ (25, 10) | 61 |
| 71 | Di chuyển hướng 5 (`5`) | (25, 10) | (24, 10) | Dự kiến đến điểm hẹn tọa độ (24, 10) | 59 |
| 72 | Di chuyển hướng 5 (`5`) | (24, 10) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 64 |
| 73-74 | Di chuyển hướng 5 (`5`) | (23, 10) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 64 |
| 75-76 | Di chuyển hướng 4 (`4`) | (22, 10) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 63 |
| 77 | Di chuyển hướng 5 (`5`) | (22, 11) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 64 |
| 78-79 | Di chuyển hướng 4 (`4`) | (21, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 64 |
| 80-81 | Di chuyển hướng 5 (`5`) | (20, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 64 |
| 82-83 | Di chuyển hướng 3 (`3`) | (19, 12) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 63 |
| 84-86 | Di chuyển hướng 3 (`3`) | (20, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 61 |
| 87-89 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(21, 15)) | 59 |
| 90-91 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 58 |
| 92-94 | Di chuyển hướng 0 (`0`) | (20, 14) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 56 |
| 95-97 | Di chuyển hướng 0 (`0`) | (20, 13) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 64 |
| 98-99 | Di chuyển hướng 0 (`0`) | (19, 12) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 63 |
| 100-101 | Di chuyển hướng 0 (`0`) | (19, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 62 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (9, 25) (ô=809)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(19, 12))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(19, 12))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 3, 0, 5, 5, 4, 4, 5, 5, 5, 4, 5, 4, 5, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 25) | (9, 24) | Dự kiến đến điểm hẹn tọa độ (9, 24) | 64 |
| 2-3 | Di chuyển hướng 1 (`1`) | (9, 24) | (10, 23) | Dự kiến đến điểm hẹn tọa độ (10, 23) | 64 |
| 4 | Di chuyển hướng 1 (`1`) | (10, 23) | (10, 22) | Dự kiến đến điểm hẹn tọa độ (10, 22) | 64 |
| 5-6 | Di chuyển hướng 1 (`1`) | (10, 22) | (11, 21) | Dự kiến đến điểm hẹn tọa độ (11, 21) | 64 |
| 7-8 | Di chuyển hướng 1 (`1`) | (11, 21) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 64 |
| 9-10 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 64 |
| 11 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 64 |
| 12-13 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 64 |
| 14-15 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 64 |
| 16-18 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 64 |
| 19-20 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 64 |
| 21 | Di chuyển hướng 0 (`0`) | (15, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 64 |
| 22-24 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 64 |
| 25-26 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 64 |
| 27-28 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 64 |
| 29-30 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 64 |
| 31 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 64 |
| 32-33 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 64 |
| 34 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 64 |
| 35-36 | Di chuyển hướng 1 (`1`) | (15, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 64 |
| 37 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 64 |
| 38-39 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 64 |
| 40-42 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 64 |
| 43-44 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 64 |
| 45 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 64 |
| 46-47 | Di chuyển hướng 2 (`2`) | (21, 7) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 64 |
| 48-49 | Di chuyển hướng 2 (`2`) | (22, 7) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 64 |
| 50-51 | Di chuyển hướng 2 (`2`) | (23, 7) | (24, 7) | Dự kiến đến điểm hẹn tọa độ (24, 7) | 64 |
| 52-53 | Di chuyển hướng 2 (`2`) | (24, 7) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 64 |
| 54 | Di chuyển hướng 3 (`3`) | (25, 7) | (25, 8) | Dự kiến đến điểm hẹn tọa độ (25, 8) | 64 |
| 55-56 | Di chuyển hướng 2 (`2`) | (25, 8) | (26, 8) | Dự kiến đến điểm hẹn tọa độ (26, 8) | 64 |
| 57-58 | Di chuyển hướng 2 (`2`) | (26, 8) | (27, 8) | Dự kiến đến điểm hẹn tọa độ (27, 8) | 64 |
| 59-60 | Di chuyển hướng 2 (`2`) | (27, 8) | (28, 8) | Dự kiến đến điểm hẹn tọa độ (28, 8) | 64 |
| 61 | Di chuyển hướng 3 (`3`) | (28, 8) | (29, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(29, 9)) | 64 |
| 62-63 | Di chuyển hướng 0 (`0`) | (29, 9) | (28, 8) | Dự kiến đến điểm hẹn tọa độ (28, 8) | 64 |
| 64 | Di chuyển hướng 5 (`5`) | (28, 8) | (27, 8) | Dự kiến đến điểm hẹn tọa độ (27, 8) | 64 |
| 65-66 | Di chuyển hướng 5 (`5`) | (27, 8) | (26, 8) | Dự kiến đến điểm hẹn tọa độ (26, 8) | 64 |
| 67-68 | Di chuyển hướng 4 (`4`) | (26, 8) | (26, 9) | Dự kiến đến điểm hẹn tọa độ (26, 9) | 64 |
| 69 | Di chuyển hướng 4 (`4`) | (26, 9) | (25, 10) | Dự kiến đến điểm hẹn tọa độ (25, 10) | 64 |
| 70 | Di chuyển hướng 5 (`5`) | (25, 10) | (24, 10) | Dự kiến đến điểm hẹn tọa độ (24, 10) | 64 |
| 71 | Di chuyển hướng 5 (`5`) | (24, 10) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 64 |
| 72-73 | Di chuyển hướng 5 (`5`) | (23, 10) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 64 |
| 74-75 | Di chuyển hướng 4 (`4`) | (22, 10) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 64 |
| 76 | Di chuyển hướng 5 (`5`) | (22, 11) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 64 |
| 77-78 | Di chuyển hướng 4 (`4`) | (21, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 64 |
| 79-80 | Di chuyển hướng 5 (`5`) | (20, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 64 |
| 81-101 | Chờ 21 bước (`-21`) | (19, 12) | (19, 12) | Dự kiến đứng yên tại (19, 12); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 64 |

