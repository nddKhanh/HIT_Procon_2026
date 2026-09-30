# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 160
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 22 | #1 | #4 | (11, 11) | 0 | 64 |
| 25 | #2 | #5 | (8, 23) | 1 | 64 |
| 40 | #2 | #4 | (11, 11) | 39 | 64 |
| 44 | #2 | #4 | (11, 11) | 62 | 64 |
| 46 | #2 | #5 | (10, 11) | 63 | 64 |
| 56 | #0 | #4 | (5, 7) | 4 | 64 |
| 58 | #0 | #4 | (6, 7) | 63 | 64 |
| 59 | #0 | #4 | (6, 8) | 62 | 64 |
| 60 | #0 | #4 | (7, 9) | 62 | 64 |
| 62 | #0 | #4 | (8, 9) | 63 | 64 |
| 64 | #0 | #4 | (8, 10) | 63 | 64 |
| 66 | #0 | #4 | (9, 10) | 62 | 64 |
| 68 | #0 | #5 | (10, 11) | 62 | 64 |
| 70 | #2 | #4 | (9, 10) | 40 | 64 |
| 72 | #2 | #5 | (10, 11) | 62 | 64 |
| 75 | #0 | #5 | (10, 11) | 59 | 64 |
| 76 | #0 | #4 | (9, 10) | 62 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 7) (ô=229)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(11, 27))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(11, 27))
- Mảng hành động đã gửi server: `[-56, 2, 3, 3, 2, 3, 2, 3, 2, 2, 5, 5, 0, 5, 5, 4, 3, 3, 3, 2, 3, 3, 3, 2, 1, 1, 1, 0, 5, 4, 4, 4, 4, 3, 4, 3, 4, 4, 5, 4, 3, 3, 3, 2, 3, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-55 | Chờ 56 bước (`-56`) | (5, 7) | (5, 7) | Dự kiến đứng yên tại (5, 7); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 7)) | 64 |
| 56-57 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 64 |
| 58 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 64 |
| 59 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 64 |
| 60-61 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 64 |
| 62-63 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 64 |
| 64-65 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 64 |
| 66-67 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 64 |
| 68 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 62 |
| 69-70 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 11)) | 61 |
| 71-72 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 60 |
| 73-74 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 64 |
| 75 | Di chuyển hướng 0 (`0`) | (10, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 64 |
| 76-77 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 62 |
| 78-79 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 60 |
| 80-81 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 11)) | 58 |
| 82-83 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 57 |
| 84-86 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 55 |
| 87-89 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 53 |
| 90 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 51 |
| 91 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 49 |
| 92 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 47 |
| 93 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 45 |
| 94-96 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=2, tọa độ=(12, 17)) | 43 |
| 97-98 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 42 |
| 99-100 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 41 |
| 101-102 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 40 |
| 103 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 38 |
| 104-105 | Di chuyển hướng 5 (`5`) | (13, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 37 |
| 106-107 | Di chuyển hướng 4 (`4`) | (12, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 36 |
| 108 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 34 |
| 109-110 | Di chuyển hướng 4 (`4`) | (11, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 33 |
| 111 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 31 |
| 112 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 29 |
| 113 | Di chuyển hướng 4 (`4`) | (10, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 27 |
| 114 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 25 |
| 115 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 23 |
| 116 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 21 |
| 117 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 19 |
| 118 | Di chuyển hướng 4 (`4`) | (8, 22) | (8, 23) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 23)) | 17 |
| 119-120 | Di chuyển hướng 3 (`3`) | (8, 23) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 16 |
| 121-122 | Di chuyển hướng 3 (`3`) | (8, 24) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 15 |
| 123-124 | Di chuyển hướng 3 (`3`) | (9, 25) | (9, 26) | Dự kiến đến điểm hẹn tọa độ (9, 26) | 14 |
| 125 | Di chuyển hướng 2 (`2`) | (9, 26) | (10, 26) | Dự kiến đến điểm hẹn tọa độ (10, 26) | 12 |
| 126 | Di chuyển hướng 3 (`3`) | (10, 26) | (11, 27) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 27)) | 10 |
| 127-159 | Chờ 33 bước (`-33`) | (11, 27) | (11, 27) | Dự kiến đứng yên tại (11, 27); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 27)) | 10 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 16) (ô=524)
- Nhiên liệu đầu ngày: 8
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(23, 1))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(23, 1))
- Mảng hành động đã gửi server: `[1, 1, 0, 0, 0, 5, -11, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 4, 3, 2, 1, 1, 0, 0, 0, 0, 0, 0, -95]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 7 |
| 2-3 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 6 |
| 4 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 4 |
| 5-6 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 3 |
| 7-9 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 11)) | 1 |
| 10-11 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 0 |
| 12-22 | Chờ 11 bước (`-11`) | (11, 11) | (11, 11) | Dự kiến đứng yên tại (11, 11); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 64 |
| 23-24 | Di chuyển hướng 1 (`1`) | (11, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 63 |
| 25 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 61 |
| 26-27 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 59 |
| 28-29 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 57 |
| 30 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 55 |
| 31 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 53 |
| 32-33 | Di chuyển hướng 1 (`1`) | (15, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 52 |
| 34 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 50 |
| 35 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 48 |
| 36 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 46 |
| 37 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 44 |
| 38 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 42 |
| 39 | Di chuyển hướng 2 (`2`) | (20, 6) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 40 |
| 40 | Di chuyển hướng 2 (`2`) | (21, 6) | (22, 6) | Dự kiến đến điểm hẹn tọa độ (22, 6) | 38 |
| 41 | Di chuyển hướng 2 (`2`) | (22, 6) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 36 |
| 42 | Di chuyển hướng 3 (`3`) | (23, 6) | (24, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(24, 7)) | 34 |
| 43-44 | Di chuyển hướng 4 (`4`) | (24, 7) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 33 |
| 45-46 | Di chuyển hướng 3 (`3`) | (23, 8) | (24, 9) | Dự kiến đến điểm hẹn tọa độ (24, 9) | 32 |
| 47-49 | Di chuyển hướng 2 (`2`) | (24, 9) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=3, tọa độ=(25, 9)) | 30 |
| 50-51 | Di chuyển hướng 1 (`1`) | (25, 9) | (25, 8) | Dự kiến đến điểm hẹn tọa độ (25, 8) | 29 |
| 52-54 | Di chuyển hướng 1 (`1`) | (25, 8) | (26, 7) | Dự kiến đến điểm hẹn tọa độ (26, 7) | 27 |
| 55 | Di chuyển hướng 0 (`0`) | (26, 7) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 25 |
| 56 | Di chuyển hướng 0 (`0`) | (25, 6) | (25, 5) | Dự kiến đến điểm hẹn tọa độ (25, 5) | 23 |
| 57-58 | Di chuyển hướng 0 (`0`) | (25, 5) | (24, 4) | Dự kiến đến điểm hẹn tọa độ (24, 4) | 22 |
| 59-60 | Di chuyển hướng 0 (`0`) | (24, 4) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 21 |
| 61-63 | Di chuyển hướng 0 (`0`) | (24, 3) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 19 |
| 64 | Di chuyển hướng 0 (`0`) | (23, 2) | (23, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(23, 1)) | 17 |
| 65-159 | Chờ 95 bước (`-95`) | (23, 1) | (23, 1) | Dự kiến đứng yên tại (23, 1); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(23, 1)) | 17 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 23) (ô=744)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(11, 27))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(11, 27))
- Mảng hành động đã gửi server: `[-26, 1, 2, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 2, 5, 5, 0, 5, 5, 4, 0, 0, 0, 0, 2, 3, 3, 2, 3, 2, 3, 3, 2, 3, 2, 3, 4, 4, 4, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, -59]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-25 | Chờ 26 bước (`-26`) | (8, 23) | (8, 23) | Dự kiến đứng yên tại (8, 23); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 23)) | 64 |
| 26-27 | Di chuyển hướng 1 (`1`) | (8, 23) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 63 |
| 28 | Di chuyển hướng 2 (`2`) | (8, 22) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 61 |
| 29 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 59 |
| 30 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 57 |
| 31 | Di chuyển hướng 0 (`0`) | (10, 20) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 55 |
| 32 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 53 |
| 33 | Di chuyển hướng 1 (`1`) | (9, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 51 |
| 34 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 49 |
| 35 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 47 |
| 36 | Di chuyển hướng 1 (`1`) | (10, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 45 |
| 37 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 43 |
| 38 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 41 |
| 39 | Di chuyển hướng 1 (`1`) | (10, 12) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 64 |
| 40-41 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 11)) | 63 |
| 42-43 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 64 |
| 44-45 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 64 |
| 46 | Di chuyển hướng 0 (`0`) | (10, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 62 |
| 47-48 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 60 |
| 49-50 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 58 |
| 51-52 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 11)) | 56 |
| 53-54 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 55 |
| 55 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 53 |
| 56 | Di chuyển hướng 0 (`0`) | (6, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 51 |
| 57-59 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 7)) | 49 |
| 60-61 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 48 |
| 62 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 46 |
| 63 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 44 |
| 64-65 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 43 |
| 66-67 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 42 |
| 68-69 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 64 |
| 70-71 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 64 |
| 72 | Di chuyển hướng 3 (`3`) | (10, 11) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 62 |
| 73 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 60 |
| 74-75 | Di chuyển hướng 3 (`3`) | (11, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 59 |
| 76-77 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 58 |
| 78-79 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 57 |
| 80 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 55 |
| 81-82 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 54 |
| 83-84 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=2, tọa độ=(12, 17)) | 53 |
| 85-86 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 52 |
| 87 | Di chuyển hướng 3 (`3`) | (12, 18) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 50 |
| 88-89 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 49 |
| 90-91 | Di chuyển hướng 3 (`3`) | (13, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 48 |
| 92 | Di chuyển hướng 4 (`4`) | (14, 21) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 46 |
| 93 | Di chuyển hướng 4 (`4`) | (13, 22) | (13, 23) | Dự kiến đến điểm hẹn tọa độ (13, 23) | 44 |
| 94-95 | Di chuyển hướng 4 (`4`) | (13, 23) | (12, 24) | Dự kiến đến điểm hẹn tọa độ (12, 24) | 43 |
| 96-97 | Di chuyển hướng 4 (`4`) | (12, 24) | (12, 25) | Dự kiến đến điểm hẹn tọa độ (12, 25) | 42 |
| 98-99 | Di chuyển hướng 4 (`4`) | (12, 25) | (11, 26) | Dự kiến đến điểm hẹn tọa độ (11, 26) | 41 |
| 100 | Di chuyển hướng 4 (`4`) | (11, 26) | (11, 27) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 27)) | 39 |
| 101-159 | Chờ 59 bước (`-59`) | (11, 27) | (11, 27) | Dự kiến đứng yên tại (11, 27); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 27)) | 39 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (28, 1) (ô=60)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(21, 24))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(21, 24))
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 3, 3, 3, 4, 3, 4, 3, 4, 4, 3, 3, 4, 4, 4, 3, 3, 3, 3, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, -111]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (28, 1) | (28, 2) | Dự kiến đến điểm hẹn tọa độ (28, 2) | 56 |
| 2 | Di chuyển hướng 3 (`3`) | (28, 2) | (29, 3) | Dự kiến đến điểm hẹn tọa độ (29, 3) | 54 |
| 3-4 | Di chuyển hướng 4 (`4`) | (29, 3) | (28, 4) | Dự kiến đến điểm hẹn tọa độ (28, 4) | 53 |
| 5-6 | Di chuyển hướng 3 (`3`) | (28, 4) | (29, 5) | Dự kiến đến điểm hẹn tọa độ (29, 5) | 52 |
| 7-8 | Di chuyển hướng 3 (`3`) | (29, 5) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 51 |
| 9 | Di chuyển hướng 3 (`3`) | (29, 6) | (30, 7) | Dự kiến đến điểm hẹn tọa độ (30, 7) | 49 |
| 10 | Di chuyển hướng 3 (`3`) | (30, 7) | (30, 8) | Dự kiến đến điểm hẹn tọa độ (30, 8) | 47 |
| 11 | Di chuyển hướng 4 (`4`) | (30, 8) | (30, 9) | Dự kiến đến điểm hẹn tọa độ (30, 9) | 45 |
| 12 | Di chuyển hướng 3 (`3`) | (30, 9) | (30, 10) | Dự kiến đến điểm hẹn tọa độ (30, 10) | 43 |
| 13 | Di chuyển hướng 4 (`4`) | (30, 10) | (30, 11) | Dự kiến đến điểm hẹn tọa độ (30, 11) | 41 |
| 14 | Di chuyển hướng 3 (`3`) | (30, 11) | (30, 12) | Dự kiến đến điểm hẹn tọa độ (30, 12) | 39 |
| 15 | Di chuyển hướng 4 (`4`) | (30, 12) | (30, 13) | Dự kiến đến điểm hẹn tọa độ (30, 13) | 37 |
| 16 | Di chuyển hướng 4 (`4`) | (30, 13) | (29, 14) | Dự kiến đến điểm hẹn tọa độ (29, 14) | 35 |
| 17 | Di chuyển hướng 3 (`3`) | (29, 14) | (30, 15) | Dự kiến đến điểm hẹn tọa độ (30, 15) | 33 |
| 18 | Di chuyển hướng 3 (`3`) | (30, 15) | (30, 16) | Dự kiến đến điểm hẹn tọa độ (30, 16) | 31 |
| 19 | Di chuyển hướng 4 (`4`) | (30, 16) | (30, 17) | Dự kiến đến điểm hẹn tọa độ (30, 17) | 29 |
| 20 | Di chuyển hướng 4 (`4`) | (30, 17) | (29, 18) | Dự kiến đến điểm hẹn tọa độ (29, 18) | 27 |
| 21 | Di chuyển hướng 4 (`4`) | (29, 18) | (29, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(29, 19)) | 25 |
| 22-23 | Di chuyển hướng 3 (`3`) | (29, 19) | (29, 20) | Dự kiến đến điểm hẹn tọa độ (29, 20) | 24 |
| 24-26 | Di chuyển hướng 3 (`3`) | (29, 20) | (30, 21) | Dự kiến đến điểm hẹn tọa độ (30, 21) | 22 |
| 27 | Di chuyển hướng 3 (`3`) | (30, 21) | (30, 22) | Dự kiến đến điểm hẹn tọa độ (30, 22) | 20 |
| 28 | Di chuyển hướng 3 (`3`) | (30, 22) | (31, 23) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(31, 23)) | 18 |
| 29-30 | Di chuyển hướng 5 (`5`) | (31, 23) | (30, 23) | Dự kiến đến điểm hẹn tọa độ (30, 23) | 17 |
| 31 | Di chuyển hướng 5 (`5`) | (30, 23) | (29, 23) | Dự kiến đến điểm hẹn tọa độ (29, 23) | 15 |
| 32-34 | Di chuyển hướng 5 (`5`) | (29, 23) | (28, 23) | Dự kiến đến điểm hẹn tọa độ (28, 23) | 13 |
| 35-36 | Di chuyển hướng 4 (`4`) | (28, 23) | (27, 24) | Dự kiến đến điểm hẹn tọa độ (27, 24) | 12 |
| 37-38 | Di chuyển hướng 5 (`5`) | (27, 24) | (26, 24) | Dự kiến đến điểm hẹn tọa độ (26, 24) | 11 |
| 39 | Di chuyển hướng 5 (`5`) | (26, 24) | (25, 24) | Dự kiến đến điểm hẹn tọa độ (25, 24) | 9 |
| 40-41 | Di chuyển hướng 5 (`5`) | (25, 24) | (24, 24) | Dự kiến đến điểm hẹn tọa độ (24, 24) | 8 |
| 42-44 | Di chuyển hướng 5 (`5`) | (24, 24) | (23, 24) | Dự kiến đến điểm hẹn tọa độ (23, 24) | 6 |
| 45-47 | Di chuyển hướng 5 (`5`) | (23, 24) | (22, 24) | Dự kiến đến điểm hẹn tọa độ (22, 24) | 4 |
| 48 | Di chuyển hướng 5 (`5`) | (22, 24) | (21, 24) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 24)) | 2 |
| 49-159 | Chờ 111 bước (`-111`) | (21, 24) | (21, 24) | Dự kiến đứng yên tại (21, 24); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 24)) | 2 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (23, 1) (ô=55)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 10)
- Mảng hành động đã gửi server: `[5, 4, 5, 5, 4, 4, 4, 4, 5, 5, 4, 4, 4, 4, 5, 5, 4, -22, 1, 0, 0, 0, 0, 5, 5, 5, 4, 5, 2, 3, 3, 2, 3, 2, -94]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (23, 1) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 64 |
| 2 | Di chuyển hướng 4 (`4`) | (22, 1) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 64 |
| 3 | Di chuyển hướng 5 (`5`) | (21, 2) | (20, 2) | Dự kiến đến điểm hẹn tọa độ (20, 2) | 64 |
| 4 | Di chuyển hướng 5 (`5`) | (20, 2) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 64 |
| 5 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 64 |
| 6-7 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 64 |
| 8 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 64 |
| 9 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 64 |
| 10 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 64 |
| 11 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 64 |
| 12 | Di chuyển hướng 4 (`4`) | (15, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 64 |
| 13-14 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 64 |
| 15 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 64 |
| 16 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 64 |
| 17-18 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 64 |
| 19-20 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 64 |
| 21 | Di chuyển hướng 4 (`4`) | (11, 10) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 64 |
| 22-43 | Chờ 22 bước (`-22`) | (11, 11) | (11, 11) | Dự kiến đứng yên tại (11, 11); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 64 |
| 44-45 | Di chuyển hướng 1 (`1`) | (11, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 64 |
| 46 | Di chuyển hướng 0 (`0`) | (11, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 64 |
| 47-48 | Di chuyển hướng 0 (`0`) | (11, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 64 |
| 49 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 64 |
| 50 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 64 |
| 51 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 64 |
| 52 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 64 |
| 53 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 64 |
| 54 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 64 |
| 55 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 7)) | 64 |
| 56-57 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 64 |
| 58 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 64 |
| 59 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 64 |
| 60-61 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 64 |
| 62-63 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 64 |
| 64-65 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 64 |
| 66-159 | Chờ 94 bước (`-94`) | (9, 10) | (9, 10) | Dự kiến đứng yên tại (9, 10); hướng tới tọa độ (9, 10) | 64 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (31, 23) (ô=767)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 11)
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 1, 2, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, -121]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (31, 23) | (30, 22) | Dự kiến đến điểm hẹn tọa độ (30, 22) | 64 |
| 2 | Di chuyển hướng 5 (`5`) | (30, 22) | (29, 22) | Dự kiến đến điểm hẹn tọa độ (29, 22) | 64 |
| 3 | Di chuyển hướng 5 (`5`) | (29, 22) | (28, 22) | Dự kiến đến điểm hẹn tọa độ (28, 22) | 64 |
| 4 | Di chuyển hướng 5 (`5`) | (28, 22) | (27, 22) | Dự kiến đến điểm hẹn tọa độ (27, 22) | 64 |
| 5 | Di chuyển hướng 5 (`5`) | (27, 22) | (26, 22) | Dự kiến đến điểm hẹn tọa độ (26, 22) | 64 |
| 6 | Di chuyển hướng 5 (`5`) | (26, 22) | (25, 22) | Dự kiến đến điểm hẹn tọa độ (25, 22) | 64 |
| 7 | Di chuyển hướng 5 (`5`) | (25, 22) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 64 |
| 8 | Di chuyển hướng 5 (`5`) | (24, 22) | (23, 22) | Dự kiến đến điểm hẹn tọa độ (23, 22) | 64 |
| 9 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 64 |
| 10 | Di chuyển hướng 5 (`5`) | (22, 22) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 64 |
| 11 | Di chuyển hướng 5 (`5`) | (21, 22) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 64 |
| 12 | Di chuyển hướng 5 (`5`) | (20, 22) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 64 |
| 13 | Di chuyển hướng 5 (`5`) | (19, 22) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 64 |
| 14 | Di chuyển hướng 5 (`5`) | (18, 22) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 64 |
| 15 | Di chuyển hướng 5 (`5`) | (17, 22) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 64 |
| 16 | Di chuyển hướng 5 (`5`) | (16, 22) | (15, 22) | Dự kiến đến điểm hẹn tọa độ (15, 22) | 64 |
| 17 | Di chuyển hướng 5 (`5`) | (15, 22) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 64 |
| 18 | Di chuyển hướng 5 (`5`) | (14, 22) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 64 |
| 19 | Di chuyển hướng 5 (`5`) | (13, 22) | (12, 22) | Dự kiến đến điểm hẹn tọa độ (12, 22) | 64 |
| 20 | Di chuyển hướng 5 (`5`) | (12, 22) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 64 |
| 21 | Di chuyển hướng 5 (`5`) | (11, 22) | (10, 22) | Dự kiến đến điểm hẹn tọa độ (10, 22) | 64 |
| 22 | Di chuyển hướng 5 (`5`) | (10, 22) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 64 |
| 23 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 64 |
| 24 | Di chuyển hướng 4 (`4`) | (8, 22) | (8, 23) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 23)) | 64 |
| 25-26 | Di chuyển hướng 1 (`1`) | (8, 23) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 64 |
| 27 | Di chuyển hướng 2 (`2`) | (8, 22) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 64 |
| 28 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 64 |
| 29 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 64 |
| 30 | Di chuyển hướng 0 (`0`) | (10, 20) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 64 |
| 31 | Di chuyển hướng 1 (`1`) | (10, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 64 |
| 32 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 64 |
| 33 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 64 |
| 34 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 64 |
| 35 | Di chuyển hướng 1 (`1`) | (10, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 64 |
| 36 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 64 |
| 37 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 64 |
| 38 | Di chuyển hướng 0 (`0`) | (10, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 64 |
| 39-159 | Chờ 121 bước (`-121`) | (10, 11) | (10, 11) | Dự kiến đứng yên tại (10, 11); hướng tới tọa độ (10, 11) | 64 |

