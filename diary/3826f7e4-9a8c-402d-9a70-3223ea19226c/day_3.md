# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 88
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 11 | #3 | #5 | (7, 27) | 28 | 120 |
| 19 | #1 | #6 | (21, 7) | 0 | 120 |
| 49 | #0 | #5 | (21, 15) | 0 | 120 |
| 50 | #4 | #6 | (13, 10) | 19 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (31, 27) (ô=895)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(30, 23)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(30, 23)
- Mảng hành động đã gửi server: `[0, 0, 5, 5, 0, 0, 5, 5, 0, 5, 5, 0, 0, 0, 0, 2, 1, 0, 0, -19, 3, 3, 2, 2, 3, 2, 2, 0, 1, 2, 2, 3, 3, 3, 2, 3, 4, 4, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (31, 27) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 32 |
| 1 | Di chuyển hướng 0 (`0`) | (30, 26) | (30, 25) | Dự kiến đến điểm hẹn tọa độ (30, 25) | 30 |
| 2 | Di chuyển hướng 5 (`5`) | (30, 25) | (29, 25) | Dự kiến đến điểm hẹn tọa độ (29, 25) | 28 |
| 3 | Di chuyển hướng 5 (`5`) | (29, 25) | (28, 25) | Dự kiến đến điểm hẹn tọa độ (28, 25) | 26 |
| 4 | Di chuyển hướng 0 (`0`) | (28, 25) | (27, 24) | Dự kiến đến điểm hẹn tọa độ (27, 24) | 24 |
| 5 | Di chuyển hướng 0 (`0`) | (27, 24) | (27, 23) | Dự kiến đến điểm hẹn tọa độ (27, 23) | 22 |
| 6 | Di chuyển hướng 5 (`5`) | (27, 23) | (26, 23) | Dự kiến đến điểm hẹn tọa độ (26, 23) | 20 |
| 7 | Di chuyển hướng 5 (`5`) | (26, 23) | (25, 23) | Dự kiến đến điểm hẹn tọa độ (25, 23) | 18 |
| 8 | Di chuyển hướng 0 (`0`) | (25, 23) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 16 |
| 9 | Di chuyển hướng 5 (`5`) | (24, 22) | (23, 22) | Dự kiến đến điểm hẹn tọa độ (23, 22) | 14 |
| 10-11 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 13 |
| 12-13 | Di chuyển hướng 0 (`0`) | (22, 22) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 12 |
| 14-15 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 11 |
| 16-18 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 9 |
| 19 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 7 |
| 20-21 | Di chuyển hướng 2 (`2`) | (20, 18) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 6 |
| 22-24 | Di chuyển hướng 1 (`1`) | (21, 18) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 4 |
| 25-27 | Di chuyển hướng 0 (`0`) | (22, 17) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 2 |
| 28-30 | Di chuyển hướng 0 (`0`) | (21, 16) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 0 |
| 31-49 | Chờ 19 bước (`-19`) | (21, 15) | (21, 15) | Dự kiến đứng yên tại (21, 15); mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 120 |
| 50-51 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 119 |
| 52-54 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 117 |
| 55-57 | Di chuyển hướng 2 (`2`) | (22, 17) | (23, 17) | Dự kiến đến điểm hẹn tọa độ (23, 17) | 115 |
| 58-59 | Di chuyển hướng 2 (`2`) | (23, 17) | (24, 17) | Dự kiến đến điểm hẹn tọa độ (24, 17) | 114 |
| 60 | Di chuyển hướng 3 (`3`) | (24, 17) | (24, 18) | Dự kiến đến điểm hẹn tọa độ (24, 18) | 112 |
| 61-63 | Di chuyển hướng 2 (`2`) | (24, 18) | (25, 18) | Dự kiến đến điểm hẹn tọa độ (25, 18) | 110 |
| 64-65 | Di chuyển hướng 2 (`2`) | (25, 18) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 109 |
| 66-67 | Di chuyển hướng 0 (`0`) | (26, 18) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 108 |
| 68-70 | Di chuyển hướng 1 (`1`) | (26, 17) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 106 |
| 71-72 | Di chuyển hướng 2 (`2`) | (26, 16) | (27, 16) | Dự kiến đến điểm hẹn tọa độ (27, 16) | 105 |
| 73-74 | Di chuyển hướng 2 (`2`) | (27, 16) | (28, 16) | Dự kiến đến điểm hẹn tọa độ (28, 16) | 104 |
| 75 | Di chuyển hướng 3 (`3`) | (28, 16) | (29, 17) | Dự kiến đến điểm hẹn tọa độ (29, 17) | 102 |
| 76 | Di chuyển hướng 3 (`3`) | (29, 17) | (29, 18) | Dự kiến đến điểm hẹn tọa độ (29, 18) | 100 |
| 77 | Di chuyển hướng 3 (`3`) | (29, 18) | (30, 19) | Dự kiến đến điểm hẹn tọa độ (30, 19) | 98 |
| 78 | Di chuyển hướng 2 (`2`) | (30, 19) | (31, 19) | Dự kiến đến điểm hẹn tọa độ (31, 19) | 96 |
| 79 | Di chuyển hướng 3 (`3`) | (31, 19) | (31, 20) | Dự kiến đến điểm hẹn tọa độ (31, 20) | 94 |
| 80 | Di chuyển hướng 4 (`4`) | (31, 20) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 92 |
| 81-82 | Di chuyển hướng 4 (`4`) | (31, 21) | (30, 22) | Dự kiến đến điểm hẹn tọa độ (30, 22) | 91 |
| 83-85 | Di chuyển hướng 4 (`4`) | (30, 22) | (30, 23) | Dự kiến đến điểm hẹn tọa độ (30, 23) | 89 |
| 86-87 | Chờ 2 bước (`-2`) | (30, 23) | (30, 23) | Dự kiến đứng yên tại (30, 23); hướng tới tọa độ (30, 23) | 89 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (21, 7) (ô=245)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(24, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(24, 6)
- Mảng hành động đã gửi server: `[-20, 5, 0, 0, 1, 0, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 5, 0, 1, 2, 5, 5, 5, 5, 5, 5, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-19 | Chờ 20 bước (`-20`) | (21, 7) | (21, 7) | Dự kiến đứng yên tại (21, 7); mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 120 |
| 20-21 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 119 |
| 22 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 117 |
| 23 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 115 |
| 24 | Di chuyển hướng 1 (`1`) | (19, 5) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 113 |
| 25 | Di chuyển hướng 0 (`0`) | (19, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 111 |
| 26 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 109 |
| 27-29 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 107 |
| 30-31 | Di chuyển hướng 2 (`2`) | (20, 1) | (21, 1) | Dự kiến đến điểm hẹn tọa độ (21, 1) | 106 |
| 32-33 | Di chuyển hướng 2 (`2`) | (21, 1) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 105 |
| 34-36 | Di chuyển hướng 2 (`2`) | (22, 1) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 103 |
| 37-38 | Di chuyển hướng 2 (`2`) | (23, 1) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 102 |
| 39-40 | Di chuyển hướng 2 (`2`) | (24, 1) | (25, 1) | Dự kiến đến điểm hẹn tọa độ (25, 1) | 101 |
| 41 | Di chuyển hướng 1 (`1`) | (25, 1) | (25, 0) | Dự kiến đến điểm hẹn tọa độ (25, 0) | 99 |
| 42 | Di chuyển hướng 2 (`2`) | (25, 0) | (26, 0) | Dự kiến đến điểm hẹn tọa độ (26, 0) | 97 |
| 43 | Di chuyển hướng 2 (`2`) | (26, 0) | (27, 0) | Dự kiến đến điểm hẹn tọa độ (27, 0) | 95 |
| 44 | Di chuyển hướng 2 (`2`) | (27, 0) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 93 |
| 45 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 91 |
| 46 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 89 |
| 47 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 87 |
| 48-49 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 86 |
| 50 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 84 |
| 51 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 82 |
| 52 | Di chuyển hướng 4 (`4`) | (28, 0) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 80 |
| 53-55 | Di chuyển hướng 4 (`4`) | (28, 1) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 78 |
| 56-58 | Di chuyển hướng 4 (`4`) | (27, 2) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 76 |
| 59-60 | Di chuyển hướng 3 (`3`) | (27, 3) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 75 |
| 61-62 | Di chuyển hướng 3 (`3`) | (27, 4) | (28, 5) | Dự kiến đến điểm hẹn tọa độ (28, 5) | 74 |
| 63-64 | Di chuyển hướng 3 (`3`) | (28, 5) | (28, 6) | Dự kiến đến điểm hẹn tọa độ (28, 6) | 73 |
| 65 | Di chuyển hướng 2 (`2`) | (28, 6) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 71 |
| 66 | Di chuyển hướng 2 (`2`) | (29, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 69 |
| 67 | Di chuyển hướng 2 (`2`) | (30, 6) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 67 |
| 68-69 | Di chuyển hướng 5 (`5`) | (31, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 66 |
| 70 | Di chuyển hướng 0 (`0`) | (30, 6) | (30, 5) | Dự kiến đến điểm hẹn tọa độ (30, 5) | 64 |
| 71 | Di chuyển hướng 1 (`1`) | (30, 5) | (30, 4) | Dự kiến đến điểm hẹn tọa độ (30, 4) | 62 |
| 72 | Di chuyển hướng 2 (`2`) | (30, 4) | (31, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=5, tọa độ=(31, 4)) | 60 |
| 73-74 | Di chuyển hướng 5 (`5`) | (31, 4) | (30, 4) | Dự kiến đến điểm hẹn tọa độ (30, 4) | 59 |
| 75 | Di chuyển hướng 5 (`5`) | (30, 4) | (29, 4) | Dự kiến đến điểm hẹn tọa độ (29, 4) | 57 |
| 76-78 | Di chuyển hướng 5 (`5`) | (29, 4) | (28, 4) | Dự kiến đến điểm hẹn tọa độ (28, 4) | 55 |
| 79-80 | Di chuyển hướng 5 (`5`) | (28, 4) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 54 |
| 81-82 | Di chuyển hướng 5 (`5`) | (27, 4) | (26, 4) | Dự kiến đến điểm hẹn tọa độ (26, 4) | 53 |
| 83-84 | Di chuyển hướng 5 (`5`) | (26, 4) | (25, 4) | Dự kiến đến điểm hẹn tọa độ (25, 4) | 52 |
| 85 | Di chuyển hướng 4 (`4`) | (25, 4) | (25, 5) | Dự kiến đến điểm hẹn tọa độ (25, 5) | 50 |
| 86-87 | Di chuyển hướng 4 (`4`) | (25, 5) | (24, 6) | Dự kiến đến điểm hẹn tọa độ (24, 6) | 49 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (22, 21) (ô=694)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #26 (thương hiệu=18, tọa độ=(30, 29))
- Địa điểm đích kế hoạch: Spot #26 (thương hiệu=18, tọa độ=(30, 29))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 5, 4, 3, 4, 4, 5, 2, 3, 3, 2, 2, 2, 1, 1, 2, 2, 2, 3, 2, 2, 2, 1, -44]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (22, 21) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 53 |
| 2 | Di chuyển hướng 4 (`4`) | (21, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 51 |
| 3 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 49 |
| 4 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 47 |
| 5 | Di chuyển hướng 5 (`5`) | (20, 25) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 45 |
| 6 | Di chuyển hướng 4 (`4`) | (19, 25) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 43 |
| 7 | Di chuyển hướng 3 (`3`) | (18, 26) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 41 |
| 8 | Di chuyển hướng 4 (`4`) | (19, 27) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 39 |
| 9 | Di chuyển hướng 4 (`4`) | (18, 28) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 37 |
| 10 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 35 |
| 11-12 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 34 |
| 13 | Di chuyển hướng 3 (`3`) | (18, 29) | (18, 30) | Dự kiến đến điểm hẹn tọa độ (18, 30) | 32 |
| 14-16 | Di chuyển hướng 3 (`3`) | (18, 30) | (19, 31) | Dự kiến đến điểm hẹn tọa độ (19, 31) | 30 |
| 17-19 | Di chuyển hướng 2 (`2`) | (19, 31) | (20, 31) | Dự kiến đến điểm hẹn tọa độ (20, 31) | 28 |
| 20-22 | Di chuyển hướng 2 (`2`) | (20, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 26 |
| 23-25 | Di chuyển hướng 2 (`2`) | (21, 31) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 24 |
| 26-27 | Di chuyển hướng 1 (`1`) | (22, 31) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 23 |
| 28 | Di chuyển hướng 1 (`1`) | (22, 30) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 21 |
| 29-30 | Di chuyển hướng 2 (`2`) | (23, 29) | (24, 29) | Dự kiến đến điểm hẹn tọa độ (24, 29) | 20 |
| 31-32 | Di chuyển hướng 2 (`2`) | (24, 29) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 19 |
| 33-34 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 18 |
| 35 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 16 |
| 36 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 14 |
| 37-38 | Di chuyển hướng 2 (`2`) | (27, 30) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 13 |
| 39-40 | Di chuyển hướng 2 (`2`) | (28, 30) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 12 |
| 41-43 | Di chuyển hướng 1 (`1`) | (29, 30) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 10 |
| 44-87 | Chờ 44 bước (`-44`) | (30, 29) | (30, 29) | Dự kiến đứng yên tại (30, 29); mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 10 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 26) (ô=840)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #27 (thương hiệu=19, tọa độ=(0, 30))
- Địa điểm đích kế hoạch: Spot #27 (thương hiệu=19, tọa độ=(0, 30))
- Mảng hành động đã gửi server: `[5, 5, 5, 2, 3, 3, 2, 3, 3, 3, 2, 5, 0, 0, 0, 5, 0, 5, 5, 4, 3, 4, 3, 5, 5, 2, 1, 0, 5, 5, 5, 4, -37]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (8, 26) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 34 |
| 3 | Di chuyển hướng 5 (`5`) | (7, 26) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 32 |
| 4-5 | Di chuyển hướng 5 (`5`) | (6, 26) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 31 |
| 6-8 | Di chuyển hướng 2 (`2`) | (5, 26) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 29 |
| 9-10 | Di chuyển hướng 3 (`3`) | (6, 26) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 120 |
| 11 | Di chuyển hướng 3 (`3`) | (7, 27) | (7, 28) | Dự kiến đến điểm hẹn tọa độ (7, 28) | 118 |
| 12 | Di chuyển hướng 2 (`2`) | (7, 28) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 116 |
| 13 | Di chuyển hướng 3 (`3`) | (8, 28) | (9, 29) | Dự kiến đến điểm hẹn tọa độ (9, 29) | 114 |
| 14 | Di chuyển hướng 3 (`3`) | (9, 29) | (9, 30) | Dự kiến đến điểm hẹn tọa độ (9, 30) | 112 |
| 15 | Di chuyển hướng 3 (`3`) | (9, 30) | (10, 31) | Dự kiến đến điểm hẹn tọa độ (10, 31) | 110 |
| 16 | Di chuyển hướng 2 (`2`) | (10, 31) | (11, 31) | Dự kiến đạt mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 108 |
| 17-18 | Di chuyển hướng 5 (`5`) | (11, 31) | (10, 31) | Dự kiến đến điểm hẹn tọa độ (10, 31) | 107 |
| 19 | Di chuyển hướng 0 (`0`) | (10, 31) | (9, 30) | Dự kiến đến điểm hẹn tọa độ (9, 30) | 105 |
| 20 | Di chuyển hướng 0 (`0`) | (9, 30) | (9, 29) | Dự kiến đến điểm hẹn tọa độ (9, 29) | 103 |
| 21 | Di chuyển hướng 0 (`0`) | (9, 29) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 101 |
| 22 | Di chuyển hướng 5 (`5`) | (8, 28) | (7, 28) | Dự kiến đến điểm hẹn tọa độ (7, 28) | 99 |
| 23 | Di chuyển hướng 0 (`0`) | (7, 28) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 97 |
| 24 | Di chuyển hướng 5 (`5`) | (7, 27) | (6, 27) | Dự kiến đến điểm hẹn tọa độ (6, 27) | 95 |
| 25-27 | Di chuyển hướng 5 (`5`) | (6, 27) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 93 |
| 28-30 | Di chuyển hướng 4 (`4`) | (5, 27) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 91 |
| 31 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 89 |
| 32 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 87 |
| 33 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 85 |
| 34-35 | Di chuyển hướng 5 (`5`) | (5, 31) | (4, 31) | Dự kiến đến điểm hẹn tọa độ (4, 31) | 84 |
| 36 | Di chuyển hướng 5 (`5`) | (4, 31) | (3, 31) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 82 |
| 37-38 | Di chuyển hướng 2 (`2`) | (3, 31) | (4, 31) | Dự kiến đến điểm hẹn tọa độ (4, 31) | 81 |
| 39 | Di chuyển hướng 1 (`1`) | (4, 31) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 79 |
| 40 | Di chuyển hướng 0 (`0`) | (4, 30) | (4, 29) | Dự kiến đến điểm hẹn tọa độ (4, 29) | 77 |
| 41-43 | Di chuyển hướng 5 (`5`) | (4, 29) | (3, 29) | Dự kiến đến điểm hẹn tọa độ (3, 29) | 75 |
| 44-46 | Di chuyển hướng 5 (`5`) | (3, 29) | (2, 29) | Dự kiến đến điểm hẹn tọa độ (2, 29) | 73 |
| 47-49 | Di chuyển hướng 5 (`5`) | (2, 29) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 71 |
| 50 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 69 |
| 51-87 | Chờ 37 bước (`-37`) | (0, 30) | (0, 30) | Dự kiến đứng yên tại (0, 30); mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 69 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (5, 12) (ô=389)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 28)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 28)
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 3, 3, 2, 2, 2, 5, 4, 4, 3, 4, 4, 4, 4, 5, 4, 4, 4, 4, 4, 3, 3, 3, 2, 2, 3, 2, 3, 4, 4, 4, 4, 3, 3, 3, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 66 |
| 2-3 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 65 |
| 4 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 63 |
| 5-6 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 62 |
| 7-9 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 60 |
| 10-12 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 58 |
| 13-15 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 56 |
| 16-18 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 54 |
| 19-20 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 53 |
| 21-23 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 51 |
| 24-25 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 50 |
| 26-28 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 48 |
| 29 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 46 |
| 30 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 44 |
| 31-32 | Di chuyển hướng 4 (`4`) | (13, 0) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 43 |
| 33 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 41 |
| 34 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 39 |
| 35 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 37 |
| 36 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 35 |
| 37-38 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 34 |
| 39 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 32 |
| 40-41 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 31 |
| 42 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 29 |
| 43 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 27 |
| 44 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 25 |
| 45 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 23 |
| 46 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 21 |
| 47-49 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 120 |
| 50-51 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 119 |
| 52 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 117 |
| 53-54 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 116 |
| 55-56 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 115 |
| 57 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 113 |
| 58 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 111 |
| 59 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 109 |
| 60 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 107 |
| 61 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 105 |
| 62 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 103 |
| 63 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 101 |
| 64 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 99 |
| 65 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 97 |
| 66 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 95 |
| 67-68 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 94 |
| 69-70 | Di chuyển hướng 4 (`4`) | (15, 21) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 93 |
| 71-72 | Di chuyển hướng 4 (`4`) | (14, 22) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 92 |
| 73-74 | Di chuyển hướng 4 (`4`) | (14, 23) | (13, 24) | Dự kiến đến điểm hẹn tọa độ (13, 24) | 91 |
| 75-77 | Di chuyển hướng 4 (`4`) | (13, 24) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 89 |
| 78-79 | Di chuyển hướng 3 (`3`) | (13, 25) | (13, 26) | Dự kiến đến điểm hẹn tọa độ (13, 26) | 88 |
| 80-81 | Di chuyển hướng 3 (`3`) | (13, 26) | (14, 27) | Dự kiến đến điểm hẹn tọa độ (14, 27) | 87 |
| 82-84 | Di chuyển hướng 3 (`3`) | (14, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 85 |
| 85-86 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 84 |
| 87 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 82 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (5, 31) (ô=997)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=1, tọa độ=(21, 15))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=1, tọa độ=(21, 15))
- Mảng hành động đã gửi server: `[0, 1, 0, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, -39]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (5, 31) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 120 |
| 2 | Di chuyển hướng 1 (`1`) | (4, 30) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 120 |
| 3 | Di chuyển hướng 0 (`0`) | (5, 29) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 120 |
| 4 | Di chuyển hướng 1 (`1`) | (4, 28) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 120 |
| 5-7 | Di chuyển hướng 2 (`2`) | (5, 27) | (6, 27) | Dự kiến đến điểm hẹn tọa độ (6, 27) | 120 |
| 8-10 | Di chuyển hướng 2 (`2`) | (6, 27) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 120 |
| 11 | Di chuyển hướng 1 (`1`) | (7, 27) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 120 |
| 12 | Di chuyển hướng 1 (`1`) | (7, 26) | (8, 25) | Dự kiến đến điểm hẹn tọa độ (8, 25) | 120 |
| 13-14 | Di chuyển hướng 1 (`1`) | (8, 25) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 120 |
| 15 | Di chuyển hướng 1 (`1`) | (8, 24) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 120 |
| 16-17 | Di chuyển hướng 1 (`1`) | (9, 23) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 120 |
| 18-19 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 120 |
| 20-21 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 120 |
| 22-24 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 120 |
| 25 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 120 |
| 26 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 120 |
| 27 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 120 |
| 28 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 120 |
| 29-30 | Di chuyển hướng 1 (`1`) | (14, 20) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 120 |
| 31-32 | Di chuyển hướng 1 (`1`) | (15, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 120 |
| 33-34 | Di chuyển hướng 1 (`1`) | (15, 18) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 120 |
| 35-37 | Di chuyển hướng 1 (`1`) | (16, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 120 |
| 38 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 120 |
| 39 | Di chuyển hướng 2 (`2`) | (17, 15) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 120 |
| 40-42 | Di chuyển hướng 2 (`2`) | (18, 15) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 120 |
| 43-45 | Di chuyển hướng 2 (`2`) | (19, 15) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 120 |
| 46-48 | Di chuyển hướng 2 (`2`) | (20, 15) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 120 |
| 49-87 | Chờ 39 bước (`-39`) | (21, 15) | (21, 15) | Dự kiến đứng yên tại (21, 15); mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 120 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (12, 11) (ô=364)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 10)
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 1, 2, 2, 1, 2, 1, 2, 5, 0, 5, 5, 0, 0, 5, 4, 4, 3, 4, 4, 4, -50]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 120 |
| 2 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 120 |
| 3 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 120 |
| 4 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 120 |
| 5 | Di chuyển hướng 1 (`1`) | (15, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 120 |
| 6-8 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 120 |
| 9-11 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 120 |
| 12-14 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 120 |
| 15 | Di chuyển hướng 2 (`2`) | (18, 8) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 120 |
| 16-17 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 120 |
| 18 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 120 |
| 19-20 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 120 |
| 21 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 120 |
| 22 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 120 |
| 23 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 120 |
| 24-25 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 120 |
| 26-27 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 120 |
| 28-29 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 120 |
| 30 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 120 |
| 31 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 120 |
| 32 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 120 |
| 33 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 120 |
| 34 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 120 |
| 35-37 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 120 |
| 38-87 | Chờ 50 bước (`-50`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); hướng tới tọa độ (13, 10) | 120 |

