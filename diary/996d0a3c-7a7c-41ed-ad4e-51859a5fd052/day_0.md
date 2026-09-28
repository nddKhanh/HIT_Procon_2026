# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 64
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 10 | #0 | #7 | (17, 29) | 68 | 74 |
| 10 | #5 | #7 | (17, 29) | 67 | 74 |
| 11 | #4 | #7 | (17, 29) | 64 | 74 |
| 12 | #0 | #7 | (17, 30) | 73 | 74 |
| 14 | #0 | #7 | (18, 30) | 73 | 74 |
| 17 | #0 | #7 | (19, 30) | 72 | 74 |
| 19 | #0 | #7 | (20, 31) | 73 | 74 |
| 19 | #1 | #6 | (12, 8) | 62 | 74 |
| 21 | #0 | #7 | (21, 31) | 73 | 74 |
| 24 | #0 | #7 | (21, 31) | 72 | 74 |
| 37 | #4 | #7 | (20, 25) | 56 | 74 |
| 39 | #4 | #7 | (21, 25) | 73 | 74 |
| 42 | #4 | #7 | (22, 24) | 71 | 74 |
| 54 | #0 | #7 | (22, 24) | 53 | 74 |
| 62 | #3 | #6 | (12, 8) | 30 | 74 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 26) (ô=845)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(23, 17))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(23, 17))
- Mảng hành động đã gửi server: `[3, 3, 3, 2, 2, 3, 2, 2, 3, 2, 2, 5, 1, 1, 0, 1, 2, 3, 2, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (13, 26) | (14, 27) | Dự kiến đến điểm hẹn tọa độ (14, 27) | 73 |
| 2-3 | Di chuyển hướng 3 (`3`) | (14, 27) | (14, 28) | Dự kiến đến điểm hẹn tọa độ (14, 28) | 72 |
| 4-5 | Di chuyển hướng 3 (`3`) | (14, 28) | (15, 29) | Dự kiến đến điểm hẹn tọa độ (15, 29) | 71 |
| 6-7 | Di chuyển hướng 2 (`2`) | (15, 29) | (16, 29) | Dự kiến đến điểm hẹn tọa độ (16, 29) | 70 |
| 8 | Di chuyển hướng 2 (`2`) | (16, 29) | (17, 29) | Dự kiến đến điểm hẹn tọa độ (17, 29) | 68 |
| 9-10 | Di chuyển hướng 3 (`3`) | (17, 29) | (17, 30) | Dự kiến đến điểm hẹn tọa độ (17, 30) | 73 |
| 11-12 | Di chuyển hướng 2 (`2`) | (17, 30) | (18, 30) | Dự kiến đến điểm hẹn tọa độ (18, 30) | 73 |
| 13-15 | Di chuyển hướng 2 (`2`) | (18, 30) | (19, 30) | Dự kiến đến điểm hẹn tọa độ (19, 30) | 72 |
| 16-17 | Di chuyển hướng 3 (`3`) | (19, 30) | (20, 31) | Dự kiến đến điểm hẹn tọa độ (20, 31) | 73 |
| 18-19 | Di chuyển hướng 2 (`2`) | (20, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 73 |
| 20-21 | Di chuyển hướng 2 (`2`) | (21, 31) | (22, 31) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(22, 31)) | 73 |
| 22-23 | Di chuyển hướng 5 (`5`) | (22, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 74 |
| 24-25 | Di chuyển hướng 1 (`1`) | (21, 31) | (21, 30) | Dự kiến đến điểm hẹn tọa độ (21, 30) | 73 |
| 26-27 | Di chuyển hướng 1 (`1`) | (21, 30) | (22, 29) | Dự kiến đến điểm hẹn tọa độ (22, 29) | 72 |
| 28-29 | Di chuyển hướng 0 (`0`) | (22, 29) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 71 |
| 30-31 | Di chuyển hướng 1 (`1`) | (21, 28) | (22, 27) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(22, 27)) | 70 |
| 32-33 | Di chuyển hướng 2 (`2`) | (22, 27) | (23, 27) | Dự kiến đến điểm hẹn tọa độ (23, 27) | 69 |
| 34 | Di chuyển hướng 3 (`3`) | (23, 27) | (23, 28) | Dự kiến đến điểm hẹn tọa độ (23, 28) | 67 |
| 35 | Di chuyển hướng 2 (`2`) | (23, 28) | (24, 28) | Dự kiến đến điểm hẹn tọa độ (24, 28) | 65 |
| 36-37 | Di chuyển hướng 3 (`3`) | (24, 28) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 64 |
| 38-39 | Di chuyển hướng 3 (`3`) | (25, 29) | (25, 30) | Dự kiến đến điểm hẹn tọa độ (25, 30) | 63 |
| 40 | Di chuyển hướng 3 (`3`) | (25, 30) | (26, 31) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(26, 31)) | 61 |
| 41-42 | Di chuyển hướng 0 (`0`) | (26, 31) | (25, 30) | Dự kiến đến điểm hẹn tọa độ (25, 30) | 60 |
| 43 | Di chuyển hướng 0 (`0`) | (25, 30) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 58 |
| 44-45 | Di chuyển hướng 0 (`0`) | (25, 29) | (24, 28) | Dự kiến đến điểm hẹn tọa độ (24, 28) | 57 |
| 46-47 | Di chuyển hướng 0 (`0`) | (24, 28) | (24, 27) | Dự kiến đến điểm hẹn tọa độ (24, 27) | 56 |
| 48-49 | Di chuyển hướng 0 (`0`) | (24, 27) | (23, 26) | Dự kiến đến điểm hẹn tọa độ (23, 26) | 55 |
| 50-51 | Di chuyển hướng 0 (`0`) | (23, 26) | (23, 25) | Dự kiến đến điểm hẹn tọa độ (23, 25) | 54 |
| 52-53 | Di chuyển hướng 0 (`0`) | (23, 25) | (22, 24) | Dự kiến đến điểm hẹn tọa độ (22, 24) | 74 |
| 54 | Di chuyển hướng 0 (`0`) | (22, 24) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 72 |
| 55-56 | Di chuyển hướng 1 (`1`) | (22, 23) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 71 |
| 57 | Di chuyển hướng 0 (`0`) | (22, 22) | (22, 21) | Dự kiến đến điểm hẹn tọa độ (22, 21) | 69 |
| 58 | Di chuyển hướng 1 (`1`) | (22, 21) | (22, 20) | Dự kiến đến điểm hẹn tọa độ (22, 20) | 67 |
| 59-60 | Di chuyển hướng 0 (`0`) | (22, 20) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 66 |
| 61 | Di chuyển hướng 1 (`1`) | (22, 19) | (22, 18) | Dự kiến đến điểm hẹn tọa độ (22, 18) | 64 |
| 62 | Di chuyển hướng 1 (`1`) | (22, 18) | (23, 17) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(23, 17)) | 62 |
| 63 | Chờ 1 bước (`-1`) | (23, 17) | (23, 17) | Dự kiến đứng yên tại (23, 17); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(23, 17)) | 62 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 13) (ô=434)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(18, 0))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(18, 0))
- Mảng hành động đã gửi server: `[1, 0, 0, 0, 5, 5, 5, 5, 0, 4, 3, 4, 4, 4, 4, 1, 1, 1, 1, 2, 1, 2, 2, 2, 1, 0, 1, 0, 1, 0, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 73 |
| 2-3 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 72 |
| 4-5 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 71 |
| 6-7 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 70 |
| 8-10 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 68 |
| 11 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 66 |
| 12-13 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 65 |
| 14-15 | Di chuyển hướng 5 (`5`) | (14, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 64 |
| 16-18 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 8)) | 74 |
| 19-20 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 73 |
| 21-22 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 72 |
| 23-24 | Di chuyển hướng 4 (`4`) | (12, 10) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 71 |
| 25-26 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 70 |
| 27-28 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 69 |
| 29 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 14)) | 67 |
| 30-31 | Di chuyển hướng 1 (`1`) | (10, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 66 |
| 32 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 64 |
| 33-34 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 63 |
| 35-36 | Di chuyển hướng 1 (`1`) | (12, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 62 |
| 37-38 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 61 |
| 39 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 59 |
| 40-41 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 58 |
| 42-43 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 57 |
| 44 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 55 |
| 45-47 | Di chuyển hướng 1 (`1`) | (17, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 53 |
| 48-49 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 52 |
| 50-51 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 51 |
| 52-53 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 5)) | 50 |
| 54-55 | Di chuyển hướng 1 (`1`) | (17, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 49 |
| 56 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 47 |
| 57-58 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 46 |
| 59-60 | Di chuyển hướng 1 (`1`) | (17, 2) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 45 |
| 61-62 | Di chuyển hướng 1 (`1`) | (18, 1) | (18, 0) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 0)) | 44 |
| 63 | Chờ 1 bước (`-1`) | (18, 0) | (18, 0) | Dự kiến đứng yên tại (18, 0); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 0)) | 44 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (20, 23) (ô=756)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 7)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 1, 1, 1, 0, 5, 5, 5, 5, 5, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 5, 5, 5, 4, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (20, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 73 |
| 2-3 | Di chuyển hướng 2 (`2`) | (21, 23) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 72 |
| 4-5 | Di chuyển hướng 2 (`2`) | (22, 23) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 71 |
| 6-7 | Di chuyển hướng 2 (`2`) | (23, 23) | (24, 23) | Dự kiến đến điểm hẹn tọa độ (24, 23) | 70 |
| 8 | Di chuyển hướng 2 (`2`) | (24, 23) | (25, 23) | Dự kiến đến điểm hẹn tọa độ (25, 23) | 68 |
| 9-10 | Di chuyển hướng 1 (`1`) | (25, 23) | (25, 22) | Dự kiến đến điểm hẹn tọa độ (25, 22) | 67 |
| 11 | Di chuyển hướng 1 (`1`) | (25, 22) | (26, 21) | Dự kiến đến điểm hẹn tọa độ (26, 21) | 65 |
| 12-13 | Di chuyển hướng 1 (`1`) | (26, 21) | (26, 20) | Dự kiến đến điểm hẹn tọa độ (26, 20) | 64 |
| 14-15 | Di chuyển hướng 2 (`2`) | (26, 20) | (27, 20) | Dự kiến đến điểm hẹn tọa độ (27, 20) | 63 |
| 16-17 | Di chuyển hướng 1 (`1`) | (27, 20) | (28, 19) | Dự kiến đến điểm hẹn tọa độ (28, 19) | 62 |
| 18 | Di chuyển hướng 1 (`1`) | (28, 19) | (28, 18) | Dự kiến đến điểm hẹn tọa độ (28, 18) | 60 |
| 19-20 | Di chuyển hướng 1 (`1`) | (28, 18) | (29, 17) | Dự kiến đến điểm hẹn tọa độ (29, 17) | 59 |
| 21 | Di chuyển hướng 1 (`1`) | (29, 17) | (29, 16) | Dự kiến đến điểm hẹn tọa độ (29, 16) | 57 |
| 22 | Di chuyển hướng 0 (`0`) | (29, 16) | (29, 15) | Dự kiến đến điểm hẹn tọa độ (29, 15) | 55 |
| 23-24 | Di chuyển hướng 5 (`5`) | (29, 15) | (28, 15) | Dự kiến đến điểm hẹn tọa độ (28, 15) | 54 |
| 25-26 | Di chuyển hướng 5 (`5`) | (28, 15) | (27, 15) | Dự kiến đến điểm hẹn tọa độ (27, 15) | 53 |
| 27-29 | Di chuyển hướng 5 (`5`) | (27, 15) | (26, 15) | Dự kiến đến điểm hẹn tọa độ (26, 15) | 51 |
| 30-31 | Di chuyển hướng 5 (`5`) | (26, 15) | (25, 15) | Dự kiến đến điểm hẹn tọa độ (25, 15) | 50 |
| 32 | Di chuyển hướng 5 (`5`) | (25, 15) | (24, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(24, 15)) | 48 |
| 33-34 | Di chuyển hướng 0 (`0`) | (24, 15) | (23, 14) | Dự kiến đến điểm hẹn tọa độ (23, 14) | 47 |
| 35-36 | Di chuyển hướng 0 (`0`) | (23, 14) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 46 |
| 37-39 | Di chuyển hướng 0 (`0`) | (23, 13) | (22, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 12)) | 44 |
| 40-41 | Di chuyển hướng 0 (`0`) | (22, 12) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 43 |
| 42-43 | Di chuyển hướng 1 (`1`) | (22, 11) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 42 |
| 44 | Di chuyển hướng 1 (`1`) | (22, 10) | (23, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(23, 9)) | 40 |
| 45-46 | Di chuyển hướng 0 (`0`) | (23, 9) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 39 |
| 47 | Di chuyển hướng 0 (`0`) | (22, 8) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 37 |
| 48-49 | Di chuyển hướng 0 (`0`) | (22, 7) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 36 |
| 50-51 | Di chuyển hướng 0 (`0`) | (21, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 35 |
| 52-53 | Di chuyển hướng 0 (`0`) | (21, 5) | (20, 4) | Dự kiến đến điểm hẹn tọa độ (20, 4) | 34 |
| 54-55 | Di chuyển hướng 5 (`5`) | (20, 4) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 33 |
| 56 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=28, tọa độ=(18, 4)) | 31 |
| 57-58 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 30 |
| 59 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 5)) | 28 |
| 60-61 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 27 |
| 62-63 | Di chuyển hướng 3 (`3`) | (17, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 26 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 4) (ô=130)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 8)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 4, 3, 4, 5, 4, 1, 2, 1, 1, 2, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 3, 4, 4, 4, 3, 4, 3, 4, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 73 |
| 2-3 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 72 |
| 4-6 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 70 |
| 7 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(4, 8)) | 68 |
| 8-9 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 67 |
| 10 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 65 |
| 11-12 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 11)) | 64 |
| 13-14 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 63 |
| 15 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(2, 12)) | 61 |
| 16-17 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 60 |
| 18 | Di chuyển hướng 2 (`2`) | (3, 11) | (4, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 11)) | 58 |
| 19-20 | Di chuyển hướng 1 (`1`) | (4, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 57 |
| 21-22 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 56 |
| 23-24 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 55 |
| 25-26 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 54 |
| 27-28 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 53 |
| 29 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 51 |
| 30-31 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 50 |
| 32-33 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 49 |
| 34-35 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 48 |
| 36-37 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 47 |
| 38-39 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 46 |
| 40 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 44 |
| 41 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 42 |
| 42-43 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 41 |
| 44-45 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(13, 0)) | 40 |
| 46-47 | Di chuyển hướng 3 (`3`) | (13, 0) | (14, 1) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=26, tọa độ=(14, 1)) | 39 |
| 48-49 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 38 |
| 50-51 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 37 |
| 52-53 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 36 |
| 54-56 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 34 |
| 57-58 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 33 |
| 59 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 31 |
| 60-61 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 8)) | 74 |
| 62-63 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 73 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (12, 25) (ô=812)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(31, 25)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(31, 25)
- Mảng hành động đã gửi server: `[3, 3, 3, 2, 3, 2, 2, 1, 1, 2, 1, 0, 0, 0, 0, 0, 3, 2, 3, 3, 3, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 4, 3, 2, 2, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (12, 25) | (12, 26) | Dự kiến đến điểm hẹn tọa độ (12, 26) | 73 |
| 2 | Di chuyển hướng 3 (`3`) | (12, 26) | (13, 27) | Dự kiến đến điểm hẹn tọa độ (13, 27) | 71 |
| 3 | Di chuyển hướng 3 (`3`) | (13, 27) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 69 |
| 4-5 | Di chuyển hướng 2 (`2`) | (13, 28) | (14, 28) | Dự kiến đến điểm hẹn tọa độ (14, 28) | 68 |
| 6-7 | Di chuyển hướng 3 (`3`) | (14, 28) | (15, 29) | Dự kiến đến điểm hẹn tọa độ (15, 29) | 67 |
| 8-9 | Di chuyển hướng 2 (`2`) | (15, 29) | (16, 29) | Dự kiến đến điểm hẹn tọa độ (16, 29) | 66 |
| 10 | Di chuyển hướng 2 (`2`) | (16, 29) | (17, 29) | Dự kiến đến điểm hẹn tọa độ (17, 29) | 74 |
| 11-12 | Di chuyển hướng 1 (`1`) | (17, 29) | (17, 28) | Dự kiến đến điểm hẹn tọa độ (17, 28) | 73 |
| 13-14 | Di chuyển hướng 1 (`1`) | (17, 28) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 72 |
| 15-16 | Di chuyển hướng 2 (`2`) | (18, 27) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 71 |
| 17-18 | Di chuyển hướng 1 (`1`) | (19, 27) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 70 |
| 19-20 | Di chuyển hướng 0 (`0`) | (19, 26) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 69 |
| 21-22 | Di chuyển hướng 0 (`0`) | (19, 25) | (18, 24) | Dự kiến đến điểm hẹn tọa độ (18, 24) | 68 |
| 23-24 | Di chuyển hướng 0 (`0`) | (18, 24) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 67 |
| 25-27 | Di chuyển hướng 0 (`0`) | (18, 23) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 65 |
| 28 | Di chuyển hướng 0 (`0`) | (17, 22) | (17, 21) | Dự kiến đạt mục tiêu Spot #30 (thương hiệu=30, tọa độ=(17, 21)) | 63 |
| 29-30 | Di chuyển hướng 3 (`3`) | (17, 21) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 62 |
| 31 | Di chuyển hướng 2 (`2`) | (17, 22) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 60 |
| 32-33 | Di chuyển hướng 3 (`3`) | (18, 22) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 59 |
| 34 | Di chuyển hướng 3 (`3`) | (19, 23) | (19, 24) | Dự kiến đến điểm hẹn tọa độ (19, 24) | 57 |
| 35-36 | Di chuyển hướng 3 (`3`) | (19, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 74 |
| 37-38 | Di chuyển hướng 2 (`2`) | (20, 25) | (21, 25) | Dự kiến đến điểm hẹn tọa độ (21, 25) | 74 |
| 39-40 | Di chuyển hướng 2 (`2`) | (21, 25) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 73 |
| 41 | Di chuyển hướng 1 (`1`) | (22, 25) | (22, 24) | Dự kiến đến điểm hẹn tọa độ (22, 24) | 74 |
| 42 | Di chuyển hướng 2 (`2`) | (22, 24) | (23, 24) | Dự kiến đến điểm hẹn tọa độ (23, 24) | 72 |
| 43-44 | Di chuyển hướng 2 (`2`) | (23, 24) | (24, 24) | Dự kiến đến điểm hẹn tọa độ (24, 24) | 71 |
| 45-46 | Di chuyển hướng 2 (`2`) | (24, 24) | (25, 24) | Dự kiến đến điểm hẹn tọa độ (25, 24) | 70 |
| 47-48 | Di chuyển hướng 2 (`2`) | (25, 24) | (26, 24) | Dự kiến đến điểm hẹn tọa độ (26, 24) | 69 |
| 49 | Di chuyển hướng 2 (`2`) | (26, 24) | (27, 24) | Dự kiến đến điểm hẹn tọa độ (27, 24) | 67 |
| 50-51 | Di chuyển hướng 2 (`2`) | (27, 24) | (28, 24) | Dự kiến đến điểm hẹn tọa độ (28, 24) | 66 |
| 52-53 | Di chuyển hướng 2 (`2`) | (28, 24) | (29, 24) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(29, 24)) | 65 |
| 54-55 | Di chuyển hướng 4 (`4`) | (29, 24) | (29, 25) | Dự kiến đến điểm hẹn tọa độ (29, 25) | 64 |
| 56-57 | Di chuyển hướng 3 (`3`) | (29, 25) | (29, 26) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(29, 26)) | 63 |
| 58-59 | Di chuyển hướng 2 (`2`) | (29, 26) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 62 |
| 60-61 | Di chuyển hướng 2 (`2`) | (30, 26) | (31, 26) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(31, 26)) | 61 |
| 62-63 | Di chuyển hướng 0 (`0`) | (31, 26) | (31, 25) | Dự kiến đến điểm hẹn tọa độ (31, 25) | 60 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (12, 29) (ô=940)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 27)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 27)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 5, 0, 0, 0, 0, 1, 1, 0, 5, 5, 5, 5, 5, 5, 0, 0, 1, 0, 4, 4, 4, 4, 4, 4, 4, 3, 4, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 29) | (13, 29) | Dự kiến đến điểm hẹn tọa độ (13, 29) | 73 |
| 2-3 | Di chuyển hướng 2 (`2`) | (13, 29) | (14, 29) | Dự kiến đến điểm hẹn tọa độ (14, 29) | 72 |
| 4-6 | Di chuyển hướng 2 (`2`) | (14, 29) | (15, 29) | Dự kiến đến điểm hẹn tọa độ (15, 29) | 70 |
| 7-8 | Di chuyển hướng 2 (`2`) | (15, 29) | (16, 29) | Dự kiến đến điểm hẹn tọa độ (16, 29) | 69 |
| 9 | Di chuyển hướng 2 (`2`) | (16, 29) | (17, 29) | Dự kiến đến điểm hẹn tọa độ (17, 29) | 74 |
| 10-11 | Di chuyển hướng 5 (`5`) | (17, 29) | (16, 29) | Dự kiến đến điểm hẹn tọa độ (16, 29) | 73 |
| 12 | Di chuyển hướng 0 (`0`) | (16, 29) | (15, 28) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=31, tọa độ=(15, 28)) | 71 |
| 13-14 | Di chuyển hướng 0 (`0`) | (15, 28) | (15, 27) | Dự kiến đến điểm hẹn tọa độ (15, 27) | 70 |
| 15-17 | Di chuyển hướng 0 (`0`) | (15, 27) | (14, 26) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 26)) | 68 |
| 18-19 | Di chuyển hướng 0 (`0`) | (14, 26) | (14, 25) | Dự kiến đến điểm hẹn tọa độ (14, 25) | 67 |
| 20-21 | Di chuyển hướng 1 (`1`) | (14, 25) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 66 |
| 22-23 | Di chuyển hướng 1 (`1`) | (14, 24) | (15, 23) | Dự kiến đến điểm hẹn tọa độ (15, 23) | 65 |
| 24-25 | Di chuyển hướng 0 (`0`) | (15, 23) | (14, 22) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=27, tọa độ=(14, 22)) | 64 |
| 26-27 | Di chuyển hướng 5 (`5`) | (14, 22) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 63 |
| 28-29 | Di chuyển hướng 5 (`5`) | (13, 22) | (12, 22) | Dự kiến đến điểm hẹn tọa độ (12, 22) | 62 |
| 30-31 | Di chuyển hướng 5 (`5`) | (12, 22) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 61 |
| 32-33 | Di chuyển hướng 5 (`5`) | (11, 22) | (10, 22) | Dự kiến đến điểm hẹn tọa độ (10, 22) | 60 |
| 34 | Di chuyển hướng 5 (`5`) | (10, 22) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 58 |
| 35-36 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 57 |
| 37 | Di chuyển hướng 0 (`0`) | (8, 22) | (8, 21) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=29, tọa độ=(8, 21)) | 55 |
| 38-39 | Di chuyển hướng 0 (`0`) | (8, 21) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 54 |
| 40-41 | Di chuyển hướng 1 (`1`) | (7, 20) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 53 |
| 42-44 | Di chuyển hướng 0 (`0`) | (8, 19) | (7, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(7, 18)) | 51 |
| 45-46 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đến điểm hẹn tọa độ (7, 19) | 50 |
| 47-49 | Di chuyển hướng 4 (`4`) | (7, 19) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 48 |
| 50-51 | Di chuyển hướng 4 (`4`) | (6, 20) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 47 |
| 52-53 | Di chuyển hướng 4 (`4`) | (6, 21) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 46 |
| 54-55 | Di chuyển hướng 4 (`4`) | (5, 22) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 45 |
| 56 | Di chuyển hướng 4 (`4`) | (5, 23) | (4, 24) | Dự kiến đến điểm hẹn tọa độ (4, 24) | 43 |
| 57-58 | Di chuyển hướng 4 (`4`) | (4, 24) | (4, 25) | Dự kiến đến điểm hẹn tọa độ (4, 25) | 42 |
| 59 | Di chuyển hướng 3 (`3`) | (4, 25) | (4, 26) | Dự kiến đến điểm hẹn tọa độ (4, 26) | 40 |
| 60-61 | Di chuyển hướng 4 (`4`) | (4, 26) | (4, 27) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 27)) | 39 |
| 62-63 | Di chuyển hướng 2 (`2`) | (4, 27) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 38 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (5, 10) (ô=325)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(12, 8))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(12, 8))
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 2, 2, 2, 1, -49]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 74 |
| 2-3 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 74 |
| 4-5 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 74 |
| 6-7 | Di chuyển hướng 1 (`1`) | (8, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 74 |
| 8-9 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 74 |
| 10 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 74 |
| 11-12 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 74 |
| 13-14 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 8)) | 74 |
| 15-63 | Chờ 49 bước (`-49`) | (12, 8) | (12, 8) | Dự kiến đứng yên tại (12, 8); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 8)) | 74 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (19, 24) (ô=787)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(22, 24)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(22, 24)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 3, 2, 2, 3, 2, -3, 0, 0, 0, 1, 1, 0, 2, 2, 1, -23]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (19, 24) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 74 |
| 2-3 | Di chuyển hướng 4 (`4`) | (19, 25) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 74 |
| 4-5 | Di chuyển hướng 4 (`4`) | (18, 26) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 74 |
| 6-7 | Di chuyển hướng 4 (`4`) | (18, 27) | (17, 28) | Dự kiến đến điểm hẹn tọa độ (17, 28) | 74 |
| 8-9 | Di chuyển hướng 4 (`4`) | (17, 28) | (17, 29) | Dự kiến đến điểm hẹn tọa độ (17, 29) | 74 |
| 10-11 | Di chuyển hướng 3 (`3`) | (17, 29) | (17, 30) | Dự kiến đến điểm hẹn tọa độ (17, 30) | 74 |
| 12-13 | Di chuyển hướng 2 (`2`) | (17, 30) | (18, 30) | Dự kiến đến điểm hẹn tọa độ (18, 30) | 74 |
| 14-16 | Di chuyển hướng 2 (`2`) | (18, 30) | (19, 30) | Dự kiến đến điểm hẹn tọa độ (19, 30) | 74 |
| 17-18 | Di chuyển hướng 3 (`3`) | (19, 30) | (20, 31) | Dự kiến đến điểm hẹn tọa độ (20, 31) | 74 |
| 19-20 | Di chuyển hướng 2 (`2`) | (20, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 74 |
| 21-23 | Chờ 3 bước (`-3`) | (21, 31) | (21, 31) | Dự kiến đứng yên tại (21, 31); hướng tới tọa độ (21, 31) | 74 |
| 24-25 | Di chuyển hướng 0 (`0`) | (21, 31) | (20, 30) | Dự kiến đến điểm hẹn tọa độ (20, 30) | 74 |
| 26-28 | Di chuyển hướng 0 (`0`) | (20, 30) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 74 |
| 29 | Di chuyển hướng 0 (`0`) | (20, 29) | (19, 28) | Dự kiến đến điểm hẹn tọa độ (19, 28) | 74 |
| 30-31 | Di chuyển hướng 1 (`1`) | (19, 28) | (20, 27) | Dự kiến đến điểm hẹn tọa độ (20, 27) | 74 |
| 32-33 | Di chuyển hướng 1 (`1`) | (20, 27) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 74 |
| 34-35 | Di chuyển hướng 0 (`0`) | (20, 26) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 74 |
| 36-37 | Di chuyển hướng 2 (`2`) | (20, 25) | (21, 25) | Dự kiến đến điểm hẹn tọa độ (21, 25) | 74 |
| 38-39 | Di chuyển hướng 2 (`2`) | (21, 25) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 74 |
| 40 | Di chuyển hướng 1 (`1`) | (22, 25) | (22, 24) | Dự kiến đến điểm hẹn tọa độ (22, 24) | 74 |
| 41-63 | Chờ 23 bước (`-23`) | (22, 24) | (22, 24) | Dự kiến đứng yên tại (22, 24); hướng tới tọa độ (22, 24) | 74 |

