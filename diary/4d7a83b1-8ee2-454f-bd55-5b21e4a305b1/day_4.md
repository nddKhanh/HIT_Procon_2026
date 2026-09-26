# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 58
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #1 | #7 | (16, 5) | 54 | 55 |
| 3 | #1 | #7 | (15, 5) | 53 | 55 |
| 30 | #0 | #7 | (8, 16) | 15 | 55 |
| 31 | #4 | #6 | (15, 14) | 0 | 55 |
| 32 | #0 | #7 | (8, 17) | 54 | 55 |
| 32 | #3 | #7 | (8, 17) | 0 | 55 |
| 34 | #0 | #7 | (7, 17) | 54 | 55 |
| 36 | #0 | #7 | (6, 17) | 54 | 55 |
| 39 | #0 | #7 | (5, 18) | 53 | 55 |
| 40 | #0 | #7 | (4, 18) | 53 | 55 |
| 42 | #0 | #7 | (3, 18) | 54 | 55 |
| 44 | #0 | #7 | (2, 18) | 54 | 55 |
| 46 | #0 | #7 | (1, 18) | 54 | 55 |
| 48 | #0 | #7 | (0, 18) | 54 | 55 |
| 50 | #0 | #7 | (0, 17) | 54 | 55 |
| 52 | #0 | #7 | (0, 16) | 54 | 55 |
| 55 | #0 | #7 | (1, 16) | 53 | 55 |
| 57 | #0 | #7 | (2, 15) | 54 | 55 |
| 57 | #5 | #6 | (9, 2) | 5 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (15, 13) (ô=340)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 15)
- Mảng hành động đã gửi server: `[4, 1, 0, 1, 1, 4, 4, 4, 4, 5, 4, 4, 5, 5, 5, 4, 5, 5, 4, 5, 5, 5, 5, 5, 0, 1, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 36 |
| 2-3 | Di chuyển hướng 1 (`1`) | (14, 14) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 34 |
| 4-5 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 33 |
| 6-7 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 32 |
| 8-9 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 31 |
| 10-11 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 30 |
| 12-13 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 29 |
| 14-15 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 28 |
| 16-18 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 26 |
| 19-21 | Di chuyển hướng 5 (`5`) | (13, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 24 |
| 22 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 22 |
| 23 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 20 |
| 24 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 18 |
| 25-27 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 16 |
| 28-29 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 55 |
| 30-31 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 55 |
| 32-33 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 55 |
| 34-35 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 55 |
| 36-38 | Di chuyển hướng 4 (`4`) | (6, 17) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 55 |
| 39 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 55 |
| 40-41 | Di chuyển hướng 5 (`5`) | (4, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 55 |
| 42-43 | Di chuyển hướng 5 (`5`) | (3, 18) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 55 |
| 44-45 | Di chuyển hướng 5 (`5`) | (2, 18) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 55 |
| 46-47 | Di chuyển hướng 5 (`5`) | (1, 18) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 55 |
| 48-49 | Di chuyển hướng 0 (`0`) | (0, 18) | (0, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 17)) | 55 |
| 50-51 | Di chuyển hướng 1 (`1`) | (0, 17) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 55 |
| 52-54 | Di chuyển hướng 2 (`2`) | (0, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 55 |
| 55-56 | Di chuyển hướng 1 (`1`) | (1, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 55 |
| 57 | Chờ 1 bước (`-1`) | (2, 15) | (2, 15) | Dự kiến đứng yên tại (2, 15); hướng tới tọa độ (2, 15) | 55 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (17, 5) (ô=142)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(5, 8))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(5, 8))
- Mảng hành động đã gửi server: `[5, 5, 0, 5, 5, 5, 5, 5, 0, 0, 5, 5, 5, 5, 5, 5, 5, 0, 0, 3, 3, 2, 2, 3, 3, 3, 3, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (17, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 55 |
| 2 | Di chuyển hướng 5 (`5`) | (16, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 55 |
| 3-5 | Di chuyển hướng 0 (`0`) | (15, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 53 |
| 6 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 51 |
| 7-9 | Di chuyển hướng 5 (`5`) | (13, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 49 |
| 10 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 47 |
| 11 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 45 |
| 12 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 43 |
| 13-14 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 42 |
| 15-16 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 41 |
| 17-18 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 40 |
| 19-21 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 38 |
| 22-23 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 37 |
| 24-25 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 36 |
| 26 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 34 |
| 27-28 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 33 |
| 29-30 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 32 |
| 31-33 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 30 |
| 34-35 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 29 |
| 36-37 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 28 |
| 38-39 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 27 |
| 40-42 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 25 |
| 43-44 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 24 |
| 45-46 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 23 |
| 47-49 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 21 |
| 50-52 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 19 |
| 53-54 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 18 |
| 55-56 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 17 |
| 57 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 8)) | 15 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (15, 3) (ô=90)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(22, 8))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(22, 8))
- Mảng hành động đã gửi server: `[5, 0, 0, 5, 4, 2, 2, 3, 2, 2, 2, 3, 2, 1, 1, 1, 1, 2, 2, 3, 3, 2, 4, 3, 4, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (15, 3) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 43 |
| 3-4 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 42 |
| 5-6 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 1)) | 41 |
| 7-8 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 40 |
| 9 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 38 |
| 10-11 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 37 |
| 12 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 35 |
| 13-14 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 34 |
| 15-16 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 33 |
| 17-19 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 31 |
| 20 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(17, 3)) | 29 |
| 21-22 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 28 |
| 23-24 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 27 |
| 25 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 25 |
| 26-29 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 23 |
| 30-31 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 22 |
| 32 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(20, 0)) | 20 |
| 33-34 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 19 |
| 35-36 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 18 |
| 37 | Di chuyển hướng 3 (`3`) | (22, 0) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 16 |
| 38-39 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 15 |
| 40-41 | Di chuyển hướng 2 (`2`) | (23, 2) | (24, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 14 |
| 42-43 | Di chuyển hướng 4 (`4`) | (24, 2) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 13 |
| 44-45 | Di chuyển hướng 3 (`3`) | (24, 3) | (24, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(24, 4)) | 12 |
| 46-47 | Di chuyển hướng 4 (`4`) | (24, 4) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 11 |
| 48-51 | Di chuyển hướng 4 (`4`) | (24, 5) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 9 |
| 52-53 | Di chuyển hướng 4 (`4`) | (23, 6) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 8 |
| 54-57 | Di chuyển hướng 4 (`4`) | (23, 7) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 6 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (12, 16) (ô=412)
- Nhiên liệu đầu ngày: 8
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 17)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 4, -22, 3, 2, 2, 2, 2, 3, 2, 3, 3, 1, 1, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 6 |
| 3 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 4 |
| 4-6 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 2 |
| 7-8 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 1 |
| 9-10 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 0 |
| 11-32 | Chờ 22 bước (`-22`) | (8, 17) | (8, 17) | Dự kiến đứng yên tại (8, 17); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 55 |
| 33-34 | Di chuyển hướng 3 (`3`) | (8, 17) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 54 |
| 35-36 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 53 |
| 37-38 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 52 |
| 39-41 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 50 |
| 42 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 48 |
| 43 | Di chuyển hướng 3 (`3`) | (12, 18) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 46 |
| 44-45 | Di chuyển hướng 2 (`2`) | (13, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 45 |
| 46 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 43 |
| 47-49 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(15, 21)) | 41 |
| 50-51 | Di chuyển hướng 1 (`1`) | (15, 21) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 40 |
| 52 | Di chuyển hướng 1 (`1`) | (15, 20) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 38 |
| 53-55 | Di chuyển hướng 0 (`0`) | (16, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 36 |
| 56-57 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 35 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (14, 20) (ô=514)
- Nhiên liệu đầu ngày: 13
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 21)
- Mảng hành động đã gửi server: `[0, 5, 0, 1, 1, 2, 1, 1, -15, 1, 2, 2, 2, 3, 3, 3, 2, 3, 4, 4, 4, 3, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 11 |
| 3 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 9 |
| 4-5 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 8 |
| 6 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 6 |
| 7-9 | Di chuyển hướng 1 (`1`) | (13, 17) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 4 |
| 10-11 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 3 |
| 12-14 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 1 |
| 15-16 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 0 |
| 17-31 | Chờ 15 bước (`-15`) | (15, 14) | (15, 14) | Dự kiến đứng yên tại (15, 14); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 55 |
| 32-33 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 54 |
| 34-35 | Di chuyển hướng 2 (`2`) | (16, 13) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 53 |
| 36-37 | Di chuyển hướng 2 (`2`) | (17, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 52 |
| 38-40 | Di chuyển hướng 2 (`2`) | (18, 13) | (19, 13) | Dự kiến đến điểm hẹn tọa độ (19, 13) | 50 |
| 41 | Di chuyển hướng 3 (`3`) | (19, 13) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 48 |
| 42-43 | Di chuyển hướng 3 (`3`) | (19, 14) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 47 |
| 44-46 | Di chuyển hướng 3 (`3`) | (20, 15) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 45 |
| 47 | Di chuyển hướng 2 (`2`) | (20, 16) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 43 |
| 48-49 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 42 |
| 50-51 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 41 |
| 52 | Di chuyển hướng 4 (`4`) | (21, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 39 |
| 53 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 37 |
| 54-55 | Di chuyển hướng 3 (`3`) | (20, 20) | (21, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(21, 21)) | 36 |
| 56-57 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 35 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (22, 7) (ô=197)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 2)
- Mảng hành động đã gửi server: `[0, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 5, 4, 5, 5, 1, 1, 1, 1, 1, 1, 0, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (22, 7) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 44 |
| 3-5 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 42 |
| 6-8 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 40 |
| 9-10 | Di chuyển hướng 5 (`5`) | (20, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 39 |
| 11-12 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 38 |
| 13-15 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 36 |
| 16 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 34 |
| 17-18 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 33 |
| 19-21 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 31 |
| 22-24 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 29 |
| 25-26 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 28 |
| 27 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 26 |
| 28-29 | Di chuyển hướng 4 (`4`) | (11, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 25 |
| 30 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 23 |
| 31 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 21 |
| 32-33 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 20 |
| 34-35 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 19 |
| 36-38 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 9)) | 17 |
| 39-40 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 16 |
| 41-43 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 14 |
| 44-46 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 12 |
| 47-48 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 11 |
| 49 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 9 |
| 50-52 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 7 |
| 53-54 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 6 |
| 55-56 | Di chuyển hướng 2 (`2`) | (8, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 55 |
| 57 | Chờ 1 bước (`-1`) | (9, 2) | (9, 2) | Dự kiến đứng yên tại (9, 2); hướng tới tọa độ (9, 2) | 55 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (24, 2) (ô=74)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 2)
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 4, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (24, 2) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 55 |
| 2-3 | Di chuyển hướng 4 (`4`) | (24, 3) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 55 |
| 4-5 | Di chuyển hướng 5 (`5`) | (23, 4) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 55 |
| 6 | Di chuyển hướng 5 (`5`) | (22, 4) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 55 |
| 7-9 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 55 |
| 10-11 | Di chuyển hướng 5 (`5`) | (21, 5) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 55 |
| 12 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 55 |
| 13-15 | Di chuyển hướng 4 (`4`) | (19, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 55 |
| 16-17 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 55 |
| 18 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 55 |
| 19-20 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 55 |
| 21-23 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 55 |
| 24-26 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 55 |
| 27-28 | Di chuyển hướng 4 (`4`) | (16, 12) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 55 |
| 29-30 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 55 |
| 31-32 | Di chuyển hướng 0 (`0`) | (15, 14) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 55 |
| 33-34 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 55 |
| 35-36 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 55 |
| 37-39 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 55 |
| 40-42 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 55 |
| 43-44 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 55 |
| 45-47 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 55 |
| 48 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 55 |
| 49-50 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 55 |
| 51 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 55 |
| 52 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 55 |
| 53-55 | Di chuyển hướng 0 (`0`) | (10, 3) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 55 |
| 56-57 | Chờ 2 bước (`-2`) | (9, 2) | (9, 2) | Dự kiến đứng yên tại (9, 2); hướng tới tọa độ (9, 2) | 55 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (17, 5) (ô=142)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 15)
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 4, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 4, 5, 5, 4, 5, 5, 5, 5, 5, 0, 1, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (17, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 55 |
| 2 | Di chuyển hướng 5 (`5`) | (16, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 55 |
| 3-5 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 55 |
| 6-7 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 55 |
| 8-10 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 55 |
| 11-12 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 55 |
| 13 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 55 |
| 14-16 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 55 |
| 17-18 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 55 |
| 19-20 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 55 |
| 21-23 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 55 |
| 24 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 55 |
| 25-26 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 55 |
| 27 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 55 |
| 28-29 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 55 |
| 30-31 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 55 |
| 32-33 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 55 |
| 34-35 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 55 |
| 36-38 | Di chuyển hướng 4 (`4`) | (6, 17) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 55 |
| 39 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 55 |
| 40-41 | Di chuyển hướng 5 (`5`) | (4, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 55 |
| 42-43 | Di chuyển hướng 5 (`5`) | (3, 18) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 55 |
| 44-45 | Di chuyển hướng 5 (`5`) | (2, 18) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 55 |
| 46-47 | Di chuyển hướng 5 (`5`) | (1, 18) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 55 |
| 48-49 | Di chuyển hướng 0 (`0`) | (0, 18) | (0, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 17)) | 55 |
| 50-51 | Di chuyển hướng 1 (`1`) | (0, 17) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 55 |
| 52-54 | Di chuyển hướng 2 (`2`) | (0, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 55 |
| 55-56 | Di chuyển hướng 1 (`1`) | (1, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 55 |
| 57 | Chờ 1 bước (`-1`) | (2, 15) | (2, 15) | Dự kiến đứng yên tại (2, 15); hướng tới tọa độ (2, 15) | 55 |

