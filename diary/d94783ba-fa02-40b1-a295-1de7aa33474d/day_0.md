# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 48
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 47 | #1 | #5 | (9, 14) | 23 | 55 |
| 47 | #3 | #4 | (6, 18) | 25 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 5) (ô=136)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 6)
- Mảng hành động đã gửi server: `[3, 3, 2, 3, 3, 3, 2, 3, 2, 5, 0, 5, 5, 5, 5, 5, 5, 0, 0, 5, 5, 5, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 54 |
| 2-3 | Di chuyển hướng 3 (`3`) | (16, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 53 |
| 4-6 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(18, 7)) | 51 |
| 7-8 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(18, 8)) | 50 |
| 9-10 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 49 |
| 11-12 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 48 |
| 13 | Di chuyển hướng 2 (`2`) | (19, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 46 |
| 14-15 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 45 |
| 16-17 | Di chuyển hướng 2 (`2`) | (21, 11) | (22, 11) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(22, 11)) | 44 |
| 18-19 | Di chuyển hướng 5 (`5`) | (22, 11) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 43 |
| 20-21 | Di chuyển hướng 0 (`0`) | (21, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 42 |
| 22-23 | Di chuyển hướng 5 (`5`) | (20, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 41 |
| 24 | Di chuyển hướng 5 (`5`) | (19, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 39 |
| 25 | Di chuyển hướng 5 (`5`) | (18, 10) | (17, 10) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 10)) | 37 |
| 26-27 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 36 |
| 28-29 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 35 |
| 30-31 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(14, 10)) | 34 |
| 32-33 | Di chuyển hướng 0 (`0`) | (14, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 33 |
| 34-35 | Di chuyển hướng 0 (`0`) | (14, 9) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 32 |
| 36 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 30 |
| 37 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 28 |
| 38-39 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 27 |
| 40-42 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(10, 7)) | 25 |
| 43-44 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 24 |
| 45-46 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 23 |
| 47 | Chờ 1 bước (`-1`) | (8, 6) | (8, 6) | Dự kiến đứng yên tại (8, 6); hướng tới tọa độ (8, 6) | 23 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 20) (ô=498)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 14)
- Mảng hành động đã gửi server: `[2, 2, 3, 5, 5, 5, 5, 4, 5, 4, 0, 0, 0, 0, 0, 5, 0, 5, 0, 2, 2, 0, 0, 0, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (18, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 54 |
| 2-3 | Di chuyển hướng 2 (`2`) | (19, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 53 |
| 4 | Di chuyển hướng 3 (`3`) | (20, 20) | (21, 21) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 21)) | 51 |
| 5-6 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 50 |
| 7-8 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 49 |
| 9-10 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(18, 21)) | 48 |
| 11-12 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 47 |
| 13-14 | Di chuyển hướng 4 (`4`) | (17, 21) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 46 |
| 15-16 | Di chuyển hướng 5 (`5`) | (16, 22) | (15, 22) | Dự kiến đến điểm hẹn tọa độ (15, 22) | 45 |
| 17-18 | Di chuyển hướng 4 (`4`) | (15, 22) | (15, 23) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(15, 23)) | 44 |
| 19-20 | Di chuyển hướng 0 (`0`) | (15, 23) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 43 |
| 21-22 | Di chuyển hướng 0 (`0`) | (14, 22) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 42 |
| 23-25 | Di chuyển hướng 0 (`0`) | (14, 21) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 40 |
| 26-27 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 39 |
| 28 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 37 |
| 29 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 35 |
| 30 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 33 |
| 31-32 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(10, 17)) | 32 |
| 33-34 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 16)) | 31 |
| 35-36 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 30 |
| 37 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 28 |
| 38-39 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 27 |
| 40-41 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 26 |
| 42-44 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 13)) | 24 |
| 45-46 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 55 |
| 47 | Chờ 1 bước (`-1`) | (9, 14) | (9, 14) | Dự kiến đứng yên tại (9, 14); hướng tới tọa độ (9, 14) | 55 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 6) (ô=155)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(4, 11))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(4, 11))
- Mảng hành động đã gửi server: `[4, 5, 0, 5, 0, 0, 0, 4, 4, 0, 0, 0, 5, 0, 3, 3, 3, 3, 5, 4, 4, 4, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 54 |
| 2-4 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(10, 7)) | 52 |
| 5-6 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 51 |
| 7-8 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 50 |
| 9-10 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 49 |
| 11 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 47 |
| 12-13 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 3)) | 46 |
| 14-15 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 45 |
| 16-17 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 44 |
| 18-19 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 43 |
| 20-21 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 42 |
| 22-23 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 41 |
| 24 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 39 |
| 25-26 | Di chuyển hướng 0 (`0`) | (3, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 1)) | 38 |
| 27-28 | Di chuyển hướng 3 (`3`) | (3, 1) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 37 |
| 29-30 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 36 |
| 31-32 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 35 |
| 33-34 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 34 |
| 35-36 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 33 |
| 37 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 31 |
| 38-39 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 30 |
| 40-41 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(2, 8)) | 29 |
| 42-43 | Di chuyển hướng 3 (`3`) | (2, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 28 |
| 44-45 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 27 |
| 46-47 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 11)) | 26 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 0) (ô=5)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(6, 18))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(6, 18))
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 4, 4, 4, 4, 3, 3, 4, 4, 3, 3, 4, 4, 4, 3, 4, 3, 1, 2, 2, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 54 |
| 2-3 | Di chuyển hướng 4 (`4`) | (6, 1) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 53 |
| 4-5 | Di chuyển hướng 4 (`4`) | (5, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 52 |
| 6-7 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 51 |
| 8-9 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 50 |
| 10 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 48 |
| 11-12 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 47 |
| 13-14 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(2, 8)) | 46 |
| 15-16 | Di chuyển hướng 3 (`3`) | (2, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 45 |
| 17-18 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 44 |
| 19-20 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 43 |
| 21-22 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 42 |
| 23 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 40 |
| 24-25 | Di chuyển hướng 3 (`3`) | (3, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 39 |
| 26-27 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 38 |
| 28-29 | Di chuyển hướng 4 (`4`) | (3, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 37 |
| 30 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 35 |
| 31-33 | Di chuyển hướng 3 (`3`) | (2, 17) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 33 |
| 34-35 | Di chuyển hướng 4 (`4`) | (2, 18) | (2, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 19)) | 32 |
| 36-37 | Di chuyển hướng 3 (`3`) | (2, 19) | (2, 20) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 20)) | 31 |
| 38-39 | Di chuyển hướng 1 (`1`) | (2, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 30 |
| 40-41 | Di chuyển hướng 2 (`2`) | (3, 19) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 29 |
| 42-43 | Di chuyển hướng 2 (`2`) | (4, 19) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 28 |
| 44 | Di chuyển hướng 2 (`2`) | (5, 19) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 26 |
| 45-46 | Di chuyển hướng 1 (`1`) | (6, 19) | (6, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 55 |
| 47 | Chờ 1 bước (`-1`) | (6, 18) | (6, 18) | Dự kiến đứng yên tại (6, 18); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 55 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (6, 22) (ô=534)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(6, 18))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(6, 18))
- Mảng hành động đã gửi server: `[0, 0, 1, 1, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 22) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 55 |
| 2-3 | Di chuyển hướng 0 (`0`) | (6, 21) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 55 |
| 4 | Di chuyển hướng 1 (`1`) | (5, 20) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 55 |
| 5-6 | Di chuyển hướng 1 (`1`) | (6, 19) | (6, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 55 |
| 7-47 | Chờ 41 bước (`-41`) | (6, 18) | (6, 18) | Dự kiến đứng yên tại (6, 18); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 55 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (20, 19) (ô=476)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 14)
- Mảng hành động đã gửi server: `[0, 0, 5, 5, 5, 5, 4, 5, 5, 5, 0, 0, 0, 0, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 19) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 55 |
| 2-3 | Di chuyển hướng 0 (`0`) | (19, 18) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 55 |
| 4-5 | Di chuyển hướng 5 (`5`) | (19, 17) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 55 |
| 6 | Di chuyển hướng 5 (`5`) | (18, 17) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 55 |
| 7-8 | Di chuyển hướng 5 (`5`) | (17, 17) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 55 |
| 9-10 | Di chuyển hướng 5 (`5`) | (16, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 55 |
| 11-12 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 55 |
| 13 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 55 |
| 14-15 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 55 |
| 16 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 55 |
| 17 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 55 |
| 18-19 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 55 |
| 20 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 55 |
| 21-23 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 55 |
| 24-47 | Chờ 24 bước (`-24`) | (9, 14) | (9, 14) | Dự kiến đứng yên tại (9, 14); hướng tới tọa độ (9, 14) | 55 |

