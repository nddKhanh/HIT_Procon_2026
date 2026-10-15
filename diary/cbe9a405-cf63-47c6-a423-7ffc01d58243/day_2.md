# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 88
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 10 | #2 | #5 | (9, 23) | 69 | 120 |
| 25 | #3 | #5 | (5, 31) | 0 | 120 |
| 26 | #4 | #6 | (13, 11) | 12 | 120 |
| 27 | #0 | #6 | (12, 11) | 3 | 120 |
| 27 | #4 | #6 | (12, 11) | 118 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 11) (ô=364)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(31, 27)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(31, 27)
- Mảng hành động đã gửi server: `[-28, 2, 2, 3, 2, 3, 3, 3, 4, 3, 3, 2, 3, 3, 3, 3, 3, 4, 4, 5, 4, 3, 4, 4, 5, 2, 1, 1, 0, 1, 2, 3, 3, 3, 3, 3, 4, 1, 1, 2, 2, 2, 3, 2, 2, 2, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-27 | Chờ 28 bước (`-28`) | (12, 11) | (12, 11) | Dự kiến đứng yên tại (12, 11); mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 120 |
| 28-29 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 119 |
| 30 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 117 |
| 31 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 115 |
| 32-33 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 114 |
| 34 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 112 |
| 35 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 110 |
| 36 | Di chuyển hướng 3 (`3`) | (16, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 108 |
| 37 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 106 |
| 38 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 104 |
| 39 | Di chuyển hướng 3 (`3`) | (17, 17) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 102 |
| 40 | Di chuyển hướng 2 (`2`) | (17, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 100 |
| 41 | Di chuyển hướng 3 (`3`) | (18, 18) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 98 |
| 42 | Di chuyển hướng 3 (`3`) | (19, 19) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 96 |
| 43 | Di chuyển hướng 3 (`3`) | (19, 20) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 94 |
| 44 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 92 |
| 45 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 90 |
| 46 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 88 |
| 47 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 86 |
| 48 | Di chuyển hướng 5 (`5`) | (20, 25) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 84 |
| 49 | Di chuyển hướng 4 (`4`) | (19, 25) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 82 |
| 50 | Di chuyển hướng 3 (`3`) | (18, 26) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 80 |
| 51 | Di chuyển hướng 4 (`4`) | (19, 27) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 78 |
| 52 | Di chuyển hướng 4 (`4`) | (18, 28) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 76 |
| 53 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 74 |
| 54-55 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 73 |
| 56 | Di chuyển hướng 1 (`1`) | (18, 29) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 71 |
| 57 | Di chuyển hướng 1 (`1`) | (18, 28) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 69 |
| 58 | Di chuyển hướng 0 (`0`) | (19, 27) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 67 |
| 59 | Di chuyển hướng 1 (`1`) | (18, 26) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 65 |
| 60 | Di chuyển hướng 2 (`2`) | (19, 25) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 63 |
| 61 | Di chuyển hướng 3 (`3`) | (20, 25) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 61 |
| 62 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đến điểm hẹn tọa độ (21, 27) | 59 |
| 63 | Di chuyển hướng 3 (`3`) | (21, 27) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 57 |
| 64 | Di chuyển hướng 3 (`3`) | (21, 28) | (22, 29) | Dự kiến đến điểm hẹn tọa độ (22, 29) | 55 |
| 65 | Di chuyển hướng 3 (`3`) | (22, 29) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 53 |
| 66 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 51 |
| 67-68 | Di chuyển hướng 1 (`1`) | (22, 31) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 50 |
| 69 | Di chuyển hướng 1 (`1`) | (22, 30) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 48 |
| 70-71 | Di chuyển hướng 2 (`2`) | (23, 29) | (24, 29) | Dự kiến đến điểm hẹn tọa độ (24, 29) | 47 |
| 72-73 | Di chuyển hướng 2 (`2`) | (24, 29) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 46 |
| 74-75 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 45 |
| 76 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 43 |
| 77 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 41 |
| 78-79 | Di chuyển hướng 2 (`2`) | (27, 30) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 40 |
| 80-81 | Di chuyển hướng 2 (`2`) | (28, 30) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 39 |
| 82-84 | Di chuyển hướng 1 (`1`) | (29, 30) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 37 |
| 85-86 | Di chuyển hướng 1 (`1`) | (30, 29) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 36 |
| 87 | Di chuyển hướng 1 (`1`) | (30, 28) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 34 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (31, 22) (ô=735)
- Nhiên liệu đầu ngày: 102
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=8, tọa độ=(21, 7))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=8, tọa độ=(21, 7))
- Mảng hành động đã gửi server: `[0, 1, 0, 5, 0, 0, 0, 0, 0, 1, 0, 0, 0, 5, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 5, 5, 5, 5, 4, 5, 5, 4, 5, 4, 5, 4, 4, 5, 0, 0, 1, 1, 2, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (31, 22) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 101 |
| 2-3 | Di chuyển hướng 1 (`1`) | (31, 21) | (31, 20) | Dự kiến đến điểm hẹn tọa độ (31, 20) | 100 |
| 4 | Di chuyển hướng 0 (`0`) | (31, 20) | (31, 19) | Dự kiến đến điểm hẹn tọa độ (31, 19) | 98 |
| 5 | Di chuyển hướng 5 (`5`) | (31, 19) | (30, 19) | Dự kiến đến điểm hẹn tọa độ (30, 19) | 96 |
| 6 | Di chuyển hướng 0 (`0`) | (30, 19) | (29, 18) | Dự kiến đến điểm hẹn tọa độ (29, 18) | 94 |
| 7 | Di chuyển hướng 0 (`0`) | (29, 18) | (29, 17) | Dự kiến đến điểm hẹn tọa độ (29, 17) | 92 |
| 8 | Di chuyển hướng 0 (`0`) | (29, 17) | (28, 16) | Dự kiến đến điểm hẹn tọa độ (28, 16) | 90 |
| 9 | Di chuyển hướng 0 (`0`) | (28, 16) | (28, 15) | Dự kiến đến điểm hẹn tọa độ (28, 15) | 88 |
| 10 | Di chuyển hướng 0 (`0`) | (28, 15) | (27, 14) | Dự kiến đến điểm hẹn tọa độ (27, 14) | 86 |
| 11 | Di chuyển hướng 1 (`1`) | (27, 14) | (28, 13) | Dự kiến đến điểm hẹn tọa độ (28, 13) | 84 |
| 12 | Di chuyển hướng 0 (`0`) | (28, 13) | (27, 12) | Dự kiến đến điểm hẹn tọa độ (27, 12) | 82 |
| 13 | Di chuyển hướng 0 (`0`) | (27, 12) | (27, 11) | Dự kiến đến điểm hẹn tọa độ (27, 11) | 80 |
| 14 | Di chuyển hướng 0 (`0`) | (27, 11) | (26, 10) | Dự kiến đến điểm hẹn tọa độ (26, 10) | 78 |
| 15 | Di chuyển hướng 5 (`5`) | (26, 10) | (25, 10) | Dự kiến đến điểm hẹn tọa độ (25, 10) | 76 |
| 16 | Di chuyển hướng 0 (`0`) | (25, 10) | (25, 9) | Dự kiến đến điểm hẹn tọa độ (25, 9) | 74 |
| 17 | Di chuyển hướng 0 (`0`) | (25, 9) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 72 |
| 18 | Di chuyển hướng 1 (`1`) | (24, 8) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 70 |
| 19 | Di chuyển hướng 1 (`1`) | (25, 7) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 68 |
| 20 | Di chuyển hướng 1 (`1`) | (25, 6) | (26, 5) | Dự kiến đến điểm hẹn tọa độ (26, 5) | 66 |
| 21 | Di chuyển hướng 1 (`1`) | (26, 5) | (26, 4) | Dự kiến đến điểm hẹn tọa độ (26, 4) | 64 |
| 22-23 | Di chuyển hướng 1 (`1`) | (26, 4) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 63 |
| 24-25 | Di chuyển hướng 1 (`1`) | (27, 3) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 62 |
| 26-28 | Di chuyển hướng 1 (`1`) | (27, 2) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 60 |
| 29-31 | Di chuyển hướng 1 (`1`) | (28, 1) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 58 |
| 32 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 56 |
| 33 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 54 |
| 34 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 52 |
| 35-36 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 51 |
| 37 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 49 |
| 38 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 47 |
| 39 | Di chuyển hướng 4 (`4`) | (28, 0) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 45 |
| 40-42 | Di chuyển hướng 4 (`4`) | (28, 1) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 43 |
| 43-45 | Di chuyển hướng 4 (`4`) | (27, 2) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 41 |
| 46-47 | Di chuyển hướng 3 (`3`) | (27, 3) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 40 |
| 48-49 | Di chuyển hướng 3 (`3`) | (27, 4) | (28, 5) | Dự kiến đến điểm hẹn tọa độ (28, 5) | 39 |
| 50-51 | Di chuyển hướng 3 (`3`) | (28, 5) | (28, 6) | Dự kiến đến điểm hẹn tọa độ (28, 6) | 38 |
| 52 | Di chuyển hướng 2 (`2`) | (28, 6) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 36 |
| 53 | Di chuyển hướng 2 (`2`) | (29, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 34 |
| 54 | Di chuyển hướng 2 (`2`) | (30, 6) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 32 |
| 55-56 | Di chuyển hướng 5 (`5`) | (31, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 31 |
| 57 | Di chuyển hướng 5 (`5`) | (30, 6) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 29 |
| 58 | Di chuyển hướng 5 (`5`) | (29, 6) | (28, 6) | Dự kiến đến điểm hẹn tọa độ (28, 6) | 27 |
| 59 | Di chuyển hướng 5 (`5`) | (28, 6) | (27, 6) | Dự kiến đến điểm hẹn tọa độ (27, 6) | 25 |
| 60 | Di chuyển hướng 4 (`4`) | (27, 6) | (27, 7) | Dự kiến đến điểm hẹn tọa độ (27, 7) | 23 |
| 61-62 | Di chuyển hướng 5 (`5`) | (27, 7) | (26, 7) | Dự kiến đến điểm hẹn tọa độ (26, 7) | 22 |
| 63-65 | Di chuyển hướng 5 (`5`) | (26, 7) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 20 |
| 66 | Di chuyển hướng 4 (`4`) | (25, 7) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 18 |
| 67 | Di chuyển hướng 5 (`5`) | (24, 8) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 16 |
| 68 | Di chuyển hướng 4 (`4`) | (23, 8) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 14 |
| 69 | Di chuyển hướng 5 (`5`) | (23, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 12 |
| 70-71 | Di chuyển hướng 4 (`4`) | (22, 9) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 11 |
| 72-74 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(21, 11)) | 9 |
| 75-76 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 8 |
| 77 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 6 |
| 78-79 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 5 |
| 80 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 3 |
| 81-82 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 2 |
| 83 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 0 |
| 84-87 | Chờ 4 bước (`-4`) | (21, 7) | (21, 7) | Dự kiến đứng yên tại (21, 7); mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 31) (ô=1002)
- Nhiên liệu đầu ngày: 86
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=1, tọa độ=(22, 21))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=1, tọa độ=(22, 21))
- Mảng hành động đã gửi server: `[0, 0, 0, 5, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 5, 2, 3, 3, 3, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 1, 0, 3, 2, 2, 2, 2, 1, 1, 1, 4, 3, 4, 4, 5, 5, 5, 4, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (10, 31) | (9, 30) | Dự kiến đến điểm hẹn tọa độ (9, 30) | 84 |
| 1 | Di chuyển hướng 0 (`0`) | (9, 30) | (9, 29) | Dự kiến đến điểm hẹn tọa độ (9, 29) | 82 |
| 2 | Di chuyển hướng 0 (`0`) | (9, 29) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 80 |
| 3 | Di chuyển hướng 5 (`5`) | (8, 28) | (7, 28) | Dự kiến đến điểm hẹn tọa độ (7, 28) | 78 |
| 4 | Di chuyển hướng 0 (`0`) | (7, 28) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 76 |
| 5 | Di chuyển hướng 1 (`1`) | (7, 27) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 74 |
| 6 | Di chuyển hướng 1 (`1`) | (7, 26) | (8, 25) | Dự kiến đến điểm hẹn tọa độ (8, 25) | 72 |
| 7-8 | Di chuyển hướng 1 (`1`) | (8, 25) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 71 |
| 9 | Di chuyển hướng 1 (`1`) | (8, 24) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 120 |
| 10-11 | Di chuyển hướng 1 (`1`) | (9, 23) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 119 |
| 12-13 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 118 |
| 14-15 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 117 |
| 16-18 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 115 |
| 19 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 113 |
| 20 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 111 |
| 21 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 109 |
| 22 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 107 |
| 23-24 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 106 |
| 25 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 104 |
| 26 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 102 |
| 27 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 100 |
| 28 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 98 |
| 29 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 96 |
| 30 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 94 |
| 31 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 92 |
| 32-33 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 91 |
| 34-35 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 90 |
| 36-37 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 89 |
| 38-40 | Di chuyển hướng 2 (`2`) | (17, 20) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 87 |
| 41-43 | Di chuyển hướng 2 (`2`) | (18, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 85 |
| 44 | Di chuyển hướng 2 (`2`) | (19, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 83 |
| 45 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 81 |
| 46 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 79 |
| 47-48 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 78 |
| 49 | Di chuyển hướng 2 (`2`) | (21, 19) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 76 |
| 50-51 | Di chuyển hướng 2 (`2`) | (22, 19) | (23, 19) | Dự kiến đến điểm hẹn tọa độ (23, 19) | 75 |
| 52-53 | Di chuyển hướng 2 (`2`) | (23, 19) | (24, 19) | Dự kiến đến điểm hẹn tọa độ (24, 19) | 74 |
| 54 | Di chuyển hướng 2 (`2`) | (24, 19) | (25, 19) | Dự kiến đến điểm hẹn tọa độ (25, 19) | 72 |
| 55-57 | Di chuyển hướng 1 (`1`) | (25, 19) | (25, 18) | Dự kiến đến điểm hẹn tọa độ (25, 18) | 70 |
| 58-59 | Di chuyển hướng 1 (`1`) | (25, 18) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 69 |
| 60-62 | Di chuyển hướng 1 (`1`) | (26, 17) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 67 |
| 63-64 | Di chuyển hướng 4 (`4`) | (26, 16) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 66 |
| 65-67 | Di chuyển hướng 3 (`3`) | (26, 17) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 64 |
| 68-69 | Di chuyển hướng 4 (`4`) | (26, 18) | (26, 19) | Dự kiến đến điểm hẹn tọa độ (26, 19) | 63 |
| 70 | Di chuyển hướng 4 (`4`) | (26, 19) | (25, 20) | Dự kiến đến điểm hẹn tọa độ (25, 20) | 61 |
| 71 | Di chuyển hướng 5 (`5`) | (25, 20) | (24, 20) | Dự kiến đến điểm hẹn tọa độ (24, 20) | 59 |
| 72-73 | Di chuyển hướng 5 (`5`) | (24, 20) | (23, 20) | Dự kiến đến điểm hẹn tọa độ (23, 20) | 58 |
| 74 | Di chuyển hướng 5 (`5`) | (23, 20) | (22, 20) | Dự kiến đến điểm hẹn tọa độ (22, 20) | 56 |
| 75-77 | Di chuyển hướng 4 (`4`) | (22, 20) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 54 |
| 78-87 | Chờ 10 bước (`-10`) | (22, 21) | (22, 21) | Dự kiến đứng yên tại (22, 21); mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 54 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 30) (ô=960)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 26)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 26)
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 3, 3, -13, 0, 1, 0, 1, 2, 2, 3, 2, 3, 3, 3, 2, 5, 0, 0, 0, 5, 0, 1, 2, 2, 3, 2, 2, 3, 2, 2, 5, 5, 0, 0, 0, 5, 5, 0, 5, 0, 5, 5, 2, 2, 3, 4, 4, 2, 2, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 10 |
| 2 | Di chuyển hướng 2 (`2`) | (1, 29) | (2, 29) | Dự kiến đến điểm hẹn tọa độ (2, 29) | 8 |
| 3-5 | Di chuyển hướng 2 (`2`) | (2, 29) | (3, 29) | Dự kiến đến điểm hẹn tọa độ (3, 29) | 6 |
| 6-8 | Di chuyển hướng 2 (`2`) | (3, 29) | (4, 29) | Dự kiến đến điểm hẹn tọa độ (4, 29) | 4 |
| 9-11 | Di chuyển hướng 3 (`3`) | (4, 29) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 2 |
| 12 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 0 |
| 13-25 | Chờ 13 bước (`-13`) | (5, 31) | (5, 31) | Dự kiến đứng yên tại (5, 31); mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 120 |
| 26-27 | Di chuyển hướng 0 (`0`) | (5, 31) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 119 |
| 28 | Di chuyển hướng 1 (`1`) | (4, 30) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 117 |
| 29 | Di chuyển hướng 0 (`0`) | (5, 29) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 115 |
| 30 | Di chuyển hướng 1 (`1`) | (4, 28) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 113 |
| 31-33 | Di chuyển hướng 2 (`2`) | (5, 27) | (6, 27) | Dự kiến đến điểm hẹn tọa độ (6, 27) | 111 |
| 34-36 | Di chuyển hướng 2 (`2`) | (6, 27) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 109 |
| 37 | Di chuyển hướng 3 (`3`) | (7, 27) | (7, 28) | Dự kiến đến điểm hẹn tọa độ (7, 28) | 107 |
| 38 | Di chuyển hướng 2 (`2`) | (7, 28) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 105 |
| 39 | Di chuyển hướng 3 (`3`) | (8, 28) | (9, 29) | Dự kiến đến điểm hẹn tọa độ (9, 29) | 103 |
| 40 | Di chuyển hướng 3 (`3`) | (9, 29) | (9, 30) | Dự kiến đến điểm hẹn tọa độ (9, 30) | 101 |
| 41 | Di chuyển hướng 3 (`3`) | (9, 30) | (10, 31) | Dự kiến đến điểm hẹn tọa độ (10, 31) | 99 |
| 42 | Di chuyển hướng 2 (`2`) | (10, 31) | (11, 31) | Dự kiến đạt mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 97 |
| 43-44 | Di chuyển hướng 5 (`5`) | (11, 31) | (10, 31) | Dự kiến đến điểm hẹn tọa độ (10, 31) | 96 |
| 45 | Di chuyển hướng 0 (`0`) | (10, 31) | (9, 30) | Dự kiến đến điểm hẹn tọa độ (9, 30) | 94 |
| 46 | Di chuyển hướng 0 (`0`) | (9, 30) | (9, 29) | Dự kiến đến điểm hẹn tọa độ (9, 29) | 92 |
| 47 | Di chuyển hướng 0 (`0`) | (9, 29) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 90 |
| 48 | Di chuyển hướng 5 (`5`) | (8, 28) | (7, 28) | Dự kiến đến điểm hẹn tọa độ (7, 28) | 88 |
| 49 | Di chuyển hướng 0 (`0`) | (7, 28) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 86 |
| 50 | Di chuyển hướng 1 (`1`) | (7, 27) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 84 |
| 51 | Di chuyển hướng 2 (`2`) | (7, 26) | (8, 26) | Dự kiến đến điểm hẹn tọa độ (8, 26) | 82 |
| 52-54 | Di chuyển hướng 2 (`2`) | (8, 26) | (9, 26) | Dự kiến đến điểm hẹn tọa độ (9, 26) | 80 |
| 55-56 | Di chuyển hướng 3 (`3`) | (9, 26) | (10, 27) | Dự kiến đến điểm hẹn tọa độ (10, 27) | 79 |
| 57-58 | Di chuyển hướng 2 (`2`) | (10, 27) | (11, 27) | Dự kiến đến điểm hẹn tọa độ (11, 27) | 78 |
| 59-60 | Di chuyển hướng 2 (`2`) | (11, 27) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 77 |
| 61 | Di chuyển hướng 3 (`3`) | (12, 27) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 75 |
| 62 | Di chuyển hướng 2 (`2`) | (12, 28) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 73 |
| 63 | Di chuyển hướng 2 (`2`) | (13, 28) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 71 |
| 64-65 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 70 |
| 66 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 68 |
| 67 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 66 |
| 68 | Di chuyển hướng 0 (`0`) | (12, 27) | (11, 26) | Dự kiến đến điểm hẹn tọa độ (11, 26) | 64 |
| 69 | Di chuyển hướng 0 (`0`) | (11, 26) | (11, 25) | Dự kiến đến điểm hẹn tọa độ (11, 25) | 62 |
| 70 | Di chuyển hướng 5 (`5`) | (11, 25) | (10, 25) | Dự kiến đến điểm hẹn tọa độ (10, 25) | 60 |
| 71 | Di chuyển hướng 5 (`5`) | (10, 25) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 58 |
| 72 | Di chuyển hướng 0 (`0`) | (9, 25) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 56 |
| 73 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 54 |
| 74 | Di chuyển hướng 0 (`0`) | (7, 24) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 52 |
| 75 | Di chuyển hướng 5 (`5`) | (7, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 50 |
| 76 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 48 |
| 77-78 | Di chuyển hướng 2 (`2`) | (5, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 47 |
| 79 | Di chuyển hướng 2 (`2`) | (6, 23) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 45 |
| 80 | Di chuyển hướng 3 (`3`) | (7, 23) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 43 |
| 81 | Di chuyển hướng 4 (`4`) | (7, 24) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 41 |
| 82 | Di chuyển hướng 4 (`4`) | (7, 25) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 39 |
| 83-84 | Di chuyển hướng 2 (`2`) | (6, 26) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 38 |
| 85 | Di chuyển hướng 2 (`2`) | (7, 26) | (8, 26) | Dự kiến đến điểm hẹn tọa độ (8, 26) | 36 |
| 86-87 | Chờ 2 bước (`-2`) | (8, 26) | (8, 26) | Dự kiến đứng yên tại (8, 26); hướng tới tọa độ (8, 26) | 36 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (15, 0) (ô=15)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=10, tọa độ=(5, 12))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=10, tọa độ=(5, 12))
- Mảng hành động đã gửi server: `[5, 5, 4, 4, 3, 3, 2, 2, 2, 5, 4, 4, 3, 4, 4, 4, 4, 5, 4, 5, 5, 5, 5, 5, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 1, 1, 1, 4, 4, 4, 3, 3, 3, 3, 3, 2, 3, 3, 2, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (15, 0) | (14, 0) | Dự kiến đến điểm hẹn tọa độ (14, 0) | 39 |
| 3-4 | Di chuyển hướng 5 (`5`) | (14, 0) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 38 |
| 5-6 | Di chuyển hướng 4 (`4`) | (13, 0) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 37 |
| 7 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 35 |
| 8 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 33 |
| 9 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 31 |
| 10 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 29 |
| 11-12 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 28 |
| 13 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 26 |
| 14-15 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 25 |
| 16 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 23 |
| 17 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 21 |
| 18 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 19 |
| 19 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 17 |
| 20 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 15 |
| 21-23 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 13 |
| 24-25 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 120 |
| 26 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 120 |
| 27-28 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 119 |
| 29-30 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 118 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 117 |
| 33-34 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 116 |
| 35-37 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 114 |
| 38 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 112 |
| 39-40 | Di chuyển hướng 0 (`0`) | (6, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 111 |
| 41-42 | Di chuyển hướng 0 (`0`) | (6, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 110 |
| 43 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 108 |
| 44 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 106 |
| 45 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 104 |
| 46 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 102 |
| 47 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 100 |
| 48 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 98 |
| 49 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 96 |
| 50 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 94 |
| 51 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 92 |
| 52 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 90 |
| 53-54 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 89 |
| 55-56 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 88 |
| 57-58 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 87 |
| 59 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 85 |
| 60 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 83 |
| 61 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 81 |
| 62 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 79 |
| 63 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 77 |
| 64 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 75 |
| 65 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 73 |
| 66 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 71 |
| 67 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 69 |
| 68 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 67 |
| 69-87 | Chờ 19 bước (`-19`) | (5, 12) | (5, 12) | Dự kiến đứng yên tại (5, 12); mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 67 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (9, 19) (ô=617)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #29 (thương hiệu=21, tọa độ=(5, 31))
- Địa điểm đích kế hoạch: Spot #29 (thương hiệu=21, tọa độ=(5, 31))
- Mảng hành động đã gửi server: `[3, 3, 4, 4, 4, 5, 4, 4, 5, 4, 4, 3, 4, 3, -63]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (9, 19) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 120 |
| 2-4 | Di chuyển hướng 3 (`3`) | (9, 20) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 120 |
| 5-6 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 120 |
| 7-8 | Di chuyển hướng 4 (`4`) | (9, 22) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 120 |
| 9-10 | Di chuyển hướng 4 (`4`) | (9, 23) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 120 |
| 11 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 120 |
| 12 | Di chuyển hướng 4 (`4`) | (7, 24) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 120 |
| 13 | Di chuyển hướng 4 (`4`) | (7, 25) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 120 |
| 14-15 | Di chuyển hướng 5 (`5`) | (6, 26) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 120 |
| 16-18 | Di chuyển hướng 4 (`4`) | (5, 26) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 120 |
| 19-21 | Di chuyển hướng 4 (`4`) | (5, 27) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 120 |
| 22 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 120 |
| 23 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 120 |
| 24 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 120 |
| 25-87 | Chờ 63 bước (`-63`) | (5, 31) | (5, 31) | Dự kiến đứng yên tại (5, 31); mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 120 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (26, 18) (ô=602)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=9, tọa độ=(12, 11))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=9, tọa độ=(12, 11))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 5, 4, 5, 0, 0, 5, 0, 0, 1, 0, 0, 0, 5, 0, 5, 5, -61]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (26, 18) | (26, 19) | Dự kiến đến điểm hẹn tọa độ (26, 19) | 120 |
| 2 | Di chuyển hướng 5 (`5`) | (26, 19) | (25, 19) | Dự kiến đến điểm hẹn tọa độ (25, 19) | 120 |
| 3-5 | Di chuyển hướng 5 (`5`) | (25, 19) | (24, 19) | Dự kiến đến điểm hẹn tọa độ (24, 19) | 120 |
| 6 | Di chuyển hướng 5 (`5`) | (24, 19) | (23, 19) | Dự kiến đến điểm hẹn tọa độ (23, 19) | 120 |
| 7-8 | Di chuyển hướng 5 (`5`) | (23, 19) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 120 |
| 9-10 | Di chuyển hướng 5 (`5`) | (22, 19) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 120 |
| 11 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 120 |
| 12 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 120 |
| 13 | Di chuyển hướng 0 (`0`) | (19, 20) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 120 |
| 14 | Di chuyển hướng 0 (`0`) | (19, 19) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 120 |
| 15 | Di chuyển hướng 5 (`5`) | (18, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 120 |
| 16 | Di chuyển hướng 0 (`0`) | (17, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 120 |
| 17 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 120 |
| 18 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 120 |
| 19 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 120 |
| 20 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 120 |
| 21 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 120 |
| 22 | Di chuyển hướng 5 (`5`) | (15, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 120 |
| 23-24 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 120 |
| 25 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 120 |
| 26 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 120 |
| 27-87 | Chờ 61 bước (`-61`) | (12, 11) | (12, 11) | Dự kiến đứng yên tại (12, 11); mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 120 |

