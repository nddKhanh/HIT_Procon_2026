# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 55
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 6) (ô=158)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(12, 9))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(12, 9))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 3, 3, 3, 4, 3, 2, 2, 2, 3, 2, 2, 2, 0, 1, 1, 1, 1, 1, 1, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 38 |
| 3-5 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 36 |
| 6-8 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 34 |
| 9-10 | Di chuyển hướng 4 (`4`) | (1, 9) | (0, 10) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 10)) | 33 |
| 11-12 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 32 |
| 13-15 | Di chuyển hướng 3 (`3`) | (0, 11) | (0, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 12)) | 30 |
| 16-17 | Di chuyển hướng 3 (`3`) | (0, 12) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 29 |
| 18-20 | Di chuyển hướng 3 (`3`) | (1, 13) | (1, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(1, 14)) | 27 |
| 21-22 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 26 |
| 23 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 16)) | 24 |
| 24-25 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 23 |
| 26-28 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 21 |
| 29-31 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 19 |
| 32 | Di chuyển hướng 3 (`3`) | (4, 16) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 17 |
| 33-35 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 15 |
| 36-37 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 14 |
| 38-39 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 17)) | 13 |
| 40-41 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 12 |
| 42-43 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 11 |
| 44-45 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 10 |
| 46 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 8 |
| 47-48 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 7 |
| 49 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 5 |
| 50-51 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 4 |
| 52 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 2 |
| 53-54 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 51 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (19, 13) (ô=357)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #25 (thương hiệu=25, tọa độ=(20, 4))
- Địa điểm đích kế hoạch: Spot #25 (thương hiệu=25, tọa độ=(20, 4))
- Mảng hành động đã gửi server: `[-21, 5, 4, 5, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-20 | Chờ 21 bước (`-21`) | (19, 13) | (19, 13) | Dự kiến đứng yên tại (19, 13); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 51 |
| 21-22 | Di chuyển hướng 5 (`5`) | (19, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 50 |
| 23-25 | Di chuyển hướng 4 (`4`) | (18, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 48 |
| 26-28 | Di chuyển hướng 5 (`5`) | (17, 14) | (16, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 14)) | 46 |
| 29-30 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 45 |
| 31 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 43 |
| 32-34 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 41 |
| 35-36 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 40 |
| 37-38 | Di chuyển hướng 1 (`1`) | (15, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 39 |
| 39-41 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 37 |
| 42-44 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 35 |
| 45-46 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 34 |
| 47 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 6)) | 32 |
| 48-49 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 31 |
| 50 | Di chuyển hướng 1 (`1`) | (19, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 29 |
| 51-53 | Di chuyển hướng 1 (`1`) | (20, 5) | (20, 4) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(20, 4)) | 27 |
| 54 | Chờ 1 bước (`-1`) | (20, 4) | (20, 4) | Dự kiến đứng yên tại (20, 4); mục tiêu Spot #25 (thương hiệu=25, tọa độ=(20, 4)) | 27 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 17) (ô=451)
- Nhiên liệu đầu ngày: 14
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 5)
- Mảng hành động đã gửi server: `[1, 0, 0, 1, 1, 2, 2, 1, 1, 0, -1, 5, 4, 5, 0, 1, 2, 1, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 13 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 12 |
| 4-5 | Di chuyển hướng 0 (`0`) | (9, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 11 |
| 6 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 9 |
| 7-8 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 8 |
| 9 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 6 |
| 10-11 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 5 |
| 12-13 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 4 |
| 14-15 | Di chuyển hướng 1 (`1`) | (12, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 3 |
| 16-18 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 51 |
| 19 | Chờ 1 bước (`-1`) | (12, 9) | (12, 9) | Dự kiến đứng yên tại (12, 9); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 51 |
| 20-21 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 50 |
| 22-23 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 49 |
| 24 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 47 |
| 25-26 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 46 |
| 27-28 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 45 |
| 29-30 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 43 |
| 31 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 41 |
| 32-34 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 6)) | 39 |
| 35-36 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 38 |
| 37-39 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 36 |
| 40-41 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 35 |
| 42-43 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 34 |
| 44-46 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 32 |
| 47-49 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 30 |
| 50-51 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 29 |
| 52 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 6)) | 27 |
| 53-54 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 26 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 0) (ô=2)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 2)
- Mảng hành động đã gửi server: `[3, 2, 2, 3, 4, 3, 3, 3, 2, 3, 3, 3, 1, 2, 1, 0, 5, 0, 1, 0, 1, -3, 2, 1, 1, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 31 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 30 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 29 |
| 6-8 | Di chuyển hướng 3 (`3`) | (5, 1) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 27 |
| 9 | Di chuyển hướng 4 (`4`) | (5, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 25 |
| 10-11 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 24 |
| 12-13 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 23 |
| 14 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 6)) | 21 |
| 15-16 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 20 |
| 17 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 18 |
| 18-19 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 17 |
| 20-22 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 15 |
| 23-24 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 14 |
| 25-26 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 12 |
| 27 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 10 |
| 28-30 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 6)) | 8 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 7 |
| 33 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 5 |
| 34-36 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 4)) | 3 |
| 37-38 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 2 |
| 39-40 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 1 |
| 41-43 | Chờ 3 bước (`-3`) | (9, 2) | (9, 2) | Dự kiến đứng yên tại (9, 2); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 51 |
| 44-45 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 50 |
| 46-47 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 49 |
| 48-50 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 0)) | 47 |
| 51-52 | Di chuyển hướng 3 (`3`) | (11, 0) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 46 |
| 53-54 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 45 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (10, 2) (ô=62)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(0, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(0, 8)
- Mảng hành động đã gửi server: `[1, 1, 3, 3, 4, 4, 3, 3, 3, 4, 4, 5, 4, 5, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 50 |
| 2-4 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 0)) | 48 |
| 5-6 | Di chuyển hướng 3 (`3`) | (11, 0) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 47 |
| 7-8 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 46 |
| 9-10 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 44 |
| 11-12 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 43 |
| 13-14 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 42 |
| 15-16 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 41 |
| 17-18 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 40 |
| 19 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 38 |
| 20-21 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 51 |
| 22-23 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 50 |
| 24-25 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 49 |
| 26 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 47 |
| 27-28 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 46 |
| 29-30 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 45 |
| 31-33 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 43 |
| 34-35 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 42 |
| 36 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 6)) | 40 |
| 37-38 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 39 |
| 39-41 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 6)) | 37 |
| 42-43 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 36 |
| 44-45 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 35 |
| 46-48 | Di chuyển hướng 5 (`5`) | (2, 6) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 33 |
| 49-51 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(1, 7)) | 31 |
| 52-53 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 30 |
| 54 | Chờ 1 bước (`-1`) | (0, 8) | (0, 8) | Dự kiến đứng yên tại (0, 8); hướng tới tọa độ (0, 8) | 30 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (20, 5) (ô=150)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(1, 0))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(1, 0))
- Mảng hành động đã gửi server: `[5, 0, 4, 0, 5, 5, 5, 5, 0, 0, 0, 4, 4, 5, 5, 1, 5, 5, 5, 5, 0, 5, 5, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (20, 5) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 49 |
| 3-5 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 4)) | 47 |
| 6-7 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 46 |
| 8-9 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 45 |
| 10-11 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 44 |
| 12-14 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 42 |
| 15-17 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 40 |
| 18-19 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 39 |
| 20-21 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 38 |
| 22-23 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 37 |
| 24-25 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 35 |
| 26-27 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 34 |
| 28-30 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 32 |
| 31 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 30 |
| 32 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 28 |
| 33-34 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 27 |
| 35-36 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 26 |
| 37-39 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 24 |
| 40-42 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 22 |
| 43-44 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 21 |
| 45 | Di chuyển hướng 0 (`0`) | (5, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 19 |
| 46-48 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 17 |
| 49-50 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 16 |
| 51-52 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 15 |
| 53-54 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 0)) | 14 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (10, 2) (ô=62)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(12, 9))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(12, 9))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 4, 4, -43]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (10, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 51 |
| 2 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 51 |
| 3-4 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 51 |
| 5-6 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 51 |
| 7-8 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 51 |
| 9 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 51 |
| 10-11 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 51 |
| 12-54 | Chờ 43 bước (`-43`) | (12, 9) | (12, 9) | Dự kiến đứng yên tại (12, 9); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (20, 5) (ô=150)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(9, 2))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(9, 2))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 4, 4, 5, 4, 4, 4, 0, 5, 0, 0, 5, 0, 0, 0, 5, 0, 0, 0, 0, 5, 0, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (20, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 51 |
| 3 | Di chuyển hướng 3 (`3`) | (21, 5) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 51 |
| 4-6 | Di chuyển hướng 3 (`3`) | (21, 6) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 51 |
| 7 | Di chuyển hướng 3 (`3`) | (22, 7) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 51 |
| 8-9 | Di chuyển hướng 4 (`4`) | (22, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 51 |
| 10-11 | Di chuyển hướng 4 (`4`) | (22, 9) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 51 |
| 12-14 | Di chuyển hướng 5 (`5`) | (21, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 51 |
| 15-16 | Di chuyển hướng 4 (`4`) | (20, 10) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 51 |
| 17-18 | Di chuyển hướng 4 (`4`) | (20, 11) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 51 |
| 19 | Di chuyển hướng 4 (`4`) | (19, 12) | (19, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 51 |
| 20-21 | Di chuyển hướng 0 (`0`) | (19, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 51 |
| 22 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 51 |
| 23 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 51 |
| 24-26 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 51 |
| 27-28 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 51 |
| 29-30 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 51 |
| 31-32 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 51 |
| 33 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 51 |
| 34 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 51 |
| 35 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 51 |
| 36-37 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 51 |
| 38-39 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 51 |
| 40-41 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 51 |
| 42 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 51 |
| 43 | Di chuyển hướng 0 (`0`) | (10, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 51 |
| 44-54 | Chờ 11 bước (`-11`) | (9, 2) | (9, 2) | Dự kiến đứng yên tại (9, 2); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 51 |

