# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 128
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 28 | #0 | #7 | (3, 1) | 11 | 64 |
| 28 | #2 | #7 | (3, 1) | 12 | 64 |
| 40 | #1 | #6 | (15, 24) | 24 | 64 |
| 53 | #5 | #6 | (15, 24) | 14 | 64 |
| 60 | #3 | #7 | (3, 1) | 4 | 64 |
| 89 | #2 | #6 | (15, 24) | 12 | 64 |
| 103 | #0 | #6 | (15, 24) | 12 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (0, 0) (ô=0)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(20, 30))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(20, 30))
- Mảng hành động đã gửi server: `[3, 4, 2, 2, 1, -33, 2, 2, 2, 2, 3, 3, 2, 2, 2, 3, 2, 2, 2, 2, 1, 3, 4, 4, 3, 3, 3, 4, 3, 4, 4, 4, 4, 3, 3, 3, 4, 4, 3, 3, 4, 4, 3, 3, 2, 2, 2, 3, 2, 3, 4, 4, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 15 |
| 2-3 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 14 |
| 4-5 | Di chuyển hướng 2 (`2`) | (0, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 13 |
| 6-7 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 12 |
| 8-9 | Di chuyển hướng 1 (`1`) | (2, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 11 |
| 10-42 | Chờ 33 bước (`-33`) | (3, 1) | (3, 1) | Dự kiến đứng yên tại (3, 1); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 64 |
| 43-44 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 63 |
| 45-46 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 61 |
| 47-48 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 59 |
| 49-50 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 58 |
| 51-52 | Di chuyển hướng 3 (`3`) | (7, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 57 |
| 53-54 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 56 |
| 55-56 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 55 |
| 57-58 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 54 |
| 59-60 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 53 |
| 61 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 51 |
| 62-63 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 50 |
| 64 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 48 |
| 65-66 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 47 |
| 67-68 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 46 |
| 69-71 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 44 |
| 72-73 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 43 |
| 74-75 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 42 |
| 76 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 40 |
| 77-78 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 39 |
| 79 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 37 |
| 80-81 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 36 |
| 82-83 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 35 |
| 84-85 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 34 |
| 86 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 32 |
| 87-88 | Di chuyển hướng 4 (`4`) | (16, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 31 |
| 89-90 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 30 |
| 91 | Di chuyển hướng 4 (`4`) | (15, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 28 |
| 92 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 26 |
| 93-94 | Di chuyển hướng 3 (`3`) | (15, 16) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 25 |
| 95 | Di chuyển hướng 3 (`3`) | (16, 17) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 23 |
| 96 | Di chuyển hướng 4 (`4`) | (16, 18) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 21 |
| 97 | Di chuyển hướng 4 (`4`) | (16, 19) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 19 |
| 98 | Di chuyển hướng 3 (`3`) | (15, 20) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 17 |
| 99-100 | Di chuyển hướng 3 (`3`) | (16, 21) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 16 |
| 101 | Di chuyển hướng 4 (`4`) | (16, 22) | (16, 23) | Dự kiến đến điểm hẹn tọa độ (16, 23) | 14 |
| 102 | Di chuyển hướng 4 (`4`) | (16, 23) | (15, 24) | Dự kiến đến điểm hẹn tọa độ (15, 24) | 64 |
| 103-104 | Di chuyển hướng 3 (`3`) | (15, 24) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 63 |
| 105-106 | Di chuyển hướng 3 (`3`) | (16, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 62 |
| 107-108 | Di chuyển hướng 2 (`2`) | (16, 26) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 61 |
| 109-110 | Di chuyển hướng 2 (`2`) | (17, 26) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 60 |
| 111 | Di chuyển hướng 2 (`2`) | (18, 26) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 58 |
| 112-113 | Di chuyển hướng 3 (`3`) | (19, 26) | (20, 27) | Dự kiến đến điểm hẹn tọa độ (20, 27) | 57 |
| 114-115 | Di chuyển hướng 2 (`2`) | (20, 27) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 56 |
| 116-117 | Di chuyển hướng 3 (`3`) | (21, 27) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 55 |
| 118-119 | Di chuyển hướng 4 (`4`) | (21, 28) | (21, 29) | Dự kiến đến điểm hẹn tọa độ (21, 29) | 54 |
| 120-121 | Di chuyển hướng 4 (`4`) | (21, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 53 |
| 122-127 | Chờ 6 bước (`-6`) | (20, 30) | (20, 30) | Dự kiến đứng yên tại (20, 30); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 53 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (22, 26) (ô=854)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=0, tọa độ=(18, 20))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=0, tọa độ=(18, 20))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 4, 3, 3, 3, 3, 3, 4, 4, 0, 5, 0, 0, 0, 5, 0, 0, 5, 5, 5, 5, 0, 1, 1, 1, 0, 1, 2, 2, 2, 3, 2, 2, 3, -56]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (22, 26) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 48 |
| 2-3 | Di chuyển hướng 0 (`0`) | (22, 25) | (21, 24) | Dự kiến đến điểm hẹn tọa độ (21, 24) | 47 |
| 4-5 | Di chuyển hướng 0 (`0`) | (21, 24) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 46 |
| 6-7 | Di chuyển hướng 0 (`0`) | (21, 23) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 45 |
| 8-9 | Di chuyển hướng 5 (`5`) | (20, 22) | (19, 22) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 44 |
| 10-11 | Di chuyển hướng 4 (`4`) | (19, 22) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 43 |
| 12-14 | Di chuyển hướng 3 (`3`) | (19, 23) | (19, 24) | Dự kiến đến điểm hẹn tọa độ (19, 24) | 41 |
| 15-16 | Di chuyển hướng 3 (`3`) | (19, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 40 |
| 17 | Di chuyển hướng 3 (`3`) | (20, 25) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 38 |
| 18-19 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 37 |
| 20-21 | Di chuyển hướng 3 (`3`) | (21, 27) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 36 |
| 22-23 | Di chuyển hướng 4 (`4`) | (21, 28) | (21, 29) | Dự kiến đến điểm hẹn tọa độ (21, 29) | 35 |
| 24-25 | Di chuyển hướng 4 (`4`) | (21, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 34 |
| 26-27 | Di chuyển hướng 0 (`0`) | (20, 30) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 33 |
| 28-29 | Di chuyển hướng 5 (`5`) | (20, 29) | (19, 29) | Dự kiến đến điểm hẹn tọa độ (19, 29) | 32 |
| 30 | Di chuyển hướng 0 (`0`) | (19, 29) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 30 |
| 31-32 | Di chuyển hướng 0 (`0`) | (18, 28) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 29 |
| 33 | Di chuyển hướng 0 (`0`) | (18, 27) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 27 |
| 34-35 | Di chuyển hướng 5 (`5`) | (17, 26) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 26 |
| 36-37 | Di chuyển hướng 0 (`0`) | (16, 26) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 25 |
| 38-39 | Di chuyển hướng 0 (`0`) | (16, 25) | (15, 24) | Dự kiến đến điểm hẹn tọa độ (15, 24) | 64 |
| 40-41 | Di chuyển hướng 5 (`5`) | (15, 24) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 63 |
| 42-44 | Di chuyển hướng 5 (`5`) | (14, 24) | (13, 24) | Dự kiến đến điểm hẹn tọa độ (13, 24) | 61 |
| 45-46 | Di chuyển hướng 5 (`5`) | (13, 24) | (12, 24) | Dự kiến đến điểm hẹn tọa độ (12, 24) | 60 |
| 47-48 | Di chuyển hướng 5 (`5`) | (12, 24) | (11, 24) | Dự kiến đến điểm hẹn tọa độ (11, 24) | 59 |
| 49-50 | Di chuyển hướng 0 (`0`) | (11, 24) | (11, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 58 |
| 51-52 | Di chuyển hướng 1 (`1`) | (11, 23) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 57 |
| 53-54 | Di chuyển hướng 1 (`1`) | (11, 22) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 56 |
| 55-56 | Di chuyển hướng 1 (`1`) | (12, 21) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 55 |
| 57-58 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 54 |
| 59 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 18)) | 52 |
| 60-61 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 51 |
| 62-63 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 50 |
| 64-65 | Di chuyển hướng 2 (`2`) | (14, 18) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 49 |
| 66-67 | Di chuyển hướng 3 (`3`) | (15, 18) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 48 |
| 68 | Di chuyển hướng 2 (`2`) | (16, 19) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 46 |
| 69 | Di chuyển hướng 2 (`2`) | (17, 19) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 44 |
| 70-71 | Di chuyển hướng 3 (`3`) | (18, 19) | (18, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 43 |
| 72-127 | Chờ 56 bước (`-56`) | (18, 20) | (18, 20) | Dự kiến đứng yên tại (18, 20); mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 43 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 1) (ô=39)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=0, tọa độ=(18, 20))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=0, tọa độ=(18, 20))
- Mảng hành động đã gửi server: `[5, 0, 5, 5, 5, 5, 5, 3, 4, 2, 2, 1, -6, 2, 2, 2, 2, 3, 3, 2, 2, 2, 3, 2, 2, 2, 2, 1, 3, 4, 4, 3, 3, 3, 4, 3, 4, 4, 4, 4, 3, 3, 3, 4, 4, 3, 3, 4, 4, 3, 1, 1, 2, 1, 2, 0, 0, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 26 |
| 2-3 | Di chuyển hướng 0 (`0`) | (6, 1) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 25 |
| 4 | Di chuyển hướng 5 (`5`) | (5, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 23 |
| 5-6 | Di chuyển hướng 5 (`5`) | (4, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 22 |
| 7-8 | Di chuyển hướng 5 (`5`) | (3, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 21 |
| 9-10 | Di chuyển hướng 5 (`5`) | (2, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 19 |
| 11-12 | Di chuyển hướng 5 (`5`) | (1, 0) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 17 |
| 13-14 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 16 |
| 15-16 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 15 |
| 17-18 | Di chuyển hướng 2 (`2`) | (0, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 14 |
| 19-20 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 13 |
| 21-22 | Di chuyển hướng 1 (`1`) | (2, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 12 |
| 23-28 | Chờ 6 bước (`-6`) | (3, 1) | (3, 1) | Dự kiến đứng yên tại (3, 1); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 64 |
| 29-30 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 63 |
| 31-32 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 61 |
| 33-34 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 59 |
| 35-36 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 58 |
| 37-38 | Di chuyển hướng 3 (`3`) | (7, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 57 |
| 39-40 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 56 |
| 41-42 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 55 |
| 43-44 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 54 |
| 45-46 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 53 |
| 47 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 51 |
| 48-49 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 50 |
| 50 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 48 |
| 51-52 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 47 |
| 53-54 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 46 |
| 55-57 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 44 |
| 58-59 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 43 |
| 60-61 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 42 |
| 62 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 40 |
| 63-64 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 39 |
| 65 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 37 |
| 66-67 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 36 |
| 68-69 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 35 |
| 70-71 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 34 |
| 72 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 32 |
| 73-74 | Di chuyển hướng 4 (`4`) | (16, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 31 |
| 75-76 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 30 |
| 77 | Di chuyển hướng 4 (`4`) | (15, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 28 |
| 78 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 26 |
| 79-80 | Di chuyển hướng 3 (`3`) | (15, 16) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 25 |
| 81 | Di chuyển hướng 3 (`3`) | (16, 17) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 23 |
| 82 | Di chuyển hướng 4 (`4`) | (16, 18) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 21 |
| 83 | Di chuyển hướng 4 (`4`) | (16, 19) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 19 |
| 84 | Di chuyển hướng 3 (`3`) | (15, 20) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 17 |
| 85-86 | Di chuyển hướng 3 (`3`) | (16, 21) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 16 |
| 87 | Di chuyển hướng 4 (`4`) | (16, 22) | (16, 23) | Dự kiến đến điểm hẹn tọa độ (16, 23) | 14 |
| 88 | Di chuyển hướng 4 (`4`) | (16, 23) | (15, 24) | Dự kiến đến điểm hẹn tọa độ (15, 24) | 64 |
| 89-90 | Di chuyển hướng 3 (`3`) | (15, 24) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 63 |
| 91-92 | Di chuyển hướng 1 (`1`) | (16, 25) | (16, 24) | Dự kiến đến điểm hẹn tọa độ (16, 24) | 62 |
| 93-95 | Di chuyển hướng 1 (`1`) | (16, 24) | (17, 23) | Dự kiến đến điểm hẹn tọa độ (17, 23) | 60 |
| 96 | Di chuyển hướng 2 (`2`) | (17, 23) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 58 |
| 97-98 | Di chuyển hướng 1 (`1`) | (18, 23) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 57 |
| 99-100 | Di chuyển hướng 2 (`2`) | (18, 22) | (19, 22) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 56 |
| 101-102 | Di chuyển hướng 0 (`0`) | (19, 22) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 55 |
| 103-105 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 53 |
| 106-127 | Chờ 22 bước (`-22`) | (18, 20) | (18, 20) | Dự kiến đứng yên tại (18, 20); mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 53 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (24, 9) (ô=312)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(0, 2))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(0, 2))
- Mảng hành động đã gửi server: `[0, 0, 1, 1, 0, 0, 0, 5, 5, 0, 5, 5, 4, 4, 5, 4, 5, 5, 5, 5, 0, 5, 5, 0, 5, 0, 5, 5, 5, 5, 4, 5, 5, -62]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (24, 9) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 41 |
| 2-3 | Di chuyển hướng 0 (`0`) | (23, 8) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 40 |
| 4-5 | Di chuyển hướng 1 (`1`) | (23, 7) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 39 |
| 6-7 | Di chuyển hướng 1 (`1`) | (23, 6) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 38 |
| 8 | Di chuyển hướng 0 (`0`) | (24, 5) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 36 |
| 9-10 | Di chuyển hướng 0 (`0`) | (23, 4) | (23, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 35 |
| 11-12 | Di chuyển hướng 0 (`0`) | (23, 3) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 34 |
| 13-14 | Di chuyển hướng 5 (`5`) | (22, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 33 |
| 15-17 | Di chuyển hướng 5 (`5`) | (21, 2) | (20, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 31 |
| 18-19 | Di chuyển hướng 0 (`0`) | (20, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 30 |
| 20-21 | Di chuyển hướng 5 (`5`) | (20, 1) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 29 |
| 22-24 | Di chuyển hướng 5 (`5`) | (19, 1) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 27 |
| 25-26 | Di chuyển hướng 4 (`4`) | (18, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 26 |
| 27-28 | Di chuyển hướng 4 (`4`) | (17, 2) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 25 |
| 29-30 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 24 |
| 31-32 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 23 |
| 33-35 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 21 |
| 36-37 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 20 |
| 38-39 | Di chuyển hướng 5 (`5`) | (13, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 19 |
| 40 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 17 |
| 41-42 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 16 |
| 43 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 14 |
| 44-45 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 13 |
| 46-47 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 12 |
| 48-49 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 11 |
| 50-51 | Di chuyển hướng 0 (`0`) | (7, 2) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 10 |
| 52-53 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 9 |
| 54-55 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 8 |
| 56-57 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 6 |
| 58-59 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 64 |
| 60-61 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 63 |
| 62-63 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 62 |
| 64-65 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 61 |
| 66-127 | Chờ 62 bước (`-62`) | (0, 2) | (0, 2) | Dự kiến đứng yên tại (0, 2); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 61 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (0, 0) (ô=0)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=4, tọa độ=(11, 23))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=4, tọa độ=(11, 23))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 4, 4, 4, 3, 3, 2, 2, 2, 1, -80]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 37 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 36 |
| 4-5 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 35 |
| 6 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 33 |
| 7 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 31 |
| 8 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 29 |
| 9-10 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 28 |
| 11 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 26 |
| 12-13 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 25 |
| 14-15 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 24 |
| 16 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 22 |
| 17 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 20 |
| 18-19 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 19 |
| 20-21 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 18 |
| 22 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 16 |
| 23 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 14 |
| 24-25 | Di chuyển hướng 3 (`3`) | (6, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 13 |
| 26-28 | Di chuyển hướng 3 (`3`) | (7, 17) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 11 |
| 29-30 | Di chuyển hướng 3 (`3`) | (7, 18) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 10 |
| 31-32 | Di chuyển hướng 4 (`4`) | (8, 19) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 9 |
| 33-34 | Di chuyển hướng 4 (`4`) | (7, 20) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 8 |
| 35 | Di chuyển hướng 4 (`4`) | (7, 21) | (6, 22) | Dự kiến đến điểm hẹn tọa độ (6, 22) | 6 |
| 36-37 | Di chuyển hướng 3 (`3`) | (6, 22) | (7, 23) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 23)) | 5 |
| 38-39 | Di chuyển hướng 3 (`3`) | (7, 23) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 4 |
| 40-41 | Di chuyển hướng 2 (`2`) | (7, 24) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 3 |
| 42-43 | Di chuyển hướng 2 (`2`) | (8, 24) | (9, 24) | Dự kiến đến điểm hẹn tọa độ (9, 24) | 2 |
| 44-45 | Di chuyển hướng 2 (`2`) | (9, 24) | (10, 24) | Dự kiến đến điểm hẹn tọa độ (10, 24) | 1 |
| 46-47 | Di chuyển hướng 1 (`1`) | (10, 24) | (11, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 0 |
| 48-127 | Chờ 80 bước (`-80`) | (11, 23) | (11, 23) | Dự kiến đứng yên tại (11, 23); mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (7, 23) (ô=743)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 1)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 5, 5, 4, 1, 2, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 4, 3, 3, 3, 3, 3, 2, 3, 3, 2, 3, 3, 3, 2, 3, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 5, 5, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 23) | (6, 24) | Dự kiến đến điểm hẹn tọa độ (6, 24) | 49 |
| 2-3 | Di chuyển hướng 4 (`4`) | (6, 24) | (6, 25) | Dự kiến đến điểm hẹn tọa độ (6, 25) | 48 |
| 4-5 | Di chuyển hướng 4 (`4`) | (6, 25) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 47 |
| 6-7 | Di chuyển hướng 4 (`4`) | (5, 26) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 46 |
| 8 | Di chuyển hướng 5 (`5`) | (5, 27) | (4, 27) | Dự kiến đến điểm hẹn tọa độ (4, 27) | 44 |
| 9-10 | Di chuyển hướng 5 (`5`) | (4, 27) | (3, 27) | Dự kiến đến điểm hẹn tọa độ (3, 27) | 43 |
| 11-12 | Di chuyển hướng 4 (`4`) | (3, 27) | (2, 28) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 28)) | 42 |
| 13-14 | Di chuyển hướng 1 (`1`) | (2, 28) | (3, 27) | Dự kiến đến điểm hẹn tọa độ (3, 27) | 41 |
| 15-16 | Di chuyển hướng 2 (`2`) | (3, 27) | (4, 27) | Dự kiến đến điểm hẹn tọa độ (4, 27) | 40 |
| 17-18 | Di chuyển hướng 2 (`2`) | (4, 27) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 39 |
| 19 | Di chuyển hướng 1 (`1`) | (5, 27) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 37 |
| 20-21 | Di chuyển hướng 2 (`2`) | (5, 26) | (6, 26) | Dự kiến đến điểm hẹn tọa độ (6, 26) | 36 |
| 22-23 | Di chuyển hướng 2 (`2`) | (6, 26) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 35 |
| 24-25 | Di chuyển hướng 1 (`1`) | (7, 26) | (8, 25) | Dự kiến đến điểm hẹn tọa độ (8, 25) | 34 |
| 26 | Di chuyển hướng 1 (`1`) | (8, 25) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 32 |
| 27-28 | Di chuyển hướng 1 (`1`) | (8, 24) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 31 |
| 29-30 | Di chuyển hướng 1 (`1`) | (9, 23) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 30 |
| 31-32 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 29 |
| 33-34 | Di chuyển hướng 2 (`2`) | (10, 21) | (11, 21) | Dự kiến đến điểm hẹn tọa độ (11, 21) | 28 |
| 35-36 | Di chuyển hướng 1 (`1`) | (11, 21) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 27 |
| 37-38 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 26 |
| 39 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 18)) | 24 |
| 40-41 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 23 |
| 42 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 21 |
| 43-44 | Di chuyển hướng 3 (`3`) | (12, 20) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 20 |
| 45-46 | Di chuyển hướng 3 (`3`) | (13, 21) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 19 |
| 47 | Di chuyển hướng 3 (`3`) | (13, 22) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 17 |
| 48-49 | Di chuyển hướng 3 (`3`) | (14, 23) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 16 |
| 50-52 | Di chuyển hướng 2 (`2`) | (14, 24) | (15, 24) | Dự kiến đến điểm hẹn tọa độ (15, 24) | 64 |
| 53-54 | Di chuyển hướng 3 (`3`) | (15, 24) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 63 |
| 55-56 | Di chuyển hướng 3 (`3`) | (16, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 62 |
| 57-58 | Di chuyển hướng 2 (`2`) | (16, 26) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 61 |
| 59-60 | Di chuyển hướng 3 (`3`) | (17, 26) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 60 |
| 61 | Di chuyển hướng 3 (`3`) | (18, 27) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 58 |
| 62-63 | Di chuyển hướng 3 (`3`) | (18, 28) | (19, 29) | Dự kiến đến điểm hẹn tọa độ (19, 29) | 57 |
| 64 | Di chuyển hướng 2 (`2`) | (19, 29) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 55 |
| 65-66 | Di chuyển hướng 3 (`3`) | (20, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 54 |
| 67-68 | Di chuyển hướng 1 (`1`) | (20, 30) | (21, 29) | Dự kiến đến điểm hẹn tọa độ (21, 29) | 53 |
| 69-70 | Di chuyển hướng 1 (`1`) | (21, 29) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 52 |
| 71-72 | Di chuyển hướng 0 (`0`) | (21, 28) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 51 |
| 73-74 | Di chuyển hướng 0 (`0`) | (21, 27) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 50 |
| 75-76 | Di chuyển hướng 0 (`0`) | (20, 26) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 49 |
| 77 | Di chuyển hướng 0 (`0`) | (20, 25) | (19, 24) | Dự kiến đến điểm hẹn tọa độ (19, 24) | 47 |
| 78-79 | Di chuyển hướng 0 (`0`) | (19, 24) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 46 |
| 80-82 | Di chuyển hướng 1 (`1`) | (19, 23) | (19, 22) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 44 |
| 83-84 | Di chuyển hướng 0 (`0`) | (19, 22) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 43 |
| 85-87 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 41 |
| 88-89 | Di chuyển hướng 1 (`1`) | (18, 20) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 40 |
| 90 | Di chuyển hướng 1 (`1`) | (19, 19) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 38 |
| 91-92 | Di chuyển hướng 0 (`0`) | (19, 18) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 37 |
| 93 | Di chuyển hướng 0 (`0`) | (19, 17) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 35 |
| 94-95 | Di chuyển hướng 1 (`1`) | (18, 16) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 34 |
| 96 | Di chuyển hướng 1 (`1`) | (19, 15) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 32 |
| 97-98 | Di chuyển hướng 1 (`1`) | (19, 14) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 31 |
| 99-100 | Di chuyển hướng 0 (`0`) | (20, 13) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 30 |
| 101-102 | Di chuyển hướng 1 (`1`) | (19, 12) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 29 |
| 103-104 | Di chuyển hướng 1 (`1`) | (20, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 28 |
| 105 | Di chuyển hướng 1 (`1`) | (20, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 26 |
| 106 | Di chuyển hướng 1 (`1`) | (21, 9) | (21, 8) | Dự kiến đến điểm hẹn tọa độ (21, 8) | 24 |
| 107 | Di chuyển hướng 1 (`1`) | (21, 8) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 22 |
| 108-109 | Di chuyển hướng 1 (`1`) | (22, 7) | (22, 6) | Dự kiến đến điểm hẹn tọa độ (22, 6) | 21 |
| 110-111 | Di chuyển hướng 1 (`1`) | (22, 6) | (23, 5) | Dự kiến đến điểm hẹn tọa độ (23, 5) | 20 |
| 112-113 | Di chuyển hướng 1 (`1`) | (23, 5) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 19 |
| 114-115 | Di chuyển hướng 0 (`0`) | (23, 4) | (23, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 18 |
| 116-117 | Di chuyển hướng 0 (`0`) | (23, 3) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 17 |
| 118-119 | Di chuyển hướng 5 (`5`) | (22, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 16 |
| 120-122 | Di chuyển hướng 5 (`5`) | (21, 2) | (20, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 14 |
| 123-124 | Di chuyển hướng 0 (`0`) | (20, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 13 |
| 125-126 | Di chuyển hướng 5 (`5`) | (20, 1) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 12 |
| 127 | Chờ 1 bước (`-1`) | (19, 1) | (19, 1) | Dự kiến đứng yên tại (19, 1); hướng tới tọa độ (19, 1) | 12 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (16, 25) (ô=816)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 24)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 24)
- Mảng hành động đã gửi server: `[0, -126]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (16, 25) | (15, 24) | Dự kiến đến điểm hẹn tọa độ (15, 24) | 64 |
| 2-127 | Chờ 126 bước (`-126`) | (15, 24) | (15, 24) | Dự kiến đứng yên tại (15, 24); hướng tới tọa độ (15, 24) | 64 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (15, 3) (ô=111)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(3, 1))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(3, 1))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 0, 5, 5, 0, 5, 0, 5, 5, 5, 5, -100]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 4 (`4`) | (15, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 64 |
| 4-5 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 64 |
| 6-7 | Di chuyển hướng 5 (`5`) | (13, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 64 |
| 8 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 64 |
| 9-10 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 64 |
| 11 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 64 |
| 12-13 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 64 |
| 14-15 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 64 |
| 16-17 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 64 |
| 18-19 | Di chuyển hướng 0 (`0`) | (7, 2) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 64 |
| 20-21 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 64 |
| 22-23 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 64 |
| 24-25 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 64 |
| 26-27 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 64 |
| 28-127 | Chờ 100 bước (`-100`) | (3, 1) | (3, 1) | Dự kiến đứng yên tại (3, 1); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 64 |

