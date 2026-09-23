# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 49
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 22) (ô=514)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(5, 9))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(5, 9))
- Mảng hành động đã gửi server: `[3, 3, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 5, 5, 5, 5, 5, 0, 1, 2, 2, 2, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (8, 22) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 55 |
| 2 | Di chuyển hướng 3 (`3`) | (9, 23) | (9, 24) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 24)) | 53 |
| 3-4 | Di chuyển hướng 0 (`0`) | (9, 24) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 52 |
| 5 | Di chuyển hướng 0 (`0`) | (9, 23) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 50 |
| 6-7 | Di chuyển hướng 0 (`0`) | (8, 22) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 49 |
| 8-9 | Di chuyển hướng 0 (`0`) | (8, 21) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 48 |
| 10-11 | Di chuyển hướng 0 (`0`) | (7, 20) | (7, 19) | Dự kiến đến điểm hẹn tọa độ (7, 19) | 47 |
| 12-13 | Di chuyển hướng 0 (`0`) | (7, 19) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 46 |
| 14-15 | Di chuyển hướng 0 (`0`) | (6, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 45 |
| 16-17 | Di chuyển hướng 1 (`1`) | (6, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 44 |
| 18-19 | Di chuyển hướng 0 (`0`) | (6, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 43 |
| 20 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 41 |
| 21-22 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 40 |
| 23 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 38 |
| 24-26 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 36 |
| 27-28 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 35 |
| 29 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 33 |
| 30-32 | Di chuyển hướng 5 (`5`) | (2, 12) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 31 |
| 33-34 | Di chuyển hướng 5 (`5`) | (1, 12) | (0, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 12)) | 30 |
| 35-36 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 29 |
| 37-38 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(0, 10)) | 28 |
| 39-40 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 27 |
| 41-42 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 26 |
| 43-44 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 25 |
| 45-46 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 24 |
| 47-48 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 9)) | 23 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (16, 1) (ô=39)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 8)
- Mảng hành động đã gửi server: `[0, 5, 3, 3, 3, 4, 3, 4, 2, 2, 1, 1, 2, 1, 4, 3, 4, 3, 4, 3, 3, 3, 0, 0, 5, 5, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (16, 1) | (15, 0) | Dự kiến đến điểm hẹn tọa độ (15, 0) | 55 |
| 2-3 | Di chuyển hướng 5 (`5`) | (15, 0) | (14, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 0)) | 54 |
| 4-5 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 53 |
| 6-7 | Di chuyển hướng 3 (`3`) | (15, 1) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 52 |
| 8-9 | Di chuyển hướng 3 (`3`) | (15, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 51 |
| 10-11 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 50 |
| 12 | Di chuyển hướng 3 (`3`) | (15, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 48 |
| 13-14 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 6)) | 47 |
| 15-16 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 46 |
| 17-18 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 45 |
| 19-20 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(18, 5)) | 44 |
| 21-22 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 43 |
| 23-24 | Di chuyển hướng 2 (`2`) | (18, 4) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 42 |
| 25-26 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 3)) | 41 |
| 27-28 | Di chuyển hướng 4 (`4`) | (20, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 40 |
| 29-30 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 39 |
| 31-32 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 38 |
| 33-34 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 37 |
| 35 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 35 |
| 36 | Di chuyển hướng 3 (`3`) | (19, 8) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 33 |
| 37 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 31 |
| 38-39 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(21, 11)) | 30 |
| 40-41 | Di chuyển hướng 0 (`0`) | (21, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 29 |
| 42-43 | Di chuyển hướng 0 (`0`) | (20, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 28 |
| 44 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 26 |
| 45 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 24 |
| 46 | Di chuyển hướng 5 (`5`) | (18, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 22 |
| 47 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 56 |
| 48 | Chờ 1 bước (`-1`) | (16, 8) | (16, 8) | Dự kiến đứng yên tại (16, 8); hướng tới tọa độ (16, 8) | 56 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (5, 4) (ô=97)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 24)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 24)
- Mảng hành động đã gửi server: `[1, 2, 2, 3, 4, 4, 3, 3, 4, 4, 4, 4, 4, 3, 4, 4, 4, 4, 4, 4, 3, 3, 2, 3, 3, 3, 1, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 55 |
| 2-3 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 54 |
| 4-5 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 53 |
| 6 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 4)) | 51 |
| 7-8 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 50 |
| 9-10 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 49 |
| 11 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 47 |
| 12-13 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 46 |
| 14-15 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 45 |
| 16-17 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 44 |
| 18 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 42 |
| 19-20 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 56 |
| 21 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 54 |
| 22 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 52 |
| 23-24 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 51 |
| 25 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 16)) | 49 |
| 26-27 | Di chuyển hướng 4 (`4`) | (5, 16) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 48 |
| 28-29 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 47 |
| 30-31 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 46 |
| 32-33 | Di chuyển hướng 4 (`4`) | (4, 19) | (3, 20) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 20)) | 45 |
| 34-35 | Di chuyển hướng 3 (`3`) | (3, 20) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 44 |
| 36-37 | Di chuyển hướng 3 (`3`) | (4, 21) | (4, 22) | Dự kiến đến điểm hẹn tọa độ (4, 22) | 43 |
| 38-39 | Di chuyển hướng 2 (`2`) | (4, 22) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 42 |
| 40-41 | Di chuyển hướng 3 (`3`) | (5, 22) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 41 |
| 42 | Di chuyển hướng 3 (`3`) | (6, 23) | (6, 24) | Dự kiến đến điểm hẹn tọa độ (6, 24) | 39 |
| 43-44 | Di chuyển hướng 3 (`3`) | (6, 24) | (7, 25) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 25)) | 38 |
| 45-46 | Di chuyển hướng 1 (`1`) | (7, 25) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 37 |
| 47 | Di chuyển hướng 2 (`2`) | (7, 24) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 35 |
| 48 | Chờ 1 bước (`-1`) | (8, 24) | (8, 24) | Dự kiến đứng yên tại (8, 24); hướng tới tọa độ (8, 24) | 35 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (10, 22) (ô=516)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(0, 0))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(0, 0))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 5, 0, 0, 0, 5, 5, 0, 0, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 55 |
| 2-3 | Di chuyển hướng 0 (`0`) | (10, 21) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 54 |
| 4-5 | Di chuyển hướng 0 (`0`) | (9, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 53 |
| 6-7 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 52 |
| 8-9 | Di chuyển hướng 0 (`0`) | (8, 18) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 51 |
| 10-12 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 49 |
| 13-14 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 48 |
| 15-16 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 47 |
| 17-18 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 46 |
| 19 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 44 |
| 20 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 42 |
| 21-22 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 55 |
| 23 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 53 |
| 24-25 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 55 |
| 26-27 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 55 |
| 28-29 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 54 |
| 30 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 6)) | 52 |
| 31-32 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 51 |
| 33-34 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 50 |
| 35-36 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 49 |
| 37-38 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 48 |
| 39-40 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 47 |
| 41 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 45 |
| 42-43 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 44 |
| 44-45 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 43 |
| 46-47 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(0, 0)) | 42 |
| 48 | Chờ 1 bước (`-1`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(0, 0)) | 42 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (17, 6) (ô=155)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 16)
- Mảng hành động đã gửi server: `[1, 5, 4, 5, 4, 5, 5, 0, 0, 0, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 2, 2, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(18, 5)) | 55 |
| 2-3 | Di chuyển hướng 5 (`5`) | (18, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 54 |
| 4-5 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 53 |
| 6-7 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 6)) | 52 |
| 8-9 | Di chuyển hướng 4 (`4`) | (15, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 51 |
| 10-11 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 50 |
| 12-13 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(13, 7)) | 49 |
| 14-15 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 48 |
| 16-18 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 46 |
| 19 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 44 |
| 20 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 42 |
| 21-22 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 41 |
| 23-24 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 40 |
| 25-26 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 39 |
| 27-28 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 38 |
| 29-30 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 37 |
| 31-32 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 36 |
| 33 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 34 |
| 34-35 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 33 |
| 36 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 31 |
| 37 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 29 |
| 38-39 | Di chuyển hướng 3 (`3`) | (6, 14) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 28 |
| 40-41 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 27 |
| 42-43 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 26 |
| 44-45 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 15)) | 25 |
| 46-47 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 56 |
| 48 | Chờ 1 bước (`-1`) | (10, 16) | (10, 16) | Dự kiến đứng yên tại (10, 16); hướng tới tọa độ (10, 16) | 56 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (18, 25) (ô=593)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 16)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 3, 2, 3, 2, 3, 5, 5, 0, 5, 5, 0, 0, 5, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (18, 25) | (17, 24) | Dự kiến đến điểm hẹn tọa độ (17, 24) | 55 |
| 2-3 | Di chuyển hướng 0 (`0`) | (17, 24) | (17, 23) | Dự kiến đến điểm hẹn tọa độ (17, 23) | 54 |
| 4 | Di chuyển hướng 0 (`0`) | (17, 23) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 52 |
| 5 | Di chuyển hướng 0 (`0`) | (16, 22) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 50 |
| 6 | Di chuyển hướng 0 (`0`) | (16, 21) | (15, 20) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(15, 20)) | 48 |
| 7-8 | Di chuyển hướng 0 (`0`) | (15, 20) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 47 |
| 9-11 | Di chuyển hướng 0 (`0`) | (15, 19) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 45 |
| 12-13 | Di chuyển hướng 0 (`0`) | (14, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 44 |
| 14-15 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(13, 16)) | 43 |
| 16-17 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 42 |
| 18 | Di chuyển hướng 2 (`2`) | (14, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 40 |
| 19-20 | Di chuyển hướng 2 (`2`) | (15, 16) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 39 |
| 21-22 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 17)) | 38 |
| 23-24 | Di chuyển hướng 2 (`2`) | (17, 17) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 37 |
| 25 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 35 |
| 26-27 | Di chuyển hướng 2 (`2`) | (18, 18) | (19, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 18)) | 34 |
| 28-29 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(20, 19)) | 33 |
| 30-31 | Di chuyển hướng 5 (`5`) | (20, 19) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 32 |
| 32-33 | Di chuyển hướng 5 (`5`) | (19, 19) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 31 |
| 34 | Di chuyển hướng 0 (`0`) | (18, 19) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 29 |
| 35 | Di chuyển hướng 5 (`5`) | (17, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 27 |
| 36-37 | Di chuyển hướng 5 (`5`) | (16, 18) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 26 |
| 38-39 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 25 |
| 40-41 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 24 |
| 42 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(13, 16)) | 22 |
| 43-44 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 21 |
| 45-46 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 20 |
| 47 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 56 |
| 48 | Chờ 1 bước (`-1`) | (10, 16) | (10, 16) | Dự kiến đứng yên tại (10, 16); hướng tới tọa độ (10, 16) | 56 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (9, 18) (ô=423)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 16)
- Mảng hành động đã gửi server: `[1, 1, -45]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 56 |
| 2-3 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 56 |
| 4-48 | Chờ 45 bước (`-45`) | (10, 16) | (10, 16) | Dự kiến đứng yên tại (10, 16); hướng tới tọa độ (10, 16) | 56 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (1, 24) (ô=553)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 8)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 2, 2, 3, 3, 3, 2, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 24) | (2, 23) | Dự kiến đến điểm hẹn tọa độ (2, 23) | 56 |
| 2 | Di chuyển hướng 1 (`1`) | (2, 23) | (2, 22) | Dự kiến đến điểm hẹn tọa độ (2, 22) | 56 |
| 3-4 | Di chuyển hướng 1 (`1`) | (2, 22) | (3, 21) | Dự kiến đến điểm hẹn tọa độ (3, 21) | 56 |
| 5-6 | Di chuyển hướng 1 (`1`) | (3, 21) | (3, 20) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 20)) | 56 |
| 7-8 | Di chuyển hướng 1 (`1`) | (3, 20) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 56 |
| 9-10 | Di chuyển hướng 1 (`1`) | (4, 19) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 56 |
| 11-12 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 56 |
| 13-14 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 16)) | 56 |
| 15-16 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 56 |
| 17 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 56 |
| 18-19 | Di chuyển hướng 1 (`1`) | (5, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 56 |
| 20 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 56 |
| 21 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 56 |
| 22-23 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 56 |
| 24 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 56 |
| 25-26 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 56 |
| 27-28 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 56 |
| 29-30 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 56 |
| 31-32 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 56 |
| 33-34 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 56 |
| 35-36 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 56 |
| 37 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 56 |
| 38 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 56 |
| 39 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 56 |
| 40-41 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 56 |
| 42-43 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 56 |
| 44-45 | Di chuyển hướng 3 (`3`) | (15, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 56 |
| 46 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 56 |
| 47-48 | Chờ 2 bước (`-2`) | (16, 8) | (16, 8) | Dự kiến đứng yên tại (16, 8); hướng tới tọa độ (16, 8) | 56 |

