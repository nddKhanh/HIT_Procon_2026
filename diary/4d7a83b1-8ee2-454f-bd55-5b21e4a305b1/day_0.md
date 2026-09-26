# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 48
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 26 | #5 | #6 | (23, 4) | 35 | 55 |
| 43 | #5 | #7 | (22, 8) | 48 | 55 |
| 47 | #0 | #7 | (22, 8) | 18 | 55 |
| 47 | #2 | #6 | (24, 2) | 18 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 21) (ô=537)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(22, 8))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(22, 8))
- Mảng hành động đã gửi server: `[1, 1, 2, 3, 3, 2, 2, 2, 2, 2, 2, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (12, 21) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 54 |
| 2-4 | Di chuyển hướng 1 (`1`) | (12, 20) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 52 |
| 5-6 | Di chuyển hướng 2 (`2`) | (13, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 51 |
| 7 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 49 |
| 8-10 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(15, 21)) | 47 |
| 11-12 | Di chuyển hướng 2 (`2`) | (15, 21) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 46 |
| 13-15 | Di chuyển hướng 2 (`2`) | (16, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 44 |
| 16-17 | Di chuyển hướng 2 (`2`) | (17, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 43 |
| 18-19 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 42 |
| 20-22 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 40 |
| 23 | Di chuyển hướng 2 (`2`) | (20, 21) | (21, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(21, 21)) | 38 |
| 24-25 | Di chuyển hướng 0 (`0`) | (21, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 37 |
| 26-27 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 36 |
| 28 | Di chuyển hướng 1 (`1`) | (21, 19) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 34 |
| 29 | Di chuyển hướng 1 (`1`) | (21, 18) | (22, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 32 |
| 30-31 | Di chuyển hướng 1 (`1`) | (22, 17) | (22, 16) | Dự kiến đến điểm hẹn tọa độ (22, 16) | 31 |
| 32-34 | Di chuyển hướng 1 (`1`) | (22, 16) | (23, 15) | Dự kiến đến điểm hẹn tọa độ (23, 15) | 29 |
| 35-36 | Di chuyển hướng 1 (`1`) | (23, 15) | (23, 14) | Dự kiến đến điểm hẹn tọa độ (23, 14) | 28 |
| 37-38 | Di chuyển hướng 0 (`0`) | (23, 14) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 27 |
| 39 | Di chuyển hướng 1 (`1`) | (23, 13) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 25 |
| 40-41 | Di chuyển hướng 0 (`0`) | (23, 12) | (23, 11) | Dự kiến đến điểm hẹn tọa độ (23, 11) | 24 |
| 42 | Di chuyển hướng 0 (`0`) | (23, 11) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 22 |
| 43-45 | Di chuyển hướng 1 (`1`) | (22, 10) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 20 |
| 46 | Di chuyển hướng 0 (`0`) | (23, 9) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 55 |
| 47 | Chờ 1 bước (`-1`) | (22, 8) | (22, 8) | Dự kiến đứng yên tại (22, 8); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 55 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (4, 14) (ô=354)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(9, 3))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(9, 3))
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 5, 4, 1, 2, 1, 1, 0, 1, 1, 1, 2, 1, 2, 0, 1, 1, 1, 2, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (4, 14) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 54 |
| 2-4 | Di chuyển hướng 4 (`4`) | (4, 15) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 52 |
| 5 | Di chuyển hướng 5 (`5`) | (3, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 50 |
| 6-7 | Di chuyển hướng 5 (`5`) | (2, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 49 |
| 8-9 | Di chuyển hướng 5 (`5`) | (1, 16) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 48 |
| 10-12 | Di chuyển hướng 4 (`4`) | (0, 16) | (0, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 17)) | 46 |
| 13-14 | Di chuyển hướng 1 (`1`) | (0, 17) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 45 |
| 15-17 | Di chuyển hướng 2 (`2`) | (0, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 43 |
| 18-19 | Di chuyển hướng 1 (`1`) | (1, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 42 |
| 20-21 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 41 |
| 22-23 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 40 |
| 24 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 38 |
| 25 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 36 |
| 26 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 34 |
| 27-29 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 32 |
| 30-32 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 30 |
| 33 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 9)) | 28 |
| 34-35 | Di chuyển hướng 0 (`0`) | (6, 9) | (5, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 8)) | 27 |
| 36-37 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 26 |
| 38 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 24 |
| 39-41 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 22 |
| 42-43 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 21 |
| 44 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 19 |
| 45-47 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 17 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (18, 0) (ô=18)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(24, 2))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(24, 2))
- Mảng hành động đã gửi server: `[5, 5, 4, 5, 5, 4, 0, 5, 4, 2, 2, 3, 2, 2, 2, 3, 2, 1, 1, 1, 1, 2, 2, 3, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (18, 0) | (17, 0) | Dự kiến đến điểm hẹn tọa độ (17, 0) | 54 |
| 2 | Di chuyển hướng 5 (`5`) | (17, 0) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 52 |
| 3-5 | Di chuyển hướng 4 (`4`) | (16, 0) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 50 |
| 6-7 | Di chuyển hướng 5 (`5`) | (16, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 49 |
| 8-9 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 48 |
| 10-12 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 46 |
| 13-14 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 1)) | 45 |
| 15-16 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 44 |
| 17 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 42 |
| 18-19 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 41 |
| 20 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 39 |
| 21-22 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 38 |
| 23-24 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 37 |
| 25-27 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 35 |
| 28 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(17, 3)) | 33 |
| 29-30 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 32 |
| 31-32 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 31 |
| 33 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 29 |
| 34 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 27 |
| 35-36 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 26 |
| 37 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(20, 0)) | 24 |
| 38-39 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 23 |
| 40-41 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 22 |
| 42 | Di chuyển hướng 3 (`3`) | (22, 0) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 20 |
| 43-44 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 19 |
| 45-46 | Di chuyển hướng 2 (`2`) | (23, 2) | (24, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 55 |
| 47 | Chờ 1 bước (`-1`) | (24, 2) | (24, 2) | Dự kiến đứng yên tại (24, 2); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 55 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (19, 14) (ô=369)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(9, 16))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(9, 16))
- Mảng hành động đã gửi server: `[0, 5, 5, 0, 0, 0, 4, 3, 3, 4, 5, 4, 4, 3, 4, 4, 0, 5, 0, 0, 5, 5, 4, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (19, 14) | (19, 13) | Dự kiến đến điểm hẹn tọa độ (19, 13) | 54 |
| 2 | Di chuyển hướng 5 (`5`) | (19, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 52 |
| 3-5 | Di chuyển hướng 5 (`5`) | (18, 13) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 50 |
| 6-7 | Di chuyển hướng 0 (`0`) | (17, 13) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 49 |
| 8-9 | Di chuyển hướng 0 (`0`) | (16, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 48 |
| 10-12 | Di chuyển hướng 0 (`0`) | (16, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 46 |
| 13-14 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 45 |
| 15-16 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 44 |
| 17-19 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 42 |
| 20-21 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 41 |
| 22-23 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 40 |
| 24 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 38 |
| 25 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 36 |
| 26-27 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 35 |
| 28 | Di chuyển hướng 4 (`4`) | (14, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 33 |
| 29 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 31 |
| 30-31 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 30 |
| 32 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 28 |
| 33 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 26 |
| 34-36 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 24 |
| 37-39 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 22 |
| 40-41 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 21 |
| 42-43 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 20 |
| 44-45 | Di chuyển hướng 1 (`1`) | (8, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 19 |
| 46-47 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 18 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (3, 2) (ô=53)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 1)
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 1, 2, 2, 3, 0, 0, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 54 |
| 2-3 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 53 |
| 4-6 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 51 |
| 7-8 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 50 |
| 9-10 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 49 |
| 11-12 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 48 |
| 13-15 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 46 |
| 16-17 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 45 |
| 18-19 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 44 |
| 20 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 42 |
| 21-22 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 41 |
| 23-24 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 40 |
| 25-27 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 38 |
| 28-29 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 37 |
| 30-31 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 36 |
| 32-34 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 34 |
| 35 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 32 |
| 36-37 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 31 |
| 38 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 29 |
| 39-40 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 28 |
| 41-42 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 27 |
| 43-44 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 1)) | 26 |
| 45-46 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 25 |
| 47 | Chờ 1 bước (`-1`) | (14, 1) | (14, 1) | Dự kiến đứng yên tại (14, 1); hướng tới tọa độ (14, 1) | 25 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (13, 7) (ô=188)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(22, 8))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(22, 8))
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 2, 1, 2, 1, 2, 2, 2, 3, 2, 2, 4, 4, 4, 4, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (13, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 54 |
| 2-4 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 52 |
| 5-6 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 51 |
| 7-9 | Di chuyển hướng 2 (`2`) | (15, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 49 |
| 10 | Di chuyển hướng 2 (`2`) | (16, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 47 |
| 11-12 | Di chuyển hướng 1 (`1`) | (17, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 46 |
| 13-14 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 45 |
| 15 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 43 |
| 16 | Di chuyển hướng 2 (`2`) | (19, 3) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 41 |
| 17-18 | Di chuyển hướng 2 (`2`) | (20, 3) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 40 |
| 19-20 | Di chuyển hướng 2 (`2`) | (21, 3) | (22, 3) | Dự kiến đến điểm hẹn tọa độ (22, 3) | 39 |
| 21-23 | Di chuyển hướng 3 (`3`) | (22, 3) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 37 |
| 24 | Di chuyển hướng 2 (`2`) | (22, 4) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 35 |
| 25-26 | Di chuyển hướng 2 (`2`) | (23, 4) | (24, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(24, 4)) | 54 |
| 27-28 | Di chuyển hướng 4 (`4`) | (24, 4) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 53 |
| 29 | Di chuyển hướng 4 (`4`) | (24, 5) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 51 |
| 30-31 | Di chuyển hướng 4 (`4`) | (23, 6) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 50 |
| 32 | Di chuyển hướng 4 (`4`) | (23, 7) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 48 |
| 33-47 | Chờ 15 bước (`-15`) | (22, 8) | (22, 8) | Dự kiến đứng yên tại (22, 8); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 55 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (15, 11) (ô=290)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(24, 2))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(24, 2))
- Mảng hành động đã gửi server: `[1, 2, 1, 2, 1, 2, 3, 2, 2, 1, 1, 1, 1, 0, 1, 1, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 55 |
| 2-3 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 55 |
| 4 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 55 |
| 5-7 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 55 |
| 8-9 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 55 |
| 10 | Di chuyển hướng 2 (`2`) | (18, 8) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 55 |
| 11-13 | Di chuyển hướng 3 (`3`) | (19, 8) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 55 |
| 14 | Di chuyển hướng 2 (`2`) | (20, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 55 |
| 15-16 | Di chuyển hướng 2 (`2`) | (21, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 55 |
| 17-19 | Di chuyển hướng 1 (`1`) | (22, 9) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 55 |
| 20-21 | Di chuyển hướng 1 (`1`) | (22, 8) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 55 |
| 22 | Di chuyển hướng 1 (`1`) | (23, 7) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 55 |
| 23-24 | Di chuyển hướng 1 (`1`) | (23, 6) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 55 |
| 25 | Di chuyển hướng 0 (`0`) | (24, 5) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 55 |
| 26-27 | Di chuyển hướng 1 (`1`) | (23, 4) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 55 |
| 28-29 | Di chuyển hướng 1 (`1`) | (24, 3) | (24, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 55 |
| 30-47 | Chờ 18 bước (`-18`) | (24, 2) | (24, 2) | Dự kiến đứng yên tại (24, 2); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 55 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (6, 22) (ô=556)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(22, 8))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(22, 8))
- Mảng hành động đã gửi server: `[1, 2, 1, 2, 1, 1, 2, 2, 2, 1, 0, 1, 1, 1, 2, 2, 2, 1, 1, 2, 2, 1, 1, 1, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (6, 22) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 55 |
| 2-3 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 55 |
| 4-6 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 55 |
| 7-9 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 55 |
| 10 | Di chuyển hướng 1 (`1`) | (9, 20) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 55 |
| 11-12 | Di chuyển hướng 1 (`1`) | (10, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 55 |
| 13-15 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 55 |
| 16 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 55 |
| 17 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 55 |
| 18 | Di chuyển hướng 1 (`1`) | (13, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 55 |
| 19 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 55 |
| 20-21 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 55 |
| 22 | Di chuyển hướng 1 (`1`) | (14, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 55 |
| 23 | Di chuyển hướng 1 (`1`) | (14, 14) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 55 |
| 24-25 | Di chuyển hướng 2 (`2`) | (15, 13) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 55 |
| 26-27 | Di chuyển hướng 2 (`2`) | (16, 13) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 55 |
| 28-29 | Di chuyển hướng 2 (`2`) | (17, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 55 |
| 30-32 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 55 |
| 33-34 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 55 |
| 35 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 55 |
| 36 | Di chuyển hướng 2 (`2`) | (20, 11) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 55 |
| 37 | Di chuyển hướng 1 (`1`) | (21, 11) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 55 |
| 38-39 | Di chuyển hướng 1 (`1`) | (21, 10) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 55 |
| 40-42 | Di chuyển hướng 1 (`1`) | (22, 9) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 55 |
| 43-47 | Chờ 5 bước (`-5`) | (22, 8) | (22, 8) | Dự kiến đứng yên tại (22, 8); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 55 |

