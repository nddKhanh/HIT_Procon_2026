# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 76
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 3 | #3 | #6 | (19, 25) | 118 | 120 |
| 4 | #3 | #6 | (20, 25) | 118 | 120 |
| 5 | #3 | #6 | (20, 24) | 118 | 120 |
| 6 | #3 | #6 | (21, 23) | 118 | 120 |
| 27 | #0 | #6 | (16, 4) | 7 | 120 |
| 42 | #1 | #6 | (15, 11) | 6 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (1, 2) (ô=65)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 29)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 29)
- Mảng hành động đã gửi server: `[1, 2, 1, 2, 2, 2, 2, 3, 2, 1, 2, 2, 2, 2, 4, 4, 3, 3, 2, 2, 2, -4, 3, 3, 2, 2, 3, 2, 5, 4, 4, 3, 3, 3, 3, 4, 3, 3, 3, 4, 5, 3, 4, 4, 3, 3, 4, 4, 5, 4, 3, 4, 4, 5, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 45 |
| 2 | Di chuyển hướng 2 (`2`) | (2, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 43 |
| 3 | Di chuyển hướng 1 (`1`) | (3, 1) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 41 |
| 4 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 39 |
| 5 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 37 |
| 6 | Di chuyển hướng 2 (`2`) | (5, 0) | (6, 0) | Dự kiến đến điểm hẹn tọa độ (6, 0) | 35 |
| 7 | Di chuyển hướng 2 (`2`) | (6, 0) | (7, 0) | Dự kiến đến điểm hẹn tọa độ (7, 0) | 33 |
| 8 | Di chuyển hướng 3 (`3`) | (7, 0) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 31 |
| 9 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 29 |
| 10 | Di chuyển hướng 1 (`1`) | (9, 1) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 27 |
| 11 | Di chuyển hướng 2 (`2`) | (9, 0) | (10, 0) | Dự kiến đến điểm hẹn tọa độ (10, 0) | 25 |
| 12 | Di chuyển hướng 2 (`2`) | (10, 0) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 23 |
| 13 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 21 |
| 14 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 19 |
| 15-16 | Di chuyển hướng 4 (`4`) | (13, 0) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 18 |
| 17 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 16 |
| 18 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 14 |
| 19 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 12 |
| 20 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 10 |
| 21-22 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 9 |
| 23 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 7 |
| 24-27 | Chờ 4 bước (`-4`) | (16, 4) | (16, 4) | Dự kiến đứng yên tại (16, 4); mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 120 |
| 28-29 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 119 |
| 30-31 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 118 |
| 32-33 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 117 |
| 34 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 115 |
| 35 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 113 |
| 36 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 111 |
| 37-38 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 110 |
| 39 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 108 |
| 40-41 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 107 |
| 42 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 105 |
| 43-44 | Di chuyển hướng 3 (`3`) | (19, 10) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 104 |
| 45 | Di chuyển hướng 3 (`3`) | (20, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 102 |
| 46 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 100 |
| 47 | Di chuyển hướng 4 (`4`) | (21, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 98 |
| 48 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 96 |
| 49-50 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 95 |
| 51-53 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 93 |
| 54-56 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 91 |
| 57-59 | Di chuyển hướng 5 (`5`) | (21, 18) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 89 |
| 60-61 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 88 |
| 62 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 86 |
| 63 | Di chuyển hướng 4 (`4`) | (20, 20) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 84 |
| 64 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 82 |
| 65 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 80 |
| 66 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 78 |
| 67 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 76 |
| 68 | Di chuyển hướng 5 (`5`) | (20, 25) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 74 |
| 69 | Di chuyển hướng 4 (`4`) | (19, 25) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 72 |
| 70 | Di chuyển hướng 3 (`3`) | (18, 26) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 70 |
| 71 | Di chuyển hướng 4 (`4`) | (19, 27) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 68 |
| 72 | Di chuyển hướng 4 (`4`) | (18, 28) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 66 |
| 73 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 64 |
| 74-75 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 63 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (30, 5) (ô=190)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 19)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 4, 4, 4, 5, 4, 5, 4, 4, 5, 0, 0, 1, 1, 2, 5, 4, 4, 5, 5, 5, 4, 4, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 0, 5, 5, 4, 4, 4, 4, 3, 4, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (30, 5) | (29, 5) | Dự kiến đến điểm hẹn tọa độ (29, 5) | 48 |
| 1-2 | Di chuyển hướng 5 (`5`) | (29, 5) | (28, 5) | Dự kiến đến điểm hẹn tọa độ (28, 5) | 47 |
| 3-4 | Di chuyển hướng 5 (`5`) | (28, 5) | (27, 5) | Dự kiến đến điểm hẹn tọa độ (27, 5) | 46 |
| 5 | Di chuyển hướng 5 (`5`) | (27, 5) | (26, 5) | Dự kiến đến điểm hẹn tọa độ (26, 5) | 44 |
| 6 | Di chuyển hướng 4 (`4`) | (26, 5) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 42 |
| 7 | Di chuyển hướng 4 (`4`) | (25, 6) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 40 |
| 8 | Di chuyển hướng 4 (`4`) | (25, 7) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 38 |
| 9 | Di chuyển hướng 5 (`5`) | (24, 8) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 36 |
| 10 | Di chuyển hướng 4 (`4`) | (23, 8) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 34 |
| 11 | Di chuyển hướng 5 (`5`) | (23, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 32 |
| 12-13 | Di chuyển hướng 4 (`4`) | (22, 9) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 31 |
| 14-16 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(21, 11)) | 29 |
| 17-18 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 28 |
| 19 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 26 |
| 20-21 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 25 |
| 22 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 23 |
| 23-24 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 22 |
| 25 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 20 |
| 26-27 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 19 |
| 28 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 17 |
| 29-30 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 16 |
| 31 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 14 |
| 32-34 | Di chuyển hướng 5 (`5`) | (18, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 12 |
| 35-37 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 10 |
| 38-40 | Di chuyển hướng 4 (`4`) | (16, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 8 |
| 41 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 120 |
| 42 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 118 |
| 43 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 116 |
| 44 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 114 |
| 45-46 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 113 |
| 47-48 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 112 |
| 49-50 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 111 |
| 51-52 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 110 |
| 53-55 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 108 |
| 56 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 106 |
| 57-58 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 105 |
| 59-60 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 104 |
| 61 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 102 |
| 62 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 100 |
| 63-65 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 98 |
| 66 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 96 |
| 67 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 94 |
| 68 | Di chuyển hướng 4 (`4`) | (1, 13) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 92 |
| 69 | Di chuyển hướng 4 (`4`) | (0, 14) | (0, 15) | Dự kiến đến điểm hẹn tọa độ (0, 15) | 90 |
| 70 | Di chuyển hướng 3 (`3`) | (0, 15) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 88 |
| 71 | Di chuyển hướng 4 (`4`) | (0, 16) | (0, 17) | Dự kiến đến điểm hẹn tọa độ (0, 17) | 86 |
| 72-73 | Di chuyển hướng 3 (`3`) | (0, 17) | (0, 18) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=12, tọa độ=(0, 18)) | 85 |
| 74-75 | Di chuyển hướng 3 (`3`) | (0, 18) | (1, 19) | Dự kiến đến điểm hẹn tọa độ (1, 19) | 84 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 31) (ô=995)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Địa điểm đích kế hoạch: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Mảng hành động đã gửi server: `[2, 2, 0, 0, 5, 5, 5, 4, 1, 2, 2, 2, 1, 1, 1, 2, 3, 3, 2, 3, 3, 3, 2, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 31) | (4, 31) | Dự kiến đến điểm hẹn tọa độ (4, 31) | 41 |
| 2 | Di chuyển hướng 2 (`2`) | (4, 31) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 39 |
| 3-4 | Di chuyển hướng 0 (`0`) | (5, 31) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 38 |
| 5 | Di chuyển hướng 0 (`0`) | (4, 30) | (4, 29) | Dự kiến đến điểm hẹn tọa độ (4, 29) | 36 |
| 6-8 | Di chuyển hướng 5 (`5`) | (4, 29) | (3, 29) | Dự kiến đến điểm hẹn tọa độ (3, 29) | 34 |
| 9-11 | Di chuyển hướng 5 (`5`) | (3, 29) | (2, 29) | Dự kiến đến điểm hẹn tọa độ (2, 29) | 32 |
| 12-14 | Di chuyển hướng 5 (`5`) | (2, 29) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 30 |
| 15 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 28 |
| 16-17 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 27 |
| 18 | Di chuyển hướng 2 (`2`) | (1, 29) | (2, 29) | Dự kiến đến điểm hẹn tọa độ (2, 29) | 25 |
| 19-21 | Di chuyển hướng 2 (`2`) | (2, 29) | (3, 29) | Dự kiến đến điểm hẹn tọa độ (3, 29) | 23 |
| 22-24 | Di chuyển hướng 2 (`2`) | (3, 29) | (4, 29) | Dự kiến đến điểm hẹn tọa độ (4, 29) | 21 |
| 25-27 | Di chuyển hướng 1 (`1`) | (4, 29) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 19 |
| 28 | Di chuyển hướng 1 (`1`) | (4, 28) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 17 |
| 29-31 | Di chuyển hướng 1 (`1`) | (5, 27) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 15 |
| 32-34 | Di chuyển hướng 2 (`2`) | (5, 26) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 13 |
| 35-36 | Di chuyển hướng 3 (`3`) | (6, 26) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 12 |
| 37 | Di chuyển hướng 3 (`3`) | (7, 27) | (7, 28) | Dự kiến đến điểm hẹn tọa độ (7, 28) | 10 |
| 38 | Di chuyển hướng 2 (`2`) | (7, 28) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 8 |
| 39 | Di chuyển hướng 3 (`3`) | (8, 28) | (9, 29) | Dự kiến đến điểm hẹn tọa độ (9, 29) | 6 |
| 40 | Di chuyển hướng 3 (`3`) | (9, 29) | (9, 30) | Dự kiến đến điểm hẹn tọa độ (9, 30) | 4 |
| 41 | Di chuyển hướng 3 (`3`) | (9, 30) | (10, 31) | Dự kiến đến điểm hẹn tọa độ (10, 31) | 2 |
| 42 | Di chuyển hướng 2 (`2`) | (10, 31) | (11, 31) | Dự kiến đạt mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 0 |
| 43-75 | Chờ 33 bước (`-33`) | (11, 31) | (11, 31) | Dự kiến đứng yên tại (11, 31); mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (18, 25) (ô=818)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(26, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(26, 19)
- Mảng hành động đã gửi server: `[2, 2, 1, 1, 1, 1, 0, 0, 0, 3, 4, 4, 3, 3, 4, 4, 3, 3, 3, 3, 3, 4, 1, 1, 2, 2, 2, 3, 2, 2, 2, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 5, 0, 0, 0, 5, 5, 4, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (18, 25) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 120 |
| 3 | Di chuyển hướng 2 (`2`) | (19, 25) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 120 |
| 4 | Di chuyển hướng 1 (`1`) | (20, 25) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 120 |
| 5 | Di chuyển hướng 1 (`1`) | (20, 24) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 120 |
| 6 | Di chuyển hướng 1 (`1`) | (21, 23) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 118 |
| 7 | Di chuyển hướng 1 (`1`) | (21, 22) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 116 |
| 8-9 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 115 |
| 10-12 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 113 |
| 13 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 111 |
| 14-15 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 110 |
| 16 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 108 |
| 17 | Di chuyển hướng 4 (`4`) | (20, 20) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 106 |
| 18 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 104 |
| 19 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 102 |
| 20 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 100 |
| 21 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 98 |
| 22 | Di chuyển hướng 3 (`3`) | (20, 25) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 96 |
| 23 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đến điểm hẹn tọa độ (21, 27) | 94 |
| 24 | Di chuyển hướng 3 (`3`) | (21, 27) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 92 |
| 25 | Di chuyển hướng 3 (`3`) | (21, 28) | (22, 29) | Dự kiến đến điểm hẹn tọa độ (22, 29) | 90 |
| 26 | Di chuyển hướng 3 (`3`) | (22, 29) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 88 |
| 27 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 86 |
| 28-29 | Di chuyển hướng 1 (`1`) | (22, 31) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 85 |
| 30 | Di chuyển hướng 1 (`1`) | (22, 30) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 83 |
| 31-32 | Di chuyển hướng 2 (`2`) | (23, 29) | (24, 29) | Dự kiến đến điểm hẹn tọa độ (24, 29) | 82 |
| 33-34 | Di chuyển hướng 2 (`2`) | (24, 29) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 81 |
| 35-36 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 80 |
| 37 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 78 |
| 38 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 76 |
| 39-40 | Di chuyển hướng 2 (`2`) | (27, 30) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 75 |
| 41-42 | Di chuyển hướng 2 (`2`) | (28, 30) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 74 |
| 43-45 | Di chuyển hướng 1 (`1`) | (29, 30) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 72 |
| 46-47 | Di chuyển hướng 1 (`1`) | (30, 29) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 71 |
| 48 | Di chuyển hướng 1 (`1`) | (30, 28) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 69 |
| 49 | Di chuyển hướng 0 (`0`) | (31, 27) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 67 |
| 50 | Di chuyển hướng 0 (`0`) | (30, 26) | (30, 25) | Dự kiến đến điểm hẹn tọa độ (30, 25) | 65 |
| 51 | Di chuyển hướng 1 (`1`) | (30, 25) | (30, 24) | Dự kiến đến điểm hẹn tọa độ (30, 24) | 63 |
| 52-53 | Di chuyển hướng 1 (`1`) | (30, 24) | (31, 23) | Dự kiến đến điểm hẹn tọa độ (31, 23) | 62 |
| 54-56 | Di chuyển hướng 1 (`1`) | (31, 23) | (31, 22) | Dự kiến đến điểm hẹn tọa độ (31, 22) | 60 |
| 57-58 | Di chuyển hướng 0 (`0`) | (31, 22) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 59 |
| 59-60 | Di chuyển hướng 1 (`1`) | (31, 21) | (31, 20) | Dự kiến đến điểm hẹn tọa độ (31, 20) | 58 |
| 61 | Di chuyển hướng 0 (`0`) | (31, 20) | (31, 19) | Dự kiến đến điểm hẹn tọa độ (31, 19) | 56 |
| 62 | Di chuyển hướng 5 (`5`) | (31, 19) | (30, 19) | Dự kiến đến điểm hẹn tọa độ (30, 19) | 54 |
| 63 | Di chuyển hướng 0 (`0`) | (30, 19) | (29, 18) | Dự kiến đến điểm hẹn tọa độ (29, 18) | 52 |
| 64 | Di chuyển hướng 0 (`0`) | (29, 18) | (29, 17) | Dự kiến đến điểm hẹn tọa độ (29, 17) | 50 |
| 65 | Di chuyển hướng 0 (`0`) | (29, 17) | (28, 16) | Dự kiến đến điểm hẹn tọa độ (28, 16) | 48 |
| 66 | Di chuyển hướng 5 (`5`) | (28, 16) | (27, 16) | Dự kiến đến điểm hẹn tọa độ (27, 16) | 46 |
| 67-68 | Di chuyển hướng 5 (`5`) | (27, 16) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 45 |
| 69-70 | Di chuyển hướng 4 (`4`) | (26, 16) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 44 |
| 71-73 | Di chuyển hướng 3 (`3`) | (26, 17) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 42 |
| 74-75 | Di chuyển hướng 4 (`4`) | (26, 18) | (26, 19) | Dự kiến đến điểm hẹn tọa độ (26, 19) | 41 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (1, 2) (ô=65)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=14, tọa độ=(14, 20))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=14, tọa độ=(14, 20))
- Mảng hành động đã gửi server: `[4, 4, 4, 3, 3, 3, 3, 3, 2, 3, 3, 2, 2, 2, 3, 3, 3, 4, 2, 3, 3, 3, 2, 2, 3, 2, -43]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 44 |
| 2-3 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 43 |
| 4 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 41 |
| 5 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 39 |
| 6 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 37 |
| 7 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 35 |
| 8 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 33 |
| 9 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 31 |
| 10 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 29 |
| 11 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 27 |
| 12 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 25 |
| 13 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 23 |
| 14-15 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 22 |
| 16-17 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 21 |
| 18 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 19 |
| 19 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 17 |
| 20-21 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 16 |
| 22-23 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 15 |
| 24-25 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 14 |
| 26 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 12 |
| 27 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 10 |
| 28 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 8 |
| 29 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 6 |
| 30 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 4 |
| 31 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 2 |
| 32 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 0 |
| 33-75 | Chờ 43 bước (`-43`) | (14, 20) | (14, 20) | Dự kiến đứng yên tại (14, 20); mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (30, 22) (ô=734)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=2, tọa độ=(31, 0))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=2, tọa độ=(31, 0))
- Mảng hành động đã gửi server: `[1, 1, 0, 5, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 5, 5, 5, 0, 0, 0, 1, 1, 1, 2, 2, 2, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (30, 22) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 51 |
| 3-4 | Di chuyển hướng 1 (`1`) | (31, 21) | (31, 20) | Dự kiến đến điểm hẹn tọa độ (31, 20) | 50 |
| 5 | Di chuyển hướng 0 (`0`) | (31, 20) | (31, 19) | Dự kiến đến điểm hẹn tọa độ (31, 19) | 48 |
| 6 | Di chuyển hướng 5 (`5`) | (31, 19) | (30, 19) | Dự kiến đến điểm hẹn tọa độ (30, 19) | 46 |
| 7 | Di chuyển hướng 0 (`0`) | (30, 19) | (29, 18) | Dự kiến đến điểm hẹn tọa độ (29, 18) | 44 |
| 8 | Di chuyển hướng 0 (`0`) | (29, 18) | (29, 17) | Dự kiến đến điểm hẹn tọa độ (29, 17) | 42 |
| 9 | Di chuyển hướng 0 (`0`) | (29, 17) | (28, 16) | Dự kiến đến điểm hẹn tọa độ (28, 16) | 40 |
| 10 | Di chuyển hướng 1 (`1`) | (28, 16) | (29, 15) | Dự kiến đến điểm hẹn tọa độ (29, 15) | 38 |
| 11-13 | Di chuyển hướng 1 (`1`) | (29, 15) | (29, 14) | Dự kiến đến điểm hẹn tọa độ (29, 14) | 36 |
| 14-15 | Di chuyển hướng 1 (`1`) | (29, 14) | (30, 13) | Dự kiến đến điểm hẹn tọa độ (30, 13) | 35 |
| 16-18 | Di chuyển hướng 1 (`1`) | (30, 13) | (30, 12) | Dự kiến đến điểm hẹn tọa độ (30, 12) | 33 |
| 19-21 | Di chuyển hướng 1 (`1`) | (30, 12) | (31, 11) | Dự kiến đến điểm hẹn tọa độ (31, 11) | 31 |
| 22-23 | Di chuyển hướng 0 (`0`) | (31, 11) | (30, 10) | Dự kiến đến điểm hẹn tọa độ (30, 10) | 30 |
| 24-25 | Di chuyển hướng 1 (`1`) | (30, 10) | (31, 9) | Dự kiến đến điểm hẹn tọa độ (31, 9) | 29 |
| 26-28 | Di chuyển hướng 1 (`1`) | (31, 9) | (31, 8) | Dự kiến đến điểm hẹn tọa độ (31, 8) | 27 |
| 29-31 | Di chuyển hướng 0 (`0`) | (31, 8) | (31, 7) | Dự kiến đến điểm hẹn tọa độ (31, 7) | 25 |
| 32-34 | Di chuyển hướng 1 (`1`) | (31, 7) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 23 |
| 35-36 | Di chuyển hướng 5 (`5`) | (31, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 22 |
| 37 | Di chuyển hướng 5 (`5`) | (30, 6) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 20 |
| 38 | Di chuyển hướng 5 (`5`) | (29, 6) | (28, 6) | Dự kiến đến điểm hẹn tọa độ (28, 6) | 18 |
| 39 | Di chuyển hướng 0 (`0`) | (28, 6) | (28, 5) | Dự kiến đến điểm hẹn tọa độ (28, 5) | 16 |
| 40-41 | Di chuyển hướng 0 (`0`) | (28, 5) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 15 |
| 42-43 | Di chuyển hướng 0 (`0`) | (27, 4) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 14 |
| 44-45 | Di chuyển hướng 1 (`1`) | (27, 3) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 13 |
| 46-48 | Di chuyển hướng 1 (`1`) | (27, 2) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 11 |
| 49-51 | Di chuyển hướng 1 (`1`) | (28, 1) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 9 |
| 52 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 7 |
| 53 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 5 |
| 54 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 3 |
| 55-75 | Chờ 21 bước (`-21`) | (31, 0) | (31, 0) | Dự kiến đứng yên tại (31, 0); mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 3 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (18, 25) (ô=818)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 11)
- Mảng hành động đã gửi server: `[2, 2, 1, 1, 0, 0, 0, 0, 0, 5, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 2, 5, 4, 4, 3, 4, 3, 3, 4, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (18, 25) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 120 |
| 3 | Di chuyển hướng 2 (`2`) | (19, 25) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 120 |
| 4 | Di chuyển hướng 1 (`1`) | (20, 25) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 120 |
| 5 | Di chuyển hướng 1 (`1`) | (20, 24) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 120 |
| 6 | Di chuyển hướng 0 (`0`) | (21, 23) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 120 |
| 7 | Di chuyển hướng 0 (`0`) | (20, 22) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 120 |
| 8 | Di chuyển hướng 0 (`0`) | (20, 21) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 120 |
| 9 | Di chuyển hướng 0 (`0`) | (19, 20) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 120 |
| 10 | Di chuyển hướng 0 (`0`) | (19, 19) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 120 |
| 11 | Di chuyển hướng 5 (`5`) | (18, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 120 |
| 12 | Di chuyển hướng 0 (`0`) | (17, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 120 |
| 13 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 120 |
| 14 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 120 |
| 15 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 120 |
| 16 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 120 |
| 17 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 120 |
| 18 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 120 |
| 19 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 120 |
| 20 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 120 |
| 21 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 120 |
| 22 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 120 |
| 23 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 120 |
| 24 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 120 |
| 25 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 120 |
| 26 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 120 |
| 27-28 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 120 |
| 29 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 120 |
| 30 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 120 |
| 31 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 120 |
| 32 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 120 |
| 33 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 120 |
| 34 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 120 |
| 35 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 120 |
| 36-75 | Chờ 40 bước (`-40`) | (15, 11) | (15, 11) | Dự kiến đứng yên tại (15, 11); hướng tới tọa độ (15, 11) | 120 |

