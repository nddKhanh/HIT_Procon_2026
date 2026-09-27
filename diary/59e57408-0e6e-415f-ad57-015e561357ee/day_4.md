# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 218
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 12 | #2 | #4 | (11, 12) | 33 | 64 |
| 27 | #0 | #4 | (10, 3) | 2 | 64 |
| 27 | #3 | #4 | (10, 3) | 3 | 64 |
| 30 | #0 | #4 | (10, 4) | 63 | 64 |
| 32 | #0 | #4 | (11, 5) | 63 | 64 |
| 54 | #1 | #4 | (20, 11) | 0 | 64 |
| 56 | #1 | #4 | (20, 10) | 63 | 64 |
| 58 | #1 | #4 | (21, 9) | 63 | 64 |
| 59 | #1 | #4 | (20, 8) | 62 | 64 |
| 61 | #1 | #4 | (20, 7) | 63 | 64 |
| 63 | #1 | #4 | (19, 6) | 63 | 64 |
| 65 | #1 | #4 | (19, 5) | 63 | 64 |
| 66 | #1 | #4 | (18, 4) | 62 | 64 |
| 74 | #1 | #4 | (18, 4) | 60 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (10, 3) (ô=106)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=2, tọa độ=(20, 11))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=2, tọa độ=(20, 11))
- Mảng hành động đã gửi server: `[-28, 3, 3, 3, 3, 3, 4, 3, 3, 3, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 2, 2, 3, 2, 2, 4, 4, 3, 4, 4, 4, 3, 4, 0, 5, 5, 0, 5, 5, 5, 5, 5, 4, -97]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-27 | Chờ 28 bước (`-28`) | (10, 3) | (10, 3) | Dự kiến đứng yên tại (10, 3); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 3)) | 64 |
| 28-29 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 64 |
| 30-31 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 64 |
| 32-33 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 63 |
| 34-35 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 62 |
| 36-37 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 61 |
| 38 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 59 |
| 39-40 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 58 |
| 41-43 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 56 |
| 44 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 54 |
| 45-46 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 53 |
| 47-48 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 52 |
| 49-50 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 51 |
| 51-53 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 49 |
| 54-55 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 48 |
| 56-57 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 46 |
| 58-59 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 45 |
| 60 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 43 |
| 61 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 41 |
| 62-63 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 40 |
| 64-65 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(19, 2)) | 39 |
| 66-67 | Di chuyển hướng 2 (`2`) | (19, 2) | (20, 2) | Dự kiến đến điểm hẹn tọa độ (20, 2) | 38 |
| 68-70 | Di chuyển hướng 2 (`2`) | (20, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 36 |
| 71-73 | Di chuyển hướng 2 (`2`) | (21, 2) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 34 |
| 74-75 | Di chuyển hướng 2 (`2`) | (22, 2) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 33 |
| 76-77 | Di chuyển hướng 2 (`2`) | (23, 2) | (24, 2) | Dự kiến đến điểm hẹn tọa độ (24, 2) | 32 |
| 78 | Di chuyển hướng 2 (`2`) | (24, 2) | (25, 2) | Dự kiến đến điểm hẹn tọa độ (25, 2) | 30 |
| 79 | Di chuyển hướng 3 (`3`) | (25, 2) | (26, 3) | Dự kiến đến điểm hẹn tọa độ (26, 3) | 28 |
| 80 | Di chuyển hướng 2 (`2`) | (26, 3) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 26 |
| 81 | Di chuyển hướng 2 (`2`) | (27, 3) | (28, 3) | Dự kiến đến điểm hẹn tọa độ (28, 3) | 24 |
| 82-83 | Di chuyển hướng 3 (`3`) | (28, 3) | (28, 4) | Dự kiến đến điểm hẹn tọa độ (28, 4) | 23 |
| 84-85 | Di chuyển hướng 2 (`2`) | (28, 4) | (29, 4) | Dự kiến đến điểm hẹn tọa độ (29, 4) | 22 |
| 86-87 | Di chuyển hướng 2 (`2`) | (29, 4) | (30, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(30, 4)) | 21 |
| 88-89 | Di chuyển hướng 4 (`4`) | (30, 4) | (30, 5) | Dự kiến đến điểm hẹn tọa độ (30, 5) | 20 |
| 90-91 | Di chuyển hướng 4 (`4`) | (30, 5) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 19 |
| 92-93 | Di chuyển hướng 3 (`3`) | (29, 6) | (30, 7) | Dự kiến đến điểm hẹn tọa độ (30, 7) | 18 |
| 94 | Di chuyển hướng 4 (`4`) | (30, 7) | (29, 8) | Dự kiến đến điểm hẹn tọa độ (29, 8) | 16 |
| 95-96 | Di chuyển hướng 4 (`4`) | (29, 8) | (29, 9) | Dự kiến đến điểm hẹn tọa độ (29, 9) | 15 |
| 97-98 | Di chuyển hướng 4 (`4`) | (29, 9) | (28, 10) | Dự kiến đến điểm hẹn tọa độ (28, 10) | 14 |
| 99 | Di chuyển hướng 3 (`3`) | (28, 10) | (29, 11) | Dự kiến đến điểm hẹn tọa độ (29, 11) | 12 |
| 100-101 | Di chuyển hướng 4 (`4`) | (29, 11) | (28, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(28, 12)) | 11 |
| 102-103 | Di chuyển hướng 0 (`0`) | (28, 12) | (28, 11) | Dự kiến đến điểm hẹn tọa độ (28, 11) | 10 |
| 104-105 | Di chuyển hướng 5 (`5`) | (28, 11) | (27, 11) | Dự kiến đến điểm hẹn tọa độ (27, 11) | 9 |
| 106-107 | Di chuyển hướng 5 (`5`) | (27, 11) | (26, 11) | Dự kiến đến điểm hẹn tọa độ (26, 11) | 8 |
| 108 | Di chuyển hướng 0 (`0`) | (26, 11) | (25, 10) | Dự kiến đến điểm hẹn tọa độ (25, 10) | 6 |
| 109-110 | Di chuyển hướng 5 (`5`) | (25, 10) | (24, 10) | Dự kiến đến điểm hẹn tọa độ (24, 10) | 5 |
| 111-112 | Di chuyển hướng 5 (`5`) | (24, 10) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 4 |
| 113-114 | Di chuyển hướng 5 (`5`) | (23, 10) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 3 |
| 115-116 | Di chuyển hướng 5 (`5`) | (22, 10) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 2 |
| 117-118 | Di chuyển hướng 5 (`5`) | (21, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 1 |
| 119-120 | Di chuyển hướng 4 (`4`) | (20, 10) | (20, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 0 |
| 121-217 | Chờ 97 bước (`-97`) | (20, 11) | (20, 11) | Dự kiến đứng yên tại (20, 11); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (23, 9) (ô=311)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=0, tọa độ=(6, 11))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=0, tọa độ=(6, 11))
- Mảng hành động đã gửi server: `[4, 5, 5, 4, -46, 1, 1, 0, 0, 0, 0, 0, 1, 1, 4, 4, 4, 4, 4, 4, 5, 4, 4, 4, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 0, 5, 3, 3, 3, 3, 3, 3, 3, 4, 4, -78]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (23, 9) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 3 |
| 2-3 | Di chuyển hướng 5 (`5`) | (22, 10) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 2 |
| 4-5 | Di chuyển hướng 5 (`5`) | (21, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 1 |
| 6-7 | Di chuyển hướng 4 (`4`) | (20, 10) | (20, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 0 |
| 8-53 | Chờ 46 bước (`-46`) | (20, 11) | (20, 11) | Dự kiến đứng yên tại (20, 11); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 64 |
| 54-55 | Di chuyển hướng 1 (`1`) | (20, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 64 |
| 56-57 | Di chuyển hướng 1 (`1`) | (20, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 64 |
| 58 | Di chuyển hướng 0 (`0`) | (21, 9) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 64 |
| 59-60 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 64 |
| 61-62 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 64 |
| 63-64 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 64 |
| 65 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 64 |
| 66-67 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 63 |
| 68-69 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(19, 2)) | 62 |
| 70-71 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 61 |
| 72-73 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 64 |
| 74-75 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 63 |
| 76 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 61 |
| 77 | Di chuyển hướng 4 (`4`) | (17, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 59 |
| 78-79 | Di chuyển hướng 4 (`4`) | (17, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 58 |
| 80-81 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 56 |
| 82-83 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 55 |
| 84-86 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 53 |
| 87-88 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 52 |
| 89-90 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 51 |
| 91-92 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 50 |
| 93 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 48 |
| 94-95 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 47 |
| 96-98 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 45 |
| 99 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 43 |
| 100-101 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 42 |
| 102-103 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 41 |
| 104-105 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 40 |
| 106-107 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 3)) | 39 |
| 108-109 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 38 |
| 110-111 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 37 |
| 112-113 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 36 |
| 114-115 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 35 |
| 116 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 33 |
| 117-118 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 32 |
| 119-120 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 2)) | 31 |
| 121-122 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 30 |
| 123-125 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 28 |
| 126-127 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 27 |
| 128-129 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 26 |
| 130-132 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 24 |
| 133-134 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 23 |
| 135-136 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 22 |
| 137-138 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 21 |
| 139 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(6, 11)) | 19 |
| 140-217 | Chờ 78 bước (`-78`) | (6, 11) | (6, 11) | Dự kiến đứng yên tại (6, 11); mục tiêu Spot #10 (thương hiệu=0, tọa độ=(6, 11)) | 19 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 5) (ô=171)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(13, 12))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(13, 12))
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 4, 3, 4, 3, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 5, 5, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 1, 0, 0, 5, 0, 5, 0, 0, 3, 2, 2, 2, 2, 2, 2, 2, -115]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 41 |
| 2-3 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 40 |
| 4-5 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 39 |
| 6 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 37 |
| 7-8 | Di chuyển hướng 4 (`4`) | (12, 9) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 36 |
| 9-10 | Di chuyển hướng 3 (`3`) | (11, 10) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 35 |
| 11 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 64 |
| 12-13 | Di chuyển hướng 3 (`3`) | (11, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 63 |
| 14-15 | Di chuyển hướng 4 (`4`) | (12, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 62 |
| 16-17 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 61 |
| 18-19 | Di chuyển hướng 4 (`4`) | (11, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 60 |
| 20 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 58 |
| 21-22 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 57 |
| 23-24 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 56 |
| 25-26 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 55 |
| 27-29 | Di chuyển hướng 3 (`3`) | (12, 20) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 53 |
| 30-31 | Di chuyển hướng 3 (`3`) | (13, 21) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 52 |
| 32-33 | Di chuyển hướng 3 (`3`) | (13, 22) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 51 |
| 34-35 | Di chuyển hướng 3 (`3`) | (14, 23) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 50 |
| 36-37 | Di chuyển hướng 3 (`3`) | (14, 24) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 49 |
| 38-39 | Di chuyển hướng 3 (`3`) | (15, 25) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 48 |
| 40 | Di chuyển hướng 3 (`3`) | (15, 26) | (16, 27) | Dự kiến đến điểm hẹn tọa độ (16, 27) | 46 |
| 41 | Di chuyển hướng 2 (`2`) | (16, 27) | (17, 27) | Dự kiến đến điểm hẹn tọa độ (17, 27) | 44 |
| 42-43 | Di chuyển hướng 2 (`2`) | (17, 27) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 43 |
| 44-45 | Di chuyển hướng 2 (`2`) | (18, 27) | (19, 27) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 27)) | 42 |
| 46-47 | Di chuyển hướng 5 (`5`) | (19, 27) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 41 |
| 48-49 | Di chuyển hướng 5 (`5`) | (18, 27) | (17, 27) | Dự kiến đến điểm hẹn tọa độ (17, 27) | 40 |
| 50-51 | Di chuyển hướng 5 (`5`) | (17, 27) | (16, 27) | Dự kiến đến điểm hẹn tọa độ (16, 27) | 39 |
| 52 | Di chuyển hướng 0 (`0`) | (16, 27) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 37 |
| 53 | Di chuyển hướng 0 (`0`) | (15, 26) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 35 |
| 54-55 | Di chuyển hướng 0 (`0`) | (15, 25) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 34 |
| 56-57 | Di chuyển hướng 0 (`0`) | (14, 24) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 33 |
| 58-59 | Di chuyển hướng 0 (`0`) | (14, 23) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 32 |
| 60-61 | Di chuyển hướng 5 (`5`) | (13, 22) | (12, 22) | Dự kiến đến điểm hẹn tọa độ (12, 22) | 31 |
| 62 | Di chuyển hướng 0 (`0`) | (12, 22) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 29 |
| 63-64 | Di chuyển hướng 0 (`0`) | (12, 21) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 28 |
| 65-66 | Di chuyển hướng 0 (`0`) | (11, 20) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 27 |
| 67-69 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 25 |
| 70-71 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 24 |
| 72-74 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 22 |
| 75 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 20 |
| 76-77 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 19 |
| 78-80 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 17 |
| 81-82 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 16 |
| 83-84 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 15 |
| 85-86 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 14 |
| 87 | Di chuyển hướng 0 (`0`) | (6, 12) | (6, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(6, 11)) | 12 |
| 88-89 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 11 |
| 90 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 9 |
| 91-92 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 8 |
| 93-94 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 7 |
| 95 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 5 |
| 96-97 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 4 |
| 98-99 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 3 |
| 100-102 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 1 |
| 103-217 | Chờ 115 bước (`-115`) | (13, 12) | (13, 12) | Dự kiến đứng yên tại (13, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 1 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 2) (ô=67)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(10, 3))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(10, 3))
- Mảng hành động đã gửi server: `[2, 3, 2, 2, 2, 2, 2, -205]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 10 |
| 2-3 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 9 |
| 4-5 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 8 |
| 6 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 6 |
| 7-8 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 5 |
| 9-10 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 4 |
| 11-12 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 3)) | 3 |
| 13-217 | Chờ 205 bước (`-205`) | (10, 3) | (10, 3) | Dự kiến đứng yên tại (10, 3); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 3)) | 64 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (11, 18) (ô=587)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 4)
- Mảng hành động đã gửi server: `[0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 3, 3, 2, 2, 2, 3, 3, 3, 2, 3, 3, 3, 2, 2, 1, 1, 0, 0, 0, 0, 0, -152]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 64 |
| 2-3 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 64 |
| 4 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 64 |
| 5-6 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 64 |
| 7-8 | Di chuyển hướng 1 (`1`) | (11, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 64 |
| 9-10 | Di chuyển hướng 0 (`0`) | (12, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 64 |
| 11-12 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 64 |
| 13 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 64 |
| 14-15 | Di chuyển hướng 1 (`1`) | (11, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 64 |
| 16-17 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 64 |
| 18 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 64 |
| 19-20 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 64 |
| 21-22 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 64 |
| 23-24 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 64 |
| 25-26 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 3)) | 64 |
| 27-28 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 64 |
| 29-30 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 64 |
| 31-32 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 64 |
| 33-34 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 64 |
| 35-36 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 64 |
| 37-38 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 64 |
| 39 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 64 |
| 40-41 | Di chuyển hướng 3 (`3`) | (15, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 64 |
| 42-43 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 64 |
| 44-45 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 64 |
| 46-47 | Di chuyển hướng 3 (`3`) | (17, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 64 |
| 48-49 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 64 |
| 50-51 | Di chuyển hướng 2 (`2`) | (18, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 64 |
| 52-53 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 64 |
| 54-55 | Di chuyển hướng 1 (`1`) | (20, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 64 |
| 56-57 | Di chuyển hướng 1 (`1`) | (20, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 64 |
| 58 | Di chuyển hướng 0 (`0`) | (21, 9) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 64 |
| 59-60 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 64 |
| 61-62 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 64 |
| 63-64 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 64 |
| 65 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 64 |
| 66-217 | Chờ 152 bước (`-152`) | (18, 4) | (18, 4) | Dự kiến đứng yên tại (18, 4); hướng tới tọa độ (18, 4) | 64 |

