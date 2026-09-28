# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 76
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 21 | #4 | #7 | (7, 18) | 2 | 74 |
| 23 | #0 | #6 | (29, 8) | 2 | 74 |
| 26 | #0 | #6 | (29, 7) | 73 | 74 |
| 28 | #0 | #6 | (28, 6) | 73 | 74 |
| 31 | #0 | #6 | (28, 5) | 72 | 74 |
| 33 | #0 | #6 | (27, 4) | 73 | 74 |
| 36 | #0 | #6 | (27, 2) | 71 | 74 |
| 36 | #4 | #7 | (6, 25) | 65 | 74 |
| 38 | #4 | #7 | (5, 26) | 73 | 74 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (25, 1) (ô=57)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 8)
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 3, 3, 3, 3, -7, 0, 0, 0, 0, 1, 0, 0, 0, 4, 5, 5, 5, 5, 5, 5, 5, 0, 4, 4, 3, 4, 4, 2, 3, 3, 2, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (25, 1) | (26, 1) | Dự kiến đến điểm hẹn tọa độ (26, 1) | 10 |
| 2-3 | Di chuyển hướng 3 (`3`) | (26, 1) | (26, 2) | Dự kiến đến điểm hẹn tọa độ (26, 2) | 9 |
| 4-5 | Di chuyển hướng 3 (`3`) | (26, 2) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 8 |
| 6-7 | Di chuyển hướng 3 (`3`) | (27, 3) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 7 |
| 8-9 | Di chuyển hướng 3 (`3`) | (27, 4) | (28, 5) | Dự kiến đến điểm hẹn tọa độ (28, 5) | 6 |
| 10-11 | Di chuyển hướng 3 (`3`) | (28, 5) | (28, 6) | Dự kiến đến điểm hẹn tọa độ (28, 6) | 5 |
| 12-14 | Di chuyển hướng 3 (`3`) | (28, 6) | (29, 7) | Dự kiến đến điểm hẹn tọa độ (29, 7) | 3 |
| 15-16 | Di chuyển hướng 3 (`3`) | (29, 7) | (29, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(29, 8)) | 2 |
| 17-23 | Chờ 7 bước (`-7`) | (29, 8) | (29, 8) | Dự kiến đứng yên tại (29, 8); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(29, 8)) | 74 |
| 24-25 | Di chuyển hướng 0 (`0`) | (29, 8) | (29, 7) | Dự kiến đến điểm hẹn tọa độ (29, 7) | 74 |
| 26-27 | Di chuyển hướng 0 (`0`) | (29, 7) | (28, 6) | Dự kiến đến điểm hẹn tọa độ (28, 6) | 74 |
| 28-30 | Di chuyển hướng 0 (`0`) | (28, 6) | (28, 5) | Dự kiến đến điểm hẹn tọa độ (28, 5) | 74 |
| 31-32 | Di chuyển hướng 0 (`0`) | (28, 5) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 74 |
| 33-34 | Di chuyển hướng 1 (`1`) | (27, 4) | (28, 3) | Dự kiến đến điểm hẹn tọa độ (28, 3) | 73 |
| 35 | Di chuyển hướng 0 (`0`) | (28, 3) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 74 |
| 36-37 | Di chuyển hướng 0 (`0`) | (27, 2) | (27, 1) | Dự kiến đến điểm hẹn tọa độ (27, 1) | 73 |
| 38 | Di chuyển hướng 0 (`0`) | (27, 1) | (26, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(26, 0)) | 71 |
| 39-40 | Di chuyển hướng 4 (`4`) | (26, 0) | (26, 1) | Dự kiến đến điểm hẹn tọa độ (26, 1) | 70 |
| 41-42 | Di chuyển hướng 5 (`5`) | (26, 1) | (25, 1) | Dự kiến đến điểm hẹn tọa độ (25, 1) | 69 |
| 43-44 | Di chuyển hướng 5 (`5`) | (25, 1) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 68 |
| 45 | Di chuyển hướng 5 (`5`) | (24, 1) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 66 |
| 46-47 | Di chuyển hướng 5 (`5`) | (23, 1) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 65 |
| 48-49 | Di chuyển hướng 5 (`5`) | (22, 1) | (21, 1) | Dự kiến đến điểm hẹn tọa độ (21, 1) | 64 |
| 50-51 | Di chuyển hướng 5 (`5`) | (21, 1) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 63 |
| 52-53 | Di chuyển hướng 5 (`5`) | (20, 1) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 62 |
| 54-55 | Di chuyển hướng 0 (`0`) | (19, 1) | (18, 0) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 0)) | 61 |
| 56-57 | Di chuyển hướng 4 (`4`) | (18, 0) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 60 |
| 58-59 | Di chuyển hướng 4 (`4`) | (18, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 59 |
| 60-61 | Di chuyển hướng 3 (`3`) | (17, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 58 |
| 62-63 | Di chuyển hướng 4 (`4`) | (18, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 57 |
| 64 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 5)) | 55 |
| 65-66 | Di chuyển hướng 2 (`2`) | (17, 5) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 54 |
| 67 | Di chuyển hướng 3 (`3`) | (18, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 52 |
| 68 | Di chuyển hướng 3 (`3`) | (18, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 50 |
| 69-70 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 49 |
| 71-72 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 48 |
| 73-74 | Di chuyển hướng 2 (`2`) | (20, 8) | (21, 8) | Dự kiến đến điểm hẹn tọa độ (21, 8) | 47 |
| 75 | Chờ 1 bước (`-1`) | (21, 8) | (21, 8) | Dự kiến đứng yên tại (21, 8); hướng tới tọa độ (21, 8) | 47 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 8) (ô=268)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(8, 7))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(8, 7))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 5, 4, 3, 4, 5, 4, 2, 3, 3, 2, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 5, 5, 0, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 35 |
| 2-3 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 34 |
| 4-5 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 33 |
| 6-7 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 32 |
| 8-9 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 31 |
| 10-11 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 30 |
| 12-13 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 29 |
| 14-15 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(4, 8)) | 28 |
| 16-17 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 27 |
| 18 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 25 |
| 19-20 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 11)) | 24 |
| 21-22 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 23 |
| 23 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(2, 12)) | 21 |
| 24-25 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 20 |
| 26-27 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 19 |
| 28 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 17 |
| 29-30 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 16 |
| 31-32 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 15 |
| 33-34 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 14 |
| 35-36 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 13 |
| 37 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 11 |
| 38-39 | Di chuyển hướng 2 (`2`) | (9, 14) | (10, 14) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 14)) | 10 |
| 40-41 | Di chuyển hướng 1 (`1`) | (10, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 9 |
| 42 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 7 |
| 43-44 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 6 |
| 45-46 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 5 |
| 47-48 | Di chuyển hướng 0 (`0`) | (11, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 4 |
| 49-50 | Di chuyển hướng 0 (`0`) | (11, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 3 |
| 51-52 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 2 |
| 53-54 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 1 |
| 55-56 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 0 |
| 57-75 | Chờ 19 bước (`-19`) | (8, 7) | (8, 7) | Dự kiến đứng yên tại (8, 7); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (26, 15) (ô=506)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 9)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 4, 5, 4, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 4, 4, 4, 4, 4, 4, 5, 5, 4, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (26, 15) | (25, 15) | Dự kiến đến điểm hẹn tọa độ (25, 15) | 53 |
| 2 | Di chuyển hướng 5 (`5`) | (25, 15) | (24, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(24, 15)) | 51 |
| 3-4 | Di chuyển hướng 5 (`5`) | (24, 15) | (23, 15) | Dự kiến đến điểm hẹn tọa độ (23, 15) | 50 |
| 5-6 | Di chuyển hướng 5 (`5`) | (23, 15) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 49 |
| 7-8 | Di chuyển hướng 5 (`5`) | (22, 15) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 48 |
| 9-10 | Di chuyển hướng 5 (`5`) | (21, 15) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 47 |
| 11 | Di chuyển hướng 0 (`0`) | (20, 15) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 45 |
| 12-13 | Di chuyển hướng 0 (`0`) | (19, 14) | (19, 13) | Dự kiến đến điểm hẹn tọa độ (19, 13) | 44 |
| 14-15 | Di chuyển hướng 0 (`0`) | (19, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 43 |
| 16-17 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 42 |
| 18-19 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 41 |
| 20-21 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 40 |
| 22-24 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 38 |
| 25 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 36 |
| 26-27 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 35 |
| 28-29 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 34 |
| 30 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 32 |
| 31-32 | Di chuyển hướng 4 (`4`) | (12, 10) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 31 |
| 33-34 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 30 |
| 35-36 | Di chuyển hướng 1 (`1`) | (11, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 29 |
| 37-38 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 8)) | 28 |
| 39-40 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 27 |
| 41-42 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 26 |
| 43 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 24 |
| 44-45 | Di chuyển hướng 1 (`1`) | (13, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 23 |
| 46-48 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 21 |
| 49-50 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 20 |
| 51-52 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=26, tọa độ=(14, 1)) | 19 |
| 53-54 | Di chuyển hướng 0 (`0`) | (14, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(13, 0)) | 18 |
| 55-56 | Di chuyển hướng 4 (`4`) | (13, 0) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 17 |
| 57-58 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 16 |
| 59-60 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 15 |
| 61 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 13 |
| 62 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 11 |
| 63-64 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 10 |
| 65-66 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 9 |
| 67-68 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 8 |
| 69-70 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 7 |
| 71-72 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 6 |
| 73-74 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 5 |
| 75 | Chờ 1 bước (`-1`) | (9, 9) | (9, 9) | Dự kiến đứng yên tại (9, 9); hướng tới tọa độ (9, 9) | 5 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (19, 2) (ô=83)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 10)
- Mảng hành động đã gửi server: `[4, 4, 4, 3, 4, 4, 4, 5, 5, 5, 5, 0, 5, 5, 0, 5, 5, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 4, 3, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 59 |
| 4-5 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=28, tọa độ=(18, 4)) | 58 |
| 6-7 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 57 |
| 8 | Di chuyển hướng 3 (`3`) | (18, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 55 |
| 9 | Di chuyển hướng 4 (`4`) | (18, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 53 |
| 10-11 | Di chuyển hướng 4 (`4`) | (18, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 52 |
| 12-13 | Di chuyển hướng 4 (`4`) | (17, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 51 |
| 14-16 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 49 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 47 |
| 18-19 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 46 |
| 20-21 | Di chuyển hướng 5 (`5`) | (14, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 45 |
| 22-24 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 8)) | 43 |
| 25-26 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 42 |
| 27-28 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 41 |
| 29-30 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 40 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 39 |
| 33-34 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 38 |
| 35-36 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 37 |
| 37-38 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 36 |
| 39-40 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 35 |
| 41 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 33 |
| 42-43 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 32 |
| 44-45 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 31 |
| 46-48 | Di chuyển hướng 2 (`2`) | (13, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 29 |
| 49-50 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 28 |
| 51-52 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 27 |
| 53 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 25 |
| 54-56 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 23 |
| 57 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 21 |
| 58-59 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 20 |
| 60-61 | Di chuyển hướng 2 (`2`) | (20, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 19 |
| 62-63 | Di chuyển hướng 2 (`2`) | (21, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 18 |
| 64-65 | Di chuyển hướng 2 (`2`) | (22, 9) | (23, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(23, 9)) | 17 |
| 66-67 | Di chuyển hướng 4 (`4`) | (23, 9) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 16 |
| 68 | Di chuyển hướng 4 (`4`) | (22, 10) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 14 |
| 69-70 | Di chuyển hướng 3 (`3`) | (22, 11) | (22, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 12)) | 13 |
| 71-72 | Di chuyển hướng 0 (`0`) | (22, 12) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 12 |
| 73-74 | Di chuyển hướng 0 (`0`) | (22, 11) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 11 |
| 75 | Chờ 1 bước (`-1`) | (21, 10) | (21, 10) | Dự kiến đứng yên tại (21, 10); hướng tới tọa độ (21, 10) | 11 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (14, 25) (ô=814)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #27 (thương hiệu=27, tọa độ=(14, 22))
- Địa điểm đích kế hoạch: Spot #27 (thương hiệu=27, tọa độ=(14, 22))
- Mảng hành động đã gửi server: `[0, 5, 0, 5, 0, 0, 0, 0, 0, 5, -4, 3, 3, 4, 4, 4, 4, 4, 4, 5, 4, 3, 2, 3, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 0, 1, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 25) | (13, 24) | Dự kiến đến điểm hẹn tọa độ (13, 24) | 15 |
| 2-3 | Di chuyển hướng 5 (`5`) | (13, 24) | (12, 24) | Dự kiến đến điểm hẹn tọa độ (12, 24) | 14 |
| 4-5 | Di chuyển hướng 0 (`0`) | (12, 24) | (12, 23) | Dự kiến đến điểm hẹn tọa độ (12, 23) | 13 |
| 6-7 | Di chuyển hướng 5 (`5`) | (12, 23) | (11, 23) | Dự kiến đến điểm hẹn tọa độ (11, 23) | 12 |
| 8-9 | Di chuyển hướng 0 (`0`) | (11, 23) | (10, 22) | Dự kiến đến điểm hẹn tọa độ (10, 22) | 11 |
| 10 | Di chuyển hướng 0 (`0`) | (10, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 9 |
| 11 | Di chuyển hướng 0 (`0`) | (10, 21) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 7 |
| 12-14 | Di chuyển hướng 0 (`0`) | (9, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 5 |
| 15 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 3 |
| 16-17 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(7, 18)) | 2 |
| 18-21 | Chờ 4 bước (`-4`) | (7, 18) | (7, 18) | Dự kiến đứng yên tại (7, 18); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(7, 18)) | 74 |
| 22-23 | Di chuyển hướng 3 (`3`) | (7, 18) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 73 |
| 24-26 | Di chuyển hướng 3 (`3`) | (8, 19) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 71 |
| 27-28 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=29, tọa độ=(8, 21)) | 70 |
| 29-30 | Di chuyển hướng 4 (`4`) | (8, 21) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 69 |
| 31-32 | Di chuyển hướng 4 (`4`) | (7, 22) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 68 |
| 33-34 | Di chuyển hướng 4 (`4`) | (7, 23) | (6, 24) | Dự kiến đến điểm hẹn tọa độ (6, 24) | 67 |
| 35 | Di chuyển hướng 4 (`4`) | (6, 24) | (6, 25) | Dự kiến đến điểm hẹn tọa độ (6, 25) | 74 |
| 36-37 | Di chuyển hướng 4 (`4`) | (6, 25) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 74 |
| 38-40 | Di chuyển hướng 5 (`5`) | (5, 26) | (4, 26) | Dự kiến đến điểm hẹn tọa độ (4, 26) | 72 |
| 41-42 | Di chuyển hướng 4 (`4`) | (4, 26) | (4, 27) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 27)) | 71 |
| 43-44 | Di chuyển hướng 3 (`3`) | (4, 27) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 70 |
| 45 | Di chuyển hướng 2 (`2`) | (4, 28) | (5, 28) | Dự kiến đến điểm hẹn tọa độ (5, 28) | 68 |
| 46-47 | Di chuyển hướng 3 (`3`) | (5, 28) | (6, 29) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(6, 29)) | 67 |
| 48-49 | Di chuyển hướng 2 (`2`) | (6, 29) | (7, 29) | Dự kiến đến điểm hẹn tọa độ (7, 29) | 66 |
| 50-51 | Di chuyển hướng 2 (`2`) | (7, 29) | (8, 29) | Dự kiến đến điểm hẹn tọa độ (8, 29) | 65 |
| 52-53 | Di chuyển hướng 1 (`1`) | (8, 29) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 64 |
| 54-55 | Di chuyển hướng 1 (`1`) | (8, 28) | (9, 27) | Dự kiến đến điểm hẹn tọa độ (9, 27) | 63 |
| 56-57 | Di chuyển hướng 2 (`2`) | (9, 27) | (10, 27) | Dự kiến đến điểm hẹn tọa độ (10, 27) | 62 |
| 58-59 | Di chuyển hướng 2 (`2`) | (10, 27) | (11, 27) | Dự kiến đến điểm hẹn tọa độ (11, 27) | 61 |
| 60-61 | Di chuyển hướng 2 (`2`) | (11, 27) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 60 |
| 62-64 | Di chuyển hướng 2 (`2`) | (12, 27) | (13, 27) | Dự kiến đến điểm hẹn tọa độ (13, 27) | 58 |
| 65 | Di chuyển hướng 2 (`2`) | (13, 27) | (14, 27) | Dự kiến đến điểm hẹn tọa độ (14, 27) | 56 |
| 66-67 | Di chuyển hướng 1 (`1`) | (14, 27) | (14, 26) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 26)) | 55 |
| 68-69 | Di chuyển hướng 0 (`0`) | (14, 26) | (14, 25) | Dự kiến đến điểm hẹn tọa độ (14, 25) | 54 |
| 70-71 | Di chuyển hướng 1 (`1`) | (14, 25) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 53 |
| 72-73 | Di chuyển hướng 1 (`1`) | (14, 24) | (15, 23) | Dự kiến đến điểm hẹn tọa độ (15, 23) | 52 |
| 74-75 | Di chuyển hướng 0 (`0`) | (15, 23) | (14, 22) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=27, tọa độ=(14, 22)) | 51 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (15, 27) (ô=879)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 24)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 24)
- Mảng hành động đã gửi server: `[3, 3, 2, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 1, 2, 2, 2, 4, 3, 2, 2, 4, 4, 4, 5, 4, 5, 5, 4, 5, 5, 5, 5, 0, 1, 0, 1, 0, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (15, 27) | (15, 28) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=31, tọa độ=(15, 28)) | 59 |
| 3-4 | Di chuyển hướng 3 (`3`) | (15, 28) | (16, 29) | Dự kiến đến điểm hẹn tọa độ (16, 29) | 58 |
| 5 | Di chuyển hướng 2 (`2`) | (16, 29) | (17, 29) | Dự kiến đến điểm hẹn tọa độ (17, 29) | 56 |
| 6-7 | Di chuyển hướng 1 (`1`) | (17, 29) | (17, 28) | Dự kiến đến điểm hẹn tọa độ (17, 28) | 55 |
| 8-9 | Di chuyển hướng 1 (`1`) | (17, 28) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 54 |
| 10-11 | Di chuyển hướng 1 (`1`) | (18, 27) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 53 |
| 12-13 | Di chuyển hướng 2 (`2`) | (18, 26) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 52 |
| 14-15 | Di chuyển hướng 2 (`2`) | (19, 26) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 51 |
| 16-17 | Di chuyển hướng 2 (`2`) | (20, 26) | (21, 26) | Dự kiến đến điểm hẹn tọa độ (21, 26) | 50 |
| 18-19 | Di chuyển hướng 2 (`2`) | (21, 26) | (22, 26) | Dự kiến đến điểm hẹn tọa độ (22, 26) | 49 |
| 20 | Di chuyển hướng 1 (`1`) | (22, 26) | (23, 25) | Dự kiến đến điểm hẹn tọa độ (23, 25) | 47 |
| 21-22 | Di chuyển hướng 2 (`2`) | (23, 25) | (24, 25) | Dự kiến đến điểm hẹn tọa độ (24, 25) | 46 |
| 23-24 | Di chuyển hướng 2 (`2`) | (24, 25) | (25, 25) | Dự kiến đến điểm hẹn tọa độ (25, 25) | 45 |
| 25-26 | Di chuyển hướng 2 (`2`) | (25, 25) | (26, 25) | Dự kiến đến điểm hẹn tọa độ (26, 25) | 44 |
| 27 | Di chuyển hướng 1 (`1`) | (26, 25) | (26, 24) | Dự kiến đến điểm hẹn tọa độ (26, 24) | 42 |
| 28 | Di chuyển hướng 2 (`2`) | (26, 24) | (27, 24) | Dự kiến đến điểm hẹn tọa độ (27, 24) | 40 |
| 29-30 | Di chuyển hướng 2 (`2`) | (27, 24) | (28, 24) | Dự kiến đến điểm hẹn tọa độ (28, 24) | 39 |
| 31-32 | Di chuyển hướng 2 (`2`) | (28, 24) | (29, 24) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(29, 24)) | 38 |
| 33-34 | Di chuyển hướng 4 (`4`) | (29, 24) | (29, 25) | Dự kiến đến điểm hẹn tọa độ (29, 25) | 37 |
| 35-36 | Di chuyển hướng 3 (`3`) | (29, 25) | (29, 26) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(29, 26)) | 36 |
| 37-38 | Di chuyển hướng 2 (`2`) | (29, 26) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 35 |
| 39-40 | Di chuyển hướng 2 (`2`) | (30, 26) | (31, 26) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(31, 26)) | 34 |
| 41-42 | Di chuyển hướng 4 (`4`) | (31, 26) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 33 |
| 43 | Di chuyển hướng 4 (`4`) | (31, 27) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 31 |
| 44-45 | Di chuyển hướng 4 (`4`) | (30, 28) | (30, 29) | Dự kiến đến điểm hẹn tọa độ (30, 29) | 30 |
| 46-47 | Di chuyển hướng 5 (`5`) | (30, 29) | (29, 29) | Dự kiến đến điểm hẹn tọa độ (29, 29) | 29 |
| 48-49 | Di chuyển hướng 4 (`4`) | (29, 29) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 28 |
| 50 | Di chuyển hướng 5 (`5`) | (28, 30) | (27, 30) | Dự kiến đến điểm hẹn tọa độ (27, 30) | 26 |
| 51-52 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 25 |
| 53 | Di chuyển hướng 4 (`4`) | (26, 30) | (26, 31) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(26, 31)) | 23 |
| 54-55 | Di chuyển hướng 5 (`5`) | (26, 31) | (25, 31) | Dự kiến đến điểm hẹn tọa độ (25, 31) | 22 |
| 56-58 | Di chuyển hướng 5 (`5`) | (25, 31) | (24, 31) | Dự kiến đến điểm hẹn tọa độ (24, 31) | 20 |
| 59-60 | Di chuyển hướng 5 (`5`) | (24, 31) | (23, 31) | Dự kiến đến điểm hẹn tọa độ (23, 31) | 19 |
| 61 | Di chuyển hướng 5 (`5`) | (23, 31) | (22, 31) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(22, 31)) | 17 |
| 62-63 | Di chuyển hướng 0 (`0`) | (22, 31) | (21, 30) | Dự kiến đến điểm hẹn tọa độ (21, 30) | 16 |
| 64-65 | Di chuyển hướng 1 (`1`) | (21, 30) | (22, 29) | Dự kiến đến điểm hẹn tọa độ (22, 29) | 15 |
| 66-67 | Di chuyển hướng 0 (`0`) | (22, 29) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 14 |
| 68-69 | Di chuyển hướng 1 (`1`) | (21, 28) | (22, 27) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(22, 27)) | 13 |
| 70-71 | Di chuyển hướng 0 (`0`) | (22, 27) | (21, 26) | Dự kiến đến điểm hẹn tọa độ (21, 26) | 12 |
| 72-73 | Di chuyển hướng 0 (`0`) | (21, 26) | (21, 25) | Dự kiến đến điểm hẹn tọa độ (21, 25) | 11 |
| 74-75 | Di chuyển hướng 0 (`0`) | (21, 25) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 10 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (17, 9) (ô=305)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(27, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(27, 2)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 0, 0, 0, 0, 1, 0, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 74 |
| 3 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 74 |
| 4-5 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 74 |
| 6-7 | Di chuyển hướng 2 (`2`) | (20, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 74 |
| 8-9 | Di chuyển hướng 2 (`2`) | (21, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 74 |
| 10-11 | Di chuyển hướng 2 (`2`) | (22, 9) | (23, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(23, 9)) | 74 |
| 12-13 | Di chuyển hướng 2 (`2`) | (23, 9) | (24, 9) | Dự kiến đến điểm hẹn tọa độ (24, 9) | 74 |
| 14 | Di chuyển hướng 2 (`2`) | (24, 9) | (25, 9) | Dự kiến đến điểm hẹn tọa độ (25, 9) | 74 |
| 15-16 | Di chuyển hướng 2 (`2`) | (25, 9) | (26, 9) | Dự kiến đến điểm hẹn tọa độ (26, 9) | 74 |
| 17-18 | Di chuyển hướng 1 (`1`) | (26, 9) | (26, 8) | Dự kiến đến điểm hẹn tọa độ (26, 8) | 74 |
| 19 | Di chuyển hướng 2 (`2`) | (26, 8) | (27, 8) | Dự kiến đến điểm hẹn tọa độ (27, 8) | 74 |
| 20 | Di chuyển hướng 2 (`2`) | (27, 8) | (28, 8) | Dự kiến đến điểm hẹn tọa độ (28, 8) | 74 |
| 21-22 | Di chuyển hướng 2 (`2`) | (28, 8) | (29, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(29, 8)) | 74 |
| 23-24 | Di chuyển hướng 0 (`0`) | (29, 8) | (29, 7) | Dự kiến đến điểm hẹn tọa độ (29, 7) | 74 |
| 25-26 | Di chuyển hướng 0 (`0`) | (29, 7) | (28, 6) | Dự kiến đến điểm hẹn tọa độ (28, 6) | 74 |
| 27-29 | Di chuyển hướng 0 (`0`) | (28, 6) | (28, 5) | Dự kiến đến điểm hẹn tọa độ (28, 5) | 74 |
| 30-31 | Di chuyển hướng 0 (`0`) | (28, 5) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 74 |
| 32-33 | Di chuyển hướng 1 (`1`) | (27, 4) | (28, 3) | Dự kiến đến điểm hẹn tọa độ (28, 3) | 74 |
| 34 | Di chuyển hướng 0 (`0`) | (28, 3) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 74 |
| 35-75 | Chờ 41 bước (`-41`) | (27, 2) | (27, 2) | Dự kiến đứng yên tại (27, 2); hướng tới tọa độ (27, 2) | 74 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (6, 29) (ô=934)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 26)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 26)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 3, 3, 4, -39]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 29) | (5, 28) | Dự kiến đến điểm hẹn tọa độ (5, 28) | 74 |
| 2-3 | Di chuyển hướng 0 (`0`) | (5, 28) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 74 |
| 4-5 | Di chuyển hướng 0 (`0`) | (5, 27) | (4, 26) | Dự kiến đến điểm hẹn tọa độ (4, 26) | 74 |
| 6-7 | Di chuyển hướng 0 (`0`) | (4, 26) | (4, 25) | Dự kiến đến điểm hẹn tọa độ (4, 25) | 74 |
| 8 | Di chuyển hướng 1 (`1`) | (4, 25) | (4, 24) | Dự kiến đến điểm hẹn tọa độ (4, 24) | 74 |
| 9-10 | Di chuyển hướng 1 (`1`) | (4, 24) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 74 |
| 11 | Di chuyển hướng 1 (`1`) | (5, 23) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 74 |
| 12-13 | Di chuyển hướng 1 (`1`) | (5, 22) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 74 |
| 14-15 | Di chuyển hướng 1 (`1`) | (6, 21) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 74 |
| 16-17 | Di chuyển hướng 1 (`1`) | (6, 20) | (7, 19) | Dự kiến đến điểm hẹn tọa độ (7, 19) | 74 |
| 18-20 | Di chuyển hướng 1 (`1`) | (7, 19) | (7, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(7, 18)) | 74 |
| 21-22 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đến điểm hẹn tọa độ (7, 19) | 74 |
| 23-25 | Di chuyển hướng 4 (`4`) | (7, 19) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 74 |
| 26-27 | Di chuyển hướng 4 (`4`) | (6, 20) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 74 |
| 28-29 | Di chuyển hướng 4 (`4`) | (6, 21) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 74 |
| 30-31 | Di chuyển hướng 4 (`4`) | (5, 22) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 74 |
| 32 | Di chuyển hướng 3 (`3`) | (5, 23) | (5, 24) | Dự kiến đến điểm hẹn tọa độ (5, 24) | 74 |
| 33-34 | Di chuyển hướng 3 (`3`) | (5, 24) | (6, 25) | Dự kiến đến điểm hẹn tọa độ (6, 25) | 74 |
| 35-36 | Di chuyển hướng 4 (`4`) | (6, 25) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 74 |
| 37-75 | Chờ 39 bước (`-39`) | (5, 26) | (5, 26) | Dự kiến đứng yên tại (5, 26); hướng tới tọa độ (5, 26) | 74 |

