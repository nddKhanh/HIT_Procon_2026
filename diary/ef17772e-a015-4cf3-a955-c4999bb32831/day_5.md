# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 59
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 16) (ô=381)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 7)
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 0, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 3, 3, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 56 |
| 2-3 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 56 |
| 4 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 56 |
| 5-6 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 15)) | 56 |
| 7-8 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 55 |
| 9-10 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 54 |
| 11-12 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 53 |
| 13-14 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 56 |
| 15-16 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 56 |
| 17-20 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 54 |
| 21-23 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 52 |
| 24-25 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 51 |
| 26 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 49 |
| 27-29 | Di chuyển hướng 5 (`5`) | (2, 12) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 47 |
| 30-31 | Di chuyển hướng 5 (`5`) | (1, 12) | (0, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 12)) | 46 |
| 32-33 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 45 |
| 34-35 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(0, 10)) | 44 |
| 36-37 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 43 |
| 38-39 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 42 |
| 40-41 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 41 |
| 42-43 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 40 |
| 44-45 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 9)) | 39 |
| 46-47 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 38 |
| 48-50 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 36 |
| 51 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 6)) | 34 |
| 52-53 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 33 |
| 54 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 31 |
| 55-56 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 56 |
| 57-58 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 55 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 1) (ô=24)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 15)
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 3, 4, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 1, 1, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 56 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 56 |
| 4-5 | Di chuyển hướng 2 (`2`) | (2, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 56 |
| 6 | Di chuyển hướng 2 (`2`) | (3, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 56 |
| 7-8 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 56 |
| 9-10 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 56 |
| 11-12 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 56 |
| 13-14 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 55 |
| 15-17 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 53 |
| 18-19 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 52 |
| 20-21 | Di chuyển hướng 4 (`4`) | (5, 6) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 51 |
| 22 | Di chuyển hướng 4 (`4`) | (5, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 49 |
| 23-24 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 9)) | 48 |
| 25-26 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 47 |
| 27-28 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 46 |
| 29-30 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 45 |
| 31-33 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 43 |
| 34-37 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 41 |
| 38-39 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 40 |
| 40 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 16)) | 38 |
| 41-42 | Di chuyển hướng 4 (`4`) | (5, 16) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 37 |
| 43-44 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 36 |
| 45-46 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 35 |
| 47-48 | Di chuyển hướng 4 (`4`) | (4, 19) | (3, 20) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 20)) | 34 |
| 49-50 | Di chuyển hướng 1 (`1`) | (3, 20) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 33 |
| 51-52 | Di chuyển hướng 1 (`1`) | (4, 19) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 32 |
| 53-54 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 31 |
| 55-56 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 16)) | 30 |
| 57-58 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 29 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (21, 11) (ô=274)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 8)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 0, 5, 4, 5, 4, 5, 5, -5, 0, 0, 0, 5, 5, 5, 0, 5, 5, 5, 3, 3, 3, 2, 3, 3, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (21, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 16 |
| 2-3 | Di chuyển hướng 0 (`0`) | (20, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 15 |
| 4 | Di chuyển hướng 0 (`0`) | (20, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 13 |
| 5 | Di chuyển hướng 0 (`0`) | (19, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 11 |
| 6-7 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 10 |
| 8-9 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(18, 5)) | 9 |
| 10-11 | Di chuyển hướng 5 (`5`) | (18, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 8 |
| 12-13 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 7 |
| 14-15 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 6)) | 6 |
| 16-17 | Di chuyển hướng 4 (`4`) | (15, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 5 |
| 18-19 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 4 |
| 20-21 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(13, 7)) | 3 |
| 22-26 | Chờ 5 bước (`-5`) | (13, 7) | (13, 7) | Dự kiến đứng yên tại (13, 7); mục tiêu Spot #25 (thương hiệu=25, tọa độ=(13, 7)) | 56 |
| 27-28 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 56 |
| 29-31 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 54 |
| 32 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 52 |
| 33 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 56 |
| 34-35 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 56 |
| 36-37 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 4)) | 55 |
| 38-39 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 54 |
| 40 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 52 |
| 41-42 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 51 |
| 43-44 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 50 |
| 45-46 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 49 |
| 47-48 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 48 |
| 49-50 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 6)) | 47 |
| 51-52 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 46 |
| 53 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 44 |
| 54-55 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 56 |
| 56-57 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 56 |
| 58 | Chờ 1 bước (`-1`) | (7, 8) | (7, 8) | Dự kiến đứng yên tại (7, 8); hướng tới tọa độ (7, 8) | 56 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (12, 16) (ô=380)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 23)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 23)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 2, 3, 2, 3, 5, 5, 5, 5, 4, 5, 0, 0, 0, 5, 0, 5, 4, 3, 4, 3, 4, 4, 4, 3, 5, 5, 4, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(13, 16)) | 54 |
| 2-3 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 53 |
| 4 | Di chuyển hướng 2 (`2`) | (14, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 51 |
| 5-6 | Di chuyển hướng 2 (`2`) | (15, 16) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 50 |
| 7-8 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 17)) | 49 |
| 9-10 | Di chuyển hướng 2 (`2`) | (17, 17) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 48 |
| 11 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 46 |
| 12-13 | Di chuyển hướng 2 (`2`) | (18, 18) | (19, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 18)) | 45 |
| 14-15 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(20, 19)) | 44 |
| 16-17 | Di chuyển hướng 5 (`5`) | (20, 19) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 43 |
| 18-19 | Di chuyển hướng 5 (`5`) | (19, 19) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 42 |
| 20 | Di chuyển hướng 5 (`5`) | (18, 19) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 40 |
| 21-22 | Di chuyển hướng 5 (`5`) | (17, 19) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 39 |
| 23-24 | Di chuyển hướng 4 (`4`) | (16, 19) | (15, 20) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(15, 20)) | 38 |
| 25-26 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 37 |
| 27-28 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 36 |
| 29-30 | Di chuyển hướng 0 (`0`) | (14, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 35 |
| 31-32 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 34 |
| 33-34 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 33 |
| 35-36 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 32 |
| 37 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 30 |
| 38-39 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 29 |
| 40-41 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 28 |
| 42 | Di chuyển hướng 4 (`4`) | (10, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 26 |
| 43 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 24 |
| 44 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 22 |
| 45-46 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 21 |
| 47-48 | Di chuyển hướng 4 (`4`) | (9, 22) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 20 |
| 49 | Di chuyển hướng 3 (`3`) | (9, 23) | (9, 24) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 24)) | 18 |
| 50-51 | Di chuyển hướng 5 (`5`) | (9, 24) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 17 |
| 52-53 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 16 |
| 54 | Di chuyển hướng 4 (`4`) | (7, 24) | (7, 25) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 25)) | 14 |
| 55-56 | Di chuyển hướng 0 (`0`) | (7, 25) | (6, 24) | Dự kiến đến điểm hẹn tọa độ (6, 24) | 13 |
| 57-58 | Di chuyển hướng 0 (`0`) | (6, 24) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 12 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (5, 3) (ô=74)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 10)
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 2, 2, 2, 1, 1, 1, 1, 2, 3, 3, 3, 4, 3, 4, 2, 2, 1, 1, 2, 1, 4, 3, 4, 3, 4, 3, 3, 3, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 55 |
| 2-3 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 54 |
| 4-5 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 53 |
| 6 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 4)) | 51 |
| 7-8 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 50 |
| 9-10 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 49 |
| 11-12 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 48 |
| 13 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 46 |
| 14 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 44 |
| 15-17 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 42 |
| 18 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 40 |
| 19-20 | Di chuyển hướng 2 (`2`) | (13, 0) | (14, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 0)) | 39 |
| 21-22 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 38 |
| 23-24 | Di chuyển hướng 3 (`3`) | (15, 1) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 37 |
| 25-26 | Di chuyển hướng 3 (`3`) | (15, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 36 |
| 27-28 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 35 |
| 29 | Di chuyển hướng 3 (`3`) | (15, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 33 |
| 30-31 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 6)) | 32 |
| 32-33 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 31 |
| 34-35 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 30 |
| 36-37 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(18, 5)) | 29 |
| 38-39 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 28 |
| 40-41 | Di chuyển hướng 2 (`2`) | (18, 4) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 27 |
| 42-43 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 3)) | 26 |
| 44-45 | Di chuyển hướng 4 (`4`) | (20, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 25 |
| 46-47 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 24 |
| 48-49 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 23 |
| 50-51 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 22 |
| 52 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 20 |
| 53 | Di chuyển hướng 3 (`3`) | (19, 8) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 18 |
| 54 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 16 |
| 55-56 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(21, 11)) | 15 |
| 57-58 | Di chuyển hướng 0 (`0`) | (21, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 14 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (10, 18) (ô=424)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 3)
- Mảng hành động đã gửi server: `[0, 0, 5, 5, 0, 0, 0, 1, 1, 1, 1, 1, -4, 0, 0, 5, 0, 0, 0, 5, 5, 0, 0, 5, 0, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 14 |
| 1-2 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 13 |
| 3-4 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 12 |
| 5-6 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 11 |
| 7-8 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 10 |
| 9-10 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 9 |
| 11-12 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 8 |
| 13-16 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 54 |
| 17-20 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 54 |
| 21-22 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 53 |
| 23 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 51 |
| 24-25 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 50 |
| 26-29 | Chờ 4 bước (`-4`) | (8, 8) | (8, 8) | Dự kiến đứng yên tại (8, 8); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 56 |
| 30-31 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 55 |
| 32-33 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 54 |
| 34 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 6)) | 52 |
| 35-36 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 51 |
| 37-38 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 50 |
| 39-40 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 49 |
| 41-42 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 48 |
| 43-44 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 47 |
| 45 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 45 |
| 46-47 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 44 |
| 48-49 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 43 |
| 50-51 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(0, 0)) | 42 |
| 52-53 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 41 |
| 54-55 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 40 |
| 56-57 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 56 |
| 58 | Chờ 1 bước (`-1`) | (2, 3) | (2, 3) | Dự kiến đứng yên tại (2, 3); hướng tới tọa độ (2, 3) | 56 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (13, 16) (ô=381)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 8)
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 0, 5, 5, 5, 0, 1, 1, 1, 1, 1, -27, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 56 |
| 2-3 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 56 |
| 4 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 56 |
| 5-6 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 15)) | 56 |
| 7-8 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 56 |
| 9 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 56 |
| 10 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 56 |
| 11-13 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 56 |
| 14-15 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 56 |
| 16-19 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 56 |
| 20-23 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 56 |
| 24-25 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 56 |
| 26 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 56 |
| 27-28 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 56 |
| 29-55 | Chờ 27 bước (`-27`) | (8, 8) | (8, 8) | Dự kiến đứng yên tại (8, 8); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 56 |
| 56-57 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 56 |
| 58 | Chờ 1 bước (`-1`) | (7, 8) | (7, 8) | Dự kiến đứng yên tại (7, 8); hướng tới tọa độ (7, 8) | 56 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (1, 1) (ô=24)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 3)
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 3, 3, 3, 0, 0, 0, 5, 5, 0, 5, 5, 5, 5, 5, 5, 5, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 56 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 56 |
| 4-5 | Di chuyển hướng 2 (`2`) | (2, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 56 |
| 6 | Di chuyển hướng 2 (`2`) | (3, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 56 |
| 7-8 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 56 |
| 9-10 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 56 |
| 11-12 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 56 |
| 13-14 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 56 |
| 15 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 56 |
| 16 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 56 |
| 17-18 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 56 |
| 19-20 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 56 |
| 21 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 56 |
| 22 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 56 |
| 23-25 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(13, 7)) | 56 |
| 26-27 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 56 |
| 28-30 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 56 |
| 31 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 56 |
| 32 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 56 |
| 33-34 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 56 |
| 35-36 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 56 |
| 37 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 56 |
| 38 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 56 |
| 39-40 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 56 |
| 41-42 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 56 |
| 43-44 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 56 |
| 45-46 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 56 |
| 47 | Di chuyển hướng 5 (`5`) | (3, 3) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 56 |
| 48-58 | Chờ 11 bước (`-11`) | (2, 3) | (2, 3) | Dự kiến đứng yên tại (2, 3); hướng tới tọa độ (2, 3) | 56 |

