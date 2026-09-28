# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 65
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 4 | #1 | #5 | (5, 5) | 57 | 61 |
| 6 | #1 | #5 | (5, 4) | 60 | 61 |
| 8 | #1 | #5 | (6, 4) | 60 | 61 |
| 10 | #1 | #5 | (7, 4) | 60 | 61 |
| 12 | #1 | #5 | (8, 3) | 60 | 61 |
| 18 | #0 | #5 | (9, 1) | 0 | 61 |
| 21 | #0 | #5 | (8, 2) | 60 | 61 |
| 23 | #0 | #5 | (8, 3) | 60 | 61 |
| 25 | #0 | #5 | (7, 4) | 60 | 61 |
| 27 | #0 | #5 | (6, 4) | 60 | 61 |
| 29 | #0 | #5 | (5, 4) | 60 | 61 |
| 38 | #4 | #5 | (1, 4) | 1 | 61 |
| 46 | #0 | #5 | (1, 4) | 48 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 1) (ô=22)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 3)
- Mảng hành động đã gửi server: `[1, 3, 2, 2, 2, 2, 2, 2, -1, 4, 4, 4, 5, 5, 4, 4, 4, 5, 5, 4, 1, 0, 0, 1, 2, 2, 1, 1, 2, 2, 3, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 0)) | 9 |
| 2-3 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 1)) | 8 |
| 4-5 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 7 |
| 6-7 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 6 |
| 8-10 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 1)) | 4 |
| 11-12 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 3 |
| 13-14 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 2 |
| 15-17 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(9, 1)) | 61 |
| 18 | Chờ 1 bước (`-1`) | (9, 1) | (9, 1) | Dự kiến đứng yên tại (9, 1); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(9, 1)) | 61 |
| 19-20 | Di chuyển hướng 4 (`4`) | (9, 1) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 61 |
| 21-22 | Di chuyển hướng 4 (`4`) | (8, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 61 |
| 23-24 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 61 |
| 25-26 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 61 |
| 27-28 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 61 |
| 29-30 | Di chuyển hướng 4 (`4`) | (5, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 60 |
| 31-32 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 59 |
| 33-34 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 7)) | 58 |
| 35-36 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 57 |
| 37-38 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 56 |
| 39 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 8)) | 54 |
| 40-41 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 53 |
| 42 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 51 |
| 43-44 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 50 |
| 45 | Di chuyển hướng 1 (`1`) | (1, 5) | (1, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 4)) | 61 |
| 46-47 | Di chuyển hướng 2 (`2`) | (1, 4) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 60 |
| 48-50 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 58 |
| 51-53 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 56 |
| 54 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 54 |
| 55-56 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 53 |
| 57-58 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=4, tọa độ=(6, 2)) | 52 |
| 59-60 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 51 |
| 61-62 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 50 |
| 63-64 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 49 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (3, 6) (ô=123)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 14)
- Mảng hành động đã gửi server: `[1, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 3, 3, 3, 2, 3, 3, 3, 4, 4, 5, 4, 4, 5, 5, 5, 5, 4, 5, 4, 4, 0, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 59 |
| 2 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 57 |
| 3-4 | Di chuyển hướng 1 (`1`) | (5, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 60 |
| 5-6 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 60 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 60 |
| 9-10 | Di chuyển hướng 1 (`1`) | (7, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 60 |
| 11-12 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 60 |
| 13-14 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 59 |
| 15 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 57 |
| 16-18 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 55 |
| 19-20 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 54 |
| 21-22 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 53 |
| 23-24 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 52 |
| 25 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 50 |
| 26-27 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 49 |
| 28-29 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 48 |
| 30-32 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 46 |
| 33-34 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 45 |
| 35 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 43 |
| 36-38 | Di chuyển hướng 4 (`4`) | (16, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 41 |
| 39 | Di chuyển hướng 5 (`5`) | (16, 11) | (15, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 11)) | 39 |
| 40-41 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 38 |
| 42-43 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 37 |
| 44-45 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 36 |
| 46-47 | Di chuyển hướng 5 (`5`) | (13, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 35 |
| 48-49 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 34 |
| 50-51 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 33 |
| 52-53 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 31 |
| 54 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 29 |
| 55 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 27 |
| 56-57 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(7, 16)) | 26 |
| 58-59 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 25 |
| 60-61 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=1, tọa độ=(6, 15)) | 24 |
| 62-63 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 23 |
| 64 | Chờ 1 bước (`-1`) | (5, 14) | (5, 14) | Dự kiến đứng yên tại (5, 14); hướng tới tọa độ (5, 14) | 23 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (16, 7) (ô=156)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=0, tọa độ=(19, 17))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=0, tọa độ=(19, 17))
- Mảng hành động đã gửi server: `[3, 3, 4, 4, 5, 2, 2, 1, 4, 4, 3, 3, 3, 3, 3, -37]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 19 |
| 3-4 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 18 |
| 5 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 16 |
| 6-8 | Di chuyển hướng 4 (`4`) | (16, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 14 |
| 9 | Di chuyển hướng 5 (`5`) | (16, 11) | (15, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 11)) | 12 |
| 10-11 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 11 |
| 12 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 9 |
| 13-14 | Di chuyển hướng 1 (`1`) | (17, 11) | (17, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 10)) | 8 |
| 15-16 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 7 |
| 17-18 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 6 |
| 19 | Di chuyển hướng 3 (`3`) | (16, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 4 |
| 20-21 | Di chuyển hướng 3 (`3`) | (17, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 3 |
| 22-23 | Di chuyển hướng 3 (`3`) | (17, 14) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 2 |
| 24-25 | Di chuyển hướng 3 (`3`) | (18, 15) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 1 |
| 26-27 | Di chuyển hướng 3 (`3`) | (18, 16) | (19, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(19, 17)) | 0 |
| 28-64 | Chờ 37 bước (`-37`) | (19, 17) | (19, 17) | Dự kiến đứng yên tại (19, 17); mục tiêu Spot #15 (thương hiệu=0, tọa độ=(19, 17)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 16) (ô=325)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(11, 5))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(11, 5))
- Mảng hành động đã gửi server: `[1, 0, 1, 0, 2, 3, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 0, 0, 0, 0, 0, 5, 5, 5, 5, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=1, tọa độ=(6, 15)) | 36 |
| 2-3 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 35 |
| 4-5 | Di chuyển hướng 1 (`1`) | (5, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 34 |
| 6-7 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 33 |
| 8-9 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 32 |
| 10-11 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 31 |
| 12 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 29 |
| 13-14 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 27 |
| 15-16 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 26 |
| 17-18 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 24 |
| 19-20 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 23 |
| 21-22 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(12, 11)) | 22 |
| 23-24 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 21 |
| 25-26 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 20 |
| 27-28 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 11)) | 19 |
| 29-30 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 18 |
| 31 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 16 |
| 32-33 | Di chuyển hướng 1 (`1`) | (17, 11) | (17, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 10)) | 15 |
| 34-35 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 14 |
| 36 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 12 |
| 37-38 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 11 |
| 39-41 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 9 |
| 42-43 | Di chuyển hướng 0 (`0`) | (15, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 8 |
| 44-45 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 7 |
| 46 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 5 |
| 47-48 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 4 |
| 49-50 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 5)) | 3 |
| 51-64 | Chờ 14 bước (`-14`) | (11, 5) | (11, 5) | Dự kiến đứng yên tại (11, 5); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 5)) | 3 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (1, 4) (ô=81)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 1)
- Mảng hành động đã gửi server: `[-38, 3, 3, 4, 4, 1, 2, 2, 0, 1, 1, 0, 0, 0, 0, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-37 | Chờ 38 bước (`-38`) | (1, 4) | (1, 4) | Dự kiến đứng yên tại (1, 4); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 4)) | 61 |
| 38-39 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 60 |
| 40-41 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 59 |
| 42 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 57 |
| 43 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 8)) | 55 |
| 44-45 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 54 |
| 46 | Di chuyển hướng 2 (`2`) | (2, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 52 |
| 47-48 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 7)) | 51 |
| 49-50 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 50 |
| 51-52 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 49 |
| 53 | Di chuyển hướng 1 (`1`) | (4, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 47 |
| 54-55 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 46 |
| 56 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 44 |
| 57-58 | Di chuyển hướng 0 (`0`) | (3, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 1)) | 43 |
| 59-60 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 0)) | 42 |
| 61-62 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 41 |
| 63-64 | Di chuyển hướng 3 (`3`) | (3, 0) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 40 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (4, 7) (ô=144)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(1, 4))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(1, 4))
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 2, 1, 1, 1, -2, 4, 4, 4, 5, 5, 5, 5, 5, 5, -27]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 61 |
| 2-3 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 61 |
| 4-5 | Di chuyển hướng 1 (`1`) | (5, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 61 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 61 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 61 |
| 10-11 | Di chuyển hướng 1 (`1`) | (7, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 61 |
| 12-13 | Di chuyển hướng 1 (`1`) | (8, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 61 |
| 14-15 | Di chuyển hướng 1 (`1`) | (8, 2) | (9, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(9, 1)) | 61 |
| 16-17 | Chờ 2 bước (`-2`) | (9, 1) | (9, 1) | Dự kiến đứng yên tại (9, 1); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(9, 1)) | 61 |
| 18-19 | Di chuyển hướng 4 (`4`) | (9, 1) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 61 |
| 20-21 | Di chuyển hướng 4 (`4`) | (8, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 61 |
| 22-23 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 61 |
| 24-25 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 61 |
| 26-27 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 61 |
| 28-29 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 61 |
| 30-31 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 61 |
| 32-34 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 61 |
| 35-37 | Di chuyển hướng 5 (`5`) | (2, 4) | (1, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 4)) | 61 |
| 38-64 | Chờ 27 bước (`-27`) | (1, 4) | (1, 4) | Dự kiến đứng yên tại (1, 4); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 4)) | 61 |

