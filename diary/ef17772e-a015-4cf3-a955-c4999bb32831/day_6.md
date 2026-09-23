# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 61
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 7) (ô=169)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 5)
- Mảng hành động đã gửi server: `[1, 1, 2, 1, 2, 1, 1, 1, 1, 2, 4, 5, 4, 4, 4, 5, 5, 5, 0, 5, 5, 5, 0, 5, 5, 0, 5, 0, 3, 4, 3, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 54 |
| 2-3 | Di chuyển hướng 1 (`1`) | (8, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 53 |
| 4-5 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 52 |
| 6-7 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 51 |
| 8-9 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 50 |
| 10-11 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 48 |
| 12 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 46 |
| 13-15 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 44 |
| 16 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 42 |
| 17-18 | Di chuyển hướng 2 (`2`) | (13, 0) | (14, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 0)) | 41 |
| 19-20 | Di chuyển hướng 4 (`4`) | (14, 0) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 40 |
| 21-22 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 39 |
| 23 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 37 |
| 24-26 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 35 |
| 27 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 33 |
| 28-29 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 31 |
| 30-31 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 30 |
| 32-33 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 4)) | 29 |
| 34-35 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 28 |
| 36-37 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 26 |
| 38-39 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 25 |
| 40-41 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 24 |
| 42-43 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 23 |
| 44-45 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 22 |
| 46-47 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 21 |
| 48-49 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 20 |
| 50-51 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 19 |
| 52-53 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(0, 0)) | 18 |
| 54-55 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 17 |
| 56-57 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 16 |
| 58 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 14 |
| 59 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 12 |
| 60 | Di chuyển hướng 4 (`4`) | (1, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 10 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (6, 15) (ô=351)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 3)
- Mảng hành động đã gửi server: `[1, 0, 0, 5, 5, 5, 5, 5, 0, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 3, 3, 0, 0, 1, 1, 0, 5, 5, 5, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 27 |
| 1-2 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 26 |
| 3-6 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 24 |
| 7-9 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 22 |
| 10-11 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 21 |
| 12 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 19 |
| 13-15 | Di chuyển hướng 5 (`5`) | (2, 12) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 17 |
| 16-17 | Di chuyển hướng 5 (`5`) | (1, 12) | (0, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 12)) | 16 |
| 18-19 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 15 |
| 20-21 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(0, 10)) | 14 |
| 22-23 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 13 |
| 24-25 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 12 |
| 26-27 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 11 |
| 28-29 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 10 |
| 30-31 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 9)) | 9 |
| 32-33 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 8 |
| 34-36 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 6 |
| 37 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 6)) | 4 |
| 38-39 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 3 |
| 40 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 1 |
| 41-42 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 56 |
| 43-44 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 56 |
| 45-46 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 56 |
| 47 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 54 |
| 48-49 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 4)) | 53 |
| 50-51 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 52 |
| 52-53 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 50 |
| 54-55 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 56 |
| 56-57 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 55 |
| 58-59 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 56 |
| 60 | Chờ 1 bước (`-1`) | (6, 3) | (6, 3) | Dự kiến đứng yên tại (6, 3); hướng tới tọa độ (6, 3) | 56 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 8) (ô=191)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Spot #24 (thương hiệu=24, tọa độ=(15, 20))
- Địa điểm đích kế hoạch: Spot #24 (thương hiệu=24, tọa độ=(15, 20))
- Mảng hành động đã gửi server: `[2, 4, 4, 4, 4, 4, 3, 4, 4, 1, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 3, 2, 3, 2, 3, 5, 5, 5, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 55 |
| 2-3 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 54 |
| 4-5 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 53 |
| 6-7 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 51 |
| 8-9 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 56 |
| 10-13 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 56 |
| 14-17 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 54 |
| 18-19 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 53 |
| 20 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 16)) | 51 |
| 21-22 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 50 |
| 23 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 48 |
| 24-25 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 47 |
| 26-27 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 46 |
| 28-29 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 15)) | 45 |
| 30-31 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 56 |
| 32-33 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 55 |
| 34 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 53 |
| 35-36 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(13, 16)) | 52 |
| 37-38 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 51 |
| 39 | Di chuyển hướng 2 (`2`) | (14, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 49 |
| 40-41 | Di chuyển hướng 2 (`2`) | (15, 16) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 48 |
| 42-43 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 17)) | 47 |
| 44-45 | Di chuyển hướng 2 (`2`) | (17, 17) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 46 |
| 46 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 44 |
| 47-48 | Di chuyển hướng 2 (`2`) | (18, 18) | (19, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 18)) | 43 |
| 49-50 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(20, 19)) | 42 |
| 51-52 | Di chuyển hướng 5 (`5`) | (20, 19) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 41 |
| 53-54 | Di chuyển hướng 5 (`5`) | (19, 19) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 40 |
| 55 | Di chuyển hướng 5 (`5`) | (18, 19) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 38 |
| 56-57 | Di chuyển hướng 5 (`5`) | (17, 19) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 37 |
| 58-59 | Di chuyển hướng 4 (`4`) | (16, 19) | (15, 20) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(15, 20)) | 36 |
| 60 | Chờ 1 bước (`-1`) | (15, 20) | (15, 20) | Dự kiến đứng yên tại (15, 20); mục tiêu Spot #24 (thương hiệu=24, tọa độ=(15, 20)) | 36 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (6, 23) (ô=535)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 16)
- Mảng hành động đã gửi server: `[1, 0, 0, 1, 1, 0, 1, 1, 0, -2, 4, 4, 4, 4, 4, 4, 3, 3, 2, 3, 3, 3, 1, 2, 2, 0, 1, 1, 1, 0, 1, 0, 1, 0, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (6, 23) | (6, 22) | Dự kiến đến điểm hẹn tọa độ (6, 22) | 10 |
| 1 | Di chuyển hướng 0 (`0`) | (6, 22) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 8 |
| 2-3 | Di chuyển hướng 0 (`0`) | (6, 21) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 7 |
| 4 | Di chuyển hướng 1 (`1`) | (5, 20) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 5 |
| 5-6 | Di chuyển hướng 1 (`1`) | (6, 19) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 4 |
| 7-8 | Di chuyển hướng 0 (`0`) | (6, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 3 |
| 9-10 | Di chuyển hướng 1 (`1`) | (6, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 2 |
| 11-12 | Di chuyển hướng 1 (`1`) | (6, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 1 |
| 13-14 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 0 |
| 15-16 | Chờ 2 bước (`-2`) | (6, 14) | (6, 14) | Dự kiến đứng yên tại (6, 14); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 56 |
| 17-18 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 55 |
| 19 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 16)) | 53 |
| 20-21 | Di chuyển hướng 4 (`4`) | (5, 16) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 52 |
| 22-23 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 51 |
| 24-25 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 50 |
| 26-27 | Di chuyển hướng 4 (`4`) | (4, 19) | (3, 20) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 20)) | 49 |
| 28-29 | Di chuyển hướng 3 (`3`) | (3, 20) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 48 |
| 30-31 | Di chuyển hướng 3 (`3`) | (4, 21) | (4, 22) | Dự kiến đến điểm hẹn tọa độ (4, 22) | 47 |
| 32-33 | Di chuyển hướng 2 (`2`) | (4, 22) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 46 |
| 34-35 | Di chuyển hướng 3 (`3`) | (5, 22) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 45 |
| 36 | Di chuyển hướng 3 (`3`) | (6, 23) | (6, 24) | Dự kiến đến điểm hẹn tọa độ (6, 24) | 43 |
| 37-38 | Di chuyển hướng 3 (`3`) | (6, 24) | (7, 25) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 25)) | 42 |
| 39-40 | Di chuyển hướng 1 (`1`) | (7, 25) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 41 |
| 41 | Di chuyển hướng 2 (`2`) | (7, 24) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 39 |
| 42-43 | Di chuyển hướng 2 (`2`) | (8, 24) | (9, 24) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 24)) | 38 |
| 44-45 | Di chuyển hướng 0 (`0`) | (9, 24) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 37 |
| 46 | Di chuyển hướng 1 (`1`) | (9, 23) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 35 |
| 47-48 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 34 |
| 49-50 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 33 |
| 51 | Di chuyển hướng 0 (`0`) | (10, 20) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 31 |
| 52 | Di chuyển hướng 1 (`1`) | (10, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 29 |
| 53 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 27 |
| 54-55 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 56 |
| 56-57 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 15)) | 55 |
| 58-59 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 56 |
| 60 | Chờ 1 bước (`-1`) | (10, 16) | (10, 16) | Dự kiến đứng yên tại (10, 16); hướng tới tọa độ (10, 16) | 56 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (20, 10) (ô=250)
- Nhiên liệu đầu ngày: 14
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 8)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 5, 4, 5, 5, 4, 5, -6, 0, 0, 0, 5, 5, 5, 0, 5, 5, 5, 3, 3, 3, 2, 3, 3, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 13 |
| 2 | Di chuyển hướng 0 (`0`) | (20, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 11 |
| 3 | Di chuyển hướng 0 (`0`) | (19, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 9 |
| 4-5 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 8 |
| 6-7 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(18, 5)) | 7 |
| 8-9 | Di chuyển hướng 5 (`5`) | (18, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 6 |
| 10-11 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 5 |
| 12-13 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 6)) | 4 |
| 14-15 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 3 |
| 16-17 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 2 |
| 18-19 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(13, 7)) | 1 |
| 20-25 | Chờ 6 bước (`-6`) | (13, 7) | (13, 7) | Dự kiến đứng yên tại (13, 7); mục tiêu Spot #25 (thương hiệu=25, tọa độ=(13, 7)) | 56 |
| 26-27 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 56 |
| 28-30 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 54 |
| 31 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 56 |
| 32-33 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 56 |
| 34-35 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 55 |
| 36-37 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 4)) | 54 |
| 38-39 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 53 |
| 40-41 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 51 |
| 42-43 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 50 |
| 44-45 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 49 |
| 46-47 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 48 |
| 48-49 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 56 |
| 50-51 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 6)) | 55 |
| 52-53 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 54 |
| 54 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 52 |
| 55-56 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 51 |
| 57-58 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 50 |
| 59-60 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 49 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (2, 3) (ô=71)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 9)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 4, 5, 4, 3, 3, 3, 3, 3, 3, 0, 0, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 56 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 56 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 56 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 56 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 56 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 56 |
| 12-13 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 4)) | 54 |
| 14-15 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 56 |
| 16-17 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 56 |
| 18-19 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 56 |
| 20-21 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 54 |
| 22-23 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 53 |
| 24-25 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 52 |
| 26-28 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 50 |
| 29 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 48 |
| 30-31 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 47 |
| 32-33 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 46 |
| 34-35 | Di chuyển hướng 2 (`2`) | (18, 4) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 45 |
| 36-37 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 3)) | 44 |
| 38-39 | Di chuyển hướng 4 (`4`) | (20, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 43 |
| 40-41 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 42 |
| 42-43 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(18, 5)) | 41 |
| 44-45 | Di chuyển hướng 3 (`3`) | (18, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 40 |
| 46-47 | Di chuyển hướng 3 (`3`) | (18, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 39 |
| 48-49 | Di chuyển hướng 3 (`3`) | (19, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 38 |
| 50 | Di chuyển hướng 3 (`3`) | (19, 8) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 36 |
| 51 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 34 |
| 52-53 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(21, 11)) | 33 |
| 54-55 | Di chuyển hướng 0 (`0`) | (21, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 32 |
| 56-57 | Di chuyển hướng 0 (`0`) | (20, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 31 |
| 58 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 29 |
| 59 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 27 |
| 60 | Di chuyển hướng 5 (`5`) | (18, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 25 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (7, 8) (ô=191)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 16)
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 4, 3, 2, 2, 2, 3, 3, -36]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (7, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 56 |
| 2-3 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 56 |
| 4-5 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 56 |
| 6-7 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 56 |
| 8-11 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 56 |
| 12-15 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 56 |
| 16-17 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 56 |
| 18-20 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 56 |
| 21 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 56 |
| 22 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 15)) | 56 |
| 23-24 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 56 |
| 25-60 | Chờ 36 bước (`-36`) | (10, 16) | (10, 16) | Dự kiến đứng yên tại (10, 16); hướng tới tọa độ (10, 16) | 56 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (2, 3) (ô=71)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 3)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 3, 3, 3, 0, 0, 0, 5, 4, 4, 4, 4, -2, 0, 0, 5, 0, 0, 1, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 56 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 56 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 56 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 56 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 56 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 56 |
| 12-13 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 56 |
| 14 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 56 |
| 15-16 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 56 |
| 17-18 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 56 |
| 19-20 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 56 |
| 21 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 56 |
| 22-24 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(13, 7)) | 56 |
| 25-26 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 56 |
| 27-29 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 56 |
| 30 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 56 |
| 31-32 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 56 |
| 33-34 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 56 |
| 35-36 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 56 |
| 37-38 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 56 |
| 39-40 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 56 |
| 41-42 | Chờ 2 bước (`-2`) | (8, 8) | (8, 8) | Dự kiến đứng yên tại (8, 8); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 56 |
| 43-44 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 56 |
| 45-46 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 56 |
| 47 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 6)) | 56 |
| 48-49 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 56 |
| 50-51 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 56 |
| 52-53 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 56 |
| 54-60 | Chờ 7 bước (`-7`) | (6, 3) | (6, 3) | Dự kiến đứng yên tại (6, 3); hướng tới tọa độ (6, 3) | 56 |

