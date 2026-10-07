# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 100
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 25 | #2 | #5 | (27, 30) | 6 | 120 |
| 31 | #3 | #6 | (1, 2) | 16 | 120 |
| 44 | #4 | #6 | (11, 0) | 30 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (30, 23) (ô=766)
- Nhiên liệu đầu ngày: 89
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=8, tọa độ=(21, 7))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=8, tọa độ=(21, 7))
- Mảng hành động đã gửi server: `[4, 4, 5, 0, 0, 5, 5, 0, 5, 5, 0, 0, 0, 0, 3, 4, 5, 5, 5, 5, 5, 5, 5, 0, 5, 5, 0, 0, 0, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 0, 1, 1, 2, 3, 3, 2, 2, 3, 2, -27]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (30, 23) | (29, 24) | Dự kiến đến điểm hẹn tọa độ (29, 24) | 87 |
| 3-4 | Di chuyển hướng 4 (`4`) | (29, 24) | (29, 25) | Dự kiến đến điểm hẹn tọa độ (29, 25) | 86 |
| 5 | Di chuyển hướng 5 (`5`) | (29, 25) | (28, 25) | Dự kiến đến điểm hẹn tọa độ (28, 25) | 84 |
| 6 | Di chuyển hướng 0 (`0`) | (28, 25) | (27, 24) | Dự kiến đến điểm hẹn tọa độ (27, 24) | 82 |
| 7 | Di chuyển hướng 0 (`0`) | (27, 24) | (27, 23) | Dự kiến đến điểm hẹn tọa độ (27, 23) | 80 |
| 8 | Di chuyển hướng 5 (`5`) | (27, 23) | (26, 23) | Dự kiến đến điểm hẹn tọa độ (26, 23) | 78 |
| 9 | Di chuyển hướng 5 (`5`) | (26, 23) | (25, 23) | Dự kiến đến điểm hẹn tọa độ (25, 23) | 76 |
| 10 | Di chuyển hướng 0 (`0`) | (25, 23) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 74 |
| 11 | Di chuyển hướng 5 (`5`) | (24, 22) | (23, 22) | Dự kiến đến điểm hẹn tọa độ (23, 22) | 72 |
| 12-13 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 71 |
| 14-15 | Di chuyển hướng 0 (`0`) | (22, 22) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 70 |
| 16-17 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 69 |
| 18-20 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 67 |
| 21 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 65 |
| 22-23 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 64 |
| 24 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 62 |
| 25 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 60 |
| 26 | Di chuyển hướng 5 (`5`) | (19, 20) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 58 |
| 27-29 | Di chuyển hướng 5 (`5`) | (18, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 56 |
| 30-32 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 54 |
| 33-34 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 53 |
| 35-36 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 52 |
| 37-38 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 51 |
| 39 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 49 |
| 40 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 47 |
| 41 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 45 |
| 42 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 43 |
| 43 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 41 |
| 44 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 39 |
| 45 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 37 |
| 46 | Di chuyển hướng 1 (`1`) | (10, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 35 |
| 47 | Di chuyển hướng 1 (`1`) | (10, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 33 |
| 48 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 31 |
| 49-50 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 30 |
| 51-52 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 29 |
| 53 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 27 |
| 54-55 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 26 |
| 56-58 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 24 |
| 59 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 22 |
| 60 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 20 |
| 61 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 18 |
| 62 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 16 |
| 63 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 14 |
| 64-65 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 13 |
| 66-67 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 12 |
| 68-69 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 11 |
| 70 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 9 |
| 71 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 7 |
| 72 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 5 |
| 73-99 | Chờ 27 bước (`-27`) | (21, 7) | (21, 7) | Dự kiến đứng yên tại (21, 7); mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 5 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (24, 6) (ô=216)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=5, tọa độ=(31, 4))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=5, tọa độ=(31, 4))
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 5, 0, 1, 2, -58]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (24, 6) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 48 |
| 2 | Di chuyển hướng 1 (`1`) | (25, 6) | (26, 5) | Dự kiến đến điểm hẹn tọa độ (26, 5) | 46 |
| 3 | Di chuyển hướng 1 (`1`) | (26, 5) | (26, 4) | Dự kiến đến điểm hẹn tọa độ (26, 4) | 44 |
| 4-5 | Di chuyển hướng 1 (`1`) | (26, 4) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 43 |
| 6-7 | Di chuyển hướng 1 (`1`) | (27, 3) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 42 |
| 8-10 | Di chuyển hướng 1 (`1`) | (27, 2) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 40 |
| 11-13 | Di chuyển hướng 1 (`1`) | (28, 1) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 38 |
| 14 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 36 |
| 15 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 34 |
| 16 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 32 |
| 17-18 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 31 |
| 19 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 29 |
| 20 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 27 |
| 21 | Di chuyển hướng 4 (`4`) | (28, 0) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 25 |
| 22-24 | Di chuyển hướng 4 (`4`) | (28, 1) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 23 |
| 25-27 | Di chuyển hướng 4 (`4`) | (27, 2) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 21 |
| 28-29 | Di chuyển hướng 3 (`3`) | (27, 3) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 20 |
| 30-31 | Di chuyển hướng 3 (`3`) | (27, 4) | (28, 5) | Dự kiến đến điểm hẹn tọa độ (28, 5) | 19 |
| 32-33 | Di chuyển hướng 3 (`3`) | (28, 5) | (28, 6) | Dự kiến đến điểm hẹn tọa độ (28, 6) | 18 |
| 34 | Di chuyển hướng 2 (`2`) | (28, 6) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 16 |
| 35 | Di chuyển hướng 2 (`2`) | (29, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 14 |
| 36 | Di chuyển hướng 2 (`2`) | (30, 6) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 12 |
| 37-38 | Di chuyển hướng 5 (`5`) | (31, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 11 |
| 39 | Di chuyển hướng 0 (`0`) | (30, 6) | (30, 5) | Dự kiến đến điểm hẹn tọa độ (30, 5) | 9 |
| 40 | Di chuyển hướng 1 (`1`) | (30, 5) | (30, 4) | Dự kiến đến điểm hẹn tọa độ (30, 4) | 7 |
| 41 | Di chuyển hướng 2 (`2`) | (30, 4) | (31, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=5, tọa độ=(31, 4)) | 5 |
| 42-99 | Chờ 58 bước (`-58`) | (31, 4) | (31, 4) | Dự kiến đứng yên tại (31, 4); mục tiêu Spot #9 (thương hiệu=5, tọa độ=(31, 4)) | 5 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (30, 29) (ô=958)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 31)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 31)
- Mảng hành động đã gửi server: `[4, 5, 5, -19, 5, 0, 5, 5, 5, 4, 4, 5, 5, 5, 0, 0, 5, 2, 1, 1, 0, 0, 5, 4, 5, 4, 4, 5, 5, 0, 0, 0, 5, 5, 0, 5, 0, 5, 5, 5, 4, 4, 3, 3, 3, 3, 4, 3, 5, 5, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (30, 29) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 9 |
| 2-4 | Di chuyển hướng 5 (`5`) | (29, 30) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 7 |
| 5-6 | Di chuyển hướng 5 (`5`) | (28, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 6 |
| 7-25 | Chờ 19 bước (`-19`) | (27, 30) | (27, 30) | Dự kiến đứng yên tại (27, 30); mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 120 |
| 26-27 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 119 |
| 28 | Di chuyển hướng 0 (`0`) | (26, 30) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 117 |
| 29 | Di chuyển hướng 5 (`5`) | (26, 29) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 115 |
| 30-31 | Di chuyển hướng 5 (`5`) | (25, 29) | (24, 29) | Dự kiến đến điểm hẹn tọa độ (24, 29) | 114 |
| 32-33 | Di chuyển hướng 5 (`5`) | (24, 29) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 113 |
| 34-35 | Di chuyển hướng 4 (`4`) | (23, 29) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 112 |
| 36 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 110 |
| 37-38 | Di chuyển hướng 5 (`5`) | (22, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 109 |
| 39-41 | Di chuyển hướng 5 (`5`) | (21, 31) | (20, 31) | Dự kiến đến điểm hẹn tọa độ (20, 31) | 107 |
| 42-44 | Di chuyển hướng 5 (`5`) | (20, 31) | (19, 31) | Dự kiến đến điểm hẹn tọa độ (19, 31) | 105 |
| 45-47 | Di chuyển hướng 0 (`0`) | (19, 31) | (18, 30) | Dự kiến đến điểm hẹn tọa độ (18, 30) | 103 |
| 48-50 | Di chuyển hướng 0 (`0`) | (18, 30) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 101 |
| 51 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 99 |
| 52-53 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 98 |
| 54 | Di chuyển hướng 1 (`1`) | (18, 29) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 96 |
| 55 | Di chuyển hướng 1 (`1`) | (18, 28) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 94 |
| 56 | Di chuyển hướng 0 (`0`) | (19, 27) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 92 |
| 57 | Di chuyển hướng 0 (`0`) | (18, 26) | (18, 25) | Dự kiến đến điểm hẹn tọa độ (18, 25) | 90 |
| 58-60 | Di chuyển hướng 5 (`5`) | (18, 25) | (17, 25) | Dự kiến đến điểm hẹn tọa độ (17, 25) | 88 |
| 61-62 | Di chuyển hướng 4 (`4`) | (17, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 87 |
| 63-64 | Di chuyển hướng 5 (`5`) | (16, 26) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 86 |
| 65-67 | Di chuyển hướng 4 (`4`) | (15, 26) | (15, 27) | Dự kiến đến điểm hẹn tọa độ (15, 27) | 84 |
| 68-70 | Di chuyển hướng 4 (`4`) | (15, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 82 |
| 71-72 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 81 |
| 73 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 79 |
| 74 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 77 |
| 75 | Di chuyển hướng 0 (`0`) | (12, 27) | (11, 26) | Dự kiến đến điểm hẹn tọa độ (11, 26) | 75 |
| 76 | Di chuyển hướng 0 (`0`) | (11, 26) | (11, 25) | Dự kiến đến điểm hẹn tọa độ (11, 25) | 73 |
| 77 | Di chuyển hướng 5 (`5`) | (11, 25) | (10, 25) | Dự kiến đến điểm hẹn tọa độ (10, 25) | 71 |
| 78 | Di chuyển hướng 5 (`5`) | (10, 25) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 69 |
| 79 | Di chuyển hướng 0 (`0`) | (9, 25) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 67 |
| 80 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 65 |
| 81 | Di chuyển hướng 0 (`0`) | (7, 24) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 63 |
| 82 | Di chuyển hướng 5 (`5`) | (7, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 61 |
| 83 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 59 |
| 84-85 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến đến điểm hẹn tọa độ (4, 23) | 58 |
| 86 | Di chuyển hướng 4 (`4`) | (4, 23) | (3, 24) | Dự kiến đến điểm hẹn tọa độ (3, 24) | 56 |
| 87 | Di chuyển hướng 4 (`4`) | (3, 24) | (3, 25) | Dự kiến đến điểm hẹn tọa độ (3, 25) | 54 |
| 88 | Di chuyển hướng 3 (`3`) | (3, 25) | (3, 26) | Dự kiến đến điểm hẹn tọa độ (3, 26) | 52 |
| 89-90 | Di chuyển hướng 3 (`3`) | (3, 26) | (4, 27) | Dự kiến đến điểm hẹn tọa độ (4, 27) | 51 |
| 91 | Di chuyển hướng 3 (`3`) | (4, 27) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 49 |
| 92 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 47 |
| 93 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 45 |
| 94 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 43 |
| 95-96 | Di chuyển hướng 5 (`5`) | (5, 31) | (4, 31) | Dự kiến đến điểm hẹn tọa độ (4, 31) | 42 |
| 97 | Di chuyển hướng 5 (`5`) | (4, 31) | (3, 31) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 40 |
| 98-99 | Di chuyển hướng 2 (`2`) | (3, 31) | (4, 31) | Dự kiến đến điểm hẹn tọa độ (4, 31) | 39 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 30) (ô=960)
- Nhiên liệu đầu ngày: 69
- Mục tiêu kế hoạch từ Solver: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Địa điểm đích kế hoạch: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Mảng hành động đã gửi server: `[1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, -1, 4, 4, 4, 3, 3, 3, 3, 3, 2, 3, 3, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 2, 2, 3, 2, 5, 0, 5, 5, 4, 4, 4, 4, 4, 5, 4, 4, 1, 1, 0, 5, 5, 2, 2, 3, 4, 3, 4, 3, 2, 3, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 68 |
| 2 | Di chuyển hướng 0 (`0`) | (1, 29) | (0, 28) | Dự kiến đến điểm hẹn tọa độ (0, 28) | 66 |
| 3 | Di chuyển hướng 1 (`1`) | (0, 28) | (1, 27) | Dự kiến đến điểm hẹn tọa độ (1, 27) | 64 |
| 4 | Di chuyển hướng 0 (`0`) | (1, 27) | (0, 26) | Dự kiến đến điểm hẹn tọa độ (0, 26) | 62 |
| 5 | Di chuyển hướng 0 (`0`) | (0, 26) | (0, 25) | Dự kiến đến điểm hẹn tọa độ (0, 25) | 60 |
| 6 | Di chuyển hướng 1 (`1`) | (0, 25) | (0, 24) | Dự kiến đến điểm hẹn tọa độ (0, 24) | 58 |
| 7 | Di chuyển hướng 1 (`1`) | (0, 24) | (1, 23) | Dự kiến đến điểm hẹn tọa độ (1, 23) | 56 |
| 8 | Di chuyển hướng 1 (`1`) | (1, 23) | (1, 22) | Dự kiến đến điểm hẹn tọa độ (1, 22) | 54 |
| 9 | Di chuyển hướng 0 (`0`) | (1, 22) | (1, 21) | Dự kiến đến điểm hẹn tọa độ (1, 21) | 52 |
| 10 | Di chuyển hướng 0 (`0`) | (1, 21) | (0, 20) | Dự kiến đến điểm hẹn tọa độ (0, 20) | 50 |
| 11 | Di chuyển hướng 1 (`1`) | (0, 20) | (1, 19) | Dự kiến đến điểm hẹn tọa độ (1, 19) | 48 |
| 12 | Di chuyển hướng 1 (`1`) | (1, 19) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 46 |
| 13 | Di chuyển hướng 0 (`0`) | (1, 18) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 44 |
| 14-15 | Di chuyển hướng 0 (`0`) | (1, 17) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 43 |
| 16 | Di chuyển hướng 0 (`0`) | (0, 16) | (0, 15) | Dự kiến đến điểm hẹn tọa độ (0, 15) | 41 |
| 17 | Di chuyển hướng 1 (`1`) | (0, 15) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 39 |
| 18 | Di chuyển hướng 1 (`1`) | (0, 14) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 37 |
| 19 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 35 |
| 20 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 33 |
| 21 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 31 |
| 22 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 29 |
| 23 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 27 |
| 24 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 25 |
| 25 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 23 |
| 26 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 21 |
| 27 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 19 |
| 28 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 17 |
| 29-30 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 120 |
| 31 | Chờ 1 bước (`-1`) | (1, 2) | (1, 2) | Dự kiến đứng yên tại (1, 2); mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 120 |
| 32-33 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 119 |
| 34-35 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 118 |
| 36 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 116 |
| 37 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 114 |
| 38 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 112 |
| 39 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 110 |
| 40 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 108 |
| 41 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 106 |
| 42 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 104 |
| 43 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 102 |
| 44 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 100 |
| 45 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 98 |
| 46-47 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 97 |
| 48-49 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 96 |
| 50 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 94 |
| 51 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 92 |
| 52-53 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 91 |
| 54-55 | Di chuyển hướng 3 (`3`) | (9, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 90 |
| 56 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 88 |
| 57 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 86 |
| 58 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 84 |
| 59 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 82 |
| 60 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 80 |
| 61 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 78 |
| 62 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 76 |
| 63-64 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 75 |
| 65 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 73 |
| 66 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 71 |
| 67 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 69 |
| 68 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 67 |
| 69-71 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 65 |
| 72-73 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 64 |
| 74-75 | Di chuyển hướng 4 (`4`) | (9, 22) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 63 |
| 76-77 | Di chuyển hướng 4 (`4`) | (9, 23) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 62 |
| 78 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 60 |
| 79 | Di chuyển hướng 4 (`4`) | (7, 24) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 58 |
| 80 | Di chuyển hướng 4 (`4`) | (7, 25) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 56 |
| 81-82 | Di chuyển hướng 1 (`1`) | (6, 26) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 55 |
| 83 | Di chuyển hướng 1 (`1`) | (7, 25) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 53 |
| 84 | Di chuyển hướng 0 (`0`) | (7, 24) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 51 |
| 85 | Di chuyển hướng 5 (`5`) | (7, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 49 |
| 86 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 47 |
| 87-88 | Di chuyển hướng 2 (`2`) | (5, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 46 |
| 89 | Di chuyển hướng 2 (`2`) | (6, 23) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 44 |
| 90 | Di chuyển hướng 3 (`3`) | (7, 23) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 42 |
| 91 | Di chuyển hướng 4 (`4`) | (7, 24) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 40 |
| 92 | Di chuyển hướng 3 (`3`) | (7, 25) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 38 |
| 93 | Di chuyển hướng 4 (`4`) | (7, 26) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 36 |
| 94 | Di chuyển hướng 3 (`3`) | (7, 27) | (7, 28) | Dự kiến đến điểm hẹn tọa độ (7, 28) | 34 |
| 95 | Di chuyển hướng 2 (`2`) | (7, 28) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 32 |
| 96 | Di chuyển hướng 3 (`3`) | (8, 28) | (9, 29) | Dự kiến đến điểm hẹn tọa độ (9, 29) | 30 |
| 97 | Di chuyển hướng 3 (`3`) | (9, 29) | (9, 30) | Dự kiến đến điểm hẹn tọa độ (9, 30) | 28 |
| 98 | Di chuyển hướng 3 (`3`) | (9, 30) | (10, 31) | Dự kiến đến điểm hẹn tọa độ (10, 31) | 26 |
| 99 | Di chuyển hướng 2 (`2`) | (10, 31) | (11, 31) | Dự kiến đạt mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 24 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (12, 28) (ô=908)
- Nhiên liệu đầu ngày: 82
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=15, tọa độ=(31, 21))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=15, tọa độ=(31, 21))
- Mảng hành động đã gửi server: `[0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 5, 5, 3, 3, 3, 3, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 2, 3, 2, 2, 2, 0, 1, 2, 2, 3, 3, 3, 2, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 80 |
| 1 | Di chuyển hướng 1 (`1`) | (12, 27) | (12, 26) | Dự kiến đến điểm hẹn tọa độ (12, 26) | 78 |
| 2-4 | Di chuyển hướng 1 (`1`) | (12, 26) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 76 |
| 5-6 | Di chuyển hướng 1 (`1`) | (13, 25) | (13, 24) | Dự kiến đến điểm hẹn tọa độ (13, 24) | 75 |
| 7-9 | Di chuyển hướng 1 (`1`) | (13, 24) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 73 |
| 10-11 | Di chuyển hướng 1 (`1`) | (14, 23) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 72 |
| 12-13 | Di chuyển hướng 1 (`1`) | (14, 22) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 71 |
| 14-15 | Di chuyển hướng 1 (`1`) | (15, 21) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 70 |
| 16-17 | Di chuyển hướng 1 (`1`) | (15, 20) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 69 |
| 18-19 | Di chuyển hướng 0 (`0`) | (16, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 68 |
| 20-21 | Di chuyển hướng 1 (`1`) | (15, 18) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 67 |
| 22-24 | Di chuyển hướng 1 (`1`) | (16, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 65 |
| 25 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 63 |
| 26 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 61 |
| 27 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 59 |
| 28 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 57 |
| 29 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 55 |
| 30 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 53 |
| 31 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 51 |
| 32 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 49 |
| 33 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 47 |
| 34 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 45 |
| 35 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 43 |
| 36 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 41 |
| 37 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 39 |
| 38 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 37 |
| 39 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 35 |
| 40 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 33 |
| 41-42 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 32 |
| 43 | Di chuyển hướng 5 (`5`) | (12, 0) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 120 |
| 44 | Di chuyển hướng 3 (`3`) | (11, 0) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 118 |
| 45-47 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 116 |
| 48 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 114 |
| 49 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 112 |
| 50 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 110 |
| 51-52 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 109 |
| 53 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 107 |
| 54-55 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 106 |
| 56-57 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 105 |
| 58-59 | Di chuyển hướng 3 (`3`) | (17, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 104 |
| 60 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 102 |
| 61 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 100 |
| 62 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 98 |
| 63-64 | Di chuyển hướng 3 (`3`) | (19, 10) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 97 |
| 65 | Di chuyển hướng 3 (`3`) | (20, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 95 |
| 66 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 93 |
| 67 | Di chuyển hướng 4 (`4`) | (21, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 91 |
| 68 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 89 |
| 69-70 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 88 |
| 71-73 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 86 |
| 74-76 | Di chuyển hướng 2 (`2`) | (22, 17) | (23, 17) | Dự kiến đến điểm hẹn tọa độ (23, 17) | 84 |
| 77-78 | Di chuyển hướng 3 (`3`) | (23, 17) | (23, 18) | Dự kiến đến điểm hẹn tọa độ (23, 18) | 83 |
| 79 | Di chuyển hướng 2 (`2`) | (23, 18) | (24, 18) | Dự kiến đến điểm hẹn tọa độ (24, 18) | 81 |
| 80-82 | Di chuyển hướng 2 (`2`) | (24, 18) | (25, 18) | Dự kiến đến điểm hẹn tọa độ (25, 18) | 79 |
| 83-84 | Di chuyển hướng 2 (`2`) | (25, 18) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 78 |
| 85-86 | Di chuyển hướng 0 (`0`) | (26, 18) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 77 |
| 87-89 | Di chuyển hướng 1 (`1`) | (26, 17) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 75 |
| 90-91 | Di chuyển hướng 2 (`2`) | (26, 16) | (27, 16) | Dự kiến đến điểm hẹn tọa độ (27, 16) | 74 |
| 92-93 | Di chuyển hướng 2 (`2`) | (27, 16) | (28, 16) | Dự kiến đến điểm hẹn tọa độ (28, 16) | 73 |
| 94 | Di chuyển hướng 3 (`3`) | (28, 16) | (29, 17) | Dự kiến đến điểm hẹn tọa độ (29, 17) | 71 |
| 95 | Di chuyển hướng 3 (`3`) | (29, 17) | (29, 18) | Dự kiến đến điểm hẹn tọa độ (29, 18) | 69 |
| 96 | Di chuyển hướng 3 (`3`) | (29, 18) | (30, 19) | Dự kiến đến điểm hẹn tọa độ (30, 19) | 67 |
| 97 | Di chuyển hướng 2 (`2`) | (30, 19) | (31, 19) | Dự kiến đến điểm hẹn tọa độ (31, 19) | 65 |
| 98 | Di chuyển hướng 3 (`3`) | (31, 19) | (31, 20) | Dự kiến đến điểm hẹn tọa độ (31, 20) | 63 |
| 99 | Di chuyển hướng 4 (`4`) | (31, 20) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 61 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (21, 15) (ô=501)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #28 (thương hiệu=20, tọa độ=(27, 30))
- Địa điểm đích kế hoạch: Spot #28 (thương hiệu=20, tọa độ=(27, 30))
- Mảng hành động đã gửi server: `[3, 3, 2, 3, 3, 4, 3, 3, 3, 2, 3, 3, 4, 3, 4, 4, 3, 2, -75]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 120 |
| 2-4 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 120 |
| 5-7 | Di chuyển hướng 2 (`2`) | (22, 17) | (23, 17) | Dự kiến đến điểm hẹn tọa độ (23, 17) | 120 |
| 8-9 | Di chuyển hướng 3 (`3`) | (23, 17) | (23, 18) | Dự kiến đến điểm hẹn tọa độ (23, 18) | 120 |
| 10 | Di chuyển hướng 3 (`3`) | (23, 18) | (24, 19) | Dự kiến đến điểm hẹn tọa độ (24, 19) | 120 |
| 11 | Di chuyển hướng 4 (`4`) | (24, 19) | (23, 20) | Dự kiến đến điểm hẹn tọa độ (23, 20) | 120 |
| 12 | Di chuyển hướng 3 (`3`) | (23, 20) | (24, 21) | Dự kiến đến điểm hẹn tọa độ (24, 21) | 120 |
| 13 | Di chuyển hướng 3 (`3`) | (24, 21) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 120 |
| 14 | Di chuyển hướng 3 (`3`) | (24, 22) | (25, 23) | Dự kiến đến điểm hẹn tọa độ (25, 23) | 120 |
| 15 | Di chuyển hướng 2 (`2`) | (25, 23) | (26, 23) | Dự kiến đến điểm hẹn tọa độ (26, 23) | 120 |
| 16 | Di chuyển hướng 3 (`3`) | (26, 23) | (26, 24) | Dự kiến đến điểm hẹn tọa độ (26, 24) | 120 |
| 17-18 | Di chuyển hướng 3 (`3`) | (26, 24) | (27, 25) | Dự kiến đến điểm hẹn tọa độ (27, 25) | 120 |
| 19 | Di chuyển hướng 4 (`4`) | (27, 25) | (26, 26) | Dự kiến đến điểm hẹn tọa độ (26, 26) | 120 |
| 20 | Di chuyển hướng 3 (`3`) | (26, 26) | (27, 27) | Dự kiến đến điểm hẹn tọa độ (27, 27) | 120 |
| 21 | Di chuyển hướng 4 (`4`) | (27, 27) | (26, 28) | Dự kiến đến điểm hẹn tọa độ (26, 28) | 120 |
| 22 | Di chuyển hướng 4 (`4`) | (26, 28) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 120 |
| 23 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 120 |
| 24 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 120 |
| 25-99 | Chờ 75 bước (`-75`) | (27, 30) | (27, 30) | Dự kiến đứng yên tại (27, 30); mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 120 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (13, 10) (ô=333)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 0)
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 4, 5, 0, 5, 0, 0, 0, 5, 5, 5, 5, 0, 0, 0, 0, 0, 1, 1, 1, -6, 1, 2, 1, 2, 2, 2, 2, 3, 2, 1, 2, 2, -56]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 120 |
| 2 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 120 |
| 3 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 120 |
| 4 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 120 |
| 5 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 120 |
| 6 | Di chuyển hướng 5 (`5`) | (10, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 120 |
| 7 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 120 |
| 8 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 120 |
| 9 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 120 |
| 10 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 120 |
| 11 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 120 |
| 12 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 120 |
| 13 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 120 |
| 14 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 120 |
| 15 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 120 |
| 16 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 120 |
| 17 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 120 |
| 18 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 120 |
| 19 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 120 |
| 20 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 120 |
| 21 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 120 |
| 22 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 120 |
| 23-24 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 120 |
| 25-30 | Chờ 6 bước (`-6`) | (1, 2) | (1, 2) | Dự kiến đứng yên tại (1, 2); mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 120 |
| 31-32 | Di chuyển hướng 1 (`1`) | (1, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 120 |
| 33 | Di chuyển hướng 2 (`2`) | (2, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 120 |
| 34 | Di chuyển hướng 1 (`1`) | (3, 1) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 120 |
| 35 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 120 |
| 36 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 120 |
| 37 | Di chuyển hướng 2 (`2`) | (5, 0) | (6, 0) | Dự kiến đến điểm hẹn tọa độ (6, 0) | 120 |
| 38 | Di chuyển hướng 2 (`2`) | (6, 0) | (7, 0) | Dự kiến đến điểm hẹn tọa độ (7, 0) | 120 |
| 39 | Di chuyển hướng 3 (`3`) | (7, 0) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 120 |
| 40 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 120 |
| 41 | Di chuyển hướng 1 (`1`) | (9, 1) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 120 |
| 42 | Di chuyển hướng 2 (`2`) | (9, 0) | (10, 0) | Dự kiến đến điểm hẹn tọa độ (10, 0) | 120 |
| 43 | Di chuyển hướng 2 (`2`) | (10, 0) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 120 |
| 44-99 | Chờ 56 bước (`-56`) | (11, 0) | (11, 0) | Dự kiến đứng yên tại (11, 0); hướng tới tọa độ (11, 0) | 120 |

