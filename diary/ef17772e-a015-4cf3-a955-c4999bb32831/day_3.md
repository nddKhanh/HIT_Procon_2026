# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 55
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 16) (ô=373)
- Nhiên liệu đầu ngày: 13
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(8, 4))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(8, 4))
- Mảng hành động đã gửi server: `[0, 1, 1, 0, 5, 5, 5, 5, 5, -1, 0, 1, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 2, 2, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 12 |
| 2-3 | Di chuyển hướng 1 (`1`) | (5, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 11 |
| 4-5 | Di chuyển hướng 1 (`1`) | (5, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 10 |
| 6-9 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 8 |
| 10-12 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 6 |
| 13-14 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 5 |
| 15 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 3 |
| 16-18 | Di chuyển hướng 5 (`5`) | (2, 12) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 1 |
| 19-20 | Di chuyển hướng 5 (`5`) | (1, 12) | (0, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 12)) | 56 |
| 21 | Chờ 1 bước (`-1`) | (0, 12) | (0, 12) | Dự kiến đứng yên tại (0, 12); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 12)) | 56 |
| 22-23 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 55 |
| 24-25 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(0, 10)) | 54 |
| 26-27 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 53 |
| 28-29 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 52 |
| 30-31 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 51 |
| 32-33 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 50 |
| 34-35 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 9)) | 49 |
| 36-37 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 48 |
| 38-40 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 46 |
| 41 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 6)) | 44 |
| 42-43 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 43 |
| 44-45 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 42 |
| 46-47 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 41 |
| 48-49 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 40 |
| 50-51 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 39 |
| 52-53 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 38 |
| 54 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 4)) | 36 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (21, 11) (ô=274)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 6)
- Mảng hành động đã gửi server: `[-11, 0, 0, 0, 1, 1, 0, 0, 1, 0, 5, 5, 0, 5, 0, 5, 3, 3, 3, 4, 4, 4, 4, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-10 | Chờ 11 bước (`-11`) | (21, 11) | (21, 11) | Dự kiến đứng yên tại (21, 11); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(21, 11)) | 56 |
| 11-12 | Di chuyển hướng 0 (`0`) | (21, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 56 |
| 13-14 | Di chuyển hướng 0 (`0`) | (20, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 55 |
| 15 | Di chuyển hướng 0 (`0`) | (20, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 53 |
| 16 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 51 |
| 17 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 49 |
| 18-19 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 48 |
| 20-21 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 47 |
| 22-23 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 3)) | 46 |
| 24-25 | Di chuyển hướng 0 (`0`) | (20, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 45 |
| 26-27 | Di chuyển hướng 5 (`5`) | (19, 2) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 44 |
| 28-29 | Di chuyển hướng 5 (`5`) | (18, 2) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 43 |
| 30-31 | Di chuyển hướng 0 (`0`) | (17, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 42 |
| 32-33 | Di chuyển hướng 5 (`5`) | (17, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 41 |
| 34-35 | Di chuyển hướng 0 (`0`) | (16, 1) | (15, 0) | Dự kiến đến điểm hẹn tọa độ (15, 0) | 40 |
| 36-37 | Di chuyển hướng 5 (`5`) | (15, 0) | (14, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 0)) | 39 |
| 38-39 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 38 |
| 40-41 | Di chuyển hướng 3 (`3`) | (15, 1) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 37 |
| 42-43 | Di chuyển hướng 3 (`3`) | (15, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 36 |
| 44-45 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 35 |
| 46 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 33 |
| 47-48 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 32 |
| 49-50 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 31 |
| 51-52 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(13, 7)) | 30 |
| 53-54 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 29 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (17, 5) (ô=132)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 12)
- Mảng hành động đã gửi server: `[2, 5, 4, 5, 0, 5, 5, 5, 0, 5, 5, 5, 0, 5, 5, 5, 3, 3, 3, 3, 3, 2, 5, 5, 4, 5, 3, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (17, 5) | (18, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(18, 5)) | 54 |
| 2-3 | Di chuyển hướng 5 (`5`) | (18, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 53 |
| 4-5 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 52 |
| 6-7 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 6)) | 51 |
| 8-9 | Di chuyển hướng 0 (`0`) | (15, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 50 |
| 10-11 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 49 |
| 12-13 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 48 |
| 14 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 46 |
| 15 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 44 |
| 16 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 42 |
| 17-18 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 41 |
| 19-20 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 4)) | 40 |
| 21-22 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 39 |
| 23 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 37 |
| 24-25 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 36 |
| 26-27 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 35 |
| 28-29 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 34 |
| 30-31 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 33 |
| 32-33 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 6)) | 32 |
| 34-35 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 31 |
| 36-37 | Di chuyển hướng 3 (`3`) | (7, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 30 |
| 38-39 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 29 |
| 40-41 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 28 |
| 42-43 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 27 |
| 44-45 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 26 |
| 46-47 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 9)) | 25 |
| 48-49 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 24 |
| 50-51 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 23 |
| 52-53 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 56 |
| 54 | Chờ 1 bước (`-1`) | (5, 12) | (5, 12) | Dự kiến đứng yên tại (5, 12); hướng tới tọa độ (5, 12) | 56 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 6) (ô=145)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(20, 19))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(20, 19))
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 4, 4, 5, 4, 3, 3, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 3, 2, 3, 2, 3, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 33 |
| 4-5 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 32 |
| 6-7 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 31 |
| 8-9 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 30 |
| 10-11 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 29 |
| 12-13 | Di chuyển hướng 4 (`4`) | (8, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 28 |
| 14-15 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 27 |
| 16-19 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 25 |
| 20-23 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 23 |
| 24-25 | Di chuyển hướng 3 (`3`) | (6, 14) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 22 |
| 26-27 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 21 |
| 28-29 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 20 |
| 30-31 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 15)) | 19 |
| 32-33 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 18 |
| 34-35 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 17 |
| 36 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 15 |
| 37-38 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(13, 16)) | 14 |
| 39-40 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 13 |
| 41 | Di chuyển hướng 2 (`2`) | (14, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 11 |
| 42-43 | Di chuyển hướng 2 (`2`) | (15, 16) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 10 |
| 44-45 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 17)) | 9 |
| 46-47 | Di chuyển hướng 2 (`2`) | (17, 17) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 8 |
| 48 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 6 |
| 49-50 | Di chuyển hướng 2 (`2`) | (18, 18) | (19, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 18)) | 5 |
| 51-52 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(20, 19)) | 4 |
| 53-54 | Chờ 2 bước (`-2`) | (20, 19) | (20, 19) | Dự kiến đứng yên tại (20, 19); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(20, 19)) | 4 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (8, 5) (ô=123)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 21)
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 4, 4, 4, 3, 4, 4, 3, 4, 4, 4, 4, 3, 3, 2, 3, 3, 3, 1, 2, 2, 0, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 55 |
| 2-3 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 54 |
| 4-5 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 53 |
| 6-7 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 52 |
| 8-10 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 50 |
| 11-12 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 49 |
| 13-14 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 48 |
| 15-17 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 46 |
| 18-21 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 44 |
| 22-23 | Di chuyển hướng 4 (`4`) | (5, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 43 |
| 24-25 | Di chuyển hướng 3 (`3`) | (5, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 16)) | 42 |
| 26-27 | Di chuyển hướng 4 (`4`) | (5, 16) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 41 |
| 28-29 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 40 |
| 30-31 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 39 |
| 32-33 | Di chuyển hướng 4 (`4`) | (4, 19) | (3, 20) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 20)) | 38 |
| 34-35 | Di chuyển hướng 3 (`3`) | (3, 20) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 37 |
| 36-37 | Di chuyển hướng 3 (`3`) | (4, 21) | (4, 22) | Dự kiến đến điểm hẹn tọa độ (4, 22) | 36 |
| 38-39 | Di chuyển hướng 2 (`2`) | (4, 22) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 35 |
| 40-41 | Di chuyển hướng 3 (`3`) | (5, 22) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 34 |
| 42 | Di chuyển hướng 3 (`3`) | (6, 23) | (6, 24) | Dự kiến đến điểm hẹn tọa độ (6, 24) | 32 |
| 43-44 | Di chuyển hướng 3 (`3`) | (6, 24) | (7, 25) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 25)) | 31 |
| 45-46 | Di chuyển hướng 1 (`1`) | (7, 25) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 30 |
| 47 | Di chuyển hướng 2 (`2`) | (7, 24) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 28 |
| 48-49 | Di chuyển hướng 2 (`2`) | (8, 24) | (9, 24) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 24)) | 27 |
| 50-51 | Di chuyển hướng 0 (`0`) | (9, 24) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 26 |
| 52 | Di chuyển hướng 1 (`1`) | (9, 23) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 24 |
| 53-54 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 23 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (1, 1) (ô=24)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(0, 10))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(0, 10))
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 2, 2, 2, 5, 5, 5, 5, 0, 0, 5, 0, -11, 3, 4, 3, 3, 4, 4, 3, 4, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 18 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 17 |
| 4-5 | Di chuyển hướng 2 (`2`) | (2, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 16 |
| 6 | Di chuyển hướng 2 (`2`) | (3, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 14 |
| 7-8 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 13 |
| 9-10 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 12 |
| 11-12 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 11 |
| 13-14 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 10 |
| 15-16 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 9 |
| 17-18 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 8 |
| 19-20 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 7 |
| 21 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 5 |
| 22-23 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 4 |
| 24-25 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 3 |
| 26-27 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(0, 0)) | 2 |
| 28-38 | Chờ 11 bước (`-11`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(0, 0)) | 56 |
| 39-40 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 56 |
| 41-42 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 56 |
| 43 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 56 |
| 44 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 56 |
| 45 | Di chuyển hướng 4 (`4`) | (1, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 56 |
| 46-47 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 56 |
| 48-49 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 55 |
| 50-51 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 56 |
| 52 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 56 |
| 53 | Di chuyển hướng 4 (`4`) | (1, 9) | (0, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(0, 10)) | 56 |
| 54 | Chờ 1 bước (`-1`) | (0, 10) | (0, 10) | Dự kiến đứng yên tại (0, 10); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(0, 10)) | 56 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (18, 5) (ô=133)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 12)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 3, 0, 0, 0, 5, 0, 5, 0, 5, 5, 0, 5, 5, 0, 5, 4, 4, 4, 4, 4, 5, 4, 4, 4, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (18, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 56 |
| 2-3 | Di chuyển hướng 3 (`3`) | (18, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 56 |
| 4-5 | Di chuyển hướng 3 (`3`) | (19, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 56 |
| 6 | Di chuyển hướng 3 (`3`) | (19, 8) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 56 |
| 7 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 56 |
| 8-9 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(21, 11)) | 56 |
| 10-11 | Di chuyển hướng 0 (`0`) | (21, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 56 |
| 12-13 | Di chuyển hướng 0 (`0`) | (20, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 56 |
| 14 | Di chuyển hướng 0 (`0`) | (20, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 56 |
| 15 | Di chuyển hướng 5 (`5`) | (19, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 56 |
| 16 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 56 |
| 17 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 56 |
| 18 | Di chuyển hướng 0 (`0`) | (17, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 56 |
| 19-20 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 6)) | 56 |
| 21-22 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 56 |
| 23-24 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 56 |
| 25-26 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 56 |
| 27 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 56 |
| 28 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 56 |
| 29 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 56 |
| 30-31 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 56 |
| 32-33 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 56 |
| 34-35 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 56 |
| 36-37 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 56 |
| 38-39 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 56 |
| 40-41 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 56 |
| 42-44 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 56 |
| 45-46 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 56 |
| 47-48 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 56 |
| 49-54 | Chờ 6 bước (`-6`) | (5, 12) | (5, 12) | Dự kiến đứng yên tại (5, 12); hướng tới tọa độ (5, 12) | 56 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (8, 5) (ô=123)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(0, 10))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(0, 10))
- Mảng hành động đã gửi server: `[5, 4, 4, 5, 5, 4, 4, 4, 4, 5, 4, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 0, 3, 4, 3, 3, 4, 4, 4, 3, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 56 |
| 2-4 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 6)) | 56 |
| 5-6 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 56 |
| 7 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 56 |
| 8 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 56 |
| 9 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 56 |
| 10-11 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 56 |
| 12-13 | Di chuyển hướng 4 (`4`) | (3, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 56 |
| 14-15 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 56 |
| 16-17 | Di chuyển hướng 5 (`5`) | (2, 11) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 56 |
| 18-19 | Di chuyển hướng 4 (`4`) | (1, 11) | (0, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 12)) | 56 |
| 20-21 | Di chuyển hướng 1 (`1`) | (0, 12) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 56 |
| 22-23 | Di chuyển hướng 1 (`1`) | (1, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 56 |
| 24-25 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 56 |
| 26 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 56 |
| 27 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 56 |
| 28-29 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 56 |
| 30-31 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 56 |
| 32-33 | Di chuyển hướng 1 (`1`) | (1, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 56 |
| 34 | Di chuyển hướng 0 (`0`) | (1, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 56 |
| 35 | Di chuyển hướng 0 (`0`) | (1, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 56 |
| 36 | Di chuyển hướng 1 (`1`) | (0, 2) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 56 |
| 37-38 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(0, 0)) | 56 |
| 39-40 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 56 |
| 41-42 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 56 |
| 43 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 56 |
| 44 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 56 |
| 45 | Di chuyển hướng 4 (`4`) | (1, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 56 |
| 46-47 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 56 |
| 48-49 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 56 |
| 50-51 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 56 |
| 52 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 56 |
| 53 | Di chuyển hướng 4 (`4`) | (1, 9) | (0, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(0, 10)) | 56 |
| 54 | Chờ 1 bước (`-1`) | (0, 10) | (0, 10) | Dự kiến đứng yên tại (0, 10); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(0, 10)) | 56 |

