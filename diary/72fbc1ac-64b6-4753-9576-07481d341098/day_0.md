# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 44
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 6) (ô=168)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(12, 4))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(12, 4))
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 2, 2, 1, 1, 4, 4, 5, 5, 5, 5, 5, 5, 4, 4, 1, 1, 1, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 50 |
| 2 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 48 |
| 3 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 46 |
| 4-5 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 45 |
| 6 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 43 |
| 7 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 41 |
| 8-10 | Di chuyển hướng 1 (`1`) | (18, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 49 |
| 11-13 | Di chuyển hướng 1 (`1`) | (18, 6) | (19, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 5)) | 47 |
| 14-15 | Di chuyển hướng 4 (`4`) | (19, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 46 |
| 16-18 | Di chuyển hướng 4 (`4`) | (18, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 44 |
| 19-21 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 42 |
| 22 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 40 |
| 23 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 38 |
| 24-25 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 37 |
| 26 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 35 |
| 27 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 7)) | 33 |
| 28-29 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 32 |
| 30-31 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 31 |
| 32-33 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 30 |
| 34-35 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 7)) | 29 |
| 36-37 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 28 |
| 38-39 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 27 |
| 40-42 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(12, 4)) | 51 |
| 43 | Chờ 1 bước (`-1`) | (12, 4) | (12, 4) | Dự kiến đứng yên tại (12, 4); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(12, 4)) | 51 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (16, 13) (ô=354)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(25, 11))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(25, 11))
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 1, 2, 1, 1, 1, 5, 0, 4, 3, 3, 3, 4, 3, 2, 3, 2, 1, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 50 |
| 2-3 | Di chuyển hướng 1 (`1`) | (16, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 49 |
| 4-5 | Di chuyển hướng 1 (`1`) | (17, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 48 |
| 6-7 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 47 |
| 8-10 | Di chuyển hướng 1 (`1`) | (18, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 45 |
| 11-12 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 44 |
| 13-14 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 43 |
| 15-16 | Di chuyển hướng 1 (`1`) | (20, 8) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 42 |
| 17-18 | Di chuyển hướng 1 (`1`) | (21, 7) | (21, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(21, 6)) | 41 |
| 19-20 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 40 |
| 21-22 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 5)) | 39 |
| 23-24 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 38 |
| 25 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 36 |
| 26 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 34 |
| 27-28 | Di chuyển hướng 3 (`3`) | (20, 8) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 33 |
| 29-30 | Di chuyển hướng 4 (`4`) | (21, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 32 |
| 31-33 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(21, 11)) | 30 |
| 34-35 | Di chuyển hướng 2 (`2`) | (21, 11) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 29 |
| 36-38 | Di chuyển hướng 3 (`3`) | (22, 11) | (22, 12) | Dự kiến đến điểm hẹn tọa độ (22, 12) | 27 |
| 39 | Di chuyển hướng 2 (`2`) | (22, 12) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 25 |
| 40 | Di chuyển hướng 1 (`1`) | (23, 12) | (24, 11) | Dự kiến đến điểm hẹn tọa độ (24, 11) | 23 |
| 41-42 | Di chuyển hướng 2 (`2`) | (24, 11) | (25, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(25, 11)) | 22 |
| 43 | Chờ 1 bước (`-1`) | (25, 11) | (25, 11) | Dự kiến đứng yên tại (25, 11); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(25, 11)) | 22 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (19, 16) (ô=435)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 16)
- Mảng hành động đã gửi server: `[2, 2, 5, 5, 4, 5, 5, 5, 5, 5, 5, 0, 5, 5, 5, 4, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (19, 16) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 50 |
| 2-4 | Di chuyển hướng 2 (`2`) | (20, 16) | (21, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(21, 16)) | 48 |
| 5-6 | Di chuyển hướng 5 (`5`) | (21, 16) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 47 |
| 7-9 | Di chuyển hướng 5 (`5`) | (20, 16) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 45 |
| 10-11 | Di chuyển hướng 4 (`4`) | (19, 16) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 44 |
| 12-13 | Di chuyển hướng 5 (`5`) | (19, 17) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 43 |
| 14-16 | Di chuyển hướng 5 (`5`) | (18, 17) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 41 |
| 17-18 | Di chuyển hướng 5 (`5`) | (17, 17) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 40 |
| 19-21 | Di chuyển hướng 5 (`5`) | (16, 17) | (15, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(15, 17)) | 38 |
| 22-23 | Di chuyển hướng 5 (`5`) | (15, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 37 |
| 24-26 | Di chuyển hướng 5 (`5`) | (14, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 35 |
| 27 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 33 |
| 28-29 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 32 |
| 30-31 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 31 |
| 32-34 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 29 |
| 35-37 | Di chuyển hướng 4 (`4`) | (9, 16) | (9, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 17)) | 27 |
| 38-39 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 26 |
| 40-42 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 24 |
| 43 | Chờ 1 bước (`-1`) | (10, 16) | (10, 16) | Dự kiến đứng yên tại (10, 16); hướng tới tọa độ (10, 16) | 24 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 10) (ô=268)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 1)
- Mảng hành động đã gửi server: `[0, 5, 0, 5, 5, 0, 0, 5, 0, 5, 5, 1, 0, 1, 0, 1, 2, 2, 2, 2, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 50 |
| 2-3 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 49 |
| 4-5 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 48 |
| 6 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 46 |
| 7-9 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 51 |
| 10-12 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 49 |
| 13-14 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(3, 6)) | 48 |
| 15-16 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 47 |
| 17-18 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 46 |
| 19 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 44 |
| 20-22 | Di chuyển hướng 5 (`5`) | (1, 5) | (0, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 5)) | 42 |
| 23-24 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 41 |
| 25 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đến điểm hẹn tọa độ (0, 3) | 39 |
| 26 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 37 |
| 27 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 1)) | 35 |
| 28-29 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đến điểm hẹn tọa độ (0, 0) | 34 |
| 30-32 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 32 |
| 33 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 30 |
| 34-36 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 28 |
| 37 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 26 |
| 38-40 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 0)) | 24 |
| 41-42 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 51 |
| 43 | Chờ 1 bước (`-1`) | (6, 1) | (6, 1) | Dự kiến đứng yên tại (6, 1); hướng tới tọa độ (6, 1) | 51 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (22, 10) (ô=282)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(17, 3))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(17, 3))
- Mảng hành động đã gửi server: `[2, 2, 2, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 5, 5, 5, 4, 4, 4, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (22, 10) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 50 |
| 2-4 | Di chuyển hướng 2 (`2`) | (23, 10) | (24, 10) | Dự kiến đến điểm hẹn tọa độ (24, 10) | 48 |
| 5-6 | Di chuyển hướng 2 (`2`) | (24, 10) | (25, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(25, 10)) | 47 |
| 7-8 | Di chuyển hướng 0 (`0`) | (25, 10) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(25, 9)) | 46 |
| 9-10 | Di chuyển hướng 0 (`0`) | (25, 9) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 45 |
| 11-12 | Di chuyển hướng 1 (`1`) | (24, 8) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 44 |
| 13-15 | Di chuyển hướng 1 (`1`) | (25, 7) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 42 |
| 16 | Di chuyển hướng 0 (`0`) | (25, 6) | (25, 5) | Dự kiến đến điểm hẹn tọa độ (25, 5) | 40 |
| 17-19 | Di chuyển hướng 1 (`1`) | (25, 5) | (25, 4) | Dự kiến đến điểm hẹn tọa độ (25, 4) | 38 |
| 20-21 | Di chuyển hướng 0 (`0`) | (25, 4) | (25, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(25, 3)) | 37 |
| 22-23 | Di chuyển hướng 0 (`0`) | (25, 3) | (24, 2) | Dự kiến đến điểm hẹn tọa độ (24, 2) | 36 |
| 24-26 | Di chuyển hướng 0 (`0`) | (24, 2) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 34 |
| 27 | Di chuyển hướng 0 (`0`) | (24, 1) | (23, 0) | Dự kiến đến điểm hẹn tọa độ (23, 0) | 32 |
| 28 | Di chuyển hướng 5 (`5`) | (23, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 30 |
| 29-30 | Di chuyển hướng 5 (`5`) | (22, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 29 |
| 31-33 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 0)) | 27 |
| 34-35 | Di chuyển hướng 4 (`4`) | (20, 0) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 26 |
| 36 | Di chuyển hướng 4 (`4`) | (20, 1) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 24 |
| 37-39 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 22 |
| 40-41 | Di chuyển hướng 5 (`5`) | (19, 3) | (18, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 3)) | 21 |
| 42-43 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 3)) | 20 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (8, 8) (ô=216)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 12)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 0, 0, 5, 3, 3, 3, 3, 3, 4, 5, 4, 5, 0, 5, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 50 |
| 2-4 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 48 |
| 5 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 46 |
| 6-8 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 51 |
| 9-11 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 51 |
| 12-13 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(3, 6)) | 50 |
| 14-15 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 49 |
| 16-17 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 48 |
| 18-20 | Di chuyển hướng 3 (`3`) | (3, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 46 |
| 21-23 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 44 |
| 24-25 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 43 |
| 26 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 41 |
| 27-29 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 39 |
| 30-31 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 12)) | 38 |
| 32-33 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 37 |
| 34-36 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 35 |
| 37-38 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 34 |
| 39-40 | Di chuyển hướng 5 (`5`) | (1, 12) | (0, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(0, 12)) | 33 |
| 41-42 | Di chuyển hướng 2 (`2`) | (0, 12) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 32 |
| 43 | Chờ 1 bước (`-1`) | (1, 12) | (1, 12) | Dự kiến đứng yên tại (1, 12); hướng tới tọa độ (1, 12) | 32 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (22, 8) (ô=230)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(12, 4))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(12, 4))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (22, 8) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 51 |
| 2-3 | Di chuyển hướng 5 (`5`) | (22, 7) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 51 |
| 4-5 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 51 |
| 6 | Di chuyển hướng 5 (`5`) | (20, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 51 |
| 7-9 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 51 |
| 10-12 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 51 |
| 13 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 51 |
| 14 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 51 |
| 15-16 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 51 |
| 17 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 51 |
| 18-20 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 51 |
| 21-22 | Di chuyển hướng 5 (`5`) | (13, 4) | (12, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(12, 4)) | 51 |
| 23-43 | Chờ 21 bước (`-21`) | (12, 4) | (12, 4) | Dự kiến đứng yên tại (12, 4); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(12, 4)) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (4, 12) (ô=316)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 1)
- Mảng hành động đã gửi server: `[1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 51 |
| 2-4 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 51 |
| 5 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 51 |
| 6-7 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 51 |
| 8-10 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 51 |
| 11-12 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 51 |
| 13-14 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 51 |
| 15-17 | Di chuyển hướng 1 (`1`) | (5, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 51 |
| 18-20 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 51 |
| 21-22 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 51 |
| 23-25 | Di chuyển hướng 0 (`0`) | (6, 2) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 51 |
| 26-43 | Chờ 18 bước (`-18`) | (6, 1) | (6, 1) | Dự kiến đứng yên tại (6, 1); hướng tới tọa độ (6, 1) | 51 |

