# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 56
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 23 | #0 | #4 | (16, 10) | 3 | 80 |
| 49 | #2 | #4 | (20, 0) | 1 | 80 |
| 51 | #2 | #4 | (21, 0) | 79 | 80 |
| 52 | #2 | #4 | (22, 0) | 78 | 80 |
| 53 | #2 | #4 | (23, 1) | 78 | 80 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (18, 21) (ô=522)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 21)
- Mảng hành động đã gửi server: `[1, 2, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 5, -1, 3, 2, 2, 2, 3, 3, 2, 3, 3, 4, 4, 4, 4, 3, 4, 4, 5, 5, 5, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (18, 21) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 23 |
| 2-4 | Di chuyển hướng 2 (`2`) | (18, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 21 |
| 5 | Di chuyển hướng 1 (`1`) | (19, 20) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 19 |
| 6 | Di chuyển hướng 0 (`0`) | (20, 19) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 17 |
| 7 | Di chuyển hướng 0 (`0`) | (19, 18) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 15 |
| 8-9 | Di chuyển hướng 1 (`1`) | (19, 17) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 14 |
| 10-12 | Di chuyển hướng 0 (`0`) | (19, 16) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 12 |
| 13-15 | Di chuyển hướng 0 (`0`) | (19, 15) | (18, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=11, tọa độ=(18, 14)) | 10 |
| 16-17 | Di chuyển hướng 0 (`0`) | (18, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 9 |
| 18-20 | Di chuyển hướng 0 (`0`) | (18, 13) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 7 |
| 21 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 5 |
| 22 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 80 |
| 23 | Di chuyển hướng 0 (`0`) | (16, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 78 |
| 24-25 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(15, 9)) | 77 |
| 26 | Chờ 1 bước (`-1`) | (15, 9) | (15, 9) | Dự kiến đứng yên tại (15, 9); mục tiêu Spot #11 (thương hiệu=7, tọa độ=(15, 9)) | 77 |
| 27-28 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 76 |
| 29 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 74 |
| 30 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 72 |
| 31 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 70 |
| 32 | Di chuyển hướng 3 (`3`) | (18, 10) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 68 |
| 33 | Di chuyển hướng 3 (`3`) | (19, 11) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 66 |
| 34 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 64 |
| 35 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 62 |
| 36 | Di chuyển hướng 3 (`3`) | (21, 13) | (21, 14) | Dự kiến đến điểm hẹn tọa độ (21, 14) | 60 |
| 37 | Di chuyển hướng 4 (`4`) | (21, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=12, tọa độ=(21, 15)) | 58 |
| 38-39 | Di chuyển hướng 4 (`4`) | (21, 15) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 57 |
| 40 | Di chuyển hướng 4 (`4`) | (20, 16) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 55 |
| 41 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 53 |
| 42 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 51 |
| 43 | Di chuyển hướng 4 (`4`) | (20, 19) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 49 |
| 44 | Di chuyển hướng 4 (`4`) | (19, 20) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 47 |
| 45-47 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 45 |
| 48-49 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 44 |
| 50 | Di chuyển hướng 5 (`5`) | (17, 21) | (16, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=14, tọa độ=(16, 21)) | 42 |
| 51-52 | Di chuyển hướng 2 (`2`) | (16, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 41 |
| 53 | Di chuyển hướng 2 (`2`) | (17, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 39 |
| 54-55 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 38 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 14) (ô=337)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 4)
- Mảng hành động đã gửi server: `[1, 1, 2, 1, 1, 1, 1, 1, 0, 1, 2, 1, 2, 2, 1, 1, 1, 1, 2, 2, 3, 4, 3, 3, 2, 2, 2, 2, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 58 |
| 2-4 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 56 |
| 5 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 54 |
| 6 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 52 |
| 7-9 | Di chuyển hướng 1 (`1`) | (4, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 50 |
| 10 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 48 |
| 11-12 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 47 |
| 13-15 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 45 |
| 16 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 43 |
| 17 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 41 |
| 18-20 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 39 |
| 21-23 | Di chuyển hướng 1 (`1`) | (7, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 37 |
| 24-26 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 35 |
| 27 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 33 |
| 28 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 31 |
| 29 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 29 |
| 30 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 27 |
| 31 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 25 |
| 32 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 0)) | 23 |
| 33-34 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 22 |
| 35 | Di chuyển hướng 3 (`3`) | (13, 0) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 20 |
| 36 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 18 |
| 37-38 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 17 |
| 39-40 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=5, tọa độ=(14, 4)) | 16 |
| 41-42 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 15 |
| 43 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 13 |
| 44-46 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 11 |
| 47-48 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 10 |
| 49-50 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 9 |
| 51-52 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 8 |
| 53-55 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 6 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (16, 6) (ô=160)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=8, tọa độ=(23, 4))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=8, tọa độ=(23, 4))
- Mảng hành động đã gửi server: `[1, 2, 2, 3, 2, 1, 1, 1, 0, 1, 0, 5, -27, 2, 2, 3, 3, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (16, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 20 |
| 2-4 | Di chuyển hướng 2 (`2`) | (17, 5) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 18 |
| 5-6 | Di chuyển hướng 2 (`2`) | (18, 5) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 17 |
| 7 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 15 |
| 8 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 13 |
| 9 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 11 |
| 10 | Di chuyển hướng 1 (`1`) | (21, 5) | (21, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(21, 4)) | 9 |
| 11-12 | Di chuyển hướng 1 (`1`) | (21, 4) | (22, 3) | Dự kiến đến điểm hẹn tọa độ (22, 3) | 8 |
| 13-15 | Di chuyển hướng 0 (`0`) | (22, 3) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 6 |
| 16-17 | Di chuyển hướng 1 (`1`) | (21, 2) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 5 |
| 18-20 | Di chuyển hướng 0 (`0`) | (22, 1) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 3 |
| 21 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 1 |
| 22-48 | Chờ 27 bước (`-27`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 80 |
| 49-50 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 80 |
| 51 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 80 |
| 52 | Di chuyển hướng 3 (`3`) | (22, 0) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 80 |
| 53 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 78 |
| 54 | Di chuyển hướng 4 (`4`) | (23, 2) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 76 |
| 55 | Di chuyển hướng 3 (`3`) | (23, 3) | (23, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(23, 4)) | 74 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (4, 23) (ô=556)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=17, tọa độ=(15, 23))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=17, tọa độ=(15, 23))
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 1, 0, 1, 2, 3, 3, 2, 2, 2, 3, 4, 4, 3, 3, 1, 1, 1, 1, 2, 2, 3, 3, 3, 3, -9]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (4, 23) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 42 |
| 2 | Di chuyển hướng 1 (`1`) | (3, 22) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 40 |
| 3 | Di chuyển hướng 0 (`0`) | (4, 21) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 38 |
| 4 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 36 |
| 5 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 34 |
| 6 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 32 |
| 7-9 | Di chuyển hướng 1 (`1`) | (3, 17) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 30 |
| 10-11 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 29 |
| 12 | Di chuyển hướng 3 (`3`) | (4, 16) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 27 |
| 13 | Di chuyển hướng 3 (`3`) | (5, 17) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 25 |
| 14-15 | Di chuyển hướng 2 (`2`) | (5, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 24 |
| 16-17 | Di chuyển hướng 2 (`2`) | (6, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 23 |
| 18-19 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 22 |
| 20-21 | Di chuyển hướng 3 (`3`) | (8, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 21 |
| 22 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 19 |
| 23-24 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 18 |
| 25 | Di chuyển hướng 3 (`3`) | (8, 21) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 16 |
| 26 | Di chuyển hướng 3 (`3`) | (8, 22) | (9, 23) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 14 |
| 27-28 | Di chuyển hướng 1 (`1`) | (9, 23) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 13 |
| 29-31 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 11 |
| 32-34 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 9 |
| 35 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=13, tọa độ=(11, 19)) | 7 |
| 36-37 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 6 |
| 38-39 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 5 |
| 40-41 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 4 |
| 42-43 | Di chuyển hướng 3 (`3`) | (13, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 3 |
| 44-45 | Di chuyển hướng 3 (`3`) | (14, 21) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 2 |
| 46 | Di chuyển hướng 3 (`3`) | (14, 22) | (15, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=17, tọa độ=(15, 23)) | 0 |
| 47-55 | Chờ 9 bước (`-9`) | (15, 23) | (15, 23) | Dự kiến đứng yên tại (15, 23); mục tiêu Spot #23 (thương hiệu=17, tọa độ=(15, 23)) | 0 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (8, 11) (ô=272)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(23, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(23, 1)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 1, 1, 2, 2, 3, 2, 2, 2, 3, 3, 2, 3, 3, 0, 0, 1, 1, 0, 0, 0, 1, 1, 2, 1, 1, 1, 0, 0, 5, 5, 2, 2, 3, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 80 |
| 4-5 | Di chuyển hướng 2 (`2`) | (9, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 80 |
| 6-7 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 80 |
| 8-10 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 80 |
| 11-13 | Di chuyển hướng 1 (`1`) | (12, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 80 |
| 14-15 | Di chuyển hướng 1 (`1`) | (12, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 80 |
| 16-17 | Di chuyển hướng 2 (`2`) | (13, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 80 |
| 18-19 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(15, 9)) | 80 |
| 20-21 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 80 |
| 22 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 80 |
| 23 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 80 |
| 24 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 80 |
| 25 | Di chuyển hướng 3 (`3`) | (18, 10) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 80 |
| 26 | Di chuyển hướng 3 (`3`) | (19, 11) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 80 |
| 27 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 80 |
| 28 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 80 |
| 29 | Di chuyển hướng 3 (`3`) | (21, 13) | (21, 14) | Dự kiến đến điểm hẹn tọa độ (21, 14) | 80 |
| 30 | Di chuyển hướng 0 (`0`) | (21, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 80 |
| 31 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 80 |
| 32 | Di chuyển hướng 1 (`1`) | (20, 12) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 80 |
| 33-35 | Di chuyển hướng 1 (`1`) | (21, 11) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 80 |
| 36 | Di chuyển hướng 0 (`0`) | (21, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 80 |
| 37 | Di chuyển hướng 0 (`0`) | (21, 9) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 80 |
| 38 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 80 |
| 39 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 80 |
| 40 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 80 |
| 41 | Di chuyển hướng 2 (`2`) | (21, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 80 |
| 42 | Di chuyển hướng 1 (`1`) | (22, 5) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 80 |
| 43 | Di chuyển hướng 1 (`1`) | (22, 4) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 80 |
| 44 | Di chuyển hướng 1 (`1`) | (23, 3) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 80 |
| 45 | Di chuyển hướng 0 (`0`) | (23, 2) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 80 |
| 46 | Di chuyển hướng 0 (`0`) | (23, 1) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 80 |
| 47 | Di chuyển hướng 5 (`5`) | (22, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 80 |
| 48 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 80 |
| 49-50 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 80 |
| 51 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 80 |
| 52 | Di chuyển hướng 3 (`3`) | (22, 0) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 80 |
| 53-55 | Chờ 3 bước (`-3`) | (23, 1) | (23, 1) | Dự kiến đứng yên tại (23, 1); hướng tới tọa độ (23, 1) | 80 |

