# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 192
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 27 | #3 | #6 | (19, 22) | 1 | 64 |
| 34 | #2 | #6 | (15, 22) | 6 | 64 |
| 43 | #5 | #7 | (7, 23) | 0 | 64 |
| 46 | #5 | #7 | (6, 22) | 63 | 64 |
| 62 | #1 | #6 | (2, 28) | 0 | 64 |
| 101 | #1 | #7 | (2, 3) | 26 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (23, 3) (ô=119)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(20, 30))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(20, 30))
- Mảng hành động đã gửi server: `[0, 5, 5, 4, 4, 5, 0, 5, 5, 5, 4, 4, 4, 4, 4, 4, 3, 3, 4, 4, 4, 3, 4, 3, 3, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 1, 2, 4, 4, 4, 4, -113]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (23, 3) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 59 |
| 2-3 | Di chuyển hướng 5 (`5`) | (22, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 58 |
| 4-6 | Di chuyển hướng 5 (`5`) | (21, 2) | (20, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 56 |
| 7-8 | Di chuyển hướng 4 (`4`) | (20, 2) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 55 |
| 9 | Di chuyển hướng 4 (`4`) | (20, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 53 |
| 10-12 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 51 |
| 13 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 49 |
| 14 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 47 |
| 15-16 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 46 |
| 17-18 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 45 |
| 19 | Di chuyển hướng 4 (`4`) | (15, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 43 |
| 20-21 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 42 |
| 22-23 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 41 |
| 24-25 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 40 |
| 26 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 38 |
| 27 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 36 |
| 28-29 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 35 |
| 30 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 33 |
| 31 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 31 |
| 32-33 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 30 |
| 34-35 | Di chuyển hướng 4 (`4`) | (12, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 29 |
| 36 | Di chuyển hướng 3 (`3`) | (11, 14) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 27 |
| 37 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 25 |
| 38 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 23 |
| 39-40 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 18)) | 22 |
| 41-42 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 21 |
| 43-44 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 20 |
| 45-46 | Di chuyển hướng 2 (`2`) | (14, 18) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 19 |
| 47-48 | Di chuyển hướng 3 (`3`) | (15, 18) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 18 |
| 49-50 | Di chuyển hướng 3 (`3`) | (16, 19) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 16 |
| 51 | Di chuyển hướng 3 (`3`) | (16, 20) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 14 |
| 52-53 | Di chuyển hướng 3 (`3`) | (17, 21) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 13 |
| 54-55 | Di chuyển hướng 3 (`3`) | (17, 22) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 12 |
| 56-57 | Di chuyển hướng 3 (`3`) | (18, 23) | (18, 24) | Dự kiến đến điểm hẹn tọa độ (18, 24) | 11 |
| 58-59 | Di chuyển hướng 3 (`3`) | (18, 24) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 10 |
| 60-61 | Di chuyển hướng 3 (`3`) | (19, 25) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 9 |
| 62-63 | Di chuyển hướng 3 (`3`) | (19, 26) | (20, 27) | Dự kiến đến điểm hẹn tọa độ (20, 27) | 8 |
| 64-65 | Di chuyển hướng 2 (`2`) | (20, 27) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 7 |
| 66-67 | Di chuyển hướng 1 (`1`) | (21, 27) | (21, 26) | Dự kiến đến điểm hẹn tọa độ (21, 26) | 6 |
| 68-69 | Di chuyển hướng 2 (`2`) | (21, 26) | (22, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(22, 26)) | 5 |
| 70-71 | Di chuyển hướng 4 (`4`) | (22, 26) | (22, 27) | Dự kiến đến điểm hẹn tọa độ (22, 27) | 4 |
| 72-74 | Di chuyển hướng 4 (`4`) | (22, 27) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 2 |
| 75-76 | Di chuyển hướng 4 (`4`) | (21, 28) | (21, 29) | Dự kiến đến điểm hẹn tọa độ (21, 29) | 1 |
| 77-78 | Di chuyển hướng 4 (`4`) | (21, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 0 |
| 79-191 | Chờ 113 bước (`-113`) | (20, 30) | (20, 30) | Dự kiến đứng yên tại (20, 30); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 28) (ô=898)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(20, 30))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(20, 30))
- Mảng hành động đã gửi server: `[-62, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 3, 2, 3, 4, 4, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 3, 4, 3, 3, 2, 3, 3, 3, 3, 4, 4, 4, 4, -9]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-61 | Chờ 62 bước (`-62`) | (2, 28) | (2, 28) | Dự kiến đứng yên tại (2, 28); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 28)) | 64 |
| 62-63 | Di chuyển hướng 0 (`0`) | (2, 28) | (2, 27) | Dự kiến đến điểm hẹn tọa độ (2, 27) | 63 |
| 64 | Di chuyển hướng 1 (`1`) | (2, 27) | (2, 26) | Dự kiến đến điểm hẹn tọa độ (2, 26) | 61 |
| 65-66 | Di chuyển hướng 1 (`1`) | (2, 26) | (3, 25) | Dự kiến đến điểm hẹn tọa độ (3, 25) | 60 |
| 67 | Di chuyển hướng 0 (`0`) | (3, 25) | (2, 24) | Dự kiến đến điểm hẹn tọa độ (2, 24) | 58 |
| 68-70 | Di chuyển hướng 0 (`0`) | (2, 24) | (2, 23) | Dự kiến đến điểm hẹn tọa độ (2, 23) | 56 |
| 71 | Di chuyển hướng 1 (`1`) | (2, 23) | (2, 22) | Dự kiến đến điểm hẹn tọa độ (2, 22) | 54 |
| 72 | Di chuyển hướng 1 (`1`) | (2, 22) | (3, 21) | Dự kiến đến điểm hẹn tọa độ (3, 21) | 52 |
| 73 | Di chuyển hướng 0 (`0`) | (3, 21) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 50 |
| 74-75 | Di chuyển hướng 0 (`0`) | (2, 20) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 49 |
| 76-77 | Di chuyển hướng 0 (`0`) | (2, 19) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 48 |
| 78-79 | Di chuyển hướng 1 (`1`) | (1, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 47 |
| 80-81 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 46 |
| 82-83 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 45 |
| 84-85 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 44 |
| 86-87 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 43 |
| 88 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 41 |
| 89-90 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 40 |
| 91 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 38 |
| 92 | Di chuyển hướng 1 (`1`) | (2, 10) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 36 |
| 93-94 | Di chuyển hướng 0 (`0`) | (3, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 35 |
| 95 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 33 |
| 96 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 31 |
| 97-98 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 30 |
| 99 | Di chuyển hướng 0 (`0`) | (3, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 28 |
| 100 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 64 |
| 101 | Di chuyển hướng 1 (`1`) | (2, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 62 |
| 102-103 | Di chuyển hướng 1 (`1`) | (2, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 61 |
| 104-105 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 60 |
| 106-107 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 58 |
| 108-109 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 56 |
| 110-111 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 55 |
| 112-113 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 54 |
| 114-115 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 53 |
| 116-117 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 51 |
| 118-119 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 49 |
| 120-121 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 48 |
| 122-124 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 46 |
| 125 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 44 |
| 126-127 | Di chuyển hướng 2 (`2`) | (13, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 43 |
| 128 | Di chuyển hướng 3 (`3`) | (14, 2) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 41 |
| 129 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 39 |
| 130-131 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 38 |
| 132-133 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 37 |
| 134-135 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 35 |
| 136-137 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 34 |
| 138 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 32 |
| 139-140 | Di chuyển hướng 3 (`3`) | (15, 8) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 31 |
| 141-142 | Di chuyển hướng 3 (`3`) | (16, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 30 |
| 143-144 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 29 |
| 145 | Di chuyển hướng 3 (`3`) | (17, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 27 |
| 146-147 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 26 |
| 148-149 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 25 |
| 150-151 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 24 |
| 152 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 22 |
| 153-154 | Di chuyển hướng 4 (`4`) | (19, 16) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 21 |
| 155 | Di chuyển hướng 4 (`4`) | (19, 17) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 19 |
| 156-157 | Di chuyển hướng 3 (`3`) | (18, 18) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 18 |
| 158 | Di chuyển hướng 4 (`4`) | (19, 19) | (18, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 16 |
| 159-160 | Di chuyển hướng 3 (`3`) | (18, 20) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 15 |
| 161-163 | Di chuyển hướng 3 (`3`) | (19, 21) | (19, 22) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 13 |
| 164-165 | Di chuyển hướng 2 (`2`) | (19, 22) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 12 |
| 166-167 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 11 |
| 168-169 | Di chuyển hướng 3 (`3`) | (21, 23) | (21, 24) | Dự kiến đến điểm hẹn tọa độ (21, 24) | 10 |
| 170-171 | Di chuyển hướng 3 (`3`) | (21, 24) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 9 |
| 172-173 | Di chuyển hướng 3 (`3`) | (22, 25) | (22, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(22, 26)) | 8 |
| 174-175 | Di chuyển hướng 4 (`4`) | (22, 26) | (22, 27) | Dự kiến đến điểm hẹn tọa độ (22, 27) | 7 |
| 176-178 | Di chuyển hướng 4 (`4`) | (22, 27) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 5 |
| 179-180 | Di chuyển hướng 4 (`4`) | (21, 28) | (21, 29) | Dự kiến đến điểm hẹn tọa độ (21, 29) | 4 |
| 181-182 | Di chuyển hướng 4 (`4`) | (21, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 3 |
| 183-191 | Chờ 9 bước (`-9`) | (20, 30) | (20, 30) | Dự kiến đứng yên tại (20, 30); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 3 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (19, 22) (ô=723)
- Nhiên liệu đầu ngày: 30
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(12, 18))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(12, 18))
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 3, 4, 4, 3, 0, 5, 0, 0, 0, 5, 0, 0, 1, 0, 0, 0, 0, 0, 5, -148]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (19, 22) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 29 |
| 2-4 | Di chuyển hướng 3 (`3`) | (19, 23) | (19, 24) | Dự kiến đến điểm hẹn tọa độ (19, 24) | 27 |
| 5-6 | Di chuyển hướng 3 (`3`) | (19, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 26 |
| 7-8 | Di chuyển hướng 3 (`3`) | (20, 25) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 24 |
| 9-10 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 23 |
| 11-12 | Di chuyển hướng 4 (`4`) | (21, 27) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 22 |
| 13 | Di chuyển hướng 4 (`4`) | (20, 28) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 20 |
| 14-15 | Di chuyển hướng 3 (`3`) | (20, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 19 |
| 16-17 | Di chuyển hướng 0 (`0`) | (20, 30) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 18 |
| 18-19 | Di chuyển hướng 5 (`5`) | (20, 29) | (19, 29) | Dự kiến đến điểm hẹn tọa độ (19, 29) | 17 |
| 20 | Di chuyển hướng 0 (`0`) | (19, 29) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 15 |
| 21-22 | Di chuyển hướng 0 (`0`) | (18, 28) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 14 |
| 23 | Di chuyển hướng 0 (`0`) | (18, 27) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 12 |
| 24-25 | Di chuyển hướng 5 (`5`) | (17, 26) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 11 |
| 26-27 | Di chuyển hướng 0 (`0`) | (16, 26) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 10 |
| 28-29 | Di chuyển hướng 0 (`0`) | (16, 25) | (15, 24) | Dự kiến đến điểm hẹn tọa độ (15, 24) | 9 |
| 30-31 | Di chuyển hướng 1 (`1`) | (15, 24) | (16, 23) | Dự kiến đến điểm hẹn tọa độ (16, 23) | 8 |
| 32 | Di chuyển hướng 0 (`0`) | (16, 23) | (15, 22) | Dự kiến đến điểm hẹn tọa độ (15, 22) | 6 |
| 33-34 | Di chuyển hướng 0 (`0`) | (15, 22) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 63 |
| 35-36 | Di chuyển hướng 0 (`0`) | (15, 21) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 62 |
| 37-39 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 60 |
| 40-41 | Di chuyển hướng 0 (`0`) | (14, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 59 |
| 42-43 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 18)) | 58 |
| 44-191 | Chờ 148 bước (`-148`) | (12, 18) | (12, 18) | Dự kiến đứng yên tại (12, 18); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 18)) | 58 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (18, 20) (ô=658)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=2, tọa độ=(0, 0))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=2, tọa độ=(0, 0))
- Mảng hành động đã gửi server: `[3, 3, -23, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 5, 0, 5, 5, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 5, 0, 1, -95]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (18, 20) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 3 |
| 2-4 | Di chuyển hướng 3 (`3`) | (19, 21) | (19, 22) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 1 |
| 5-27 | Chờ 23 bước (`-23`) | (19, 22) | (19, 22) | Dự kiến đứng yên tại (19, 22); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 64 |
| 28-29 | Di chuyển hướng 1 (`1`) | (19, 22) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 63 |
| 30-31 | Di chuyển hướng 0 (`0`) | (20, 21) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 62 |
| 32-33 | Di chuyển hướng 0 (`0`) | (19, 20) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 61 |
| 34 | Di chuyển hướng 1 (`1`) | (19, 19) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 59 |
| 35-36 | Di chuyển hướng 0 (`0`) | (19, 18) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 58 |
| 37 | Di chuyển hướng 1 (`1`) | (19, 17) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 56 |
| 38-39 | Di chuyển hướng 0 (`0`) | (19, 16) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 55 |
| 40 | Di chuyển hướng 0 (`0`) | (19, 15) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 53 |
| 41-42 | Di chuyển hướng 0 (`0`) | (18, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 52 |
| 43-44 | Di chuyển hướng 0 (`0`) | (18, 13) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 51 |
| 45-46 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 50 |
| 47 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 48 |
| 48-49 | Di chuyển hướng 0 (`0`) | (16, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 47 |
| 50-51 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 46 |
| 52-53 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 45 |
| 54 | Di chuyển hướng 1 (`1`) | (16, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 43 |
| 55-56 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 42 |
| 57-58 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 40 |
| 59-60 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 39 |
| 61-62 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 38 |
| 63 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 36 |
| 64 | Di chuyển hướng 5 (`5`) | (14, 2) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 34 |
| 65-66 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 33 |
| 67 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 31 |
| 68-70 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 29 |
| 71-72 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 28 |
| 73-74 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 26 |
| 75-76 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 24 |
| 77-78 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 23 |
| 79-80 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 22 |
| 81-82 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 21 |
| 83-84 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 19 |
| 85-86 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 17 |
| 87-88 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 16 |
| 89-90 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 15 |
| 91-92 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 14 |
| 93-94 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 13 |
| 95-96 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 12 |
| 97-191 | Chờ 95 bước (`-95`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 12 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (23, 3) (ô=119)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=5, tọa độ=(16, 25))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=5, tọa độ=(16, 25))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 3, 4, 4, 4, 4, 3, 5, 4, 4, 4, 3, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 4, 4, 4, 4, 4, -114]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (23, 3) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 59 |
| 2-3 | Di chuyển hướng 3 (`3`) | (23, 4) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 58 |
| 4 | Di chuyển hướng 3 (`3`) | (24, 5) | (24, 6) | Dự kiến đến điểm hẹn tọa độ (24, 6) | 56 |
| 5-6 | Di chuyển hướng 3 (`3`) | (24, 6) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 55 |
| 7-8 | Di chuyển hướng 3 (`3`) | (25, 7) | (25, 8) | Dự kiến đến điểm hẹn tọa độ (25, 8) | 54 |
| 9-10 | Di chuyển hướng 3 (`3`) | (25, 8) | (26, 9) | Dự kiến đến điểm hẹn tọa độ (26, 9) | 53 |
| 11-12 | Di chuyển hướng 3 (`3`) | (26, 9) | (26, 10) | Dự kiến đến điểm hẹn tọa độ (26, 10) | 52 |
| 13-14 | Di chuyển hướng 3 (`3`) | (26, 10) | (27, 11) | Dự kiến đến điểm hẹn tọa độ (27, 11) | 51 |
| 15 | Di chuyển hướng 3 (`3`) | (27, 11) | (27, 12) | Dự kiến đến điểm hẹn tọa độ (27, 12) | 49 |
| 16-17 | Di chuyển hướng 4 (`4`) | (27, 12) | (27, 13) | Dự kiến đến điểm hẹn tọa độ (27, 13) | 48 |
| 18-19 | Di chuyển hướng 4 (`4`) | (27, 13) | (26, 14) | Dự kiến đến điểm hẹn tọa độ (26, 14) | 47 |
| 20 | Di chuyển hướng 4 (`4`) | (26, 14) | (26, 15) | Dự kiến đến điểm hẹn tọa độ (26, 15) | 45 |
| 21 | Di chuyển hướng 4 (`4`) | (26, 15) | (25, 16) | Dự kiến đến điểm hẹn tọa độ (25, 16) | 43 |
| 22-23 | Di chuyển hướng 4 (`4`) | (25, 16) | (25, 17) | Dự kiến đến điểm hẹn tọa độ (25, 17) | 42 |
| 24 | Di chuyển hướng 4 (`4`) | (25, 17) | (24, 18) | Dự kiến đến điểm hẹn tọa độ (24, 18) | 40 |
| 25-26 | Di chuyển hướng 4 (`4`) | (24, 18) | (24, 19) | Dự kiến đến điểm hẹn tọa độ (24, 19) | 39 |
| 27 | Di chuyển hướng 4 (`4`) | (24, 19) | (23, 20) | Dự kiến đến điểm hẹn tọa độ (23, 20) | 37 |
| 28-29 | Di chuyển hướng 3 (`3`) | (23, 20) | (24, 21) | Dự kiến đến điểm hẹn tọa độ (24, 21) | 36 |
| 30 | Di chuyển hướng 4 (`4`) | (24, 21) | (23, 22) | Dự kiến đến điểm hẹn tọa độ (23, 22) | 34 |
| 31-32 | Di chuyển hướng 4 (`4`) | (23, 22) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 33 |
| 33 | Di chuyển hướng 4 (`4`) | (23, 23) | (22, 24) | Dự kiến đến điểm hẹn tọa độ (22, 24) | 31 |
| 34-35 | Di chuyển hướng 4 (`4`) | (22, 24) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 30 |
| 36-37 | Di chuyển hướng 3 (`3`) | (22, 25) | (22, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(22, 26)) | 29 |
| 38-39 | Di chuyển hướng 5 (`5`) | (22, 26) | (21, 26) | Dự kiến đến điểm hẹn tọa độ (21, 26) | 28 |
| 40-41 | Di chuyển hướng 4 (`4`) | (21, 26) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 27 |
| 42-43 | Di chuyển hướng 4 (`4`) | (21, 27) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 26 |
| 44 | Di chuyển hướng 4 (`4`) | (20, 28) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 24 |
| 45-46 | Di chuyển hướng 3 (`3`) | (20, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 23 |
| 47-48 | Di chuyển hướng 0 (`0`) | (20, 30) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 22 |
| 49-50 | Di chuyển hướng 1 (`1`) | (20, 29) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 21 |
| 51 | Di chuyển hướng 0 (`0`) | (20, 28) | (20, 27) | Dự kiến đến điểm hẹn tọa độ (20, 27) | 19 |
| 52-53 | Di chuyển hướng 0 (`0`) | (20, 27) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 18 |
| 54-55 | Di chuyển hướng 0 (`0`) | (19, 26) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 17 |
| 56-57 | Di chuyển hướng 1 (`1`) | (19, 25) | (19, 24) | Dự kiến đến điểm hẹn tọa độ (19, 24) | 16 |
| 58-59 | Di chuyển hướng 0 (`0`) | (19, 24) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 15 |
| 60-62 | Di chuyển hướng 1 (`1`) | (19, 23) | (19, 22) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 13 |
| 63-64 | Di chuyển hướng 0 (`0`) | (19, 22) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 12 |
| 65-67 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 10 |
| 68-69 | Di chuyển hướng 4 (`4`) | (18, 20) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 9 |
| 70-71 | Di chuyển hướng 4 (`4`) | (18, 21) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 8 |
| 72-73 | Di chuyển hướng 4 (`4`) | (17, 22) | (17, 23) | Dự kiến đến điểm hẹn tọa độ (17, 23) | 7 |
| 74 | Di chuyển hướng 4 (`4`) | (17, 23) | (16, 24) | Dự kiến đến điểm hẹn tọa độ (16, 24) | 5 |
| 75-77 | Di chuyển hướng 4 (`4`) | (16, 24) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 3 |
| 78-191 | Chờ 114 bước (`-114`) | (16, 25) | (16, 25) | Dự kiến đứng yên tại (16, 25); mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 3 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (7, 23) (ô=743)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=2, tọa độ=(0, 0))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=2, tọa độ=(0, 0))
- Mảng hành động đã gửi server: `[-44, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 2, 5, 0, 5, 5, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 5, 0, 1, -76]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-43 | Chờ 44 bước (`-44`) | (7, 23) | (7, 23) | Dự kiến đứng yên tại (7, 23); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 23)) | 64 |
| 44-45 | Di chuyển hướng 0 (`0`) | (7, 23) | (6, 22) | Dự kiến đến điểm hẹn tọa độ (6, 22) | 64 |
| 46-47 | Di chuyển hướng 1 (`1`) | (6, 22) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 63 |
| 48 | Di chuyển hướng 1 (`1`) | (7, 21) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 61 |
| 49-50 | Di chuyển hướng 1 (`1`) | (7, 20) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 60 |
| 51-52 | Di chuyển hướng 1 (`1`) | (8, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 59 |
| 53-54 | Di chuyển hướng 1 (`1`) | (8, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 58 |
| 55-56 | Di chuyển hướng 1 (`1`) | (9, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 57 |
| 57-58 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 56 |
| 59-60 | Di chuyển hướng 1 (`1`) | (10, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 55 |
| 61-62 | Di chuyển hướng 1 (`1`) | (10, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 54 |
| 63 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 52 |
| 64-65 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 51 |
| 66-67 | Di chuyển hướng 1 (`1`) | (12, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 50 |
| 68 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 48 |
| 69-70 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 47 |
| 71 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 45 |
| 72 | Di chuyển hướng 1 (`1`) | (13, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 43 |
| 73-74 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 42 |
| 75-76 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 41 |
| 77-78 | Di chuyển hướng 1 (`1`) | (14, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 40 |
| 79 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 38 |
| 80-81 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 37 |
| 82 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 35 |
| 83 | Di chuyển hướng 5 (`5`) | (14, 2) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 33 |
| 84-85 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 32 |
| 86 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 30 |
| 87-89 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 28 |
| 90-91 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 27 |
| 92-93 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 25 |
| 94-95 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 23 |
| 96-97 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 22 |
| 98-99 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 21 |
| 100-101 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 20 |
| 102-103 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 18 |
| 104-105 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 16 |
| 106-107 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 15 |
| 108-109 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 14 |
| 110-111 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 13 |
| 112-113 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 12 |
| 114-115 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 11 |
| 116-191 | Chờ 76 bước (`-76`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 11 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (16, 6) (ô=208)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(2, 28))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(2, 28))
- Mảng hành động đã gửi server: `[3, 4, 3, 4, 3, 3, 3, 3, 3, 4, 3, 4, 3, 3, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 4, 5, 4, 4, 5, 5, 4, 5, 5, 4, -130]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (16, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 64 |
| 2 | Di chuyển hướng 4 (`4`) | (17, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 64 |
| 3-4 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 64 |
| 5-6 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 64 |
| 7-8 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 64 |
| 9 | Di chuyển hướng 3 (`3`) | (17, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 64 |
| 10-11 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 64 |
| 12-13 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 64 |
| 14-15 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 64 |
| 16 | Di chuyển hướng 4 (`4`) | (19, 15) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 64 |
| 17-18 | Di chuyển hướng 3 (`3`) | (18, 16) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 64 |
| 19 | Di chuyển hướng 4 (`4`) | (19, 17) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 64 |
| 20-21 | Di chuyển hướng 3 (`3`) | (18, 18) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 64 |
| 22 | Di chuyển hướng 3 (`3`) | (19, 19) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 64 |
| 23-24 | Di chuyển hướng 3 (`3`) | (19, 20) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 64 |
| 25-26 | Di chuyển hướng 4 (`4`) | (20, 21) | (19, 22) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 64 |
| 27-28 | Di chuyển hướng 5 (`5`) | (19, 22) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 64 |
| 29-30 | Di chuyển hướng 5 (`5`) | (18, 22) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 64 |
| 31-32 | Di chuyển hướng 5 (`5`) | (17, 22) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 64 |
| 33 | Di chuyển hướng 5 (`5`) | (16, 22) | (15, 22) | Dự kiến đến điểm hẹn tọa độ (15, 22) | 64 |
| 34-35 | Di chuyển hướng 5 (`5`) | (15, 22) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 64 |
| 36-37 | Di chuyển hướng 5 (`5`) | (14, 22) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 64 |
| 38 | Di chuyển hướng 5 (`5`) | (13, 22) | (12, 22) | Dự kiến đến điểm hẹn tọa độ (12, 22) | 64 |
| 39-40 | Di chuyển hướng 5 (`5`) | (12, 22) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 64 |
| 41-42 | Di chuyển hướng 4 (`4`) | (11, 22) | (11, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 64 |
| 43-44 | Di chuyển hướng 5 (`5`) | (11, 23) | (10, 23) | Dự kiến đến điểm hẹn tọa độ (10, 23) | 64 |
| 45 | Di chuyển hướng 4 (`4`) | (10, 23) | (9, 24) | Dự kiến đến điểm hẹn tọa độ (9, 24) | 64 |
| 46-47 | Di chuyển hướng 5 (`5`) | (9, 24) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 64 |
| 48-49 | Di chuyển hướng 4 (`4`) | (8, 24) | (8, 25) | Dự kiến đến điểm hẹn tọa độ (8, 25) | 64 |
| 50 | Di chuyển hướng 4 (`4`) | (8, 25) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 64 |
| 51-52 | Di chuyển hướng 5 (`5`) | (7, 26) | (6, 26) | Dự kiến đến điểm hẹn tọa độ (6, 26) | 64 |
| 53-54 | Di chuyển hướng 5 (`5`) | (6, 26) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 64 |
| 55-56 | Di chuyển hướng 4 (`4`) | (5, 26) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 64 |
| 57 | Di chuyển hướng 5 (`5`) | (5, 27) | (4, 27) | Dự kiến đến điểm hẹn tọa độ (4, 27) | 64 |
| 58-59 | Di chuyển hướng 5 (`5`) | (4, 27) | (3, 27) | Dự kiến đến điểm hẹn tọa độ (3, 27) | 64 |
| 60-61 | Di chuyển hướng 4 (`4`) | (3, 27) | (2, 28) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 28)) | 64 |
| 62-191 | Chờ 130 bước (`-130`) | (2, 28) | (2, 28) | Dự kiến đứng yên tại (2, 28); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 28)) | 64 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (20, 2) (ô=84)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 3)
- Mảng hành động đã gửi server: `[3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 4, 5, 4, 4, 4, 5, 4, 4, 5, 4, 5, 4, 4, 4, 4, 3, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 5, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, -116]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (20, 2) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 64 |
| 2-3 | Di chuyển hướng 3 (`3`) | (21, 3) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 64 |
| 4 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 64 |
| 5-6 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 64 |
| 7 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 64 |
| 8-9 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 64 |
| 10-11 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 64 |
| 12-13 | Di chuyển hướng 4 (`4`) | (19, 9) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 64 |
| 14 | Di chuyển hướng 4 (`4`) | (18, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 64 |
| 15-16 | Di chuyển hướng 5 (`5`) | (18, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 64 |
| 17 | Di chuyển hướng 5 (`5`) | (17, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 64 |
| 18-19 | Di chuyển hướng 4 (`4`) | (16, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 64 |
| 20 | Di chuyển hướng 5 (`5`) | (15, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 64 |
| 21 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 64 |
| 22 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 64 |
| 23-24 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 64 |
| 25 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 64 |
| 26 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 64 |
| 27 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 64 |
| 28-29 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 64 |
| 30-31 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 64 |
| 32-33 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 64 |
| 34-35 | Di chuyển hướng 4 (`4`) | (8, 18) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 64 |
| 36-37 | Di chuyển hướng 4 (`4`) | (8, 19) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 64 |
| 38-39 | Di chuyển hướng 4 (`4`) | (7, 20) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 64 |
| 40 | Di chuyển hướng 4 (`4`) | (7, 21) | (6, 22) | Dự kiến đến điểm hẹn tọa độ (6, 22) | 64 |
| 41-42 | Di chuyển hướng 3 (`3`) | (6, 22) | (7, 23) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 23)) | 64 |
| 43-44 | Di chuyển hướng 0 (`0`) | (7, 23) | (6, 22) | Dự kiến đến điểm hẹn tọa độ (6, 22) | 64 |
| 45-46 | Di chuyển hướng 0 (`0`) | (6, 22) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 64 |
| 47-48 | Di chuyển hướng 0 (`0`) | (6, 21) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 64 |
| 49-50 | Di chuyển hướng 0 (`0`) | (5, 20) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 64 |
| 51-52 | Di chuyển hướng 0 (`0`) | (5, 19) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 64 |
| 53 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 64 |
| 54-55 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 64 |
| 56-58 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 64 |
| 59 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 64 |
| 60 | Di chuyển hướng 0 (`0`) | (5, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 64 |
| 61-62 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 64 |
| 63 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 64 |
| 64-65 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 64 |
| 66 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 64 |
| 67 | Di chuyển hướng 1 (`1`) | (2, 10) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 64 |
| 68-69 | Di chuyển hướng 0 (`0`) | (3, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 64 |
| 70 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 64 |
| 71 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 64 |
| 72-73 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 64 |
| 74 | Di chuyển hướng 0 (`0`) | (3, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 64 |
| 75 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 64 |
| 76-191 | Chờ 116 bước (`-116`) | (2, 3) | (2, 3) | Dự kiến đứng yên tại (2, 3); hướng tới tọa độ (2, 3) | 64 |

