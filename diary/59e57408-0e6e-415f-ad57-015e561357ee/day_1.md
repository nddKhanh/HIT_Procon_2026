# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 102
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 21 | #3 | #4 | (20, 11) | 0 | 64 |
| 24 | #3 | #4 | (19, 11) | 63 | 64 |
| 26 | #3 | #4 | (18, 11) | 63 | 64 |
| 28 | #3 | #4 | (17, 10) | 63 | 64 |
| 30 | #3 | #4 | (17, 9) | 63 | 64 |
| 33 | #3 | #4 | (15, 8) | 61 | 64 |
| 41 | #0 | #4 | (13, 12) | 5 | 64 |
| 92 | #1 | #4 | (13, 12) | 2 | 64 |
| 95 | #3 | #4 | (13, 12) | 24 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (4, 3) (ô=100)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 9)
- Mảng hành động đã gửi server: `[2, 3, 2, 3, 3, 3, 3, 3, 3, 2, 3, 2, 3, 2, -16, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 0, 5, 3, 3, 3, 3, 3, 3, 3, 4, 4, 2, 2, 1, 2, 2, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 24 |
| 3-4 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 23 |
| 5 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 21 |
| 6-7 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 20 |
| 8-9 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 19 |
| 10 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 17 |
| 11-12 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 16 |
| 13-14 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 15 |
| 15-16 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 14 |
| 17 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 12 |
| 18 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 10 |
| 19-20 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 9 |
| 21 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 7 |
| 22-24 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 5 |
| 25-40 | Chờ 16 bước (`-16`) | (13, 12) | (13, 12) | Dự kiến đứng yên tại (13, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 64 |
| 41-42 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 63 |
| 43-44 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 62 |
| 45-46 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 61 |
| 47-49 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 59 |
| 50 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 57 |
| 51-52 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 56 |
| 53-54 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 55 |
| 55-56 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 54 |
| 57-58 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 3)) | 53 |
| 59-60 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 52 |
| 61-62 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 51 |
| 63-64 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 50 |
| 65-66 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 49 |
| 67 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 47 |
| 68-69 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 46 |
| 70-71 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 2)) | 45 |
| 72-73 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 44 |
| 74-76 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 42 |
| 77-78 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 41 |
| 79-80 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 40 |
| 81-83 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 38 |
| 84-85 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 37 |
| 86-87 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 36 |
| 88-89 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 35 |
| 90 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(6, 11)) | 33 |
| 91-92 | Di chuyển hướng 2 (`2`) | (6, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 32 |
| 93-94 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 31 |
| 95-96 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 30 |
| 97 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 28 |
| 98 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 26 |
| 99 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 24 |
| 100-101 | Di chuyển hướng 1 (`1`) | (11, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 23 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (13, 9) (ô=301)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(13, 12))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(13, 12))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 4, 4, 3, 4, 4, 4, 3, 4, 0, 5, 5, 0, 5, 5, 0, 5, 5, 4, 4, 5, 5, 0, 0, 0, 5, 4, 4, 4, 4, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (13, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 59 |
| 3-4 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 58 |
| 5-6 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 57 |
| 7-8 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 56 |
| 9 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 54 |
| 10-11 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 53 |
| 12-13 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 52 |
| 14-15 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 51 |
| 16-17 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 50 |
| 18-19 | Di chuyển hướng 1 (`1`) | (21, 7) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 49 |
| 20-21 | Di chuyển hướng 1 (`1`) | (21, 6) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 48 |
| 22-23 | Di chuyển hướng 2 (`2`) | (22, 5) | (23, 5) | Dự kiến đến điểm hẹn tọa độ (23, 5) | 47 |
| 24 | Di chuyển hướng 2 (`2`) | (23, 5) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 45 |
| 25-26 | Di chuyển hướng 2 (`2`) | (24, 5) | (25, 5) | Dự kiến đến điểm hẹn tọa độ (25, 5) | 44 |
| 27-28 | Di chuyển hướng 2 (`2`) | (25, 5) | (26, 5) | Dự kiến đến điểm hẹn tọa độ (26, 5) | 43 |
| 29-30 | Di chuyển hướng 2 (`2`) | (26, 5) | (27, 5) | Dự kiến đến điểm hẹn tọa độ (27, 5) | 42 |
| 31-32 | Di chuyển hướng 1 (`1`) | (27, 5) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 41 |
| 33-34 | Di chuyển hướng 2 (`2`) | (27, 4) | (28, 4) | Dự kiến đến điểm hẹn tọa độ (28, 4) | 40 |
| 35-36 | Di chuyển hướng 2 (`2`) | (28, 4) | (29, 4) | Dự kiến đến điểm hẹn tọa độ (29, 4) | 39 |
| 37-38 | Di chuyển hướng 2 (`2`) | (29, 4) | (30, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(30, 4)) | 38 |
| 39-40 | Di chuyển hướng 4 (`4`) | (30, 4) | (30, 5) | Dự kiến đến điểm hẹn tọa độ (30, 5) | 37 |
| 41-42 | Di chuyển hướng 4 (`4`) | (30, 5) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 36 |
| 43-44 | Di chuyển hướng 3 (`3`) | (29, 6) | (30, 7) | Dự kiến đến điểm hẹn tọa độ (30, 7) | 35 |
| 45 | Di chuyển hướng 4 (`4`) | (30, 7) | (29, 8) | Dự kiến đến điểm hẹn tọa độ (29, 8) | 33 |
| 46-47 | Di chuyển hướng 4 (`4`) | (29, 8) | (29, 9) | Dự kiến đến điểm hẹn tọa độ (29, 9) | 32 |
| 48-49 | Di chuyển hướng 4 (`4`) | (29, 9) | (28, 10) | Dự kiến đến điểm hẹn tọa độ (28, 10) | 31 |
| 50 | Di chuyển hướng 3 (`3`) | (28, 10) | (29, 11) | Dự kiến đến điểm hẹn tọa độ (29, 11) | 29 |
| 51-52 | Di chuyển hướng 4 (`4`) | (29, 11) | (28, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(28, 12)) | 28 |
| 53-54 | Di chuyển hướng 0 (`0`) | (28, 12) | (28, 11) | Dự kiến đến điểm hẹn tọa độ (28, 11) | 27 |
| 55-56 | Di chuyển hướng 5 (`5`) | (28, 11) | (27, 11) | Dự kiến đến điểm hẹn tọa độ (27, 11) | 26 |
| 57-58 | Di chuyển hướng 5 (`5`) | (27, 11) | (26, 11) | Dự kiến đến điểm hẹn tọa độ (26, 11) | 25 |
| 59 | Di chuyển hướng 0 (`0`) | (26, 11) | (25, 10) | Dự kiến đến điểm hẹn tọa độ (25, 10) | 23 |
| 60-61 | Di chuyển hướng 5 (`5`) | (25, 10) | (24, 10) | Dự kiến đến điểm hẹn tọa độ (24, 10) | 22 |
| 62-63 | Di chuyển hướng 5 (`5`) | (24, 10) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 21 |
| 64-65 | Di chuyển hướng 0 (`0`) | (23, 10) | (23, 9) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(23, 9)) | 20 |
| 66-67 | Di chuyển hướng 5 (`5`) | (23, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 19 |
| 68 | Di chuyển hướng 5 (`5`) | (22, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 17 |
| 69 | Di chuyển hướng 4 (`4`) | (21, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 15 |
| 70-71 | Di chuyển hướng 4 (`4`) | (20, 10) | (20, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 14 |
| 72-73 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 13 |
| 74-75 | Di chuyển hướng 5 (`5`) | (19, 11) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 12 |
| 76-77 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 11 |
| 78-79 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 10 |
| 80-81 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 9 |
| 82 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 7 |
| 83-84 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 6 |
| 85-87 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 4 |
| 88-89 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 3 |
| 90-91 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 64 |
| 92-101 | Chờ 10 bước (`-10`) | (13, 12) | (13, 12) | Dự kiến đứng yên tại (13, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 64 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 9) (ô=295)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=1, tọa độ=(27, 21))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=1, tọa độ=(27, 21))
- Mảng hành động đã gửi server: `[4, 4, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 3, 2, 3, 3, 3, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, -26]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 50 |
| 2 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(6, 11)) | 48 |
| 3-4 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 47 |
| 5 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 45 |
| 6-7 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 44 |
| 8-9 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 43 |
| 10-11 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 42 |
| 12-14 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 40 |
| 15-16 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 39 |
| 17 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 37 |
| 18-19 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 36 |
| 20-21 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 35 |
| 22-23 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 34 |
| 24-26 | Di chuyển hướng 3 (`3`) | (12, 20) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 32 |
| 27-28 | Di chuyển hướng 3 (`3`) | (13, 21) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 31 |
| 29-30 | Di chuyển hướng 3 (`3`) | (13, 22) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 30 |
| 31-32 | Di chuyển hướng 3 (`3`) | (14, 23) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 29 |
| 33-34 | Di chuyển hướng 3 (`3`) | (14, 24) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 28 |
| 35-36 | Di chuyển hướng 3 (`3`) | (15, 25) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 27 |
| 37 | Di chuyển hướng 3 (`3`) | (15, 26) | (16, 27) | Dự kiến đến điểm hẹn tọa độ (16, 27) | 25 |
| 38 | Di chuyển hướng 2 (`2`) | (16, 27) | (17, 27) | Dự kiến đến điểm hẹn tọa độ (17, 27) | 23 |
| 39-40 | Di chuyển hướng 2 (`2`) | (17, 27) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 22 |
| 41-42 | Di chuyển hướng 2 (`2`) | (18, 27) | (19, 27) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 27)) | 21 |
| 43-44 | Di chuyển hướng 2 (`2`) | (19, 27) | (20, 27) | Dự kiến đến điểm hẹn tọa độ (20, 27) | 20 |
| 45-47 | Di chuyển hướng 3 (`3`) | (20, 27) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 18 |
| 48-49 | Di chuyển hướng 2 (`2`) | (20, 28) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 17 |
| 50-51 | Di chuyển hướng 3 (`3`) | (21, 28) | (22, 29) | Dự kiến đến điểm hẹn tọa độ (22, 29) | 16 |
| 52 | Di chuyển hướng 3 (`3`) | (22, 29) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 14 |
| 53-54 | Di chuyển hướng 3 (`3`) | (22, 30) | (23, 31) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 31)) | 13 |
| 55-56 | Di chuyển hướng 0 (`0`) | (23, 31) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 12 |
| 57-58 | Di chuyển hướng 1 (`1`) | (22, 30) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 11 |
| 59-60 | Di chuyển hướng 1 (`1`) | (23, 29) | (23, 28) | Dự kiến đến điểm hẹn tọa độ (23, 28) | 10 |
| 61-63 | Di chuyển hướng 1 (`1`) | (23, 28) | (24, 27) | Dự kiến đến điểm hẹn tọa độ (24, 27) | 8 |
| 64-65 | Di chuyển hướng 1 (`1`) | (24, 27) | (24, 26) | Dự kiến đến điểm hẹn tọa độ (24, 26) | 7 |
| 66-67 | Di chuyển hướng 1 (`1`) | (24, 26) | (25, 25) | Dự kiến đến điểm hẹn tọa độ (25, 25) | 6 |
| 68-69 | Di chuyển hướng 1 (`1`) | (25, 25) | (25, 24) | Dự kiến đến điểm hẹn tọa độ (25, 24) | 5 |
| 70-71 | Di chuyển hướng 1 (`1`) | (25, 24) | (26, 23) | Dự kiến đến điểm hẹn tọa độ (26, 23) | 4 |
| 72-73 | Di chuyển hướng 1 (`1`) | (26, 23) | (26, 22) | Dự kiến đến điểm hẹn tọa độ (26, 22) | 3 |
| 74-75 | Di chuyển hướng 1 (`1`) | (26, 22) | (27, 21) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(27, 21)) | 2 |
| 76-101 | Chờ 26 bước (`-26`) | (27, 21) | (27, 21) | Dự kiến đứng yên tại (27, 21); mục tiêu Spot #11 (thương hiệu=1, tọa độ=(27, 21)) | 2 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (19, 2) (ô=83)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(13, 12))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(13, 12))
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 3, 3, 3, 2, 5, 5, 4, 4, -1, 5, 5, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 0, 5, 3, 3, 3, 3, 3, 3, 3, 4, 4, 3, 2, 2, 2, 2, 2, 2, 2, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (19, 2) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 16 |
| 2-4 | Di chuyển hướng 3 (`3`) | (20, 3) | (20, 4) | Dự kiến đến điểm hẹn tọa độ (20, 4) | 14 |
| 5 | Di chuyển hướng 4 (`4`) | (20, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 12 |
| 6-7 | Di chuyển hướng 3 (`3`) | (20, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 11 |
| 8-9 | Di chuyển hướng 3 (`3`) | (20, 6) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 10 |
| 10-11 | Di chuyển hướng 3 (`3`) | (21, 7) | (21, 8) | Dự kiến đến điểm hẹn tọa độ (21, 8) | 9 |
| 12-13 | Di chuyển hướng 3 (`3`) | (21, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 8 |
| 14 | Di chuyển hướng 2 (`2`) | (22, 9) | (23, 9) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(23, 9)) | 6 |
| 15-16 | Di chuyển hướng 5 (`5`) | (23, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 5 |
| 17 | Di chuyển hướng 5 (`5`) | (22, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 3 |
| 18 | Di chuyển hướng 4 (`4`) | (21, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 1 |
| 19-20 | Di chuyển hướng 4 (`4`) | (20, 10) | (20, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 64 |
| 21 | Chờ 1 bước (`-1`) | (20, 11) | (20, 11) | Dự kiến đứng yên tại (20, 11); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 64 |
| 22-23 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 64 |
| 24-25 | Di chuyển hướng 5 (`5`) | (19, 11) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 64 |
| 26-27 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 64 |
| 28-29 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 64 |
| 30-31 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 63 |
| 32 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 64 |
| 33-34 | Di chuyển hướng 0 (`0`) | (15, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 63 |
| 35-36 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 62 |
| 37 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 60 |
| 38-39 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 59 |
| 40-41 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 58 |
| 42-43 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 57 |
| 44-45 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 56 |
| 46-47 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 3)) | 55 |
| 48-49 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 54 |
| 50-51 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 53 |
| 52-53 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 52 |
| 54-55 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 51 |
| 56 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 49 |
| 57-58 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 48 |
| 59-60 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 2)) | 47 |
| 61-62 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 46 |
| 63-65 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 44 |
| 66-67 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 43 |
| 68-69 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 42 |
| 70-72 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 40 |
| 73-74 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 39 |
| 75-76 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 38 |
| 77-78 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 37 |
| 79 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(6, 11)) | 35 |
| 80-81 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 34 |
| 82 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 32 |
| 83-84 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 31 |
| 85-86 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 30 |
| 87 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 28 |
| 88-89 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 27 |
| 90-91 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 26 |
| 92-94 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 64 |
| 95-101 | Chờ 7 bước (`-7`) | (13, 12) | (13, 12) | Dự kiến đứng yên tại (13, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 64 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (13, 11) (ô=365)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(13, 12))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(13, 12))
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 2, 3, 3, 3, 2, 2, 5, 5, 0, 0, 0, 5, 4, 4, 4, 4, -61]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 64 |
| 4-5 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 64 |
| 6-7 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 64 |
| 8-9 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 64 |
| 10-11 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 64 |
| 12 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 64 |
| 13-14 | Di chuyển hướng 3 (`3`) | (17, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 64 |
| 15-16 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 64 |
| 17-18 | Di chuyển hướng 2 (`2`) | (18, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 64 |
| 19-20 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 64 |
| 21-22 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 64 |
| 23-24 | Di chuyển hướng 5 (`5`) | (19, 11) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 64 |
| 25-26 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 64 |
| 27-28 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 64 |
| 29-30 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 64 |
| 31 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 64 |
| 32-33 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 64 |
| 34-36 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 64 |
| 37-38 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 64 |
| 39-40 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 64 |
| 41-101 | Chờ 61 bước (`-61`) | (13, 12) | (13, 12) | Dự kiến đứng yên tại (13, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 64 |

