# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 88
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 11 | #0 | #6 | (5, 31) | 9 | 120 |
| 15 | #0 | #6 | (4, 29) | 117 | 120 |
| 15 | #1 | #5 | (21, 15) | 0 | 120 |
| 18 | #0 | #6 | (3, 29) | 118 | 120 |
| 21 | #0 | #6 | (2, 29) | 118 | 120 |
| 33 | #2 | #5 | (19, 6) | 14 | 120 |
| 38 | #2 | #5 | (19, 6) | 113 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 31) (ô=995)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 6)
- Mảng hành động đã gửi server: `[2, 2, -9, 0, 0, 5, 5, 5, 4, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 1, 5, 0, 1, 0, 0, 0, 0, 5, 4, 1, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 31) | (4, 31) | Dự kiến đến điểm hẹn tọa độ (4, 31) | 11 |
| 2 | Di chuyển hướng 2 (`2`) | (4, 31) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 9 |
| 3-11 | Chờ 9 bước (`-9`) | (5, 31) | (5, 31) | Dự kiến đứng yên tại (5, 31); mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 120 |
| 12-13 | Di chuyển hướng 0 (`0`) | (5, 31) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 119 |
| 14 | Di chuyển hướng 0 (`0`) | (4, 30) | (4, 29) | Dự kiến đến điểm hẹn tọa độ (4, 29) | 120 |
| 15-17 | Di chuyển hướng 5 (`5`) | (4, 29) | (3, 29) | Dự kiến đến điểm hẹn tọa độ (3, 29) | 120 |
| 18-20 | Di chuyển hướng 5 (`5`) | (3, 29) | (2, 29) | Dự kiến đến điểm hẹn tọa độ (2, 29) | 120 |
| 21-23 | Di chuyển hướng 5 (`5`) | (2, 29) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 118 |
| 24 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 116 |
| 25-26 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 115 |
| 27 | Di chuyển hướng 0 (`0`) | (1, 29) | (0, 28) | Dự kiến đến điểm hẹn tọa độ (0, 28) | 113 |
| 28 | Di chuyển hướng 1 (`1`) | (0, 28) | (1, 27) | Dự kiến đến điểm hẹn tọa độ (1, 27) | 111 |
| 29 | Di chuyển hướng 0 (`0`) | (1, 27) | (0, 26) | Dự kiến đến điểm hẹn tọa độ (0, 26) | 109 |
| 30 | Di chuyển hướng 0 (`0`) | (0, 26) | (0, 25) | Dự kiến đến điểm hẹn tọa độ (0, 25) | 107 |
| 31 | Di chuyển hướng 1 (`1`) | (0, 25) | (0, 24) | Dự kiến đến điểm hẹn tọa độ (0, 24) | 105 |
| 32 | Di chuyển hướng 1 (`1`) | (0, 24) | (1, 23) | Dự kiến đến điểm hẹn tọa độ (1, 23) | 103 |
| 33 | Di chuyển hướng 1 (`1`) | (1, 23) | (1, 22) | Dự kiến đến điểm hẹn tọa độ (1, 22) | 101 |
| 34 | Di chuyển hướng 0 (`0`) | (1, 22) | (1, 21) | Dự kiến đến điểm hẹn tọa độ (1, 21) | 99 |
| 35 | Di chuyển hướng 0 (`0`) | (1, 21) | (0, 20) | Dự kiến đến điểm hẹn tọa độ (0, 20) | 97 |
| 36 | Di chuyển hướng 1 (`1`) | (0, 20) | (1, 19) | Dự kiến đến điểm hẹn tọa độ (1, 19) | 95 |
| 37 | Di chuyển hướng 0 (`0`) | (1, 19) | (0, 18) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=12, tọa độ=(0, 18)) | 93 |
| 38-39 | Di chuyển hướng 0 (`0`) | (0, 18) | (0, 17) | Dự kiến đến điểm hẹn tọa độ (0, 17) | 92 |
| 40-41 | Di chuyển hướng 1 (`1`) | (0, 17) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 91 |
| 42 | Di chuyển hướng 0 (`0`) | (0, 16) | (0, 15) | Dự kiến đến điểm hẹn tọa độ (0, 15) | 89 |
| 43 | Di chuyển hướng 1 (`1`) | (0, 15) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 87 |
| 44 | Di chuyển hướng 1 (`1`) | (0, 14) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 85 |
| 45 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 83 |
| 46 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 81 |
| 47 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 79 |
| 48-50 | Di chuyển hướng 2 (`2`) | (3, 11) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 77 |
| 51 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 75 |
| 52 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 73 |
| 53-54 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 72 |
| 55-56 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 71 |
| 57 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 69 |
| 58-60 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 67 |
| 61-62 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 66 |
| 63-64 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 65 |
| 65-66 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 64 |
| 67-68 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 63 |
| 69-70 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 62 |
| 71-73 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 60 |
| 74-75 | Di chuyển hướng 0 (`0`) | (11, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 59 |
| 76-77 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 58 |
| 78-80 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 56 |
| 81 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 54 |
| 82 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 52 |
| 83 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=6, tọa độ=(7, 6)) | 50 |
| 84-85 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 49 |
| 86 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 47 |
| 87 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 45 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (22, 17) (ô=566)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(26, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(26, 17)
- Mảng hành động đã gửi server: `[0, 0, -10, 3, 3, 4, 5, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 2, 3, 2, 2, 2, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 5, 0, 0, 0, 5, 5, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (22, 17) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 2 |
| 3-5 | Di chuyển hướng 0 (`0`) | (21, 16) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 0 |
| 6-15 | Chờ 10 bước (`-10`) | (21, 15) | (21, 15) | Dự kiến đứng yên tại (21, 15); mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 120 |
| 16-17 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 119 |
| 18-20 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 117 |
| 21-23 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 115 |
| 24-26 | Di chuyển hướng 5 (`5`) | (21, 18) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 113 |
| 27-28 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 112 |
| 29 | Di chuyển hướng 3 (`3`) | (21, 19) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 110 |
| 30-32 | Di chuyển hướng 3 (`3`) | (21, 20) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 108 |
| 33-34 | Di chuyển hướng 4 (`4`) | (22, 21) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 107 |
| 35 | Di chuyển hướng 3 (`3`) | (21, 22) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 105 |
| 36-37 | Di chuyển hướng 3 (`3`) | (22, 23) | (22, 24) | Dự kiến đến điểm hẹn tọa độ (22, 24) | 104 |
| 38-39 | Di chuyển hướng 3 (`3`) | (22, 24) | (23, 25) | Dự kiến đến điểm hẹn tọa độ (23, 25) | 103 |
| 40-42 | Di chuyển hướng 3 (`3`) | (23, 25) | (23, 26) | Dự kiến đến điểm hẹn tọa độ (23, 26) | 101 |
| 43-44 | Di chuyển hướng 3 (`3`) | (23, 26) | (24, 27) | Dự kiến đến điểm hẹn tọa độ (24, 27) | 100 |
| 45-47 | Di chuyển hướng 3 (`3`) | (24, 27) | (24, 28) | Dự kiến đến điểm hẹn tọa độ (24, 28) | 98 |
| 48-49 | Di chuyển hướng 3 (`3`) | (24, 28) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 97 |
| 50-51 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 96 |
| 52 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 94 |
| 53 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 92 |
| 54-55 | Di chuyển hướng 2 (`2`) | (27, 30) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 91 |
| 56-57 | Di chuyển hướng 2 (`2`) | (28, 30) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 90 |
| 58-60 | Di chuyển hướng 1 (`1`) | (29, 30) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 88 |
| 61-62 | Di chuyển hướng 1 (`1`) | (30, 29) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 87 |
| 63 | Di chuyển hướng 1 (`1`) | (30, 28) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 85 |
| 64 | Di chuyển hướng 0 (`0`) | (31, 27) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 83 |
| 65 | Di chuyển hướng 0 (`0`) | (30, 26) | (30, 25) | Dự kiến đến điểm hẹn tọa độ (30, 25) | 81 |
| 66 | Di chuyển hướng 1 (`1`) | (30, 25) | (30, 24) | Dự kiến đến điểm hẹn tọa độ (30, 24) | 79 |
| 67-68 | Di chuyển hướng 1 (`1`) | (30, 24) | (31, 23) | Dự kiến đến điểm hẹn tọa độ (31, 23) | 78 |
| 69-71 | Di chuyển hướng 1 (`1`) | (31, 23) | (31, 22) | Dự kiến đến điểm hẹn tọa độ (31, 22) | 76 |
| 72-73 | Di chuyển hướng 0 (`0`) | (31, 22) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 75 |
| 74-75 | Di chuyển hướng 1 (`1`) | (31, 21) | (31, 20) | Dự kiến đến điểm hẹn tọa độ (31, 20) | 74 |
| 76 | Di chuyển hướng 0 (`0`) | (31, 20) | (31, 19) | Dự kiến đến điểm hẹn tọa độ (31, 19) | 72 |
| 77 | Di chuyển hướng 5 (`5`) | (31, 19) | (30, 19) | Dự kiến đến điểm hẹn tọa độ (30, 19) | 70 |
| 78 | Di chuyển hướng 0 (`0`) | (30, 19) | (29, 18) | Dự kiến đến điểm hẹn tọa độ (29, 18) | 68 |
| 79 | Di chuyển hướng 0 (`0`) | (29, 18) | (29, 17) | Dự kiến đến điểm hẹn tọa độ (29, 17) | 66 |
| 80 | Di chuyển hướng 0 (`0`) | (29, 17) | (28, 16) | Dự kiến đến điểm hẹn tọa độ (28, 16) | 64 |
| 81 | Di chuyển hướng 5 (`5`) | (28, 16) | (27, 16) | Dự kiến đến điểm hẹn tọa độ (27, 16) | 62 |
| 82-83 | Di chuyển hướng 5 (`5`) | (27, 16) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 61 |
| 84-85 | Di chuyển hướng 4 (`4`) | (26, 16) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 60 |
| 86-87 | Chờ 2 bước (`-2`) | (26, 17) | (26, 17) | Dự kiến đứng yên tại (26, 17); hướng tới tọa độ (26, 17) | 60 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (1, 3) (ô=97)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=5, tọa độ=(31, 4))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=5, tọa độ=(31, 4))
- Mảng hành động đã gửi server: `[1, 1, 2, 1, 2, 2, 2, 2, 3, 2, 1, 2, 2, 2, 2, 4, 4, 3, 3, 2, 2, 2, 3, 3, 2, 2, 3, 2, 5, 0, 0, 1, 0, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 5, 0, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 58 |
| 2-3 | Di chuyển hướng 1 (`1`) | (1, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 57 |
| 4 | Di chuyển hướng 2 (`2`) | (2, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 55 |
| 5 | Di chuyển hướng 1 (`1`) | (3, 1) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 53 |
| 6 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 51 |
| 7 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 49 |
| 8 | Di chuyển hướng 2 (`2`) | (5, 0) | (6, 0) | Dự kiến đến điểm hẹn tọa độ (6, 0) | 47 |
| 9 | Di chuyển hướng 2 (`2`) | (6, 0) | (7, 0) | Dự kiến đến điểm hẹn tọa độ (7, 0) | 45 |
| 10 | Di chuyển hướng 3 (`3`) | (7, 0) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 43 |
| 11 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 41 |
| 12 | Di chuyển hướng 1 (`1`) | (9, 1) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 39 |
| 13 | Di chuyển hướng 2 (`2`) | (9, 0) | (10, 0) | Dự kiến đến điểm hẹn tọa độ (10, 0) | 37 |
| 14 | Di chuyển hướng 2 (`2`) | (10, 0) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 35 |
| 15 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 33 |
| 16 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 31 |
| 17-18 | Di chuyển hướng 4 (`4`) | (13, 0) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 30 |
| 19 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 28 |
| 20 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 26 |
| 21 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 24 |
| 22 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 22 |
| 23-24 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 21 |
| 25 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 19 |
| 26-27 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 18 |
| 28-29 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 17 |
| 30-31 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 16 |
| 32 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 120 |
| 33 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 118 |
| 34 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 116 |
| 35-36 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 115 |
| 37 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 120 |
| 38 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 118 |
| 39 | Di chuyển hướng 1 (`1`) | (19, 5) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 116 |
| 40 | Di chuyển hướng 0 (`0`) | (19, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 114 |
| 41 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 112 |
| 42-44 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 110 |
| 45-46 | Di chuyển hướng 2 (`2`) | (20, 1) | (21, 1) | Dự kiến đến điểm hẹn tọa độ (21, 1) | 109 |
| 47-48 | Di chuyển hướng 2 (`2`) | (21, 1) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 108 |
| 49-51 | Di chuyển hướng 2 (`2`) | (22, 1) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 106 |
| 52-53 | Di chuyển hướng 2 (`2`) | (23, 1) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 105 |
| 54-55 | Di chuyển hướng 2 (`2`) | (24, 1) | (25, 1) | Dự kiến đến điểm hẹn tọa độ (25, 1) | 104 |
| 56 | Di chuyển hướng 1 (`1`) | (25, 1) | (25, 0) | Dự kiến đến điểm hẹn tọa độ (25, 0) | 102 |
| 57 | Di chuyển hướng 2 (`2`) | (25, 0) | (26, 0) | Dự kiến đến điểm hẹn tọa độ (26, 0) | 100 |
| 58 | Di chuyển hướng 2 (`2`) | (26, 0) | (27, 0) | Dự kiến đến điểm hẹn tọa độ (27, 0) | 98 |
| 59 | Di chuyển hướng 2 (`2`) | (27, 0) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 96 |
| 60 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 94 |
| 61 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 92 |
| 62 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 90 |
| 63-64 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 89 |
| 65 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 87 |
| 66 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 85 |
| 67 | Di chuyển hướng 4 (`4`) | (28, 0) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 83 |
| 68-70 | Di chuyển hướng 4 (`4`) | (28, 1) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 81 |
| 71-73 | Di chuyển hướng 4 (`4`) | (27, 2) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 79 |
| 74-75 | Di chuyển hướng 3 (`3`) | (27, 3) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 78 |
| 76-77 | Di chuyển hướng 3 (`3`) | (27, 4) | (28, 5) | Dự kiến đến điểm hẹn tọa độ (28, 5) | 77 |
| 78-79 | Di chuyển hướng 3 (`3`) | (28, 5) | (28, 6) | Dự kiến đến điểm hẹn tọa độ (28, 6) | 76 |
| 80 | Di chuyển hướng 2 (`2`) | (28, 6) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 74 |
| 81 | Di chuyển hướng 2 (`2`) | (29, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 72 |
| 82 | Di chuyển hướng 2 (`2`) | (30, 6) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 70 |
| 83-84 | Di chuyển hướng 5 (`5`) | (31, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 69 |
| 85 | Di chuyển hướng 0 (`0`) | (30, 6) | (30, 5) | Dự kiến đến điểm hẹn tọa độ (30, 5) | 67 |
| 86 | Di chuyển hướng 1 (`1`) | (30, 5) | (30, 4) | Dự kiến đến điểm hẹn tọa độ (30, 4) | 65 |
| 87 | Di chuyển hướng 2 (`2`) | (30, 4) | (31, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=5, tọa độ=(31, 4)) | 63 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (21, 23) (ô=757)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Spot #31 (thương hiệu=23, tọa độ=(22, 31))
- Địa điểm đích kế hoạch: Spot #31 (thương hiệu=23, tọa độ=(22, 31))
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 5, 4, 5, 4, 4, 0, 0, 0, 1, 1, 1, 1, 0, 3, 3, 2, 3, 3, 3, 3, 3, 4, 4, 5, 2, 3, 3, 2, 2, 2, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 54 |
| 1 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 52 |
| 2 | Di chuyển hướng 5 (`5`) | (20, 25) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 50 |
| 3 | Di chuyển hướng 5 (`5`) | (19, 25) | (18, 25) | Dự kiến đến điểm hẹn tọa độ (18, 25) | 48 |
| 4-6 | Di chuyển hướng 5 (`5`) | (18, 25) | (17, 25) | Dự kiến đến điểm hẹn tọa độ (17, 25) | 46 |
| 7-8 | Di chuyển hướng 4 (`4`) | (17, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 45 |
| 9-10 | Di chuyển hướng 5 (`5`) | (16, 26) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 44 |
| 11-13 | Di chuyển hướng 4 (`4`) | (15, 26) | (15, 27) | Dự kiến đến điểm hẹn tọa độ (15, 27) | 42 |
| 14-16 | Di chuyển hướng 4 (`4`) | (15, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 40 |
| 17-18 | Di chuyển hướng 0 (`0`) | (14, 28) | (14, 27) | Dự kiến đến điểm hẹn tọa độ (14, 27) | 39 |
| 19-21 | Di chuyển hướng 0 (`0`) | (14, 27) | (13, 26) | Dự kiến đến điểm hẹn tọa độ (13, 26) | 37 |
| 22-23 | Di chuyển hướng 0 (`0`) | (13, 26) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 36 |
| 24-25 | Di chuyển hướng 1 (`1`) | (13, 25) | (13, 24) | Dự kiến đến điểm hẹn tọa độ (13, 24) | 35 |
| 26-28 | Di chuyển hướng 1 (`1`) | (13, 24) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 33 |
| 29-30 | Di chuyển hướng 1 (`1`) | (14, 23) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 32 |
| 31-32 | Di chuyển hướng 1 (`1`) | (14, 22) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 31 |
| 33-34 | Di chuyển hướng 0 (`0`) | (15, 21) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 30 |
| 35-36 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 29 |
| 37-38 | Di chuyển hướng 3 (`3`) | (15, 21) | (15, 22) | Dự kiến đến điểm hẹn tọa độ (15, 22) | 28 |
| 39-40 | Di chuyển hướng 2 (`2`) | (15, 22) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 27 |
| 41-42 | Di chuyển hướng 3 (`3`) | (16, 22) | (17, 23) | Dự kiến đến điểm hẹn tọa độ (17, 23) | 26 |
| 43-44 | Di chuyển hướng 3 (`3`) | (17, 23) | (17, 24) | Dự kiến đến điểm hẹn tọa độ (17, 24) | 25 |
| 45-46 | Di chuyển hướng 3 (`3`) | (17, 24) | (18, 25) | Dự kiến đến điểm hẹn tọa độ (18, 25) | 24 |
| 47-49 | Di chuyển hướng 3 (`3`) | (18, 25) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 22 |
| 50 | Di chuyển hướng 3 (`3`) | (18, 26) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 20 |
| 51 | Di chuyển hướng 4 (`4`) | (19, 27) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 18 |
| 52 | Di chuyển hướng 4 (`4`) | (18, 28) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 16 |
| 53 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 14 |
| 54-55 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 13 |
| 56 | Di chuyển hướng 3 (`3`) | (18, 29) | (18, 30) | Dự kiến đến điểm hẹn tọa độ (18, 30) | 11 |
| 57-59 | Di chuyển hướng 3 (`3`) | (18, 30) | (19, 31) | Dự kiến đến điểm hẹn tọa độ (19, 31) | 9 |
| 60-62 | Di chuyển hướng 2 (`2`) | (19, 31) | (20, 31) | Dự kiến đến điểm hẹn tọa độ (20, 31) | 7 |
| 63-65 | Di chuyển hướng 2 (`2`) | (20, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 5 |
| 66-68 | Di chuyển hướng 2 (`2`) | (21, 31) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 3 |
| 69-87 | Chờ 19 bước (`-19`) | (22, 31) | (22, 31) | Dự kiến đứng yên tại (22, 31); mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 3 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (31, 4) (ô=159)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=7, tọa độ=(31, 6))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=7, tọa độ=(31, 6))
- Mảng hành động đã gửi server: `[5, 4, 3, 2, -83]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (31, 4) | (30, 4) | Dự kiến đến điểm hẹn tọa độ (30, 4) | 9 |
| 2 | Di chuyển hướng 4 (`4`) | (30, 4) | (30, 5) | Dự kiến đến điểm hẹn tọa độ (30, 5) | 7 |
| 3 | Di chuyển hướng 3 (`3`) | (30, 5) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 5 |
| 4 | Di chuyển hướng 2 (`2`) | (30, 6) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 3 |
| 5-87 | Chờ 83 bước (`-83`) | (31, 6) | (31, 6) | Dự kiến đứng yên tại (31, 6); mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 3 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (16, 4) (ô=144)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 6)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 0, 1, 0, 0, 0, 0, 1, 1, 0, -61]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 120 |
| 2-3 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 120 |
| 4-5 | Di chuyển hướng 3 (`3`) | (17, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 120 |
| 6 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 120 |
| 7 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 120 |
| 8 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 120 |
| 9-10 | Di chuyển hướng 3 (`3`) | (19, 10) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 120 |
| 11 | Di chuyển hướng 3 (`3`) | (20, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 120 |
| 12 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 120 |
| 13 | Di chuyển hướng 4 (`4`) | (21, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 120 |
| 14 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 120 |
| 15-16 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 120 |
| 17 | Di chuyển hướng 1 (`1`) | (20, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 120 |
| 18 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 120 |
| 19 | Di chuyển hướng 0 (`0`) | (20, 12) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 120 |
| 20 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 120 |
| 21-22 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 120 |
| 23 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 120 |
| 24-25 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 120 |
| 26 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 120 |
| 27-87 | Chờ 61 bước (`-61`) | (19, 6) | (19, 6) | Dự kiến đứng yên tại (19, 6); hướng tới tọa độ (19, 6) | 120 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (6, 26) (ô=838)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 29)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 29)
- Mảng hành động đã gửi server: `[5, 4, 4, 3, 4, 3, 0, 0, 5, 5, -68]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 26) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 120 |
| 2-4 | Di chuyển hướng 4 (`4`) | (5, 26) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 120 |
| 5-7 | Di chuyển hướng 4 (`4`) | (5, 27) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 120 |
| 8 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 120 |
| 9 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 120 |
| 10 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 120 |
| 11-12 | Di chuyển hướng 0 (`0`) | (5, 31) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 120 |
| 13 | Di chuyển hướng 0 (`0`) | (4, 30) | (4, 29) | Dự kiến đến điểm hẹn tọa độ (4, 29) | 120 |
| 14-16 | Di chuyển hướng 5 (`5`) | (4, 29) | (3, 29) | Dự kiến đến điểm hẹn tọa độ (3, 29) | 120 |
| 17-19 | Di chuyển hướng 5 (`5`) | (3, 29) | (2, 29) | Dự kiến đến điểm hẹn tọa độ (2, 29) | 120 |
| 20-87 | Chờ 68 bước (`-68`) | (2, 29) | (2, 29) | Dự kiến đứng yên tại (2, 29); hướng tới tọa độ (2, 29) | 120 |

