# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 72
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 26 | #2 | #4 | (21, 4) | 2 | 80 |
| 32 | #0 | #4 | (18, 4) | 3 | 80 |
| 55 | #2 | #4 | (18, 4) | 38 | 80 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (18, 4) (ô=114)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 16)
- Mảng hành động đã gửi server: `[-32, 3, 3, 2, 1, 2, 1, 2, 0, 1, 0, 0, 5, 5, 2, 2, 3, 3, 4, 4, 4, 4, 4, 4, 3, 3, 4, 4, 3, 3, 4, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-31 | Chờ 32 bước (`-32`) | (18, 4) | (18, 4) | Dự kiến đứng yên tại (18, 4); mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 80 |
| 32-33 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 79 |
| 34 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 77 |
| 35 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 75 |
| 36 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 73 |
| 37 | Di chuyển hướng 2 (`2`) | (21, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 71 |
| 38 | Di chuyển hướng 1 (`1`) | (22, 5) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 69 |
| 39 | Di chuyển hướng 2 (`2`) | (22, 4) | (23, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(23, 4)) | 67 |
| 40-41 | Di chuyển hướng 0 (`0`) | (23, 4) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 66 |
| 42 | Di chuyển hướng 1 (`1`) | (23, 3) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 64 |
| 43 | Di chuyển hướng 0 (`0`) | (23, 2) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 62 |
| 44 | Di chuyển hướng 0 (`0`) | (23, 1) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 60 |
| 45 | Di chuyển hướng 5 (`5`) | (22, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 58 |
| 46 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 56 |
| 47-48 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 55 |
| 49 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 53 |
| 50 | Di chuyển hướng 3 (`3`) | (22, 0) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 51 |
| 51 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 49 |
| 52 | Di chuyển hướng 4 (`4`) | (23, 2) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 47 |
| 53 | Di chuyển hướng 4 (`4`) | (23, 3) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 45 |
| 54 | Di chuyển hướng 4 (`4`) | (22, 4) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 43 |
| 55 | Di chuyển hướng 4 (`4`) | (22, 5) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 41 |
| 56-57 | Di chuyển hướng 4 (`4`) | (21, 6) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 40 |
| 58-59 | Di chuyển hướng 4 (`4`) | (21, 7) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 39 |
| 60 | Di chuyển hướng 3 (`3`) | (20, 8) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 37 |
| 61 | Di chuyển hướng 3 (`3`) | (21, 9) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 35 |
| 62 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 33 |
| 63-65 | Di chuyển hướng 4 (`4`) | (21, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 31 |
| 66 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 29 |
| 67 | Di chuyển hướng 3 (`3`) | (21, 13) | (21, 14) | Dự kiến đến điểm hẹn tọa độ (21, 14) | 27 |
| 68 | Di chuyển hướng 4 (`4`) | (21, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=12, tọa độ=(21, 15)) | 25 |
| 69-70 | Di chuyển hướng 4 (`4`) | (21, 15) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 24 |
| 71 | Di chuyển hướng 5 (`5`) | (20, 16) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 22 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 16) (ô=392)
- Nhiên liệu đầu ngày: 75
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=17, tọa độ=(15, 23))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=17, tọa độ=(15, 23))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 4, 3, 4, 4, 5, 5, 5, 5, 5, 5, 0, 1, 0, 0, 0, 0, 0, 0, 1, 4, 3, 2, 2, 2, 3, 3, 2, 2, 2, 3, 4, 2, 2, 3, 2, 3, 2, 2, 3, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 74 |
| 2 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 72 |
| 3 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 70 |
| 4-6 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=13, tọa độ=(11, 19)) | 68 |
| 7-8 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 67 |
| 9 | Di chuyển hướng 3 (`3`) | (10, 20) | (11, 21) | Dự kiến đến điểm hẹn tọa độ (11, 21) | 65 |
| 10 | Di chuyển hướng 4 (`4`) | (11, 21) | (10, 22) | Dự kiến đến điểm hẹn tọa độ (10, 22) | 63 |
| 11 | Di chuyển hướng 4 (`4`) | (10, 22) | (10, 23) | Dự kiến đến điểm hẹn tọa độ (10, 23) | 61 |
| 12 | Di chuyển hướng 5 (`5`) | (10, 23) | (9, 23) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 59 |
| 13-14 | Di chuyển hướng 5 (`5`) | (9, 23) | (8, 23) | Dự kiến đến điểm hẹn tọa độ (8, 23) | 58 |
| 15-17 | Di chuyển hướng 5 (`5`) | (8, 23) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 56 |
| 18 | Di chuyển hướng 5 (`5`) | (7, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 54 |
| 19 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 52 |
| 20 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=15, tọa độ=(4, 23)) | 50 |
| 21-22 | Di chuyển hướng 0 (`0`) | (4, 23) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 49 |
| 23 | Di chuyển hướng 1 (`1`) | (3, 22) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 47 |
| 24 | Di chuyển hướng 0 (`0`) | (4, 21) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 45 |
| 25 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 43 |
| 26 | Di chuyển hướng 0 (`0`) | (3, 19) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 41 |
| 27-29 | Di chuyển hướng 0 (`0`) | (2, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 39 |
| 30-32 | Di chuyển hướng 0 (`0`) | (2, 17) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 37 |
| 33 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 35 |
| 34 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 14)) | 33 |
| 35-36 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 32 |
| 37 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 30 |
| 38 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 28 |
| 39 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 26 |
| 40-41 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 25 |
| 42 | Di chuyển hướng 3 (`3`) | (4, 16) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 23 |
| 43 | Di chuyển hướng 3 (`3`) | (5, 17) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 21 |
| 44-45 | Di chuyển hướng 2 (`2`) | (5, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 20 |
| 46-47 | Di chuyển hướng 2 (`2`) | (6, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 19 |
| 48-49 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 18 |
| 50-51 | Di chuyển hướng 3 (`3`) | (8, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 17 |
| 52 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 15 |
| 53-54 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 14 |
| 55-57 | Di chuyển hướng 2 (`2`) | (9, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 12 |
| 58 | Di chuyển hướng 3 (`3`) | (10, 20) | (11, 21) | Dự kiến đến điểm hẹn tọa độ (11, 21) | 10 |
| 59 | Di chuyển hướng 2 (`2`) | (11, 21) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 8 |
| 60 | Di chuyển hướng 3 (`3`) | (12, 21) | (12, 22) | Dự kiến đến điểm hẹn tọa độ (12, 22) | 6 |
| 61 | Di chuyển hướng 2 (`2`) | (12, 22) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 4 |
| 62 | Di chuyển hướng 2 (`2`) | (13, 22) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 2 |
| 63 | Di chuyển hướng 3 (`3`) | (14, 22) | (15, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=17, tọa độ=(15, 23)) | 0 |
| 64-71 | Chờ 8 bước (`-8`) | (15, 23) | (15, 23) | Dự kiến đứng yên tại (15, 23); mục tiêu Spot #23 (thương hiệu=17, tọa độ=(15, 23)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (23, 4) (ô=119)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(12, 0))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(12, 0))
- Mảng hành động đã gửi server: `[5, 5, -24, 4, 4, 4, 3, 3, 3, 4, 4, 3, 3, 4, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 0, 1, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (23, 4) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 4 |
| 2 | Di chuyển hướng 5 (`5`) | (22, 4) | (21, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(21, 4)) | 2 |
| 3-26 | Chờ 24 bước (`-24`) | (21, 4) | (21, 4) | Dự kiến đứng yên tại (21, 4); mục tiêu Spot #10 (thương hiệu=7, tọa độ=(21, 4)) | 80 |
| 27-28 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 79 |
| 29 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 77 |
| 30 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 75 |
| 31 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 73 |
| 32 | Di chuyển hướng 3 (`3`) | (20, 8) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 71 |
| 33 | Di chuyển hướng 3 (`3`) | (21, 9) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 69 |
| 34 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 67 |
| 35-37 | Di chuyển hướng 4 (`4`) | (21, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 65 |
| 38 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 63 |
| 39 | Di chuyển hướng 3 (`3`) | (21, 13) | (21, 14) | Dự kiến đến điểm hẹn tọa độ (21, 14) | 61 |
| 40 | Di chuyển hướng 4 (`4`) | (21, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=12, tọa độ=(21, 15)) | 59 |
| 41-42 | Di chuyển hướng 1 (`1`) | (21, 15) | (21, 14) | Dự kiến đến điểm hẹn tọa độ (21, 14) | 58 |
| 43 | Di chuyển hướng 0 (`0`) | (21, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 56 |
| 44 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 54 |
| 45 | Di chuyển hướng 1 (`1`) | (20, 12) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 52 |
| 46-48 | Di chuyển hướng 1 (`1`) | (21, 11) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 50 |
| 49 | Di chuyển hướng 0 (`0`) | (21, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 48 |
| 50 | Di chuyển hướng 0 (`0`) | (21, 9) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 46 |
| 51 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 44 |
| 52 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 42 |
| 53 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 40 |
| 54 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 80 |
| 55-56 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 79 |
| 57-58 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 78 |
| 59-61 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 76 |
| 62 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=5, tọa độ=(14, 4)) | 74 |
| 63-64 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 73 |
| 65-66 | Di chuyển hướng 1 (`1`) | (14, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 72 |
| 67-68 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 71 |
| 69 | Di chuyển hướng 0 (`0`) | (14, 1) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 69 |
| 70 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 0)) | 67 |
| 71 | Chờ 1 bước (`-1`) | (12, 0) | (12, 0) | Dự kiến đứng yên tại (12, 0); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 0)) | 67 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 9) (ô=217)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(4, 0))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(4, 0))
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 4, 5, 4, 4, 1, 1, 2, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 2, 2, 2, 1, -28]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 47 |
| 2 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 45 |
| 3 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 43 |
| 4 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 41 |
| 5-7 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 39 |
| 8 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 37 |
| 9 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 35 |
| 10-12 | Di chuyển hướng 4 (`4`) | (2, 13) | (1, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 14)) | 33 |
| 13-14 | Di chuyển hướng 1 (`1`) | (1, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 32 |
| 15-17 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 30 |
| 18 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 28 |
| 19 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 26 |
| 20-22 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 24 |
| 23 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 22 |
| 24 | Di chuyển hướng 0 (`0`) | (3, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 20 |
| 25 | Di chuyển hướng 0 (`0`) | (2, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 18 |
| 26 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 16 |
| 27-28 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 15 |
| 29 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 13 |
| 30 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 11 |
| 31 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 9 |
| 32 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 1)) | 7 |
| 33-34 | Di chuyển hướng 2 (`2`) | (1, 1) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 6 |
| 35-37 | Di chuyển hướng 2 (`2`) | (2, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 4 |
| 38-40 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 2 |
| 41-43 | Di chuyển hướng 1 (`1`) | (4, 1) | (4, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 0)) | 0 |
| 44-71 | Chờ 28 bước (`-28`) | (4, 0) | (4, 0) | Dự kiến đứng yên tại (4, 0); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 0)) | 0 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (9, 18) (ô=441)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=6, tọa độ=(18, 4))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=6, tọa độ=(18, 4))
- Mảng hành động đã gửi server: `[1, 0, 1, 2, 2, 3, 2, 2, 2, 1, 1, 1, 1, 0, 1, 2, 1, 2, 1, 0, 1, 1, 1, 4, 4, 5, 0, 0, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 1 (`1`) | (9, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 80 |
| 4 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 80 |
| 5 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 80 |
| 6 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 80 |
| 7 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 80 |
| 8 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 80 |
| 9 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 80 |
| 10 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 80 |
| 11 | Di chuyển hướng 2 (`2`) | (14, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 80 |
| 12 | Di chuyển hướng 1 (`1`) | (15, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 80 |
| 13 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 80 |
| 14 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 80 |
| 15 | Di chuyển hướng 1 (`1`) | (17, 13) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 80 |
| 16 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 80 |
| 17 | Di chuyển hướng 1 (`1`) | (17, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 80 |
| 18 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 80 |
| 19 | Di chuyển hướng 1 (`1`) | (18, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 80 |
| 20 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 80 |
| 21 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 80 |
| 22 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 80 |
| 23 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 80 |
| 24 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 80 |
| 25 | Di chuyển hướng 1 (`1`) | (21, 5) | (21, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(21, 4)) | 80 |
| 26-27 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 80 |
| 28 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 80 |
| 29 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 80 |
| 30 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 80 |
| 31 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 80 |
| 32-71 | Chờ 40 bước (`-40`) | (18, 4) | (18, 4) | Dự kiến đứng yên tại (18, 4); mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 80 |

