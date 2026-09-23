# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 57
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 4) (ô=100)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(13, 16))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(13, 16))
- Mảng hành động đã gửi server: `[0, 5, 4, 4, 3, 3, 3, 2, 5, 5, 4, 5, 3, 3, 4, 3, 3, 4, 4, 1, 2, 2, 2, 2, 3, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 35 |
| 2 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 33 |
| 3-4 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 32 |
| 5-7 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 30 |
| 8-9 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 6)) | 29 |
| 10-11 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 28 |
| 12-13 | Di chuyển hướng 3 (`3`) | (7, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 27 |
| 14-15 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 26 |
| 16-17 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 25 |
| 18-19 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 24 |
| 20-21 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 23 |
| 22-23 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 9)) | 22 |
| 24-25 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 21 |
| 26-27 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 20 |
| 28-29 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 19 |
| 30-32 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 17 |
| 33-36 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 15 |
| 37-38 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 14 |
| 39 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 16)) | 12 |
| 40-41 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 11 |
| 42 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 9 |
| 43-44 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 8 |
| 45-46 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 7 |
| 47-48 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 15)) | 6 |
| 49-50 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 5 |
| 51-52 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 4 |
| 53 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 2 |
| 54-55 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(13, 16)) | 56 |
| 56 | Chờ 1 bước (`-1`) | (13, 16) | (13, 16) | Dự kiến đứng yên tại (13, 16); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(13, 16)) | 56 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 6) (ô=150)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 1)
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 2, 2, 5, 4, 5, 5, 4, 5, 0, 0, 0, 5, 5, 5, 0, 5, 5, 5, -1, 5, 5, 0, 0, 5, 0, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 27 |
| 3 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 25 |
| 4-5 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 24 |
| 6-7 | Di chuyển hướng 2 (`2`) | (15, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 23 |
| 8-9 | Di chuyển hướng 2 (`2`) | (16, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 22 |
| 10-11 | Di chuyển hướng 2 (`2`) | (17, 5) | (18, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(18, 5)) | 21 |
| 12-13 | Di chuyển hướng 5 (`5`) | (18, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 20 |
| 14-15 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 19 |
| 16-17 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 6)) | 18 |
| 18-19 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 17 |
| 20-21 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 16 |
| 22-23 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(13, 7)) | 15 |
| 24-25 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 14 |
| 26-28 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 12 |
| 29 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 10 |
| 30 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 8 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 7 |
| 33-34 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 4)) | 6 |
| 35-36 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 5 |
| 37 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 3 |
| 38-39 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 2 |
| 40-41 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 56 |
| 42 | Chờ 1 bước (`-1`) | (5, 3) | (5, 3) | Dự kiến đứng yên tại (5, 3); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 56 |
| 43-44 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 55 |
| 45-46 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 54 |
| 47 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 52 |
| 48-49 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 51 |
| 50-51 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 50 |
| 52-53 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(0, 0)) | 49 |
| 54-55 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 56 |
| 56 | Chờ 1 bước (`-1`) | (1, 1) | (1, 1) | Dự kiến đứng yên tại (1, 1); hướng tới tọa độ (1, 1) | 56 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (5, 12) (ô=281)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(21, 11))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(21, 11))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 3, 2, 3, 2, 2, 3, 4, 3, 4, 3, 4, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 54 |
| 3-4 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 53 |
| 5-6 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 52 |
| 7-9 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 50 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 49 |
| 12-13 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 48 |
| 14-15 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 47 |
| 16-17 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 46 |
| 18-19 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 45 |
| 20-21 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 44 |
| 22 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 42 |
| 23 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 40 |
| 24-26 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 38 |
| 27 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 36 |
| 28-29 | Di chuyển hướng 2 (`2`) | (13, 0) | (14, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 0)) | 35 |
| 30-31 | Di chuyển hướng 2 (`2`) | (14, 0) | (15, 0) | Dự kiến đến điểm hẹn tọa độ (15, 0) | 34 |
| 32-33 | Di chuyển hướng 3 (`3`) | (15, 0) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 33 |
| 34-35 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 32 |
| 36-37 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 31 |
| 38-39 | Di chuyển hướng 2 (`2`) | (17, 2) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 30 |
| 40-41 | Di chuyển hướng 2 (`2`) | (18, 2) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 29 |
| 42-43 | Di chuyển hướng 3 (`3`) | (19, 2) | (20, 3) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 3)) | 28 |
| 44-45 | Di chuyển hướng 4 (`4`) | (20, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 27 |
| 46-47 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 26 |
| 48-49 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 25 |
| 50-51 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 24 |
| 52 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 22 |
| 53 | Di chuyển hướng 3 (`3`) | (19, 8) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 20 |
| 54 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 18 |
| 55-56 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(21, 11)) | 17 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (20, 19) (ô=457)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 16)
- Mảng hành động đã gửi server: `[0, -32, 0, 5, 5, 4, 4, 4, 0, 0, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 19) | (19, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 18)) | 3 |
| 2-33 | Chờ 32 bước (`-32`) | (19, 18) | (19, 18) | Dự kiến đứng yên tại (19, 18); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 18)) | 56 |
| 34-35 | Di chuyển hướng 0 (`0`) | (19, 18) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 55 |
| 36-37 | Di chuyển hướng 5 (`5`) | (19, 17) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 54 |
| 38 | Di chuyển hướng 5 (`5`) | (18, 17) | (17, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 17)) | 52 |
| 39-40 | Di chuyển hướng 4 (`4`) | (17, 17) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 51 |
| 41-42 | Di chuyển hướng 4 (`4`) | (16, 18) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 50 |
| 43-44 | Di chuyển hướng 4 (`4`) | (16, 19) | (15, 20) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(15, 20)) | 49 |
| 45-46 | Di chuyển hướng 0 (`0`) | (15, 20) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 48 |
| 47-49 | Di chuyển hướng 0 (`0`) | (15, 19) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 46 |
| 50-51 | Di chuyển hướng 0 (`0`) | (14, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 45 |
| 52-53 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(13, 16)) | 56 |
| 54-55 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 55 |
| 56 | Chờ 1 bước (`-1`) | (12, 16) | (12, 16) | Dự kiến đứng yên tại (12, 16); hướng tới tọa độ (12, 16) | 55 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (10, 21) (ô=493)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(5, 3))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(5, 3))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 5, 0, 0, 0, 0, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 21) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 22 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 21 |
| 4-5 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 20 |
| 6-7 | Di chuyển hướng 0 (`0`) | (8, 18) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 19 |
| 8-10 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 17 |
| 11-12 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 16 |
| 13-14 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 15 |
| 15-16 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 14 |
| 17-20 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 12 |
| 21-24 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 10 |
| 25-26 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 9 |
| 27-30 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 7 |
| 31-32 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 6 |
| 33-34 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 5 |
| 35-36 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 4 |
| 37-38 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 6)) | 3 |
| 39-40 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 2 |
| 41-42 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 1 |
| 43-44 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 56 |
| 45-56 | Chờ 12 bước (`-12`) | (5, 3) | (5, 3) | Dự kiến đứng yên tại (5, 3); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 56 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (0, 10) (ô=230)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 18)
- Mảng hành động đã gửi server: `[4, 3, 2, 2, 2, 2, 2, 3, 3, 4, 4, 4, 4, 4, 4, 3, 3, 2, 3, 3, 3, 1, 2, 2, 0, 1, 1, 1, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 55 |
| 2-3 | Di chuyển hướng 3 (`3`) | (0, 11) | (0, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 12)) | 54 |
| 4-5 | Di chuyển hướng 2 (`2`) | (0, 12) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 53 |
| 6-7 | Di chuyển hướng 2 (`2`) | (1, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 52 |
| 8-10 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 50 |
| 11 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 48 |
| 12-13 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 47 |
| 14-16 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 45 |
| 17-20 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 43 |
| 21-22 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 42 |
| 23 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 16)) | 40 |
| 24-25 | Di chuyển hướng 4 (`4`) | (5, 16) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 39 |
| 26-27 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 38 |
| 28-29 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 37 |
| 30-31 | Di chuyển hướng 4 (`4`) | (4, 19) | (3, 20) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 20)) | 36 |
| 32-33 | Di chuyển hướng 3 (`3`) | (3, 20) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 35 |
| 34-35 | Di chuyển hướng 3 (`3`) | (4, 21) | (4, 22) | Dự kiến đến điểm hẹn tọa độ (4, 22) | 34 |
| 36-37 | Di chuyển hướng 2 (`2`) | (4, 22) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 33 |
| 38-39 | Di chuyển hướng 3 (`3`) | (5, 22) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 32 |
| 40 | Di chuyển hướng 3 (`3`) | (6, 23) | (6, 24) | Dự kiến đến điểm hẹn tọa độ (6, 24) | 30 |
| 41-42 | Di chuyển hướng 3 (`3`) | (6, 24) | (7, 25) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 25)) | 29 |
| 43-44 | Di chuyển hướng 1 (`1`) | (7, 25) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 28 |
| 45 | Di chuyển hướng 2 (`2`) | (7, 24) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 26 |
| 46-47 | Di chuyển hướng 2 (`2`) | (8, 24) | (9, 24) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 24)) | 25 |
| 48-49 | Di chuyển hướng 0 (`0`) | (9, 24) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 24 |
| 50 | Di chuyển hướng 1 (`1`) | (9, 23) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 22 |
| 51-52 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 21 |
| 53-54 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 20 |
| 55 | Di chuyển hướng 0 (`0`) | (10, 20) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 18 |
| 56 | Di chuyển hướng 1 (`1`) | (10, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 16 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (5, 12) (ô=281)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(13, 16))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(13, 16))
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 2, 3, 3, 2, 2, 2, 2, 2, 2, 3, 3, 2, 2, 5, 5, 5, 0, 0, 5, 5, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 56 |
| 3-6 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 56 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 56 |
| 9-11 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 56 |
| 12 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 56 |
| 13 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 15)) | 56 |
| 14-15 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 56 |
| 16-17 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 56 |
| 18 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 56 |
| 19-20 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(13, 16)) | 56 |
| 21-22 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 56 |
| 23 | Di chuyển hướng 2 (`2`) | (14, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 56 |
| 24-25 | Di chuyển hướng 2 (`2`) | (15, 16) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 56 |
| 26-27 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 17)) | 56 |
| 28-29 | Di chuyển hướng 3 (`3`) | (17, 17) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 56 |
| 30 | Di chuyển hướng 2 (`2`) | (17, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 56 |
| 31-32 | Di chuyển hướng 2 (`2`) | (18, 18) | (19, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 18)) | 56 |
| 33-34 | Di chuyển hướng 5 (`5`) | (19, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 56 |
| 35-36 | Di chuyển hướng 5 (`5`) | (18, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 56 |
| 37 | Di chuyển hướng 5 (`5`) | (17, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 56 |
| 38-39 | Di chuyển hướng 0 (`0`) | (16, 18) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 56 |
| 40-41 | Di chuyển hướng 0 (`0`) | (16, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 56 |
| 42-43 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 56 |
| 44 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(13, 16)) | 56 |
| 45-56 | Chờ 12 bước (`-12`) | (13, 16) | (13, 16) | Dự kiến đứng yên tại (13, 16); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(13, 16)) | 56 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (0, 10) (ô=230)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 1)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 2, 1, -31, 5, 5, 0, 0, 5, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 56 |
| 2 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 56 |
| 3-5 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 56 |
| 6 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 56 |
| 7-8 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 56 |
| 9-10 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 56 |
| 11 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 56 |
| 12-13 | Di chuyển hướng 1 (`1`) | (4, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 56 |
| 14-44 | Chờ 31 bước (`-31`) | (5, 3) | (5, 3) | Dự kiến đứng yên tại (5, 3); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 56 |
| 45-46 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 56 |
| 47-48 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 56 |
| 49 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 56 |
| 50-51 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 56 |
| 52-53 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 56 |
| 54-56 | Chờ 3 bước (`-3`) | (1, 1) | (1, 1) | Dự kiến đứng yên tại (1, 1); hướng tới tọa độ (1, 1) | 56 |

