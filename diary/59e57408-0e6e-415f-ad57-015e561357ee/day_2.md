# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 141
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 9 | #0 | #4 | (15, 8) | 17 | 64 |
| 12 | #0 | #4 | (17, 9) | 61 | 64 |
| 24 | #0 | #4 | (21, 10) | 52 | 64 |
| 56 | #0 | #4 | (30, 6) | 42 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 9) (ô=300)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(3, 2))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(3, 2))
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 5, 4, 5, 4, -1, 3, 3, 2, 2, 2, 1, 2, 2, 2, 2, 0, 1, 1, 1, 1, 1, 0, 1, 5, 5, 5, 0, 5, 0, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 5, 4, 4, 4, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 0, 5, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 22 |
| 2 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 20 |
| 3-5 | Di chuyển hướng 2 (`2`) | (13, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 18 |
| 6-7 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 17 |
| 8-9 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 63 |
| 10 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 61 |
| 11-12 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 63 |
| 13 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 61 |
| 14-15 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 60 |
| 16-17 | Di chuyển hướng 2 (`2`) | (20, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 59 |
| 18 | Di chuyển hướng 2 (`2`) | (21, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 57 |
| 19 | Di chuyển hướng 2 (`2`) | (22, 9) | (23, 9) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(23, 9)) | 55 |
| 20-21 | Di chuyển hướng 5 (`5`) | (23, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 54 |
| 22 | Di chuyển hướng 4 (`4`) | (22, 9) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 52 |
| 23-24 | Di chuyển hướng 5 (`5`) | (21, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 63 |
| 25-26 | Di chuyển hướng 4 (`4`) | (20, 10) | (20, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 62 |
| 27 | Chờ 1 bước (`-1`) | (20, 11) | (20, 11) | Dự kiến đứng yên tại (20, 11); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 62 |
| 28-29 | Di chuyển hướng 3 (`3`) | (20, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 61 |
| 30-31 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 60 |
| 32 | Di chuyển hướng 2 (`2`) | (21, 13) | (22, 13) | Dự kiến đến điểm hẹn tọa độ (22, 13) | 58 |
| 33-34 | Di chuyển hướng 2 (`2`) | (22, 13) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 57 |
| 35-36 | Di chuyển hướng 2 (`2`) | (23, 13) | (24, 13) | Dự kiến đến điểm hẹn tọa độ (24, 13) | 56 |
| 37 | Di chuyển hướng 1 (`1`) | (24, 13) | (24, 12) | Dự kiến đến điểm hẹn tọa độ (24, 12) | 54 |
| 38-39 | Di chuyển hướng 2 (`2`) | (24, 12) | (25, 12) | Dự kiến đến điểm hẹn tọa độ (25, 12) | 53 |
| 40-41 | Di chuyển hướng 2 (`2`) | (25, 12) | (26, 12) | Dự kiến đến điểm hẹn tọa độ (26, 12) | 52 |
| 42-43 | Di chuyển hướng 2 (`2`) | (26, 12) | (27, 12) | Dự kiến đến điểm hẹn tọa độ (27, 12) | 51 |
| 44-45 | Di chuyển hướng 2 (`2`) | (27, 12) | (28, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(28, 12)) | 50 |
| 46-47 | Di chuyển hướng 0 (`0`) | (28, 12) | (28, 11) | Dự kiến đến điểm hẹn tọa độ (28, 11) | 49 |
| 48-49 | Di chuyển hướng 1 (`1`) | (28, 11) | (28, 10) | Dự kiến đến điểm hẹn tọa độ (28, 10) | 48 |
| 50 | Di chuyển hướng 1 (`1`) | (28, 10) | (29, 9) | Dự kiến đến điểm hẹn tọa độ (29, 9) | 46 |
| 51-52 | Di chuyển hướng 1 (`1`) | (29, 9) | (29, 8) | Dự kiến đến điểm hẹn tọa độ (29, 8) | 45 |
| 53-54 | Di chuyển hướng 1 (`1`) | (29, 8) | (30, 7) | Dự kiến đến điểm hẹn tọa độ (30, 7) | 44 |
| 55 | Di chuyển hướng 1 (`1`) | (30, 7) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 64 |
| 56-57 | Di chuyển hướng 0 (`0`) | (30, 6) | (30, 5) | Dự kiến đến điểm hẹn tọa độ (30, 5) | 63 |
| 58-59 | Di chuyển hướng 1 (`1`) | (30, 5) | (30, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(30, 4)) | 62 |
| 60-61 | Di chuyển hướng 5 (`5`) | (30, 4) | (29, 4) | Dự kiến đến điểm hẹn tọa độ (29, 4) | 61 |
| 62-63 | Di chuyển hướng 5 (`5`) | (29, 4) | (28, 4) | Dự kiến đến điểm hẹn tọa độ (28, 4) | 60 |
| 64-65 | Di chuyển hướng 5 (`5`) | (28, 4) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 59 |
| 66-67 | Di chuyển hướng 0 (`0`) | (27, 4) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 58 |
| 68 | Di chuyển hướng 5 (`5`) | (27, 3) | (26, 3) | Dự kiến đến điểm hẹn tọa độ (26, 3) | 56 |
| 69 | Di chuyển hướng 0 (`0`) | (26, 3) | (25, 2) | Dự kiến đến điểm hẹn tọa độ (25, 2) | 54 |
| 70 | Di chuyển hướng 5 (`5`) | (25, 2) | (24, 2) | Dự kiến đến điểm hẹn tọa độ (24, 2) | 52 |
| 71 | Di chuyển hướng 5 (`5`) | (24, 2) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 50 |
| 72-73 | Di chuyển hướng 5 (`5`) | (23, 2) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 49 |
| 74-75 | Di chuyển hướng 5 (`5`) | (22, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 48 |
| 76-78 | Di chuyển hướng 5 (`5`) | (21, 2) | (20, 2) | Dự kiến đến điểm hẹn tọa độ (20, 2) | 46 |
| 79-81 | Di chuyển hướng 5 (`5`) | (20, 2) | (19, 2) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(19, 2)) | 44 |
| 82-83 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 43 |
| 84-85 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 42 |
| 86-87 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 41 |
| 88 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 39 |
| 89 | Di chuyển hướng 4 (`4`) | (17, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 37 |
| 90-91 | Di chuyển hướng 4 (`4`) | (17, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 36 |
| 92 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 34 |
| 93-94 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 33 |
| 95-97 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 31 |
| 98-99 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 30 |
| 100-101 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 29 |
| 102-103 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 28 |
| 104-105 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 27 |
| 106-107 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 26 |
| 108-110 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 24 |
| 111 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 22 |
| 112-113 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 21 |
| 114-115 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 20 |
| 116-117 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 19 |
| 118-119 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 3)) | 18 |
| 120-121 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 17 |
| 122-123 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 16 |
| 124-125 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 15 |
| 126-127 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 14 |
| 128 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 12 |
| 129-130 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 11 |
| 131-132 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 2)) | 10 |
| 133-140 | Chờ 8 bước (`-8`) | (3, 2) | (3, 2) | Dự kiến đứng yên tại (3, 2); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 2)) | 10 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (13, 12) (ô=397)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(28, 12))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(28, 12))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 0, 1, 1, 2, 1, 1, 1, 0, 1, 1, 3, 3, 2, 2, 2, 3, 3, 3, 2, 1, 1, 1, 1, 1, 1, 4, 4, 3, 3, 3, 3, 3, 4, 4, 3, 3, 2, 2, 2, 1, 2, 2, 2, 2, -48]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 63 |
| 2-4 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 61 |
| 5-6 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 60 |
| 7-8 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 59 |
| 9 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 57 |
| 10-11 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 56 |
| 12-13 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 55 |
| 14 | Di chuyển hướng 0 (`0`) | (6, 12) | (6, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(6, 11)) | 53 |
| 15-16 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 52 |
| 17 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 50 |
| 18-19 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 49 |
| 20-21 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 48 |
| 22-23 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 47 |
| 24-25 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 46 |
| 26-27 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 45 |
| 28-30 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 43 |
| 31-32 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 3)) | 42 |
| 33-34 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 41 |
| 35-36 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 40 |
| 37-38 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 39 |
| 39-40 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 38 |
| 41-42 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 37 |
| 43-44 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 36 |
| 45 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 34 |
| 46-47 | Di chuyển hướng 3 (`3`) | (15, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 33 |
| 48-49 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 32 |
| 50 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 30 |
| 51-52 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 29 |
| 53 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 27 |
| 54 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 25 |
| 55-56 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 24 |
| 57-58 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(19, 2)) | 23 |
| 59-60 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 22 |
| 61-62 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 21 |
| 63-64 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 20 |
| 65 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 18 |
| 66-67 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 17 |
| 68-69 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 16 |
| 70-71 | Di chuyển hướng 3 (`3`) | (20, 8) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 15 |
| 72 | Di chuyển hướng 4 (`4`) | (21, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 13 |
| 73-74 | Di chuyển hướng 4 (`4`) | (20, 10) | (20, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 12 |
| 75-76 | Di chuyển hướng 3 (`3`) | (20, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 11 |
| 77-78 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 10 |
| 79 | Di chuyển hướng 2 (`2`) | (21, 13) | (22, 13) | Dự kiến đến điểm hẹn tọa độ (22, 13) | 8 |
| 80-81 | Di chuyển hướng 2 (`2`) | (22, 13) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 7 |
| 82-83 | Di chuyển hướng 2 (`2`) | (23, 13) | (24, 13) | Dự kiến đến điểm hẹn tọa độ (24, 13) | 6 |
| 84 | Di chuyển hướng 1 (`1`) | (24, 13) | (24, 12) | Dự kiến đến điểm hẹn tọa độ (24, 12) | 4 |
| 85-86 | Di chuyển hướng 2 (`2`) | (24, 12) | (25, 12) | Dự kiến đến điểm hẹn tọa độ (25, 12) | 3 |
| 87-88 | Di chuyển hướng 2 (`2`) | (25, 12) | (26, 12) | Dự kiến đến điểm hẹn tọa độ (26, 12) | 2 |
| 89-90 | Di chuyển hướng 2 (`2`) | (26, 12) | (27, 12) | Dự kiến đến điểm hẹn tọa độ (27, 12) | 1 |
| 91-92 | Di chuyển hướng 2 (`2`) | (27, 12) | (28, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(28, 12)) | 0 |
| 93-140 | Chờ 48 bước (`-48`) | (28, 12) | (28, 12) | Dự kiến đứng yên tại (28, 12); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(28, 12)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (27, 21) (ô=699)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=1, tọa độ=(27, 21))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=1, tọa độ=(27, 21))
- Mảng hành động đã gửi server: `[-141]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-140 | Chờ 141 bước (`-141`) | (27, 21) | (27, 21) | Dự kiến đứng yên tại (27, 21); mục tiêu Spot #11 (thương hiệu=1, tọa độ=(27, 21)) | 2 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (13, 12) (ô=397)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=1, tọa độ=(27, 21))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=1, tọa độ=(27, 21))
- Mảng hành động đã gửi server: `[4, 4, 5, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 3, 3, 3, 3, 2, 2, 2, 0, 0, 0, 5, 5, 0, 1, 1, 2, 1, 1, 1, 1, 2, 2, 2, 2, -63]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 63 |
| 2-3 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 62 |
| 4-5 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 61 |
| 6-7 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 60 |
| 8-9 | Di chuyển hướng 4 (`4`) | (11, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 59 |
| 10 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 57 |
| 11-12 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 56 |
| 13-14 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 55 |
| 15-16 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 54 |
| 17-19 | Di chuyển hướng 3 (`3`) | (12, 20) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 52 |
| 20-21 | Di chuyển hướng 3 (`3`) | (13, 21) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 51 |
| 22-23 | Di chuyển hướng 3 (`3`) | (13, 22) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 50 |
| 24-25 | Di chuyển hướng 3 (`3`) | (14, 23) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 49 |
| 26-27 | Di chuyển hướng 3 (`3`) | (14, 24) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 48 |
| 28-29 | Di chuyển hướng 3 (`3`) | (15, 25) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 47 |
| 30 | Di chuyển hướng 3 (`3`) | (15, 26) | (16, 27) | Dự kiến đến điểm hẹn tọa độ (16, 27) | 45 |
| 31 | Di chuyển hướng 2 (`2`) | (16, 27) | (17, 27) | Dự kiến đến điểm hẹn tọa độ (17, 27) | 43 |
| 32-33 | Di chuyển hướng 2 (`2`) | (17, 27) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 42 |
| 34-35 | Di chuyển hướng 3 (`3`) | (18, 27) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 41 |
| 36 | Di chuyển hướng 3 (`3`) | (18, 28) | (19, 29) | Dự kiến đến điểm hẹn tọa độ (19, 29) | 39 |
| 37-38 | Di chuyển hướng 3 (`3`) | (19, 29) | (19, 30) | Dự kiến đến điểm hẹn tọa độ (19, 30) | 38 |
| 39 | Di chuyển hướng 3 (`3`) | (19, 30) | (20, 31) | Dự kiến đến điểm hẹn tọa độ (20, 31) | 36 |
| 40-41 | Di chuyển hướng 2 (`2`) | (20, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 35 |
| 42-43 | Di chuyển hướng 2 (`2`) | (21, 31) | (22, 31) | Dự kiến đến điểm hẹn tọa độ (22, 31) | 34 |
| 44 | Di chuyển hướng 2 (`2`) | (22, 31) | (23, 31) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 31)) | 32 |
| 45-46 | Di chuyển hướng 0 (`0`) | (23, 31) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 31 |
| 47-48 | Di chuyển hướng 0 (`0`) | (22, 30) | (22, 29) | Dự kiến đến điểm hẹn tọa độ (22, 29) | 30 |
| 49 | Di chuyển hướng 0 (`0`) | (22, 29) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 28 |
| 50-51 | Di chuyển hướng 5 (`5`) | (21, 28) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 27 |
| 52-53 | Di chuyển hướng 5 (`5`) | (20, 28) | (19, 28) | Dự kiến đến điểm hẹn tọa độ (19, 28) | 26 |
| 54-56 | Di chuyển hướng 0 (`0`) | (19, 28) | (19, 27) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 27)) | 24 |
| 57-58 | Di chuyển hướng 1 (`1`) | (19, 27) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 23 |
| 59-60 | Di chuyển hướng 1 (`1`) | (19, 26) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 22 |
| 61-62 | Di chuyển hướng 2 (`2`) | (20, 25) | (21, 25) | Dự kiến đến điểm hẹn tọa độ (21, 25) | 21 |
| 63-64 | Di chuyển hướng 1 (`1`) | (21, 25) | (21, 24) | Dự kiến đến điểm hẹn tọa độ (21, 24) | 20 |
| 65 | Di chuyển hướng 1 (`1`) | (21, 24) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 18 |
| 66-67 | Di chuyển hướng 1 (`1`) | (22, 23) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 17 |
| 68-69 | Di chuyển hướng 1 (`1`) | (22, 22) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 16 |
| 70-71 | Di chuyển hướng 2 (`2`) | (23, 21) | (24, 21) | Dự kiến đến điểm hẹn tọa độ (24, 21) | 15 |
| 72-73 | Di chuyển hướng 2 (`2`) | (24, 21) | (25, 21) | Dự kiến đến điểm hẹn tọa độ (25, 21) | 14 |
| 74-75 | Di chuyển hướng 2 (`2`) | (25, 21) | (26, 21) | Dự kiến đến điểm hẹn tọa độ (26, 21) | 13 |
| 76-77 | Di chuyển hướng 2 (`2`) | (26, 21) | (27, 21) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(27, 21)) | 12 |
| 78-140 | Chờ 63 bước (`-63`) | (27, 21) | (27, 21) | Dự kiến đứng yên tại (27, 21); mục tiêu Spot #11 (thương hiệu=1, tọa độ=(27, 21)) | 12 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (13, 12) (ô=397)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(30, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(30, 6)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 2, 3, 3, 3, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, -97]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 64 |
| 2-3 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 64 |
| 4-5 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 64 |
| 6-8 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 64 |
| 9-10 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 64 |
| 11 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 64 |
| 12-13 | Di chuyển hướng 3 (`3`) | (17, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 64 |
| 14-15 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 64 |
| 16-17 | Di chuyển hướng 2 (`2`) | (18, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 64 |
| 18-19 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 64 |
| 20-21 | Di chuyển hướng 1 (`1`) | (20, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 64 |
| 22-23 | Di chuyển hướng 2 (`2`) | (20, 10) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 64 |
| 24-25 | Di chuyển hướng 2 (`2`) | (21, 10) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 64 |
| 26-27 | Di chuyển hướng 2 (`2`) | (22, 10) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 64 |
| 28-29 | Di chuyển hướng 2 (`2`) | (23, 10) | (24, 10) | Dự kiến đến điểm hẹn tọa độ (24, 10) | 64 |
| 30-31 | Di chuyển hướng 2 (`2`) | (24, 10) | (25, 10) | Dự kiến đến điểm hẹn tọa độ (25, 10) | 64 |
| 32-33 | Di chuyển hướng 2 (`2`) | (25, 10) | (26, 10) | Dự kiến đến điểm hẹn tọa độ (26, 10) | 64 |
| 34-35 | Di chuyển hướng 2 (`2`) | (26, 10) | (27, 10) | Dự kiến đến điểm hẹn tọa độ (27, 10) | 64 |
| 36-37 | Di chuyển hướng 2 (`2`) | (27, 10) | (28, 10) | Dự kiến đến điểm hẹn tọa độ (28, 10) | 64 |
| 38 | Di chuyển hướng 1 (`1`) | (28, 10) | (29, 9) | Dự kiến đến điểm hẹn tọa độ (29, 9) | 64 |
| 39-40 | Di chuyển hướng 1 (`1`) | (29, 9) | (29, 8) | Dự kiến đến điểm hẹn tọa độ (29, 8) | 64 |
| 41-42 | Di chuyển hướng 1 (`1`) | (29, 8) | (30, 7) | Dự kiến đến điểm hẹn tọa độ (30, 7) | 64 |
| 43 | Di chuyển hướng 1 (`1`) | (30, 7) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 64 |
| 44-140 | Chờ 97 bước (`-97`) | (30, 6) | (30, 6) | Dự kiến đứng yên tại (30, 6); hướng tới tọa độ (30, 6) | 64 |

