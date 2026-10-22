# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 88
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 23 | #0 | #3 | (16, 4) | 2 | 120 |
| 26 | #0 | #3 | (17, 5) | 119 | 120 |
| 28 | #0 | #3 | (17, 6) | 119 | 120 |
| 31 | #2 | #6 | (0, 30) | 2 | 120 |
| 33 | #0 | #3 | (19, 10) | 113 | 120 |
| 39 | #0 | #3 | (21, 15) | 111 | 120 |
| 41 | #0 | #3 | (21, 16) | 119 | 120 |
| 44 | #0 | #3 | (22, 17) | 118 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 12) (ô=404)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(31, 23)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(31, 23)
- Mảng hành động đã gửi server: `[1, 5, 0, 0, 1, 1, 2, 5, 0, 5, 5, 0, 0, -5, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 4, 5, 3, 2, 2, 3, 3, 3, 3, 2, 2, 3, 3, 2, 2, 3, 3, 4, 4, 1, 1, 0, 0, 1, 1, 1, 0, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (20, 12) | (21, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(21, 11)) | 20 |
| 1-2 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 19 |
| 3 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 17 |
| 4-5 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 16 |
| 6 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 14 |
| 7-8 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 13 |
| 9 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 11 |
| 10-11 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 10 |
| 12 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 8 |
| 13 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 6 |
| 14 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 4 |
| 15-16 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 3 |
| 17-18 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 2 |
| 19-23 | Chờ 5 bước (`-5`) | (16, 4) | (16, 4) | Dự kiến đứng yên tại (16, 4); mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 120 |
| 24-25 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 120 |
| 26-27 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 120 |
| 28-29 | Di chuyển hướng 3 (`3`) | (17, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 119 |
| 30 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 117 |
| 31 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 115 |
| 32 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 120 |
| 33-34 | Di chuyển hướng 3 (`3`) | (19, 10) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 119 |
| 35 | Di chuyển hướng 3 (`3`) | (20, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 117 |
| 36 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 115 |
| 37 | Di chuyển hướng 4 (`4`) | (21, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 113 |
| 38 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 120 |
| 39-40 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 120 |
| 41-43 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 120 |
| 44-46 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 118 |
| 47-49 | Di chuyển hướng 5 (`5`) | (21, 18) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 116 |
| 50-51 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 115 |
| 52 | Di chuyển hướng 2 (`2`) | (21, 19) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 113 |
| 53-54 | Di chuyển hướng 2 (`2`) | (22, 19) | (23, 19) | Dự kiến đến điểm hẹn tọa độ (23, 19) | 112 |
| 55-56 | Di chuyển hướng 3 (`3`) | (23, 19) | (23, 20) | Dự kiến đến điểm hẹn tọa độ (23, 20) | 111 |
| 57 | Di chuyển hướng 3 (`3`) | (23, 20) | (24, 21) | Dự kiến đến điểm hẹn tọa độ (24, 21) | 109 |
| 58 | Di chuyển hướng 3 (`3`) | (24, 21) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 107 |
| 59 | Di chuyển hướng 3 (`3`) | (24, 22) | (25, 23) | Dự kiến đến điểm hẹn tọa độ (25, 23) | 105 |
| 60 | Di chuyển hướng 2 (`2`) | (25, 23) | (26, 23) | Dự kiến đến điểm hẹn tọa độ (26, 23) | 103 |
| 61 | Di chuyển hướng 2 (`2`) | (26, 23) | (27, 23) | Dự kiến đến điểm hẹn tọa độ (27, 23) | 101 |
| 62 | Di chuyển hướng 3 (`3`) | (27, 23) | (27, 24) | Dự kiến đến điểm hẹn tọa độ (27, 24) | 99 |
| 63 | Di chuyển hướng 3 (`3`) | (27, 24) | (28, 25) | Dự kiến đến điểm hẹn tọa độ (28, 25) | 97 |
| 64 | Di chuyển hướng 2 (`2`) | (28, 25) | (29, 25) | Dự kiến đến điểm hẹn tọa độ (29, 25) | 95 |
| 65 | Di chuyển hướng 2 (`2`) | (29, 25) | (30, 25) | Dự kiến đến điểm hẹn tọa độ (30, 25) | 93 |
| 66 | Di chuyển hướng 3 (`3`) | (30, 25) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 91 |
| 67 | Di chuyển hướng 3 (`3`) | (30, 26) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 89 |
| 68 | Di chuyển hướng 4 (`4`) | (31, 27) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 87 |
| 69 | Di chuyển hướng 4 (`4`) | (30, 28) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 85 |
| 70-71 | Di chuyển hướng 1 (`1`) | (30, 29) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 84 |
| 72 | Di chuyển hướng 1 (`1`) | (30, 28) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 82 |
| 73 | Di chuyển hướng 0 (`0`) | (31, 27) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 80 |
| 74 | Di chuyển hướng 0 (`0`) | (30, 26) | (30, 25) | Dự kiến đến điểm hẹn tọa độ (30, 25) | 78 |
| 75 | Di chuyển hướng 1 (`1`) | (30, 25) | (30, 24) | Dự kiến đến điểm hẹn tọa độ (30, 24) | 76 |
| 76-77 | Di chuyển hướng 1 (`1`) | (30, 24) | (31, 23) | Dự kiến đến điểm hẹn tọa độ (31, 23) | 75 |
| 78-80 | Di chuyển hướng 1 (`1`) | (31, 23) | (31, 22) | Dự kiến đến điểm hẹn tọa độ (31, 22) | 73 |
| 81-82 | Di chuyển hướng 0 (`0`) | (31, 22) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 72 |
| 83-84 | Di chuyển hướng 3 (`3`) | (31, 21) | (31, 22) | Dự kiến đến điểm hẹn tọa độ (31, 22) | 71 |
| 85-86 | Di chuyển hướng 4 (`4`) | (31, 22) | (31, 23) | Dự kiến đến điểm hẹn tọa độ (31, 23) | 70 |
| 87 | Chờ 1 bước (`-1`) | (31, 23) | (31, 23) | Dự kiến đứng yên tại (31, 23); hướng tới tọa độ (31, 23) | 70 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 11) (ô=364)
- Nhiên liệu đầu ngày: 98
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=14, tọa độ=(14, 20))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=14, tọa độ=(14, 20))
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 1, 0, 1, 1, 2, 5, 5, 5, 0, 0, 1, 1, 5, 5, 5, 5, 4, 5, 0, 5, 5, 5, 5, 4, 5, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 3, 3, 2, 2, 3, 2, 3, 3, 3, 3, 3, 3, 2, 2, 3, 2, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 97 |
| 2 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 95 |
| 3-4 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 94 |
| 5-7 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 92 |
| 8 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 90 |
| 9 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 88 |
| 10 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 86 |
| 11 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 84 |
| 12 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 82 |
| 13-14 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 81 |
| 15 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 79 |
| 16-17 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 78 |
| 18 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 76 |
| 19 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 74 |
| 20 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 72 |
| 21 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 70 |
| 22-23 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 69 |
| 24 | Di chuyển hướng 5 (`5`) | (12, 0) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 67 |
| 25 | Di chuyển hướng 5 (`5`) | (11, 0) | (10, 0) | Dự kiến đến điểm hẹn tọa độ (10, 0) | 65 |
| 26 | Di chuyển hướng 5 (`5`) | (10, 0) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 63 |
| 27 | Di chuyển hướng 4 (`4`) | (9, 0) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 61 |
| 28 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 59 |
| 29 | Di chuyển hướng 0 (`0`) | (8, 1) | (7, 0) | Dự kiến đến điểm hẹn tọa độ (7, 0) | 57 |
| 30 | Di chuyển hướng 5 (`5`) | (7, 0) | (6, 0) | Dự kiến đến điểm hẹn tọa độ (6, 0) | 55 |
| 31 | Di chuyển hướng 5 (`5`) | (6, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 53 |
| 32 | Di chuyển hướng 5 (`5`) | (5, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 51 |
| 33 | Di chuyển hướng 5 (`5`) | (4, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 49 |
| 34 | Di chuyển hướng 4 (`4`) | (3, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 47 |
| 35 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 45 |
| 36 | Di chuyển hướng 4 (`4`) | (2, 1) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 43 |
| 37-38 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 42 |
| 39-40 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 41 |
| 41 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 39 |
| 42 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 37 |
| 43 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 35 |
| 44 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 33 |
| 45 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 31 |
| 46 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 29 |
| 47 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 27 |
| 48 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 25 |
| 49 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 23 |
| 50 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 21 |
| 51-52 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 20 |
| 53-54 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 19 |
| 55-56 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 18 |
| 57 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 16 |
| 58-59 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 15 |
| 60-61 | Di chuyển hướng 3 (`3`) | (9, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 14 |
| 62 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 12 |
| 63 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 10 |
| 64 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 8 |
| 65 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 6 |
| 66 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 4 |
| 67 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 2 |
| 68 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 0 |
| 69-87 | Chờ 19 bước (`-19`) | (14, 20) | (14, 20) | Dự kiến đứng yên tại (14, 20); mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (0, 30) (ô=960)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(0, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(0, 17)
- Mảng hành động đã gửi server: `[-32, 1, 2, 2, 2, 3, 3, 0, 1, 0, 1, 2, 2, 3, 2, 3, 3, 3, 2, 5, 0, 0, 0, 5, 0, 0, 1, 1, 0, 5, 5, 5, 0, 5, 0, 0, 0, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-31 | Chờ 32 bước (`-32`) | (0, 30) | (0, 30) | Dự kiến đứng yên tại (0, 30); mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 120 |
| 32-33 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 119 |
| 34 | Di chuyển hướng 2 (`2`) | (1, 29) | (2, 29) | Dự kiến đến điểm hẹn tọa độ (2, 29) | 117 |
| 35-37 | Di chuyển hướng 2 (`2`) | (2, 29) | (3, 29) | Dự kiến đến điểm hẹn tọa độ (3, 29) | 115 |
| 38-40 | Di chuyển hướng 2 (`2`) | (3, 29) | (4, 29) | Dự kiến đến điểm hẹn tọa độ (4, 29) | 113 |
| 41-43 | Di chuyển hướng 3 (`3`) | (4, 29) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 111 |
| 44 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 109 |
| 45-46 | Di chuyển hướng 0 (`0`) | (5, 31) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 108 |
| 47 | Di chuyển hướng 1 (`1`) | (4, 30) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 106 |
| 48 | Di chuyển hướng 0 (`0`) | (5, 29) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 104 |
| 49 | Di chuyển hướng 1 (`1`) | (4, 28) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 102 |
| 50-52 | Di chuyển hướng 2 (`2`) | (5, 27) | (6, 27) | Dự kiến đến điểm hẹn tọa độ (6, 27) | 100 |
| 53-55 | Di chuyển hướng 2 (`2`) | (6, 27) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 98 |
| 56 | Di chuyển hướng 3 (`3`) | (7, 27) | (7, 28) | Dự kiến đến điểm hẹn tọa độ (7, 28) | 96 |
| 57 | Di chuyển hướng 2 (`2`) | (7, 28) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 94 |
| 58 | Di chuyển hướng 3 (`3`) | (8, 28) | (9, 29) | Dự kiến đến điểm hẹn tọa độ (9, 29) | 92 |
| 59 | Di chuyển hướng 3 (`3`) | (9, 29) | (9, 30) | Dự kiến đến điểm hẹn tọa độ (9, 30) | 90 |
| 60 | Di chuyển hướng 3 (`3`) | (9, 30) | (10, 31) | Dự kiến đến điểm hẹn tọa độ (10, 31) | 88 |
| 61 | Di chuyển hướng 2 (`2`) | (10, 31) | (11, 31) | Dự kiến đạt mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 86 |
| 62-63 | Di chuyển hướng 5 (`5`) | (11, 31) | (10, 31) | Dự kiến đến điểm hẹn tọa độ (10, 31) | 85 |
| 64 | Di chuyển hướng 0 (`0`) | (10, 31) | (9, 30) | Dự kiến đến điểm hẹn tọa độ (9, 30) | 83 |
| 65 | Di chuyển hướng 0 (`0`) | (9, 30) | (9, 29) | Dự kiến đến điểm hẹn tọa độ (9, 29) | 81 |
| 66 | Di chuyển hướng 0 (`0`) | (9, 29) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 79 |
| 67 | Di chuyển hướng 5 (`5`) | (8, 28) | (7, 28) | Dự kiến đến điểm hẹn tọa độ (7, 28) | 77 |
| 68 | Di chuyển hướng 0 (`0`) | (7, 28) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 75 |
| 69 | Di chuyển hướng 0 (`0`) | (7, 27) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 73 |
| 70-71 | Di chuyển hướng 1 (`1`) | (6, 26) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 72 |
| 72 | Di chuyển hướng 1 (`1`) | (7, 25) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 70 |
| 73 | Di chuyển hướng 0 (`0`) | (7, 24) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 68 |
| 74 | Di chuyển hướng 5 (`5`) | (7, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 66 |
| 75 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 64 |
| 76-77 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến đến điểm hẹn tọa độ (4, 23) | 63 |
| 78 | Di chuyển hướng 0 (`0`) | (4, 23) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 61 |
| 79 | Di chuyển hướng 5 (`5`) | (3, 22) | (2, 22) | Dự kiến đến điểm hẹn tọa độ (2, 22) | 59 |
| 80 | Di chuyển hướng 0 (`0`) | (2, 22) | (2, 21) | Dự kiến đến điểm hẹn tọa độ (2, 21) | 57 |
| 81-82 | Di chuyển hướng 0 (`0`) | (2, 21) | (1, 20) | Dự kiến đến điểm hẹn tọa độ (1, 20) | 56 |
| 83-84 | Di chuyển hướng 0 (`0`) | (1, 20) | (1, 19) | Dự kiến đến điểm hẹn tọa độ (1, 19) | 55 |
| 85 | Di chuyển hướng 0 (`0`) | (1, 19) | (0, 18) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=12, tọa độ=(0, 18)) | 53 |
| 86-87 | Di chuyển hướng 0 (`0`) | (0, 18) | (0, 17) | Dự kiến đến điểm hẹn tọa độ (0, 17) | 52 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (22, 21) (ô=694)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(22, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(22, 17)
- Mảng hành động đã gửi server: `[4, 5, 0, 0, 0, 0, 5, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, -45]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (22, 21) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 120 |
| 2 | Di chuyển hướng 5 (`5`) | (21, 22) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 120 |
| 3 | Di chuyển hướng 0 (`0`) | (20, 22) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 120 |
| 4 | Di chuyển hướng 0 (`0`) | (20, 21) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 120 |
| 5 | Di chuyển hướng 0 (`0`) | (19, 20) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 120 |
| 6 | Di chuyển hướng 0 (`0`) | (19, 19) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 120 |
| 7 | Di chuyển hướng 5 (`5`) | (18, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 120 |
| 8 | Di chuyển hướng 0 (`0`) | (17, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 120 |
| 9 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 120 |
| 10 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 120 |
| 11 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 120 |
| 12 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 120 |
| 13 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 120 |
| 14 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 120 |
| 15 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 120 |
| 16 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 120 |
| 17 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 120 |
| 18 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 120 |
| 19 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 120 |
| 20 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 120 |
| 21 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 120 |
| 22 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 120 |
| 23-24 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 120 |
| 25-26 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 120 |
| 27-28 | Di chuyển hướng 3 (`3`) | (17, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 120 |
| 29 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 120 |
| 30 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 120 |
| 31 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 120 |
| 32-33 | Di chuyển hướng 3 (`3`) | (19, 10) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 120 |
| 34 | Di chuyển hướng 3 (`3`) | (20, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 120 |
| 35 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 120 |
| 36 | Di chuyển hướng 4 (`4`) | (21, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 120 |
| 37 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 120 |
| 38-39 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 120 |
| 40-42 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 120 |
| 43-87 | Chờ 45 bước (`-45`) | (22, 17) | (22, 17) | Dự kiến đứng yên tại (22, 17); hướng tới tọa độ (22, 17) | 120 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (30, 29) (ô=958)
- Nhiên liệu đầu ngày: 62
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=12, tọa độ=(5, 23))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=12, tọa độ=(5, 23))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 0, 5, 5, 5, 4, 4, 5, 5, 5, 0, 0, 5, 2, 1, 1, 0, 0, 5, 4, 5, 4, 4, 5, 5, 0, 5, 5, 0, 5, 5, 5, 5, 0, 1, 0, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (30, 29) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 61 |
| 2-4 | Di chuyển hướng 5 (`5`) | (29, 30) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 59 |
| 5-6 | Di chuyển hướng 5 (`5`) | (28, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 58 |
| 7-8 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 57 |
| 9 | Di chuyển hướng 0 (`0`) | (26, 30) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 55 |
| 10 | Di chuyển hướng 5 (`5`) | (26, 29) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 53 |
| 11-12 | Di chuyển hướng 5 (`5`) | (25, 29) | (24, 29) | Dự kiến đến điểm hẹn tọa độ (24, 29) | 52 |
| 13-14 | Di chuyển hướng 5 (`5`) | (24, 29) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 51 |
| 15-16 | Di chuyển hướng 4 (`4`) | (23, 29) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 50 |
| 17 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 48 |
| 18-19 | Di chuyển hướng 5 (`5`) | (22, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 47 |
| 20-22 | Di chuyển hướng 5 (`5`) | (21, 31) | (20, 31) | Dự kiến đến điểm hẹn tọa độ (20, 31) | 45 |
| 23-25 | Di chuyển hướng 5 (`5`) | (20, 31) | (19, 31) | Dự kiến đến điểm hẹn tọa độ (19, 31) | 43 |
| 26-28 | Di chuyển hướng 0 (`0`) | (19, 31) | (18, 30) | Dự kiến đến điểm hẹn tọa độ (18, 30) | 41 |
| 29-31 | Di chuyển hướng 0 (`0`) | (18, 30) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 39 |
| 32 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 37 |
| 33-34 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 36 |
| 35 | Di chuyển hướng 1 (`1`) | (18, 29) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 34 |
| 36 | Di chuyển hướng 1 (`1`) | (18, 28) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 32 |
| 37 | Di chuyển hướng 0 (`0`) | (19, 27) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 30 |
| 38 | Di chuyển hướng 0 (`0`) | (18, 26) | (18, 25) | Dự kiến đến điểm hẹn tọa độ (18, 25) | 28 |
| 39-41 | Di chuyển hướng 5 (`5`) | (18, 25) | (17, 25) | Dự kiến đến điểm hẹn tọa độ (17, 25) | 26 |
| 42-43 | Di chuyển hướng 4 (`4`) | (17, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 25 |
| 44-45 | Di chuyển hướng 5 (`5`) | (16, 26) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 24 |
| 46-48 | Di chuyển hướng 4 (`4`) | (15, 26) | (15, 27) | Dự kiến đến điểm hẹn tọa độ (15, 27) | 22 |
| 49-51 | Di chuyển hướng 4 (`4`) | (15, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 20 |
| 52-53 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 19 |
| 54 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 17 |
| 55 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 15 |
| 56 | Di chuyển hướng 5 (`5`) | (12, 27) | (11, 27) | Dự kiến đến điểm hẹn tọa độ (11, 27) | 13 |
| 57-58 | Di chuyển hướng 5 (`5`) | (11, 27) | (10, 27) | Dự kiến đến điểm hẹn tọa độ (10, 27) | 12 |
| 59-60 | Di chuyển hướng 0 (`0`) | (10, 27) | (9, 26) | Dự kiến đến điểm hẹn tọa độ (9, 26) | 11 |
| 61-62 | Di chuyển hướng 5 (`5`) | (9, 26) | (8, 26) | Dự kiến đến điểm hẹn tọa độ (8, 26) | 10 |
| 63-65 | Di chuyển hướng 5 (`5`) | (8, 26) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 8 |
| 66 | Di chuyển hướng 5 (`5`) | (7, 26) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 6 |
| 67-68 | Di chuyển hướng 5 (`5`) | (6, 26) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 5 |
| 69-71 | Di chuyển hướng 0 (`0`) | (5, 26) | (5, 25) | Dự kiến đến điểm hẹn tọa độ (5, 25) | 3 |
| 72-74 | Di chuyển hướng 1 (`1`) | (5, 25) | (5, 24) | Dự kiến đến điểm hẹn tọa độ (5, 24) | 1 |
| 75-76 | Di chuyển hướng 0 (`0`) | (5, 24) | (5, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 0 |
| 77-87 | Chờ 11 bước (`-11`) | (5, 23) | (5, 23) | Dự kiến đứng yên tại (5, 23); mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (29, 4) (ô=157)
- Nhiên liệu đầu ngày: 76
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=1, tọa độ=(22, 21))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=1, tọa độ=(22, 21))
- Mảng hành động đã gửi server: `[2, 2, 5, 4, 3, 2, 5, 5, 5, 0, 0, 0, 1, 1, 1, 2, 2, 2, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 4, 3, 4, 3, 3, 3, 4, 3, 5, 5, 5, 4, 4, 4, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (29, 4) | (30, 4) | Dự kiến đến điểm hẹn tọa độ (30, 4) | 74 |
| 3 | Di chuyển hướng 2 (`2`) | (30, 4) | (31, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=5, tọa độ=(31, 4)) | 72 |
| 4-5 | Di chuyển hướng 5 (`5`) | (31, 4) | (30, 4) | Dự kiến đến điểm hẹn tọa độ (30, 4) | 71 |
| 6 | Di chuyển hướng 4 (`4`) | (30, 4) | (30, 5) | Dự kiến đến điểm hẹn tọa độ (30, 5) | 69 |
| 7 | Di chuyển hướng 3 (`3`) | (30, 5) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 67 |
| 8 | Di chuyển hướng 2 (`2`) | (30, 6) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 65 |
| 9-10 | Di chuyển hướng 5 (`5`) | (31, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 64 |
| 11 | Di chuyển hướng 5 (`5`) | (30, 6) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 62 |
| 12 | Di chuyển hướng 5 (`5`) | (29, 6) | (28, 6) | Dự kiến đến điểm hẹn tọa độ (28, 6) | 60 |
| 13 | Di chuyển hướng 0 (`0`) | (28, 6) | (28, 5) | Dự kiến đến điểm hẹn tọa độ (28, 5) | 58 |
| 14-15 | Di chuyển hướng 0 (`0`) | (28, 5) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 57 |
| 16-17 | Di chuyển hướng 0 (`0`) | (27, 4) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 56 |
| 18-19 | Di chuyển hướng 1 (`1`) | (27, 3) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 55 |
| 20-22 | Di chuyển hướng 1 (`1`) | (27, 2) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 53 |
| 23-25 | Di chuyển hướng 1 (`1`) | (28, 1) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 51 |
| 26 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 49 |
| 27 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 47 |
| 28 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 45 |
| 29-30 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 44 |
| 31 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 42 |
| 32 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 40 |
| 33 | Di chuyển hướng 4 (`4`) | (28, 0) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 38 |
| 34-36 | Di chuyển hướng 4 (`4`) | (28, 1) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 36 |
| 37-39 | Di chuyển hướng 4 (`4`) | (27, 2) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 34 |
| 40-41 | Di chuyển hướng 4 (`4`) | (27, 3) | (26, 4) | Dự kiến đến điểm hẹn tọa độ (26, 4) | 33 |
| 42-43 | Di chuyển hướng 4 (`4`) | (26, 4) | (26, 5) | Dự kiến đến điểm hẹn tọa độ (26, 5) | 32 |
| 44 | Di chuyển hướng 4 (`4`) | (26, 5) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 30 |
| 45 | Di chuyển hướng 4 (`4`) | (25, 6) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 28 |
| 46 | Di chuyển hướng 4 (`4`) | (25, 7) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 26 |
| 47 | Di chuyển hướng 3 (`3`) | (24, 8) | (25, 9) | Dự kiến đến điểm hẹn tọa độ (25, 9) | 24 |
| 48 | Di chuyển hướng 3 (`3`) | (25, 9) | (25, 10) | Dự kiến đến điểm hẹn tọa độ (25, 10) | 22 |
| 49 | Di chuyển hướng 4 (`4`) | (25, 10) | (25, 11) | Dự kiến đến điểm hẹn tọa độ (25, 11) | 20 |
| 50-52 | Di chuyển hướng 3 (`3`) | (25, 11) | (25, 12) | Dự kiến đến điểm hẹn tọa độ (25, 12) | 18 |
| 53-54 | Di chuyển hướng 4 (`4`) | (25, 12) | (25, 13) | Dự kiến đến điểm hẹn tọa độ (25, 13) | 17 |
| 55-56 | Di chuyển hướng 3 (`3`) | (25, 13) | (25, 14) | Dự kiến đến điểm hẹn tọa độ (25, 14) | 16 |
| 57 | Di chuyển hướng 3 (`3`) | (25, 14) | (26, 15) | Dự kiến đến điểm hẹn tọa độ (26, 15) | 14 |
| 58 | Di chuyển hướng 3 (`3`) | (26, 15) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 12 |
| 59-60 | Di chuyển hướng 4 (`4`) | (26, 16) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 11 |
| 61-63 | Di chuyển hướng 3 (`3`) | (26, 17) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 9 |
| 64-65 | Di chuyển hướng 5 (`5`) | (26, 18) | (25, 18) | Dự kiến đến điểm hẹn tọa độ (25, 18) | 8 |
| 66-67 | Di chuyển hướng 5 (`5`) | (25, 18) | (24, 18) | Dự kiến đến điểm hẹn tọa độ (24, 18) | 7 |
| 68-70 | Di chuyển hướng 5 (`5`) | (24, 18) | (23, 18) | Dự kiến đến điểm hẹn tọa độ (23, 18) | 5 |
| 71 | Di chuyển hướng 4 (`4`) | (23, 18) | (23, 19) | Dự kiến đến điểm hẹn tọa độ (23, 19) | 3 |
| 72-73 | Di chuyển hướng 4 (`4`) | (23, 19) | (22, 20) | Dự kiến đến điểm hẹn tọa độ (22, 20) | 2 |
| 74-76 | Di chuyển hướng 4 (`4`) | (22, 20) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 0 |
| 77-87 | Chờ 11 bước (`-11`) | (22, 21) | (22, 21) | Dự kiến đứng yên tại (22, 21); mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 0 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (14, 20) (ô=654)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #27 (thương hiệu=19, tọa độ=(0, 30))
- Địa điểm đích kế hoạch: Spot #27 (thương hiệu=19, tọa độ=(0, 30))
- Mảng hành động đã gửi server: `[5, 0, 5, 5, 4, 4, 4, 4, 4, 5, 0, 5, 5, 5, 4, 4, 4, 5, 4, 4, 3, 4, -57]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 120 |
| 2 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 120 |
| 3 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 120 |
| 4 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 120 |
| 5 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 120 |
| 6-8 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 120 |
| 9-10 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 120 |
| 11-12 | Di chuyển hướng 4 (`4`) | (9, 22) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 120 |
| 13-14 | Di chuyển hướng 4 (`4`) | (9, 23) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 120 |
| 15 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 120 |
| 16 | Di chuyển hướng 0 (`0`) | (7, 24) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 120 |
| 17 | Di chuyển hướng 5 (`5`) | (7, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 120 |
| 18 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 120 |
| 19-20 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến đến điểm hẹn tọa độ (4, 23) | 120 |
| 21 | Di chuyển hướng 4 (`4`) | (4, 23) | (3, 24) | Dự kiến đến điểm hẹn tọa độ (3, 24) | 120 |
| 22 | Di chuyển hướng 4 (`4`) | (3, 24) | (3, 25) | Dự kiến đến điểm hẹn tọa độ (3, 25) | 120 |
| 23 | Di chuyển hướng 4 (`4`) | (3, 25) | (2, 26) | Dự kiến đến điểm hẹn tọa độ (2, 26) | 120 |
| 24 | Di chuyển hướng 5 (`5`) | (2, 26) | (1, 26) | Dự kiến đến điểm hẹn tọa độ (1, 26) | 120 |
| 25-27 | Di chuyển hướng 4 (`4`) | (1, 26) | (1, 27) | Dự kiến đến điểm hẹn tọa độ (1, 27) | 120 |
| 28 | Di chuyển hướng 4 (`4`) | (1, 27) | (0, 28) | Dự kiến đến điểm hẹn tọa độ (0, 28) | 120 |
| 29 | Di chuyển hướng 3 (`3`) | (0, 28) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 120 |
| 30 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 120 |
| 31-87 | Chờ 57 bước (`-57`) | (0, 30) | (0, 30) | Dự kiến đứng yên tại (0, 30); mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 120 |

