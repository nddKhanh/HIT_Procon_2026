# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 68
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #4 | (23, 3) | 73 | 80 |
| 16 | #1 | #4 | (14, 4) | 4 | 80 |
| 24 | #0 | #4 | (14, 8) | 12 | 80 |
| 36 | #2 | #4 | (21, 13) | 36 | 80 |
| 58 | #3 | #4 | (15, 23) | 0 | 80 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (19, 21) (ô=523)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 12)
- Mảng hành động đã gửi server: `[1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 5, 5, 4, 5, 5, 5, 4, 5, 4, 5, 4, 3, 3, 3, 3, 3, 2, 3, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (19, 21) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 36 |
| 3 | Di chuyển hướng 1 (`1`) | (19, 20) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 34 |
| 4 | Di chuyển hướng 0 (`0`) | (20, 19) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 32 |
| 5 | Di chuyển hướng 1 (`1`) | (19, 18) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 30 |
| 6 | Di chuyển hướng 0 (`0`) | (20, 17) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 28 |
| 7-9 | Di chuyển hướng 0 (`0`) | (19, 16) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 26 |
| 10-12 | Di chuyển hướng 0 (`0`) | (19, 15) | (18, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=11, tọa độ=(18, 14)) | 24 |
| 13-14 | Di chuyển hướng 0 (`0`) | (18, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 23 |
| 15-17 | Di chuyển hướng 0 (`0`) | (18, 13) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 21 |
| 18 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 19 |
| 19 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 17 |
| 20 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 15 |
| 21 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(15, 9)) | 13 |
| 22-23 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 80 |
| 24-25 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 79 |
| 26-27 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 78 |
| 28-29 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 77 |
| 30 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=5, tọa độ=(14, 4)) | 75 |
| 31-32 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 74 |
| 33-34 | Di chuyển hướng 1 (`1`) | (14, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 73 |
| 35-36 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 72 |
| 37 | Di chuyển hướng 0 (`0`) | (14, 1) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 70 |
| 38 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 0)) | 68 |
| 39-40 | Di chuyển hướng 5 (`5`) | (12, 0) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 67 |
| 41 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 65 |
| 42 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 63 |
| 43-44 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 62 |
| 45-47 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 60 |
| 48-49 | Di chuyển hướng 4 (`4`) | (8, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 59 |
| 50 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 57 |
| 51 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 55 |
| 52 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 53 |
| 53 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 51 |
| 54-55 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 50 |
| 56-57 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 49 |
| 58 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 47 |
| 59 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 45 |
| 60 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 43 |
| 61 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 41 |
| 62 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 39 |
| 63-64 | Di chuyển hướng 3 (`3`) | (8, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 38 |
| 65-66 | Di chuyển hướng 4 (`4`) | (9, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 37 |
| 67 | Chờ 1 bước (`-1`) | (8, 12) | (8, 12) | Dự kiến đứng yên tại (8, 12); hướng tới tọa độ (8, 12) | 37 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 4) (ô=111)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=4, tọa độ=(3, 16))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=4, tọa độ=(3, 16))
- Mảng hành động đã gửi server: `[5, -16, 5, 5, 5, 5, 5, 5, 0, 5, 5, 5, 0, 1, 0, 3, 4, 3, 4, 4, 4, 4, 4, 4, 5, 2, 2, 3, 3, 4, 5, 4, 4, 4, 3, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=5, tọa độ=(14, 4)) | 4 |
| 1-16 | Chờ 16 bước (`-16`) | (14, 4) | (14, 4) | Dự kiến đứng yên tại (14, 4); mục tiêu Spot #7 (thương hiệu=5, tọa độ=(14, 4)) | 80 |
| 17-18 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 79 |
| 19-21 | Di chuyển hướng 5 (`5`) | (13, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 77 |
| 22 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 75 |
| 23 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 73 |
| 24 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 71 |
| 25 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 69 |
| 26 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 67 |
| 27 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 65 |
| 28-30 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 63 |
| 31 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 61 |
| 32 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 59 |
| 33 | Di chuyển hướng 1 (`1`) | (4, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 57 |
| 34 | Di chuyển hướng 0 (`0`) | (5, 1) | (4, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 0)) | 55 |
| 35-36 | Di chuyển hướng 3 (`3`) | (4, 0) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 54 |
| 37 | Di chuyển hướng 4 (`4`) | (5, 1) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 52 |
| 38 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 50 |
| 39 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 48 |
| 40-41 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 47 |
| 42-44 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 45 |
| 45 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 43 |
| 46 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 41 |
| 47 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 39 |
| 48 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 37 |
| 49-50 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 36 |
| 51 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 34 |
| 52 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 32 |
| 53 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 30 |
| 54-56 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 28 |
| 57 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 26 |
| 58 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 24 |
| 59-61 | Di chuyển hướng 4 (`4`) | (2, 13) | (1, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 14)) | 22 |
| 62-63 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 21 |
| 64 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 19 |
| 65 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 17 |
| 66 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 15 |
| 67 | Chờ 1 bước (`-1`) | (3, 16) | (3, 16) | Dự kiến đứng yên tại (3, 16); mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 15 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (23, 4) (ô=119)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 20)
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 5, 5, 2, 3, 4, 3, 4, 4, 4, 5, 0, 0, 3, 3, 3, 3, 3, 3, 4, 4, 3, 3, 4, 4, 4, 4, 3, 3, 3, 3, 2, 5, 0, 5, 5, 5, 5, 5, 2, 2, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (23, 4) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 80 |
| 2 | Di chuyển hướng 1 (`1`) | (23, 3) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 78 |
| 3 | Di chuyển hướng 0 (`0`) | (23, 2) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 76 |
| 4 | Di chuyển hướng 0 (`0`) | (23, 1) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 74 |
| 5 | Di chuyển hướng 5 (`5`) | (22, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 72 |
| 6 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 70 |
| 7-8 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 69 |
| 9 | Di chuyển hướng 3 (`3`) | (21, 0) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 67 |
| 10-12 | Di chuyển hướng 4 (`4`) | (22, 1) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 65 |
| 13-14 | Di chuyển hướng 3 (`3`) | (21, 2) | (22, 3) | Dự kiến đến điểm hẹn tọa độ (22, 3) | 64 |
| 15-17 | Di chuyển hướng 4 (`4`) | (22, 3) | (21, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(21, 4)) | 62 |
| 18-19 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 61 |
| 20 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 59 |
| 21 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 57 |
| 22 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 55 |
| 23 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 53 |
| 24-25 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 52 |
| 26 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 50 |
| 27 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 48 |
| 28 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 46 |
| 29 | Di chuyển hướng 3 (`3`) | (20, 8) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 44 |
| 30 | Di chuyển hướng 3 (`3`) | (21, 9) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 42 |
| 31 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 40 |
| 32-34 | Di chuyển hướng 4 (`4`) | (21, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 38 |
| 35 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 80 |
| 36 | Di chuyển hướng 3 (`3`) | (21, 13) | (21, 14) | Dự kiến đến điểm hẹn tọa độ (21, 14) | 78 |
| 37 | Di chuyển hướng 4 (`4`) | (21, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=12, tọa độ=(21, 15)) | 76 |
| 38-39 | Di chuyển hướng 4 (`4`) | (21, 15) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 75 |
| 40 | Di chuyển hướng 4 (`4`) | (20, 16) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 73 |
| 41 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 71 |
| 42 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 69 |
| 43 | Di chuyển hướng 3 (`3`) | (20, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 67 |
| 44-46 | Di chuyển hướng 3 (`3`) | (20, 20) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 65 |
| 47 | Di chuyển hướng 3 (`3`) | (21, 21) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 63 |
| 48 | Di chuyển hướng 2 (`2`) | (21, 22) | (22, 22) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=13, tọa độ=(22, 22)) | 61 |
| 49-50 | Di chuyển hướng 5 (`5`) | (22, 22) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 60 |
| 51 | Di chuyển hướng 0 (`0`) | (21, 22) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 58 |
| 52 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 56 |
| 53 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 54 |
| 54-56 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 52 |
| 57-58 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 51 |
| 59 | Di chuyển hướng 5 (`5`) | (17, 21) | (16, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=14, tọa độ=(16, 21)) | 49 |
| 60-61 | Di chuyển hướng 2 (`2`) | (16, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 48 |
| 62 | Di chuyển hướng 2 (`2`) | (17, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 46 |
| 63-64 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 45 |
| 65-67 | Di chuyển hướng 1 (`1`) | (19, 21) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 43 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (15, 23) (ô=567)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=16, tọa độ=(9, 23))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=16, tọa độ=(9, 23))
- Mảng hành động đã gửi server: `[-58, 0, 5, 5, 0, 5, 4, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-57 | Chờ 58 bước (`-58`) | (15, 23) | (15, 23) | Dự kiến đứng yên tại (15, 23); mục tiêu Spot #23 (thương hiệu=17, tọa độ=(15, 23)) | 80 |
| 58-59 | Di chuyển hướng 0 (`0`) | (15, 23) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 79 |
| 60 | Di chuyển hướng 5 (`5`) | (14, 22) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 77 |
| 61 | Di chuyển hướng 5 (`5`) | (13, 22) | (12, 22) | Dự kiến đến điểm hẹn tọa độ (12, 22) | 75 |
| 62 | Di chuyển hướng 0 (`0`) | (12, 22) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 73 |
| 63 | Di chuyển hướng 5 (`5`) | (12, 21) | (11, 21) | Dự kiến đến điểm hẹn tọa độ (11, 21) | 71 |
| 64 | Di chuyển hướng 4 (`4`) | (11, 21) | (10, 22) | Dự kiến đến điểm hẹn tọa độ (10, 22) | 69 |
| 65 | Di chuyển hướng 4 (`4`) | (10, 22) | (10, 23) | Dự kiến đến điểm hẹn tọa độ (10, 23) | 67 |
| 66 | Di chuyển hướng 5 (`5`) | (10, 23) | (9, 23) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 65 |
| 67 | Chờ 1 bước (`-1`) | (9, 23) | (9, 23) | Dự kiến đứng yên tại (9, 23); mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 65 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (23, 1) (ô=47)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=17, tọa độ=(15, 23))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=17, tọa độ=(15, 23))
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 5, 4, 5, 0, 0, 0, 0, 5, 4, 4, 5, 4, 3, 4, 3, 3, 3, 2, 2, 2, 3, 3, 2, 3, -2, 0, 5, 4, 5, 5, 4, 4, 4, 4, 4, 4, 3, 4, 3, 3, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 80 |
| 1 | Di chuyển hướng 4 (`4`) | (23, 2) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 80 |
| 2 | Di chuyển hướng 4 (`4`) | (23, 3) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 80 |
| 3 | Di chuyển hướng 4 (`4`) | (22, 4) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 80 |
| 4 | Di chuyển hướng 5 (`5`) | (22, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 80 |
| 5 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 80 |
| 6 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 80 |
| 7 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 80 |
| 8 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 80 |
| 9-10 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 80 |
| 11 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 80 |
| 12 | Di chuyển hướng 5 (`5`) | (17, 2) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 80 |
| 13 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 80 |
| 14 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 80 |
| 15 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=5, tọa độ=(14, 4)) | 80 |
| 16-17 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 80 |
| 18 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 80 |
| 19-20 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 80 |
| 21-22 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 80 |
| 23-24 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(15, 9)) | 80 |
| 25-26 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 80 |
| 27 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 80 |
| 28 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 80 |
| 29 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 80 |
| 30 | Di chuyển hướng 3 (`3`) | (18, 10) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 80 |
| 31 | Di chuyển hướng 3 (`3`) | (19, 11) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 80 |
| 32 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 80 |
| 33 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 80 |
| 34-35 | Chờ 2 bước (`-2`) | (21, 13) | (21, 13) | Dự kiến đứng yên tại (21, 13); hướng tới tọa độ (21, 13) | 80 |
| 36 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 80 |
| 37 | Di chuyển hướng 5 (`5`) | (20, 12) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 80 |
| 38 | Di chuyển hướng 4 (`4`) | (19, 12) | (19, 13) | Dự kiến đến điểm hẹn tọa độ (19, 13) | 80 |
| 39 | Di chuyển hướng 5 (`5`) | (19, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 80 |
| 40-42 | Di chuyển hướng 5 (`5`) | (18, 13) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 80 |
| 43 | Di chuyển hướng 4 (`4`) | (17, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 80 |
| 44 | Di chuyển hướng 4 (`4`) | (16, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 80 |
| 45 | Di chuyển hướng 4 (`4`) | (16, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 80 |
| 46 | Di chuyển hướng 4 (`4`) | (15, 16) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 80 |
| 47-48 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 80 |
| 49-50 | Di chuyển hướng 4 (`4`) | (14, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 80 |
| 51-52 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 80 |
| 53-54 | Di chuyển hướng 4 (`4`) | (14, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 80 |
| 55-56 | Di chuyển hướng 3 (`3`) | (14, 21) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 80 |
| 57 | Di chuyển hướng 3 (`3`) | (14, 22) | (15, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=17, tọa độ=(15, 23)) | 80 |
| 58-67 | Chờ 10 bước (`-10`) | (15, 23) | (15, 23) | Dự kiến đứng yên tại (15, 23); mục tiêu Spot #23 (thương hiệu=17, tọa độ=(15, 23)) | 80 |

