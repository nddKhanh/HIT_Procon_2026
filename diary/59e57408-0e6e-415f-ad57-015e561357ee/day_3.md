# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 179
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 10 | #1 | #4 | (28, 12) | 0 | 64 |
| 13 | #1 | #4 | (28, 11) | 63 | 64 |
| 79 | #3 | #4 | (19, 27) | 0 | 64 |
| 100 | #2 | #4 | (27, 21) | 2 | 64 |
| 102 | #2 | #4 | (26, 22) | 63 | 64 |
| 104 | #2 | #4 | (26, 23) | 63 | 64 |
| 106 | #2 | #4 | (25, 23) | 63 | 64 |
| 110 | #2 | #4 | (23, 24) | 62 | 64 |
| 114 | #2 | #4 | (22, 25) | 62 | 64 |
| 115 | #2 | #4 | (21, 25) | 62 | 64 |
| 119 | #2 | #4 | (19, 26) | 62 | 64 |
| 123 | #2 | #4 | (18, 27) | 62 | 64 |
| 125 | #2 | #4 | (17, 27) | 63 | 64 |
| 127 | #2 | #4 | (16, 27) | 63 | 64 |
| 128 | #2 | #4 | (15, 26) | 62 | 64 |
| 129 | #2 | #4 | (15, 25) | 62 | 64 |
| 131 | #2 | #4 | (14, 24) | 63 | 64 |
| 133 | #2 | #4 | (14, 23) | 63 | 64 |
| 135 | #2 | #4 | (13, 22) | 63 | 64 |
| 137 | #2 | #4 | (13, 21) | 63 | 64 |
| 139 | #2 | #4 | (12, 20) | 63 | 64 |
| 142 | #2 | #4 | (12, 19) | 62 | 64 |
| 144 | #2 | #4 | (11, 18) | 63 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 2) (ô=67)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(10, 3))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(10, 3))
- Mảng hành động đã gửi server: `[2, 3, 2, 2, 2, 2, 2, -166]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 9 |
| 2-3 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 8 |
| 4-5 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 7 |
| 6 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 5 |
| 7-8 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 4 |
| 9-10 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 3 |
| 11-12 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 3)) | 2 |
| 13-178 | Chờ 166 bước (`-166`) | (10, 3) | (10, 3) | Dự kiến đứng yên tại (10, 3); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 3)) | 2 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (28, 12) (ô=412)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(23, 9))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(23, 9))
- Mảng hành động đã gửi server: `[-11, 0, 1, 1, 1, 1, 1, 1, 0, 5, 5, 5, 0, 5, 0, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 5, 4, 4, 4, 4, 1, 1, 1, 1, 2, 3, 3, 3, 2, 2, 1, 1, 2, 2, -84]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-10 | Chờ 11 bước (`-11`) | (28, 12) | (28, 12) | Dự kiến đứng yên tại (28, 12); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(28, 12)) | 64 |
| 11-12 | Di chuyển hướng 0 (`0`) | (28, 12) | (28, 11) | Dự kiến đến điểm hẹn tọa độ (28, 11) | 64 |
| 13-14 | Di chuyển hướng 1 (`1`) | (28, 11) | (28, 10) | Dự kiến đến điểm hẹn tọa độ (28, 10) | 63 |
| 15 | Di chuyển hướng 1 (`1`) | (28, 10) | (29, 9) | Dự kiến đến điểm hẹn tọa độ (29, 9) | 61 |
| 16-17 | Di chuyển hướng 1 (`1`) | (29, 9) | (29, 8) | Dự kiến đến điểm hẹn tọa độ (29, 8) | 60 |
| 18-19 | Di chuyển hướng 1 (`1`) | (29, 8) | (30, 7) | Dự kiến đến điểm hẹn tọa độ (30, 7) | 59 |
| 20 | Di chuyển hướng 1 (`1`) | (30, 7) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 57 |
| 21-22 | Di chuyển hướng 1 (`1`) | (30, 6) | (31, 5) | Dự kiến đến điểm hẹn tọa độ (31, 5) | 56 |
| 23-24 | Di chuyển hướng 0 (`0`) | (31, 5) | (30, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(30, 4)) | 55 |
| 25-26 | Di chuyển hướng 5 (`5`) | (30, 4) | (29, 4) | Dự kiến đến điểm hẹn tọa độ (29, 4) | 54 |
| 27-28 | Di chuyển hướng 5 (`5`) | (29, 4) | (28, 4) | Dự kiến đến điểm hẹn tọa độ (28, 4) | 53 |
| 29-30 | Di chuyển hướng 5 (`5`) | (28, 4) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 52 |
| 31-32 | Di chuyển hướng 0 (`0`) | (27, 4) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 51 |
| 33 | Di chuyển hướng 5 (`5`) | (27, 3) | (26, 3) | Dự kiến đến điểm hẹn tọa độ (26, 3) | 49 |
| 34 | Di chuyển hướng 0 (`0`) | (26, 3) | (25, 2) | Dự kiến đến điểm hẹn tọa độ (25, 2) | 47 |
| 35 | Di chuyển hướng 5 (`5`) | (25, 2) | (24, 2) | Dự kiến đến điểm hẹn tọa độ (24, 2) | 45 |
| 36 | Di chuyển hướng 5 (`5`) | (24, 2) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 43 |
| 37-38 | Di chuyển hướng 5 (`5`) | (23, 2) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 42 |
| 39-40 | Di chuyển hướng 5 (`5`) | (22, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 41 |
| 41-43 | Di chuyển hướng 5 (`5`) | (21, 2) | (20, 2) | Dự kiến đến điểm hẹn tọa độ (20, 2) | 39 |
| 44-46 | Di chuyển hướng 5 (`5`) | (20, 2) | (19, 2) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(19, 2)) | 37 |
| 47-48 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 36 |
| 49-50 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 35 |
| 51-52 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 34 |
| 53 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 32 |
| 54 | Di chuyển hướng 4 (`4`) | (17, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 30 |
| 55-56 | Di chuyển hướng 4 (`4`) | (17, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 29 |
| 57-58 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 27 |
| 59-60 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 26 |
| 61-63 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 24 |
| 64-65 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 23 |
| 66-67 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 22 |
| 68-69 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 21 |
| 70-71 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 20 |
| 72-73 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 19 |
| 74-76 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 17 |
| 77-78 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 16 |
| 79-80 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 14 |
| 81-82 | Di chuyển hướng 3 (`3`) | (17, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 13 |
| 83-84 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 12 |
| 85-86 | Di chuyển hướng 2 (`2`) | (18, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 11 |
| 87-88 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 10 |
| 89-90 | Di chuyển hướng 1 (`1`) | (20, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 9 |
| 91-92 | Di chuyển hướng 1 (`1`) | (20, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 8 |
| 93 | Di chuyển hướng 2 (`2`) | (21, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 6 |
| 94 | Di chuyển hướng 2 (`2`) | (22, 9) | (23, 9) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(23, 9)) | 4 |
| 95-178 | Chờ 84 bước (`-84`) | (23, 9) | (23, 9) | Dự kiến đứng yên tại (23, 9); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(23, 9)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (27, 21) (ô=699)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 5)
- Mảng hành động đã gửi server: `[-100, 4, 4, 5, 4, 5, 4, 5, 5, 5, 4, 4, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-99 | Chờ 100 bước (`-100`) | (27, 21) | (27, 21) | Dự kiến đứng yên tại (27, 21); mục tiêu Spot #11 (thương hiệu=1, tọa độ=(27, 21)) | 64 |
| 100-101 | Di chuyển hướng 4 (`4`) | (27, 21) | (26, 22) | Dự kiến đến điểm hẹn tọa độ (26, 22) | 64 |
| 102-103 | Di chuyển hướng 4 (`4`) | (26, 22) | (26, 23) | Dự kiến đến điểm hẹn tọa độ (26, 23) | 64 |
| 104-105 | Di chuyển hướng 5 (`5`) | (26, 23) | (25, 23) | Dự kiến đến điểm hẹn tọa độ (25, 23) | 64 |
| 106-107 | Di chuyển hướng 4 (`4`) | (25, 23) | (24, 24) | Dự kiến đến điểm hẹn tọa độ (24, 24) | 63 |
| 108-109 | Di chuyển hướng 5 (`5`) | (24, 24) | (23, 24) | Dự kiến đến điểm hẹn tọa độ (23, 24) | 64 |
| 110-111 | Di chuyển hướng 4 (`4`) | (23, 24) | (23, 25) | Dự kiến đến điểm hẹn tọa độ (23, 25) | 63 |
| 112-113 | Di chuyển hướng 5 (`5`) | (23, 25) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 64 |
| 114 | Di chuyển hướng 5 (`5`) | (22, 25) | (21, 25) | Dự kiến đến điểm hẹn tọa độ (21, 25) | 64 |
| 115-116 | Di chuyển hướng 5 (`5`) | (21, 25) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 63 |
| 117-118 | Di chuyển hướng 4 (`4`) | (20, 25) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 64 |
| 119-120 | Di chuyển hướng 4 (`4`) | (19, 26) | (19, 27) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 27)) | 63 |
| 121-122 | Di chuyển hướng 5 (`5`) | (19, 27) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 64 |
| 123-124 | Di chuyển hướng 5 (`5`) | (18, 27) | (17, 27) | Dự kiến đến điểm hẹn tọa độ (17, 27) | 64 |
| 125-126 | Di chuyển hướng 5 (`5`) | (17, 27) | (16, 27) | Dự kiến đến điểm hẹn tọa độ (16, 27) | 64 |
| 127 | Di chuyển hướng 0 (`0`) | (16, 27) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 64 |
| 128 | Di chuyển hướng 0 (`0`) | (15, 26) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 64 |
| 129-130 | Di chuyển hướng 0 (`0`) | (15, 25) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 64 |
| 131-132 | Di chuyển hướng 0 (`0`) | (14, 24) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 64 |
| 133-134 | Di chuyển hướng 0 (`0`) | (14, 23) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 64 |
| 135-136 | Di chuyển hướng 0 (`0`) | (13, 22) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 64 |
| 137-138 | Di chuyển hướng 0 (`0`) | (13, 21) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 64 |
| 139-141 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 64 |
| 142-143 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 64 |
| 144-145 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 63 |
| 146-147 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 62 |
| 148 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 60 |
| 149-150 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 59 |
| 151-152 | Di chuyển hướng 2 (`2`) | (11, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 58 |
| 153-154 | Di chuyển hướng 1 (`1`) | (12, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 57 |
| 155-156 | Di chuyển hướng 1 (`1`) | (13, 13) | (13, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 56 |
| 157-158 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 55 |
| 159 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 53 |
| 160-161 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 52 |
| 162-164 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 50 |
| 165 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 48 |
| 166-167 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 47 |
| 168-169 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 46 |
| 170-171 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 45 |
| 172-173 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 3)) | 44 |
| 174-175 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 43 |
| 176-177 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 42 |
| 178 | Chờ 1 bước (`-1`) | (11, 5) | (11, 5) | Dự kiến đứng yên tại (11, 5); hướng tới tọa độ (11, 5) | 42 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (27, 21) (ô=699)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(3, 2))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(3, 2))
- Mảng hành động đã gửi server: `[4, 4, 5, 4, 5, 4, 5, 5, 5, 4, 4, -58, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 1, 1, 1, 0, 5, 5, 5, 5, 5, 5, 5, 1, 1, 2, 1, 1, 1, 0, 1, 1, 5, 5, 5, 5, 5, 0, 5, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (27, 21) | (26, 22) | Dự kiến đến điểm hẹn tọa độ (26, 22) | 11 |
| 2-3 | Di chuyển hướng 4 (`4`) | (26, 22) | (26, 23) | Dự kiến đến điểm hẹn tọa độ (26, 23) | 10 |
| 4-5 | Di chuyển hướng 5 (`5`) | (26, 23) | (25, 23) | Dự kiến đến điểm hẹn tọa độ (25, 23) | 9 |
| 6-7 | Di chuyển hướng 4 (`4`) | (25, 23) | (24, 24) | Dự kiến đến điểm hẹn tọa độ (24, 24) | 8 |
| 8-9 | Di chuyển hướng 5 (`5`) | (24, 24) | (23, 24) | Dự kiến đến điểm hẹn tọa độ (23, 24) | 7 |
| 10-11 | Di chuyển hướng 4 (`4`) | (23, 24) | (23, 25) | Dự kiến đến điểm hẹn tọa độ (23, 25) | 6 |
| 12-13 | Di chuyển hướng 5 (`5`) | (23, 25) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 5 |
| 14 | Di chuyển hướng 5 (`5`) | (22, 25) | (21, 25) | Dự kiến đến điểm hẹn tọa độ (21, 25) | 3 |
| 15-16 | Di chuyển hướng 5 (`5`) | (21, 25) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 2 |
| 17-18 | Di chuyển hướng 4 (`4`) | (20, 25) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 1 |
| 19-20 | Di chuyển hướng 4 (`4`) | (19, 26) | (19, 27) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 27)) | 0 |
| 21-78 | Chờ 58 bước (`-58`) | (19, 27) | (19, 27) | Dự kiến đứng yên tại (19, 27); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 27)) | 64 |
| 79-80 | Di chuyển hướng 5 (`5`) | (19, 27) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 63 |
| 81-82 | Di chuyển hướng 5 (`5`) | (18, 27) | (17, 27) | Dự kiến đến điểm hẹn tọa độ (17, 27) | 62 |
| 83-84 | Di chuyển hướng 5 (`5`) | (17, 27) | (16, 27) | Dự kiến đến điểm hẹn tọa độ (16, 27) | 61 |
| 85 | Di chuyển hướng 0 (`0`) | (16, 27) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 59 |
| 86 | Di chuyển hướng 0 (`0`) | (15, 26) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 57 |
| 87-88 | Di chuyển hướng 0 (`0`) | (15, 25) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 56 |
| 89-90 | Di chuyển hướng 0 (`0`) | (14, 24) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 55 |
| 91-92 | Di chuyển hướng 0 (`0`) | (14, 23) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 54 |
| 93-94 | Di chuyển hướng 0 (`0`) | (13, 22) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 53 |
| 95-96 | Di chuyển hướng 0 (`0`) | (13, 21) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 52 |
| 97-99 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 50 |
| 100-101 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 49 |
| 102-103 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 48 |
| 104-105 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 47 |
| 106 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 45 |
| 107-108 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 44 |
| 109-110 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 43 |
| 111-112 | Di chuyển hướng 1 (`1`) | (12, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 42 |
| 113-114 | Di chuyển hướng 1 (`1`) | (13, 13) | (13, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 41 |
| 115-116 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 40 |
| 117 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 38 |
| 118 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 36 |
| 119-120 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 35 |
| 121-122 | Di chuyển hướng 5 (`5`) | (10, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 34 |
| 123-125 | Di chuyển hướng 5 (`5`) | (9, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 32 |
| 126-127 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 31 |
| 128-129 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(6, 11)) | 30 |
| 130-131 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 29 |
| 132 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 27 |
| 133-134 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 26 |
| 135-136 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 25 |
| 137-138 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 24 |
| 139-140 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 23 |
| 141-142 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 22 |
| 143-145 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 20 |
| 146-147 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 3)) | 19 |
| 148-149 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 18 |
| 150-151 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 17 |
| 152-153 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 16 |
| 154-155 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 15 |
| 156 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 13 |
| 157-158 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 12 |
| 159-160 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 2)) | 11 |
| 161-178 | Chờ 18 bước (`-18`) | (3, 2) | (3, 2) | Dự kiến đứng yên tại (3, 2); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 2)) | 11 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (30, 6) (ô=222)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 18)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 3, 4, 0, 5, 5, 0, 5, 5, 5, 0, 5, 5, 5, 5, 5, 0, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 2, 2, 3, 3, 3, 3, 3, 4, 3, 4, 3, 3, 2, 2, 2, 1, 1, 2, 1, 1, 1, 2, 2, 2, 1, 2, 4, 4, 5, 5, 4, 5, 4, 5, 4, 5, 5, 4, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, -35]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (30, 6) | (30, 7) | Dự kiến đến điểm hẹn tọa độ (30, 7) | 64 |
| 2 | Di chuyển hướng 4 (`4`) | (30, 7) | (29, 8) | Dự kiến đến điểm hẹn tọa độ (29, 8) | 64 |
| 3-4 | Di chuyển hướng 4 (`4`) | (29, 8) | (29, 9) | Dự kiến đến điểm hẹn tọa độ (29, 9) | 64 |
| 5-6 | Di chuyển hướng 4 (`4`) | (29, 9) | (28, 10) | Dự kiến đến điểm hẹn tọa độ (28, 10) | 64 |
| 7 | Di chuyển hướng 3 (`3`) | (28, 10) | (29, 11) | Dự kiến đến điểm hẹn tọa độ (29, 11) | 64 |
| 8-9 | Di chuyển hướng 4 (`4`) | (29, 11) | (28, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(28, 12)) | 64 |
| 10-11 | Di chuyển hướng 0 (`0`) | (28, 12) | (28, 11) | Dự kiến đến điểm hẹn tọa độ (28, 11) | 64 |
| 12-13 | Di chuyển hướng 5 (`5`) | (28, 11) | (27, 11) | Dự kiến đến điểm hẹn tọa độ (27, 11) | 64 |
| 14-15 | Di chuyển hướng 5 (`5`) | (27, 11) | (26, 11) | Dự kiến đến điểm hẹn tọa độ (26, 11) | 64 |
| 16 | Di chuyển hướng 0 (`0`) | (26, 11) | (25, 10) | Dự kiến đến điểm hẹn tọa độ (25, 10) | 64 |
| 17-18 | Di chuyển hướng 5 (`5`) | (25, 10) | (24, 10) | Dự kiến đến điểm hẹn tọa độ (24, 10) | 64 |
| 19-20 | Di chuyển hướng 5 (`5`) | (24, 10) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 64 |
| 21-22 | Di chuyển hướng 5 (`5`) | (23, 10) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 64 |
| 23-24 | Di chuyển hướng 0 (`0`) | (22, 10) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 64 |
| 25 | Di chuyển hướng 5 (`5`) | (22, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 64 |
| 26 | Di chuyển hướng 5 (`5`) | (21, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 64 |
| 27-28 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 64 |
| 29-30 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 64 |
| 31 | Di chuyển hướng 5 (`5`) | (18, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 64 |
| 32-33 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 64 |
| 34-35 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 64 |
| 36-37 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 64 |
| 38-39 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 64 |
| 40-41 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 64 |
| 42-43 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 64 |
| 44 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 64 |
| 45-47 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 64 |
| 48-49 | Di chuyển hướng 4 (`4`) | (12, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 64 |
| 50-51 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 64 |
| 52-53 | Di chuyển hướng 4 (`4`) | (11, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 64 |
| 54 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 64 |
| 55-56 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 64 |
| 57 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 64 |
| 58 | Di chuyển hướng 3 (`3`) | (13, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 64 |
| 59-60 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 64 |
| 61-62 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 64 |
| 63-64 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 64 |
| 65-66 | Di chuyển hướng 3 (`3`) | (15, 21) | (15, 22) | Dự kiến đến điểm hẹn tọa độ (15, 22) | 64 |
| 67 | Di chuyển hướng 4 (`4`) | (15, 22) | (15, 23) | Dự kiến đến điểm hẹn tọa độ (15, 23) | 64 |
| 68-69 | Di chuyển hướng 3 (`3`) | (15, 23) | (15, 24) | Dự kiến đến điểm hẹn tọa độ (15, 24) | 64 |
| 70 | Di chuyển hướng 4 (`4`) | (15, 24) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 64 |
| 71-72 | Di chuyển hướng 3 (`3`) | (15, 25) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 64 |
| 73 | Di chuyển hướng 3 (`3`) | (15, 26) | (16, 27) | Dự kiến đến điểm hẹn tọa độ (16, 27) | 64 |
| 74 | Di chuyển hướng 2 (`2`) | (16, 27) | (17, 27) | Dự kiến đến điểm hẹn tọa độ (17, 27) | 64 |
| 75-76 | Di chuyển hướng 2 (`2`) | (17, 27) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 64 |
| 77-78 | Di chuyển hướng 2 (`2`) | (18, 27) | (19, 27) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 27)) | 64 |
| 79-80 | Di chuyển hướng 1 (`1`) | (19, 27) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 64 |
| 81-82 | Di chuyển hướng 1 (`1`) | (19, 26) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 64 |
| 83-84 | Di chuyển hướng 2 (`2`) | (20, 25) | (21, 25) | Dự kiến đến điểm hẹn tọa độ (21, 25) | 64 |
| 85-86 | Di chuyển hướng 1 (`1`) | (21, 25) | (21, 24) | Dự kiến đến điểm hẹn tọa độ (21, 24) | 64 |
| 87 | Di chuyển hướng 1 (`1`) | (21, 24) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 64 |
| 88-89 | Di chuyển hướng 1 (`1`) | (22, 23) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 64 |
| 90-91 | Di chuyển hướng 2 (`2`) | (22, 22) | (23, 22) | Dự kiến đến điểm hẹn tọa độ (23, 22) | 64 |
| 92-93 | Di chuyển hướng 2 (`2`) | (23, 22) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 64 |
| 94-95 | Di chuyển hướng 2 (`2`) | (24, 22) | (25, 22) | Dự kiến đến điểm hẹn tọa độ (25, 22) | 64 |
| 96-97 | Di chuyển hướng 1 (`1`) | (25, 22) | (26, 21) | Dự kiến đến điểm hẹn tọa độ (26, 21) | 64 |
| 98-99 | Di chuyển hướng 2 (`2`) | (26, 21) | (27, 21) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(27, 21)) | 64 |
| 100-101 | Di chuyển hướng 4 (`4`) | (27, 21) | (26, 22) | Dự kiến đến điểm hẹn tọa độ (26, 22) | 64 |
| 102-103 | Di chuyển hướng 4 (`4`) | (26, 22) | (26, 23) | Dự kiến đến điểm hẹn tọa độ (26, 23) | 64 |
| 104-105 | Di chuyển hướng 5 (`5`) | (26, 23) | (25, 23) | Dự kiến đến điểm hẹn tọa độ (25, 23) | 64 |
| 106-107 | Di chuyển hướng 5 (`5`) | (25, 23) | (24, 23) | Dự kiến đến điểm hẹn tọa độ (24, 23) | 64 |
| 108-109 | Di chuyển hướng 4 (`4`) | (24, 23) | (23, 24) | Dự kiến đến điểm hẹn tọa độ (23, 24) | 64 |
| 110-111 | Di chuyển hướng 5 (`5`) | (23, 24) | (22, 24) | Dự kiến đến điểm hẹn tọa độ (22, 24) | 64 |
| 112-113 | Di chuyển hướng 4 (`4`) | (22, 24) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 64 |
| 114 | Di chuyển hướng 5 (`5`) | (22, 25) | (21, 25) | Dự kiến đến điểm hẹn tọa độ (21, 25) | 64 |
| 115-116 | Di chuyển hướng 4 (`4`) | (21, 25) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 64 |
| 117-118 | Di chuyển hướng 5 (`5`) | (20, 26) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 64 |
| 119-120 | Di chuyển hướng 5 (`5`) | (19, 26) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 64 |
| 121-122 | Di chuyển hướng 4 (`4`) | (18, 26) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 64 |
| 123-124 | Di chuyển hướng 5 (`5`) | (18, 27) | (17, 27) | Dự kiến đến điểm hẹn tọa độ (17, 27) | 64 |
| 125-126 | Di chuyển hướng 5 (`5`) | (17, 27) | (16, 27) | Dự kiến đến điểm hẹn tọa độ (16, 27) | 64 |
| 127 | Di chuyển hướng 0 (`0`) | (16, 27) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 64 |
| 128 | Di chuyển hướng 0 (`0`) | (15, 26) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 64 |
| 129-130 | Di chuyển hướng 0 (`0`) | (15, 25) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 64 |
| 131-132 | Di chuyển hướng 0 (`0`) | (14, 24) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 64 |
| 133-134 | Di chuyển hướng 0 (`0`) | (14, 23) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 64 |
| 135-136 | Di chuyển hướng 0 (`0`) | (13, 22) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 64 |
| 137-138 | Di chuyển hướng 0 (`0`) | (13, 21) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 64 |
| 139-141 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 64 |
| 142-143 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 64 |
| 144-178 | Chờ 35 bước (`-35`) | (11, 18) | (11, 18) | Dự kiến đứng yên tại (11, 18); hướng tới tọa độ (11, 18) | 64 |

