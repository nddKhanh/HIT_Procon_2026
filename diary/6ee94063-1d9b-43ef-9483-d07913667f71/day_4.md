# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 218
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 43 | #1 | #3 | (19, 12) | 0 | 64 |
| 96 | #2 | #3 | (6, 21) | 5 | 64 |
| 98 | #2 | #3 | (7, 21) | 63 | 64 |
| 108 | #0 | #3 | (12, 20) | 3 | 64 |
| 110 | #0 | #3 | (13, 20) | 63 | 64 |
| 114 | #2 | #3 | (14, 20) | 55 | 64 |
| 117 | #2 | #3 | (15, 20) | 62 | 64 |
| 162 | #2 | #3 | (15, 20) | 39 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (6, 21) (ô=678)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(29, 9))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(29, 9))
- Mảng hành động đã gửi server: `[2, 2, 1, 2, 2, 2, 2, -94, 2, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 2, 3, 3, 3, 3, -29]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 10 |
| 2-3 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 9 |
| 4-5 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 8 |
| 6-7 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 6 |
| 8-9 | Di chuyển hướng 2 (`2`) | (9, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 5 |
| 10-11 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 4 |
| 12-13 | Di chuyển hướng 2 (`2`) | (11, 20) | (12, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(12, 20)) | 3 |
| 14-107 | Chờ 94 bước (`-94`) | (12, 20) | (12, 20) | Dự kiến đứng yên tại (12, 20); mục tiêu Spot #9 (thương hiệu=1, tọa độ=(12, 20)) | 64 |
| 108-109 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 64 |
| 110-111 | Di chuyển hướng 1 (`1`) | (13, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 63 |
| 112-113 | Di chuyển hướng 1 (`1`) | (14, 19) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 62 |
| 114-116 | Di chuyển hướng 1 (`1`) | (14, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 60 |
| 117-118 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 59 |
| 119-120 | Di chuyển hướng 0 (`0`) | (15, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 57 |
| 121-123 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 55 |
| 124-125 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 54 |
| 126-127 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 53 |
| 128-129 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 52 |
| 130-131 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 51 |
| 132-133 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 50 |
| 134-135 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 48 |
| 136-137 | Di chuyển hướng 1 (`1`) | (15, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 47 |
| 138-139 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 45 |
| 140-141 | Di chuyển hướng 3 (`3`) | (17, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 44 |
| 142-143 | Di chuyển hướng 3 (`3`) | (17, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 43 |
| 144-146 | Di chuyển hướng 3 (`3`) | (18, 9) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 41 |
| 147-148 | Di chuyển hướng 3 (`3`) | (18, 10) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 40 |
| 149-150 | Di chuyển hướng 3 (`3`) | (19, 11) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 39 |
| 151-152 | Di chuyển hướng 3 (`3`) | (19, 12) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 38 |
| 153-155 | Di chuyển hướng 3 (`3`) | (20, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 36 |
| 156-158 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(21, 15)) | 34 |
| 159-160 | Di chuyển hướng 2 (`2`) | (21, 15) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 33 |
| 161-162 | Di chuyển hướng 1 (`1`) | (22, 15) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 32 |
| 163-164 | Di chuyển hướng 1 (`1`) | (22, 14) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 31 |
| 165 | Di chuyển hướng 1 (`1`) | (23, 13) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 29 |
| 166-167 | Di chuyển hướng 1 (`1`) | (23, 12) | (24, 11) | Dự kiến đến điểm hẹn tọa độ (24, 11) | 28 |
| 168-169 | Di chuyển hướng 1 (`1`) | (24, 11) | (24, 10) | Dự kiến đến điểm hẹn tọa độ (24, 10) | 27 |
| 170 | Di chuyển hướng 1 (`1`) | (24, 10) | (25, 9) | Dự kiến đến điểm hẹn tọa độ (25, 9) | 25 |
| 171-172 | Di chuyển hướng 1 (`1`) | (25, 9) | (25, 8) | Dự kiến đến điểm hẹn tọa độ (25, 8) | 24 |
| 173-174 | Di chuyển hướng 1 (`1`) | (25, 8) | (26, 7) | Dự kiến đến điểm hẹn tọa độ (26, 7) | 23 |
| 175-176 | Di chuyển hướng 1 (`1`) | (26, 7) | (26, 6) | Dự kiến đến điểm hẹn tọa độ (26, 6) | 22 |
| 177-178 | Di chuyển hướng 0 (`0`) | (26, 6) | (26, 5) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(26, 5)) | 21 |
| 179-180 | Di chuyển hướng 2 (`2`) | (26, 5) | (27, 5) | Dự kiến đến điểm hẹn tọa độ (27, 5) | 20 |
| 181-182 | Di chuyển hướng 3 (`3`) | (27, 5) | (27, 6) | Dự kiến đến điểm hẹn tọa độ (27, 6) | 19 |
| 183 | Di chuyển hướng 3 (`3`) | (27, 6) | (28, 7) | Dự kiến đến điểm hẹn tọa độ (28, 7) | 17 |
| 184-186 | Di chuyển hướng 3 (`3`) | (28, 7) | (28, 8) | Dự kiến đến điểm hẹn tọa độ (28, 8) | 15 |
| 187-188 | Di chuyển hướng 3 (`3`) | (28, 8) | (29, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(29, 9)) | 13 |
| 189-217 | Chờ 29 bước (`-29`) | (29, 9) | (29, 9) | Dự kiến đứng yên tại (29, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(29, 9)) | 13 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 0) (ô=2)
- Nhiên liệu đầu ngày: 31
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(29, 9))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(29, 9))
- Mảng hành động đã gửi server: `[2, 3, 2, 2, 2, 3, 3, 3, 3, 2, 3, 2, 2, 2, 3, 2, 2, 2, 3, 3, 3, 3, 3, -1, 3, 3, 3, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 2, 3, 3, 3, 3, -136]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 30 |
| 2-3 | Di chuyển hướng 3 (`3`) | (3, 0) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 29 |
| 4 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 27 |
| 5-6 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 26 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 25 |
| 9 | Di chuyển hướng 3 (`3`) | (7, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 23 |
| 10-11 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 22 |
| 12-13 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 21 |
| 14-15 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 20 |
| 16-17 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 19 |
| 18 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 17 |
| 19 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 15 |
| 20 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 13 |
| 21-22 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 12 |
| 23-24 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 11 |
| 25-26 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 10 |
| 27-29 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 8 |
| 30-31 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 6 |
| 32-33 | Di chuyển hướng 3 (`3`) | (17, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 5 |
| 34-35 | Di chuyển hướng 3 (`3`) | (17, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 4 |
| 36-38 | Di chuyển hướng 3 (`3`) | (18, 9) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 2 |
| 39-40 | Di chuyển hướng 3 (`3`) | (18, 10) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 1 |
| 41-42 | Di chuyển hướng 3 (`3`) | (19, 11) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 64 |
| 43 | Chờ 1 bước (`-1`) | (19, 12) | (19, 12) | Dự kiến đứng yên tại (19, 12); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 64 |
| 44-45 | Di chuyển hướng 3 (`3`) | (19, 12) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 63 |
| 46-48 | Di chuyển hướng 3 (`3`) | (20, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 61 |
| 49-51 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(21, 15)) | 59 |
| 52-53 | Di chuyển hướng 2 (`2`) | (21, 15) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 58 |
| 54-55 | Di chuyển hướng 1 (`1`) | (22, 15) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 57 |
| 56-57 | Di chuyển hướng 1 (`1`) | (22, 14) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 56 |
| 58 | Di chuyển hướng 1 (`1`) | (23, 13) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 54 |
| 59-60 | Di chuyển hướng 1 (`1`) | (23, 12) | (24, 11) | Dự kiến đến điểm hẹn tọa độ (24, 11) | 53 |
| 61-62 | Di chuyển hướng 1 (`1`) | (24, 11) | (24, 10) | Dự kiến đến điểm hẹn tọa độ (24, 10) | 52 |
| 63 | Di chuyển hướng 1 (`1`) | (24, 10) | (25, 9) | Dự kiến đến điểm hẹn tọa độ (25, 9) | 50 |
| 64-65 | Di chuyển hướng 1 (`1`) | (25, 9) | (25, 8) | Dự kiến đến điểm hẹn tọa độ (25, 8) | 49 |
| 66-67 | Di chuyển hướng 1 (`1`) | (25, 8) | (26, 7) | Dự kiến đến điểm hẹn tọa độ (26, 7) | 48 |
| 68-69 | Di chuyển hướng 1 (`1`) | (26, 7) | (26, 6) | Dự kiến đến điểm hẹn tọa độ (26, 6) | 47 |
| 70-71 | Di chuyển hướng 0 (`0`) | (26, 6) | (26, 5) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(26, 5)) | 46 |
| 72-73 | Di chuyển hướng 2 (`2`) | (26, 5) | (27, 5) | Dự kiến đến điểm hẹn tọa độ (27, 5) | 45 |
| 74-75 | Di chuyển hướng 3 (`3`) | (27, 5) | (27, 6) | Dự kiến đến điểm hẹn tọa độ (27, 6) | 44 |
| 76 | Di chuyển hướng 3 (`3`) | (27, 6) | (28, 7) | Dự kiến đến điểm hẹn tọa độ (28, 7) | 42 |
| 77-79 | Di chuyển hướng 3 (`3`) | (28, 7) | (28, 8) | Dự kiến đến điểm hẹn tọa độ (28, 8) | 40 |
| 80-81 | Di chuyển hướng 3 (`3`) | (28, 8) | (29, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(29, 9)) | 38 |
| 82-217 | Chờ 136 bước (`-136`) | (29, 9) | (29, 9) | Dự kiến đứng yên tại (29, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(29, 9)) | 38 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 21) (ô=678)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(21, 15))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(21, 15))
- Mảng hành động đã gửi server: `[-96, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 3, 3, 0, 5, 0, 5, 5, 5, 5, 5, 0, 5, 5, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-95 | Chờ 96 bước (`-96`) | (6, 21) | (6, 21) | Dự kiến đứng yên tại (6, 21); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 21)) | 64 |
| 96-97 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 64 |
| 98-99 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 63 |
| 100-101 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 62 |
| 102-103 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 60 |
| 104-105 | Di chuyển hướng 2 (`2`) | (9, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 59 |
| 106-107 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 58 |
| 108-109 | Di chuyển hướng 2 (`2`) | (11, 20) | (12, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(12, 20)) | 57 |
| 110-111 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 56 |
| 112-113 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 64 |
| 114-116 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 64 |
| 117-119 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 62 |
| 120-121 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 60 |
| 122-123 | Di chuyển hướng 3 (`3`) | (17, 20) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 59 |
| 124-125 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 58 |
| 126-127 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 57 |
| 128-129 | Di chuyển hướng 2 (`2`) | (20, 21) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 56 |
| 130-131 | Di chuyển hướng 2 (`2`) | (21, 21) | (22, 21) | Dự kiến đến điểm hẹn tọa độ (22, 21) | 55 |
| 132-133 | Di chuyển hướng 2 (`2`) | (22, 21) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 54 |
| 134-135 | Di chuyển hướng 2 (`2`) | (23, 21) | (24, 21) | Dự kiến đến điểm hẹn tọa độ (24, 21) | 53 |
| 136-137 | Di chuyển hướng 3 (`3`) | (24, 21) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 52 |
| 138-139 | Di chuyển hướng 3 (`3`) | (24, 22) | (25, 23) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(25, 23)) | 51 |
| 140-141 | Di chuyển hướng 0 (`0`) | (25, 23) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 50 |
| 142-143 | Di chuyển hướng 5 (`5`) | (24, 22) | (23, 22) | Dự kiến đến điểm hẹn tọa độ (23, 22) | 49 |
| 144-145 | Di chuyển hướng 0 (`0`) | (23, 22) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 48 |
| 146-147 | Di chuyển hướng 5 (`5`) | (23, 21) | (22, 21) | Dự kiến đến điểm hẹn tọa độ (22, 21) | 47 |
| 148-149 | Di chuyển hướng 5 (`5`) | (22, 21) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 46 |
| 150-151 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 45 |
| 152-153 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 44 |
| 154-155 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 43 |
| 156-157 | Di chuyển hướng 0 (`0`) | (18, 21) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 42 |
| 158-159 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 41 |
| 160-161 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 64 |
| 162-164 | Di chuyển hướng 0 (`0`) | (15, 20) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 62 |
| 165-166 | Di chuyển hướng 1 (`1`) | (15, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 61 |
| 167-168 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 60 |
| 169-170 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 59 |
| 171-172 | Di chuyển hướng 0 (`0`) | (15, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 57 |
| 173-175 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 55 |
| 176-177 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 54 |
| 178-179 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 53 |
| 180-181 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 52 |
| 182-183 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 51 |
| 184-185 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 50 |
| 186-187 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 48 |
| 188-189 | Di chuyển hướng 1 (`1`) | (15, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 47 |
| 190-191 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 45 |
| 192-193 | Di chuyển hướng 3 (`3`) | (17, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 44 |
| 194-195 | Di chuyển hướng 3 (`3`) | (17, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 43 |
| 196-198 | Di chuyển hướng 3 (`3`) | (18, 9) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 41 |
| 199-200 | Di chuyển hướng 3 (`3`) | (18, 10) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 40 |
| 201-202 | Di chuyển hướng 3 (`3`) | (19, 11) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 39 |
| 203-204 | Di chuyển hướng 3 (`3`) | (19, 12) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 38 |
| 205-207 | Di chuyển hướng 3 (`3`) | (20, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 36 |
| 208-210 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(21, 15)) | 34 |
| 211-217 | Chờ 7 bước (`-7`) | (21, 15) | (21, 15) | Dự kiến đứng yên tại (21, 15); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(21, 15)) | 34 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (26, 5) (ô=186)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 20)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 5, 4, 4, 5, 4, 5, -26, 0, 0, 0, 0, 0, 5, 4, 4, 4, 3, 4, 4, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 5, 4, 4, 5, 2, 1, 1, 2, 2, 2, 2, 3, 2, 2, 2, -103]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (26, 5) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 64 |
| 2-3 | Di chuyển hướng 4 (`4`) | (25, 6) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 64 |
| 4-5 | Di chuyển hướng 4 (`4`) | (25, 7) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 64 |
| 6-7 | Di chuyển hướng 4 (`4`) | (24, 8) | (24, 9) | Dự kiến đến điểm hẹn tọa độ (24, 9) | 64 |
| 8 | Di chuyển hướng 5 (`5`) | (24, 9) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 64 |
| 9 | Di chuyển hướng 4 (`4`) | (23, 9) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 64 |
| 10-11 | Di chuyển hướng 4 (`4`) | (22, 10) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 64 |
| 12 | Di chuyển hướng 5 (`5`) | (22, 11) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 64 |
| 13-14 | Di chuyển hướng 4 (`4`) | (21, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 64 |
| 15-16 | Di chuyển hướng 5 (`5`) | (20, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 64 |
| 17-42 | Chờ 26 bước (`-26`) | (19, 12) | (19, 12) | Dự kiến đứng yên tại (19, 12); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 64 |
| 43-44 | Di chuyển hướng 0 (`0`) | (19, 12) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 64 |
| 45-46 | Di chuyển hướng 0 (`0`) | (19, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 64 |
| 47-48 | Di chuyển hướng 0 (`0`) | (18, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 64 |
| 49-51 | Di chuyển hướng 0 (`0`) | (18, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 64 |
| 52-53 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 64 |
| 54-55 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 64 |
| 56-57 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 64 |
| 58-59 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 64 |
| 60-61 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 64 |
| 62-63 | Di chuyển hướng 3 (`3`) | (14, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 64 |
| 64-65 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 64 |
| 66-67 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 64 |
| 68-69 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 64 |
| 70-71 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 64 |
| 72-74 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 64 |
| 75-76 | Di chuyển hướng 4 (`4`) | (15, 16) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 64 |
| 77-78 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 64 |
| 79-81 | Di chuyển hướng 4 (`4`) | (14, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 64 |
| 82-83 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 64 |
| 84-85 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 64 |
| 86 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 64 |
| 87 | Di chuyển hướng 5 (`5`) | (11, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 64 |
| 88 | Di chuyển hướng 5 (`5`) | (10, 19) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 64 |
| 89 | Di chuyển hướng 5 (`5`) | (9, 19) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 64 |
| 90-91 | Di chuyển hướng 4 (`4`) | (8, 19) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 64 |
| 92-93 | Di chuyển hướng 4 (`4`) | (7, 20) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 64 |
| 94-95 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 21)) | 64 |
| 96-97 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 64 |
| 98-99 | Di chuyển hướng 1 (`1`) | (7, 21) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 64 |
| 100-101 | Di chuyển hướng 1 (`1`) | (7, 20) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 64 |
| 102-103 | Di chuyển hướng 2 (`2`) | (8, 19) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 64 |
| 104 | Di chuyển hướng 2 (`2`) | (9, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 64 |
| 105 | Di chuyển hướng 2 (`2`) | (10, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 64 |
| 106 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 64 |
| 107 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(12, 20)) | 64 |
| 108-109 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 64 |
| 110-111 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 64 |
| 112-114 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 64 |
| 115-217 | Chờ 103 bước (`-103`) | (15, 20) | (15, 20) | Dự kiến đứng yên tại (15, 20); hướng tới tọa độ (15, 20) | 64 |

