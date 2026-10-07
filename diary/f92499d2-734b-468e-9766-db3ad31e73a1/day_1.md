# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 76
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #5 | (4, 31) | 119 | 120 |
| 2 | #4 | #6 | (20, 14) | 119 | 120 |
| 3 | #2 | #5 | (4, 30) | 118 | 120 |
| 3 | #4 | #6 | (21, 13) | 118 | 120 |
| 4 | #2 | #5 | (5, 29) | 118 | 120 |
| 4 | #4 | #6 | (20, 12) | 118 | 120 |
| 5 | #2 | #5 | (4, 28) | 118 | 120 |
| 5 | #4 | #6 | (20, 11) | 118 | 120 |
| 6 | #4 | #6 | (19, 10) | 118 | 120 |
| 8 | #4 | #6 | (19, 9) | 119 | 120 |
| 9 | #4 | #6 | (18, 8) | 118 | 120 |
| 10 | #4 | #6 | (18, 7) | 118 | 120 |
| 11 | #4 | #6 | (17, 6) | 118 | 120 |
| 13 | #4 | #6 | (17, 5) | 119 | 120 |
| 15 | #4 | #6 | (16, 4) | 119 | 120 |
| 33 | #0 | #6 | (16, 4) | 7 | 120 |
| 40 | #0 | #6 | (14, 8) | 111 | 120 |
| 51 | #1 | #5 | (26, 18) | 1 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (17, 20) (ô=657)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=13, tọa độ=(20, 18))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=13, tọa độ=(20, 18))
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 4, 4, 3, 3, 2, 2, 2, -1, 5, 4, 4, 3, 4, 4, 4, 4, 5, 4, 4, 4, 4, 4, 3, 3, 3, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (17, 20) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 57 |
| 3-5 | Di chuyển hướng 1 (`1`) | (17, 19) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 55 |
| 6 | Di chuyển hướng 0 (`0`) | (17, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 53 |
| 7 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 51 |
| 8 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 49 |
| 9 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 47 |
| 10 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 45 |
| 11 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 43 |
| 12 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 41 |
| 13 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 39 |
| 14 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 37 |
| 15 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 35 |
| 16 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 33 |
| 17 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 31 |
| 18 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 29 |
| 19 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 27 |
| 20 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 25 |
| 21 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 23 |
| 22 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 21 |
| 23 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 19 |
| 24-25 | Di chuyển hướng 4 (`4`) | (13, 0) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 18 |
| 26 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 16 |
| 27 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 14 |
| 28 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 12 |
| 29 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 10 |
| 30-31 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 9 |
| 32 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 120 |
| 33 | Chờ 1 bước (`-1`) | (16, 4) | (16, 4) | Dự kiến đứng yên tại (16, 4); mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 120 |
| 34-35 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 119 |
| 36 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 117 |
| 37 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 115 |
| 38 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 113 |
| 39 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 120 |
| 40 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 118 |
| 41-43 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 116 |
| 44-45 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 115 |
| 46 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 113 |
| 47-48 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 112 |
| 49-50 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 111 |
| 51 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 109 |
| 52 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 107 |
| 53 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 105 |
| 54 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 103 |
| 55 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 101 |
| 56 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 99 |
| 57 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 97 |
| 58 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 95 |
| 59 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 93 |
| 60 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 91 |
| 61-62 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 90 |
| 63-64 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 89 |
| 65-66 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 88 |
| 67-69 | Di chuyển hướng 2 (`2`) | (17, 20) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 86 |
| 70-72 | Di chuyển hướng 2 (`2`) | (18, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 84 |
| 73 | Di chuyển hướng 2 (`2`) | (19, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 82 |
| 74 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 80 |
| 75 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 78 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (30, 29) (ô=958)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(29, 24)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(29, 24)
- Mảng hành động đã gửi server: `[1, 1, 0, 0, 5, 5, 0, 0, 5, 5, 0, 5, 5, 0, 0, 0, 0, 3, 2, 2, 2, 2, 2, 1, -17, 0, 1, 2, 2, 3, 3, 3, 2, 3, 4, 4, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (30, 29) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 41 |
| 2 | Di chuyển hướng 1 (`1`) | (30, 28) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 39 |
| 3 | Di chuyển hướng 0 (`0`) | (31, 27) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 37 |
| 4 | Di chuyển hướng 0 (`0`) | (30, 26) | (30, 25) | Dự kiến đến điểm hẹn tọa độ (30, 25) | 35 |
| 5 | Di chuyển hướng 5 (`5`) | (30, 25) | (29, 25) | Dự kiến đến điểm hẹn tọa độ (29, 25) | 33 |
| 6 | Di chuyển hướng 5 (`5`) | (29, 25) | (28, 25) | Dự kiến đến điểm hẹn tọa độ (28, 25) | 31 |
| 7 | Di chuyển hướng 0 (`0`) | (28, 25) | (27, 24) | Dự kiến đến điểm hẹn tọa độ (27, 24) | 29 |
| 8 | Di chuyển hướng 0 (`0`) | (27, 24) | (27, 23) | Dự kiến đến điểm hẹn tọa độ (27, 23) | 27 |
| 9 | Di chuyển hướng 5 (`5`) | (27, 23) | (26, 23) | Dự kiến đến điểm hẹn tọa độ (26, 23) | 25 |
| 10 | Di chuyển hướng 5 (`5`) | (26, 23) | (25, 23) | Dự kiến đến điểm hẹn tọa độ (25, 23) | 23 |
| 11 | Di chuyển hướng 0 (`0`) | (25, 23) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 21 |
| 12 | Di chuyển hướng 5 (`5`) | (24, 22) | (23, 22) | Dự kiến đến điểm hẹn tọa độ (23, 22) | 19 |
| 13-14 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 18 |
| 15-16 | Di chuyển hướng 0 (`0`) | (22, 22) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 17 |
| 17-18 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 16 |
| 19-21 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 14 |
| 22 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 12 |
| 23-24 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 11 |
| 25 | Di chuyển hướng 2 (`2`) | (21, 19) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 9 |
| 26-27 | Di chuyển hướng 2 (`2`) | (22, 19) | (23, 19) | Dự kiến đến điểm hẹn tọa độ (23, 19) | 8 |
| 28-29 | Di chuyển hướng 2 (`2`) | (23, 19) | (24, 19) | Dự kiến đến điểm hẹn tọa độ (24, 19) | 7 |
| 30 | Di chuyển hướng 2 (`2`) | (24, 19) | (25, 19) | Dự kiến đến điểm hẹn tọa độ (25, 19) | 5 |
| 31-33 | Di chuyển hướng 2 (`2`) | (25, 19) | (26, 19) | Dự kiến đến điểm hẹn tọa độ (26, 19) | 3 |
| 34 | Di chuyển hướng 1 (`1`) | (26, 19) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 1 |
| 35-51 | Chờ 17 bước (`-17`) | (26, 18) | (26, 18) | Dự kiến đứng yên tại (26, 18); mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 120 |
| 52-53 | Di chuyển hướng 0 (`0`) | (26, 18) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 119 |
| 54-56 | Di chuyển hướng 1 (`1`) | (26, 17) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 117 |
| 57-58 | Di chuyển hướng 2 (`2`) | (26, 16) | (27, 16) | Dự kiến đến điểm hẹn tọa độ (27, 16) | 116 |
| 59-60 | Di chuyển hướng 2 (`2`) | (27, 16) | (28, 16) | Dự kiến đến điểm hẹn tọa độ (28, 16) | 115 |
| 61 | Di chuyển hướng 3 (`3`) | (28, 16) | (29, 17) | Dự kiến đến điểm hẹn tọa độ (29, 17) | 113 |
| 62 | Di chuyển hướng 3 (`3`) | (29, 17) | (29, 18) | Dự kiến đến điểm hẹn tọa độ (29, 18) | 111 |
| 63 | Di chuyển hướng 3 (`3`) | (29, 18) | (30, 19) | Dự kiến đến điểm hẹn tọa độ (30, 19) | 109 |
| 64 | Di chuyển hướng 2 (`2`) | (30, 19) | (31, 19) | Dự kiến đến điểm hẹn tọa độ (31, 19) | 107 |
| 65 | Di chuyển hướng 3 (`3`) | (31, 19) | (31, 20) | Dự kiến đến điểm hẹn tọa độ (31, 20) | 105 |
| 66 | Di chuyển hướng 4 (`4`) | (31, 20) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 103 |
| 67-68 | Di chuyển hướng 4 (`4`) | (31, 21) | (30, 22) | Dự kiến đến điểm hẹn tọa độ (30, 22) | 102 |
| 69-71 | Di chuyển hướng 4 (`4`) | (30, 22) | (30, 23) | Dự kiến đến điểm hẹn tọa độ (30, 23) | 100 |
| 72-74 | Di chuyển hướng 4 (`4`) | (30, 23) | (29, 24) | Dự kiến đến điểm hẹn tọa độ (29, 24) | 98 |
| 75 | Chờ 1 bước (`-1`) | (29, 24) | (29, 24) | Dự kiến đứng yên tại (29, 24); hướng tới tọa độ (29, 24) | 98 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 31) (ô=995)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 9)
- Mảng hành động đã gửi server: `[2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 4, 4, 4, 3, 3, 3, 3, 3, 2, 3, 3, 2, 2, 2, 3, 3, 3, 4, 2, 1, 1, 1, 1, 1, 2, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 31) | (4, 31) | Dự kiến đến điểm hẹn tọa độ (4, 31) | 120 |
| 2 | Di chuyển hướng 1 (`1`) | (4, 31) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 120 |
| 3 | Di chuyển hướng 1 (`1`) | (4, 30) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 120 |
| 4 | Di chuyển hướng 0 (`0`) | (5, 29) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 120 |
| 5 | Di chuyển hướng 0 (`0`) | (4, 28) | (4, 27) | Dự kiến đến điểm hẹn tọa độ (4, 27) | 118 |
| 6 | Di chuyển hướng 0 (`0`) | (4, 27) | (3, 26) | Dự kiến đến điểm hẹn tọa độ (3, 26) | 116 |
| 7-8 | Di chuyển hướng 0 (`0`) | (3, 26) | (3, 25) | Dự kiến đến điểm hẹn tọa độ (3, 25) | 115 |
| 9 | Di chuyển hướng 0 (`0`) | (3, 25) | (2, 24) | Dự kiến đến điểm hẹn tọa độ (2, 24) | 113 |
| 10-11 | Di chuyển hướng 0 (`0`) | (2, 24) | (2, 23) | Dự kiến đến điểm hẹn tọa độ (2, 23) | 112 |
| 12-14 | Di chuyển hướng 0 (`0`) | (2, 23) | (1, 22) | Dự kiến đến điểm hẹn tọa độ (1, 22) | 110 |
| 15 | Di chuyển hướng 0 (`0`) | (1, 22) | (1, 21) | Dự kiến đến điểm hẹn tọa độ (1, 21) | 108 |
| 16 | Di chuyển hướng 0 (`0`) | (1, 21) | (0, 20) | Dự kiến đến điểm hẹn tọa độ (0, 20) | 106 |
| 17 | Di chuyển hướng 1 (`1`) | (0, 20) | (1, 19) | Dự kiến đến điểm hẹn tọa độ (1, 19) | 104 |
| 18 | Di chuyển hướng 0 (`0`) | (1, 19) | (0, 18) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=12, tọa độ=(0, 18)) | 102 |
| 19-20 | Di chuyển hướng 0 (`0`) | (0, 18) | (0, 17) | Dự kiến đến điểm hẹn tọa độ (0, 17) | 101 |
| 21-22 | Di chuyển hướng 1 (`1`) | (0, 17) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 100 |
| 23 | Di chuyển hướng 0 (`0`) | (0, 16) | (0, 15) | Dự kiến đến điểm hẹn tọa độ (0, 15) | 98 |
| 24 | Di chuyển hướng 1 (`1`) | (0, 15) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 96 |
| 25 | Di chuyển hướng 1 (`1`) | (0, 14) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 94 |
| 26 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 92 |
| 27 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 90 |
| 28 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 88 |
| 29 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 86 |
| 30 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 84 |
| 31 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 82 |
| 32 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 80 |
| 33 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 78 |
| 34 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 76 |
| 35 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 74 |
| 36-37 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 73 |
| 38-39 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 72 |
| 40-41 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 71 |
| 42 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 69 |
| 43 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 67 |
| 44 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 65 |
| 45 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 63 |
| 46 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 61 |
| 47 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 59 |
| 48 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 57 |
| 49 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 55 |
| 50 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 53 |
| 51 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 51 |
| 52-53 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 50 |
| 54-55 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 49 |
| 56 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 47 |
| 57 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 45 |
| 58-59 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 44 |
| 60-61 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 43 |
| 62-63 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 42 |
| 64 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 40 |
| 65 | Di chuyển hướng 1 (`1`) | (10, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 38 |
| 66 | Di chuyển hướng 1 (`1`) | (10, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 36 |
| 67 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 34 |
| 68-69 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 33 |
| 70-71 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 32 |
| 72 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 30 |
| 73-74 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 29 |
| 75 | Chờ 1 bước (`-1`) | (14, 9) | (14, 9) | Dự kiến đứng yên tại (14, 9); hướng tới tọa độ (14, 9) | 29 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (27, 30) (ô=987)
- Nhiên liệu đầu ngày: 78
- Mục tiêu kế hoạch từ Solver: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Địa điểm đích kế hoạch: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Mảng hành động đã gửi server: `[5, 0, 5, 5, 5, 4, 4, 5, 5, 5, 0, 0, 5, 2, 1, 1, 0, 0, 5, 4, 5, 4, 4, 5, 5, 0, 5, 5, 0, 5, 5, 5, 3, 3, 2, 3, 3, 3, 2, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 77 |
| 2 | Di chuyển hướng 0 (`0`) | (26, 30) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 75 |
| 3 | Di chuyển hướng 5 (`5`) | (26, 29) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 73 |
| 4-5 | Di chuyển hướng 5 (`5`) | (25, 29) | (24, 29) | Dự kiến đến điểm hẹn tọa độ (24, 29) | 72 |
| 6-7 | Di chuyển hướng 5 (`5`) | (24, 29) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 71 |
| 8-9 | Di chuyển hướng 4 (`4`) | (23, 29) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 70 |
| 10 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 68 |
| 11-12 | Di chuyển hướng 5 (`5`) | (22, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 67 |
| 13-15 | Di chuyển hướng 5 (`5`) | (21, 31) | (20, 31) | Dự kiến đến điểm hẹn tọa độ (20, 31) | 65 |
| 16-18 | Di chuyển hướng 5 (`5`) | (20, 31) | (19, 31) | Dự kiến đến điểm hẹn tọa độ (19, 31) | 63 |
| 19-21 | Di chuyển hướng 0 (`0`) | (19, 31) | (18, 30) | Dự kiến đến điểm hẹn tọa độ (18, 30) | 61 |
| 22-24 | Di chuyển hướng 0 (`0`) | (18, 30) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 59 |
| 25 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 57 |
| 26-27 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 56 |
| 28 | Di chuyển hướng 1 (`1`) | (18, 29) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 54 |
| 29 | Di chuyển hướng 1 (`1`) | (18, 28) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 52 |
| 30 | Di chuyển hướng 0 (`0`) | (19, 27) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 50 |
| 31 | Di chuyển hướng 0 (`0`) | (18, 26) | (18, 25) | Dự kiến đến điểm hẹn tọa độ (18, 25) | 48 |
| 32-34 | Di chuyển hướng 5 (`5`) | (18, 25) | (17, 25) | Dự kiến đến điểm hẹn tọa độ (17, 25) | 46 |
| 35-36 | Di chuyển hướng 4 (`4`) | (17, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 45 |
| 37-38 | Di chuyển hướng 5 (`5`) | (16, 26) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 44 |
| 39-41 | Di chuyển hướng 4 (`4`) | (15, 26) | (15, 27) | Dự kiến đến điểm hẹn tọa độ (15, 27) | 42 |
| 42-44 | Di chuyển hướng 4 (`4`) | (15, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 40 |
| 45-46 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 39 |
| 47 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 37 |
| 48 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 35 |
| 49 | Di chuyển hướng 5 (`5`) | (12, 27) | (11, 27) | Dự kiến đến điểm hẹn tọa độ (11, 27) | 33 |
| 50-51 | Di chuyển hướng 5 (`5`) | (11, 27) | (10, 27) | Dự kiến đến điểm hẹn tọa độ (10, 27) | 32 |
| 52-53 | Di chuyển hướng 0 (`0`) | (10, 27) | (9, 26) | Dự kiến đến điểm hẹn tọa độ (9, 26) | 31 |
| 54-55 | Di chuyển hướng 5 (`5`) | (9, 26) | (8, 26) | Dự kiến đến điểm hẹn tọa độ (8, 26) | 30 |
| 56-58 | Di chuyển hướng 5 (`5`) | (8, 26) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 28 |
| 59 | Di chuyển hướng 5 (`5`) | (7, 26) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 26 |
| 60-61 | Di chuyển hướng 3 (`3`) | (6, 26) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 25 |
| 62 | Di chuyển hướng 3 (`3`) | (7, 27) | (7, 28) | Dự kiến đến điểm hẹn tọa độ (7, 28) | 23 |
| 63 | Di chuyển hướng 2 (`2`) | (7, 28) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 21 |
| 64 | Di chuyển hướng 3 (`3`) | (8, 28) | (9, 29) | Dự kiến đến điểm hẹn tọa độ (9, 29) | 19 |
| 65 | Di chuyển hướng 3 (`3`) | (9, 29) | (9, 30) | Dự kiến đến điểm hẹn tọa độ (9, 30) | 17 |
| 66 | Di chuyển hướng 3 (`3`) | (9, 30) | (10, 31) | Dự kiến đến điểm hẹn tọa độ (10, 31) | 15 |
| 67 | Di chuyển hướng 2 (`2`) | (10, 31) | (11, 31) | Dự kiến đạt mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 13 |
| 68-75 | Chờ 8 bước (`-8`) | (11, 31) | (11, 31) | Dự kiến đứng yên tại (11, 31); mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 13 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (21, 15) (ô=501)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(29, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(29, 7)
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 2, 2, 3, 2, 5, 0, 0, 1, 0, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 5, 5, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 120 |
| 2 | Di chuyển hướng 1 (`1`) | (20, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 120 |
| 3 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 120 |
| 4 | Di chuyển hướng 0 (`0`) | (20, 12) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 120 |
| 5 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 120 |
| 6-7 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 120 |
| 8 | Di chuyển hướng 0 (`0`) | (19, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 120 |
| 9 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 120 |
| 10 | Di chuyển hướng 0 (`0`) | (18, 7) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 120 |
| 11-12 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 120 |
| 13-14 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 120 |
| 15-16 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 119 |
| 17-18 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 118 |
| 19-20 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 117 |
| 21 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 115 |
| 22 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 113 |
| 23 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 111 |
| 24-25 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 110 |
| 26 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 108 |
| 27 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 106 |
| 28 | Di chuyển hướng 1 (`1`) | (19, 5) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 104 |
| 29 | Di chuyển hướng 0 (`0`) | (19, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 102 |
| 30 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 100 |
| 31-33 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 98 |
| 34-35 | Di chuyển hướng 2 (`2`) | (20, 1) | (21, 1) | Dự kiến đến điểm hẹn tọa độ (21, 1) | 97 |
| 36-37 | Di chuyển hướng 2 (`2`) | (21, 1) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 96 |
| 38-40 | Di chuyển hướng 2 (`2`) | (22, 1) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 94 |
| 41-42 | Di chuyển hướng 2 (`2`) | (23, 1) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 93 |
| 43-44 | Di chuyển hướng 2 (`2`) | (24, 1) | (25, 1) | Dự kiến đến điểm hẹn tọa độ (25, 1) | 92 |
| 45 | Di chuyển hướng 1 (`1`) | (25, 1) | (25, 0) | Dự kiến đến điểm hẹn tọa độ (25, 0) | 90 |
| 46 | Di chuyển hướng 2 (`2`) | (25, 0) | (26, 0) | Dự kiến đến điểm hẹn tọa độ (26, 0) | 88 |
| 47 | Di chuyển hướng 2 (`2`) | (26, 0) | (27, 0) | Dự kiến đến điểm hẹn tọa độ (27, 0) | 86 |
| 48 | Di chuyển hướng 2 (`2`) | (27, 0) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 84 |
| 49 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 82 |
| 50 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 80 |
| 51 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 78 |
| 52-53 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 77 |
| 54 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 75 |
| 55 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 73 |
| 56 | Di chuyển hướng 4 (`4`) | (28, 0) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 71 |
| 57-59 | Di chuyển hướng 4 (`4`) | (28, 1) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 69 |
| 60-62 | Di chuyển hướng 4 (`4`) | (27, 2) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 67 |
| 63-64 | Di chuyển hướng 3 (`3`) | (27, 3) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 66 |
| 65-66 | Di chuyển hướng 3 (`3`) | (27, 4) | (28, 5) | Dự kiến đến điểm hẹn tọa độ (28, 5) | 65 |
| 67-68 | Di chuyển hướng 3 (`3`) | (28, 5) | (28, 6) | Dự kiến đến điểm hẹn tọa độ (28, 6) | 64 |
| 69 | Di chuyển hướng 2 (`2`) | (28, 6) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 62 |
| 70 | Di chuyển hướng 2 (`2`) | (29, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 60 |
| 71 | Di chuyển hướng 2 (`2`) | (30, 6) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 58 |
| 72-73 | Di chuyển hướng 5 (`5`) | (31, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 57 |
| 74 | Di chuyển hướng 5 (`5`) | (30, 6) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 55 |
| 75 | Di chuyển hướng 4 (`4`) | (29, 6) | (29, 7) | Dự kiến đến điểm hẹn tọa độ (29, 7) | 53 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (3, 31) (ô=995)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=6, tọa độ=(26, 18))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=6, tọa độ=(26, 18))
- Mảng hành động đã gửi server: `[2, 1, 1, 0, 1, 2, 2, 1, 1, 2, 2, 2, 3, 3, 3, 2, 2, 1, 1, 2, 1, 2, 2, 2, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 31) | (4, 31) | Dự kiến đến điểm hẹn tọa độ (4, 31) | 120 |
| 2 | Di chuyển hướng 1 (`1`) | (4, 31) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 120 |
| 3 | Di chuyển hướng 1 (`1`) | (4, 30) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 120 |
| 4 | Di chuyển hướng 0 (`0`) | (5, 29) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 120 |
| 5 | Di chuyển hướng 1 (`1`) | (4, 28) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 120 |
| 6-8 | Di chuyển hướng 2 (`2`) | (5, 27) | (6, 27) | Dự kiến đến điểm hẹn tọa độ (6, 27) | 120 |
| 9-11 | Di chuyển hướng 2 (`2`) | (6, 27) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 120 |
| 12 | Di chuyển hướng 1 (`1`) | (7, 27) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 120 |
| 13 | Di chuyển hướng 1 (`1`) | (7, 26) | (8, 25) | Dự kiến đến điểm hẹn tọa độ (8, 25) | 120 |
| 14-15 | Di chuyển hướng 2 (`2`) | (8, 25) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 120 |
| 16 | Di chuyển hướng 2 (`2`) | (9, 25) | (10, 25) | Dự kiến đến điểm hẹn tọa độ (10, 25) | 120 |
| 17 | Di chuyển hướng 2 (`2`) | (10, 25) | (11, 25) | Dự kiến đến điểm hẹn tọa độ (11, 25) | 120 |
| 18 | Di chuyển hướng 3 (`3`) | (11, 25) | (11, 26) | Dự kiến đến điểm hẹn tọa độ (11, 26) | 120 |
| 19 | Di chuyển hướng 3 (`3`) | (11, 26) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 120 |
| 20 | Di chuyển hướng 3 (`3`) | (12, 27) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 120 |
| 21 | Di chuyển hướng 2 (`2`) | (12, 28) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 120 |
| 22 | Di chuyển hướng 2 (`2`) | (13, 28) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 120 |
| 23-24 | Di chuyển hướng 1 (`1`) | (14, 28) | (15, 27) | Dự kiến đến điểm hẹn tọa độ (15, 27) | 120 |
| 25-27 | Di chuyển hướng 1 (`1`) | (15, 27) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 120 |
| 28-30 | Di chuyển hướng 2 (`2`) | (15, 26) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 120 |
| 31-32 | Di chuyển hướng 1 (`1`) | (16, 26) | (17, 25) | Dự kiến đến điểm hẹn tọa độ (17, 25) | 120 |
| 33-34 | Di chuyển hướng 2 (`2`) | (17, 25) | (18, 25) | Dự kiến đến điểm hẹn tọa độ (18, 25) | 120 |
| 35-37 | Di chuyển hướng 2 (`2`) | (18, 25) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 120 |
| 38 | Di chuyển hướng 2 (`2`) | (19, 25) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 120 |
| 39 | Di chuyển hướng 1 (`1`) | (20, 25) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 120 |
| 40 | Di chuyển hướng 1 (`1`) | (20, 24) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 120 |
| 41 | Di chuyển hướng 1 (`1`) | (21, 23) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 120 |
| 42 | Di chuyển hướng 2 (`2`) | (21, 22) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 120 |
| 43-44 | Di chuyển hướng 2 (`2`) | (22, 22) | (23, 22) | Dự kiến đến điểm hẹn tọa độ (23, 22) | 120 |
| 45-46 | Di chuyển hướng 2 (`2`) | (23, 22) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 120 |
| 47 | Di chuyển hướng 1 (`1`) | (24, 22) | (25, 21) | Dự kiến đến điểm hẹn tọa độ (25, 21) | 120 |
| 48 | Di chuyển hướng 1 (`1`) | (25, 21) | (25, 20) | Dự kiến đến điểm hẹn tọa độ (25, 20) | 120 |
| 49 | Di chuyển hướng 1 (`1`) | (25, 20) | (26, 19) | Dự kiến đến điểm hẹn tọa độ (26, 19) | 120 |
| 50 | Di chuyển hướng 1 (`1`) | (26, 19) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 120 |
| 51-75 | Chờ 25 bước (`-25`) | (26, 18) | (26, 18) | Dự kiến đứng yên tại (26, 18); mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 120 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (21, 15) (ô=501)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 8)
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -18, 5, 4, 4, 3, 4, -37]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 120 |
| 2 | Di chuyển hướng 1 (`1`) | (20, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 120 |
| 3 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 120 |
| 4 | Di chuyển hướng 0 (`0`) | (20, 12) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 120 |
| 5 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 120 |
| 6-7 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 120 |
| 8 | Di chuyển hướng 0 (`0`) | (19, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 120 |
| 9 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 120 |
| 10 | Di chuyển hướng 0 (`0`) | (18, 7) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 120 |
| 11-12 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 120 |
| 13-14 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 120 |
| 15-32 | Chờ 18 bước (`-18`) | (16, 4) | (16, 4) | Dự kiến đứng yên tại (16, 4); mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 120 |
| 33-34 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 120 |
| 35 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 120 |
| 36 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 120 |
| 37 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 120 |
| 38 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 120 |
| 39-75 | Chờ 37 bước (`-37`) | (14, 8) | (14, 8) | Dự kiến đứng yên tại (14, 8); hướng tới tọa độ (14, 8) | 120 |

