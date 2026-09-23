# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 53
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (15, 16) (ô=383)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(5, 16))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(5, 16))
- Mảng hành động đã gửi server: `[5, 5, 2, 2, 2, 3, 2, 3, 2, 3, 5, 5, 5, 5, 4, 5, 0, 0, 0, 5, 0, 5, 0, 5, 5, 5, 0, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 47 |
| 2 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(13, 16)) | 45 |
| 3-4 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 44 |
| 5 | Di chuyển hướng 2 (`2`) | (14, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 42 |
| 6-7 | Di chuyển hướng 2 (`2`) | (15, 16) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 41 |
| 8-9 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 17)) | 40 |
| 10-11 | Di chuyển hướng 2 (`2`) | (17, 17) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 39 |
| 12 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 37 |
| 13-14 | Di chuyển hướng 2 (`2`) | (18, 18) | (19, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 18)) | 36 |
| 15-16 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(20, 19)) | 35 |
| 17-18 | Di chuyển hướng 5 (`5`) | (20, 19) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 34 |
| 19-20 | Di chuyển hướng 5 (`5`) | (19, 19) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 33 |
| 21 | Di chuyển hướng 5 (`5`) | (18, 19) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 31 |
| 22-23 | Di chuyển hướng 5 (`5`) | (17, 19) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 30 |
| 24-25 | Di chuyển hướng 4 (`4`) | (16, 19) | (15, 20) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(15, 20)) | 29 |
| 26-27 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 28 |
| 28-29 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 27 |
| 30-31 | Di chuyển hướng 0 (`0`) | (14, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 26 |
| 32-33 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 25 |
| 34-35 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 24 |
| 36-37 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 23 |
| 38 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 21 |
| 39-40 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 15)) | 20 |
| 41-42 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 19 |
| 43-44 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 18 |
| 45-46 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 17 |
| 47-48 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 16 |
| 49-50 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 15 |
| 51-52 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 16)) | 13 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (17, 4) (ô=109)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(21, 11))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(21, 11))
- Mảng hành động đã gửi server: `[3, 1, 2, 1, 4, 3, 4, 3, 4, 3, 3, 3, -32]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(18, 5)) | 16 |
| 2-3 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 15 |
| 4-5 | Di chuyển hướng 2 (`2`) | (18, 4) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 14 |
| 6-7 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 3)) | 13 |
| 8-9 | Di chuyển hướng 4 (`4`) | (20, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 12 |
| 10-11 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 11 |
| 12-13 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 10 |
| 14-15 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 9 |
| 16 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 7 |
| 17 | Di chuyển hướng 3 (`3`) | (19, 8) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 5 |
| 18 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 3 |
| 19-20 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(21, 11)) | 2 |
| 21-52 | Chờ 32 bước (`-32`) | (21, 11) | (21, 11) | Dự kiến đứng yên tại (21, 11); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(21, 11)) | 2 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 0) (ô=14)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 5)
- Mảng hành động đã gửi server: `[4, 5, 4, 4, 4, 5, 5, 5, 0, 5, 5, 5, 2, 2, 2, 2, 3, 2, 2, 3, 3, 3, 2, 1, 2, 2, 2, 1, -1, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (14, 0) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 38 |
| 2-3 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 37 |
| 4 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 35 |
| 5-7 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 33 |
| 8 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 31 |
| 9 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 29 |
| 10-11 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 28 |
| 12-13 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 4)) | 27 |
| 14-15 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 26 |
| 16 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 24 |
| 17-18 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 23 |
| 19-20 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 22 |
| 21-22 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 21 |
| 23-24 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 20 |
| 25-26 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 19 |
| 27 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 17 |
| 28 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 15 |
| 29-30 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 14 |
| 31-32 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 13 |
| 33 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 11 |
| 34 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 9 |
| 35-37 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(13, 7)) | 7 |
| 38-39 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 6 |
| 40-41 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 5 |
| 42-43 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 6)) | 4 |
| 44-45 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 3 |
| 46-47 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 2 |
| 48-49 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(18, 5)) | 56 |
| 50 | Chờ 1 bước (`-1`) | (18, 5) | (18, 5) | Dự kiến đứng yên tại (18, 5); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(18, 5)) | 56 |
| 51-52 | Di chuyển hướng 5 (`5`) | (18, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 55 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (4, 21) (ô=487)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 6)
- Mảng hành động đã gửi server: `[0, 1, 1, 1, 1, 0, 1, 1, 0, 5, 5, 5, 5, 5, 0, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (4, 21) | (3, 20) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 20)) | 54 |
| 2-3 | Di chuyển hướng 1 (`1`) | (3, 20) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 53 |
| 4-5 | Di chuyển hướng 1 (`1`) | (4, 19) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 52 |
| 6-7 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 51 |
| 8-9 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 16)) | 50 |
| 10-11 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 49 |
| 12-13 | Di chuyển hướng 1 (`1`) | (5, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 48 |
| 14-15 | Di chuyển hướng 1 (`1`) | (5, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 56 |
| 16-19 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 56 |
| 20-22 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 54 |
| 23-24 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 53 |
| 25 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 51 |
| 26-28 | Di chuyển hướng 5 (`5`) | (2, 12) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 49 |
| 29-30 | Di chuyển hướng 5 (`5`) | (1, 12) | (0, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 12)) | 48 |
| 31-32 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 47 |
| 33-34 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(0, 10)) | 46 |
| 35-36 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 45 |
| 37-38 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 44 |
| 39-40 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 43 |
| 41-42 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 42 |
| 43-44 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 9)) | 41 |
| 45-46 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 40 |
| 47-49 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 38 |
| 50 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 6)) | 36 |
| 51-52 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 35 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (7, 25) (ô=582)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 5)
- Mảng hành động đã gửi server: `[1, 2, 2, 5, 5, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 5, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 25) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 42 |
| 2 | Di chuyển hướng 2 (`2`) | (7, 24) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 40 |
| 3-4 | Di chuyển hướng 2 (`2`) | (8, 24) | (9, 24) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 24)) | 39 |
| 5-6 | Di chuyển hướng 5 (`5`) | (9, 24) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 38 |
| 7-8 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 37 |
| 9 | Di chuyển hướng 0 (`0`) | (7, 24) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 35 |
| 10-11 | Di chuyển hướng 0 (`0`) | (7, 23) | (6, 22) | Dự kiến đến điểm hẹn tọa độ (6, 22) | 34 |
| 12 | Di chuyển hướng 0 (`0`) | (6, 22) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 32 |
| 13-14 | Di chuyển hướng 0 (`0`) | (6, 21) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 31 |
| 15 | Di chuyển hướng 1 (`1`) | (5, 20) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 29 |
| 16-17 | Di chuyển hướng 1 (`1`) | (6, 19) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 28 |
| 18-19 | Di chuyển hướng 1 (`1`) | (6, 18) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 27 |
| 20-21 | Di chuyển hướng 1 (`1`) | (7, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 26 |
| 22-23 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 25 |
| 24-25 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 24 |
| 26-27 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 23 |
| 28-31 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 21 |
| 32-35 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 19 |
| 36-37 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 18 |
| 38-41 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 16 |
| 42-43 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 15 |
| 44-45 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 14 |
| 46-47 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 13 |
| 48 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 6)) | 11 |
| 49-50 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 10 |
| 51 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 56 |
| 52 | Chờ 1 bước (`-1`) | (8, 5) | (8, 5) | Dự kiến đứng yên tại (8, 5); hướng tới tọa độ (8, 5) | 56 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (6, 14) (ô=328)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 1)
- Mảng hành động đã gửi server: `[0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 4, 4, 3, 3, 0, 0, 5, 0, 0, 0, 5, 5, 0, 0, 5, 0, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 51 |
| 2-5 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 49 |
| 6-8 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 47 |
| 9-10 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 46 |
| 11-12 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 45 |
| 13-14 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 44 |
| 15-16 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 43 |
| 17-18 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 42 |
| 19 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 40 |
| 20-21 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 4)) | 39 |
| 22-23 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 38 |
| 24-25 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 37 |
| 26 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 35 |
| 27-28 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 34 |
| 29-30 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 33 |
| 31-32 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 32 |
| 33 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 6)) | 30 |
| 34-35 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 29 |
| 36-37 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 28 |
| 38-39 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 27 |
| 40-41 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 26 |
| 42-43 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 25 |
| 44 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 23 |
| 45-46 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 22 |
| 47-48 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 21 |
| 49-50 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(0, 0)) | 20 |
| 51-52 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 19 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (10, 15) (ô=355)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(18, 5))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(18, 5))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 2, 2, 2, 2, 2, 2, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 56 |
| 2 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 56 |
| 3 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 56 |
| 4-6 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 56 |
| 7-8 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 56 |
| 9-12 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 56 |
| 13-16 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 56 |
| 17-18 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 56 |
| 19-22 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 56 |
| 23-24 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 56 |
| 25-26 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 56 |
| 27-28 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 56 |
| 29-30 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 56 |
| 31-32 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 56 |
| 33-34 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 56 |
| 35 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 56 |
| 36 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 56 |
| 37 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 56 |
| 38-39 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 56 |
| 40-41 | Di chuyển hướng 2 (`2`) | (15, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 56 |
| 42-43 | Di chuyển hướng 2 (`2`) | (16, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 56 |
| 44-45 | Di chuyển hướng 2 (`2`) | (17, 5) | (18, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(18, 5)) | 56 |
| 46-52 | Chờ 7 bước (`-7`) | (18, 5) | (18, 5) | Dự kiến đứng yên tại (18, 5); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(18, 5)) | 56 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (3, 20) (ô=463)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 5)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 2, 3, 3, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 20) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 56 |
| 2-3 | Di chuyển hướng 1 (`1`) | (4, 19) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 56 |
| 4-5 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 56 |
| 6-7 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 16)) | 56 |
| 8-9 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 56 |
| 10-11 | Di chuyển hướng 1 (`1`) | (5, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 56 |
| 12-13 | Di chuyển hướng 1 (`1`) | (5, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 56 |
| 14-17 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 56 |
| 18-20 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 56 |
| 21-22 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 56 |
| 23-24 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 56 |
| 25-26 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 56 |
| 27-28 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 56 |
| 29 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 56 |
| 30 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 56 |
| 31-32 | Di chuyển hướng 1 (`1`) | (5, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 56 |
| 33-34 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 56 |
| 35-36 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 56 |
| 37-38 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 56 |
| 39-41 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 56 |
| 42-52 | Chờ 11 bước (`-11`) | (8, 5) | (8, 5) | Dự kiến đứng yên tại (8, 5); hướng tới tọa độ (8, 5) | 56 |

