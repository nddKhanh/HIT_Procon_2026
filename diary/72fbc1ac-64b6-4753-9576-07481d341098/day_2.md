# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 48
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 11) (ô=307)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(20, 0))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(20, 0))
- Mảng hành động đã gửi server: `[2, 3, 2, 1, 2, 1, 0, 0, 0, 5, 5, 0, -1, 5, 0, 5, 0, 0, 5, 2, 2, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (21, 11) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 15 |
| 2-4 | Di chuyển hướng 3 (`3`) | (22, 11) | (22, 12) | Dự kiến đến điểm hẹn tọa độ (22, 12) | 13 |
| 5 | Di chuyển hướng 2 (`2`) | (22, 12) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 11 |
| 6 | Di chuyển hướng 1 (`1`) | (23, 12) | (24, 11) | Dự kiến đến điểm hẹn tọa độ (24, 11) | 9 |
| 7-8 | Di chuyển hướng 2 (`2`) | (24, 11) | (25, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(25, 11)) | 8 |
| 9-10 | Di chuyển hướng 1 (`1`) | (25, 11) | (25, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(25, 10)) | 7 |
| 11-12 | Di chuyển hướng 0 (`0`) | (25, 10) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(25, 9)) | 6 |
| 13-14 | Di chuyển hướng 0 (`0`) | (25, 9) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 5 |
| 15-16 | Di chuyển hướng 0 (`0`) | (24, 8) | (24, 7) | Dự kiến đến điểm hẹn tọa độ (24, 7) | 4 |
| 17-18 | Di chuyển hướng 5 (`5`) | (24, 7) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 3 |
| 19-20 | Di chuyển hướng 5 (`5`) | (23, 7) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 2 |
| 21-22 | Di chuyển hướng 0 (`0`) | (22, 7) | (21, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(21, 6)) | 51 |
| 23 | Chờ 1 bước (`-1`) | (21, 6) | (21, 6) | Dự kiến đứng yên tại (21, 6); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(21, 6)) | 51 |
| 24-25 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 51 |
| 26-27 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 5)) | 50 |
| 28-29 | Di chuyển hướng 5 (`5`) | (20, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 5)) | 49 |
| 30-31 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 48 |
| 32-34 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 3)) | 46 |
| 35-36 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 3)) | 45 |
| 37-38 | Di chuyển hướng 2 (`2`) | (17, 3) | (18, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 3)) | 44 |
| 39-40 | Di chuyển hướng 2 (`2`) | (18, 3) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 43 |
| 41-42 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 42 |
| 43-45 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 40 |
| 46 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 0)) | 38 |
| 47 | Chờ 1 bước (`-1`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 0)) | 38 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (20, 1) (ô=46)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(24, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(24, 3)
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 3, 5, 0, 5, 0, 0, 5, 2, 2, 1, 1, 1, 2, 2, 2, 3, 3, 3, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (20, 1) | (20, 2) | Dự kiến đến điểm hẹn tọa độ (20, 2) | 48 |
| 1-2 | Di chuyển hướng 3 (`3`) | (20, 2) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 47 |
| 3-4 | Di chuyển hướng 3 (`3`) | (21, 3) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 46 |
| 5 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 44 |
| 6-8 | Di chuyển hướng 3 (`3`) | (21, 5) | (21, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(21, 6)) | 49 |
| 9-10 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 48 |
| 11-12 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 5)) | 47 |
| 13-14 | Di chuyển hướng 5 (`5`) | (20, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 5)) | 46 |
| 15-16 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 45 |
| 17-19 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 3)) | 43 |
| 20-21 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 3)) | 42 |
| 22-23 | Di chuyển hướng 2 (`2`) | (17, 3) | (18, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 3)) | 41 |
| 24-25 | Di chuyển hướng 2 (`2`) | (18, 3) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 40 |
| 26-27 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 39 |
| 28-30 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 37 |
| 31 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 0)) | 35 |
| 32-33 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 34 |
| 34-36 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 32 |
| 37-38 | Di chuyển hướng 2 (`2`) | (22, 0) | (23, 0) | Dự kiến đến điểm hẹn tọa độ (23, 0) | 31 |
| 39 | Di chuyển hướng 3 (`3`) | (23, 0) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 29 |
| 40 | Di chuyển hướng 3 (`3`) | (24, 1) | (24, 2) | Dự kiến đến điểm hẹn tọa độ (24, 2) | 27 |
| 41-43 | Di chuyển hướng 3 (`3`) | (24, 2) | (25, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(25, 3)) | 25 |
| 44-45 | Di chuyển hướng 5 (`5`) | (25, 3) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 24 |
| 46-47 | Chờ 2 bước (`-2`) | (24, 3) | (24, 3) | Dự kiến đứng yên tại (24, 3); hướng tới tọa độ (24, 3) | 24 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (25, 4) (ô=129)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 14)
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 3, 3, 4, 5, 4, 5, 0, 5, 3, 3, 3, 4, 4, 0, 0, 5, 5, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (25, 4) | (25, 5) | Dự kiến đến điểm hẹn tọa độ (25, 5) | 40 |
| 2-4 | Di chuyển hướng 3 (`3`) | (25, 5) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 38 |
| 5 | Di chuyển hướng 4 (`4`) | (25, 6) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 36 |
| 6-8 | Di chuyển hướng 4 (`4`) | (25, 7) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 34 |
| 9-10 | Di chuyển hướng 3 (`3`) | (24, 8) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(25, 9)) | 33 |
| 11-12 | Di chuyển hướng 3 (`3`) | (25, 9) | (25, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(25, 10)) | 32 |
| 13-14 | Di chuyển hướng 4 (`4`) | (25, 10) | (25, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(25, 11)) | 31 |
| 15-16 | Di chuyển hướng 5 (`5`) | (25, 11) | (24, 11) | Dự kiến đến điểm hẹn tọa độ (24, 11) | 30 |
| 17-18 | Di chuyển hướng 4 (`4`) | (24, 11) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 29 |
| 19 | Di chuyển hướng 5 (`5`) | (23, 12) | (22, 12) | Dự kiến đến điểm hẹn tọa độ (22, 12) | 27 |
| 20 | Di chuyển hướng 0 (`0`) | (22, 12) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 25 |
| 21-23 | Di chuyển hướng 5 (`5`) | (22, 11) | (21, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(21, 11)) | 23 |
| 24-25 | Di chuyển hướng 3 (`3`) | (21, 11) | (21, 12) | Dự kiến đến điểm hẹn tọa độ (21, 12) | 22 |
| 26-28 | Di chuyển hướng 3 (`3`) | (21, 12) | (22, 13) | Dự kiến đến điểm hẹn tọa độ (22, 13) | 20 |
| 29-30 | Di chuyển hướng 3 (`3`) | (22, 13) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 19 |
| 31 | Di chuyển hướng 4 (`4`) | (22, 14) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 17 |
| 32-34 | Di chuyển hướng 4 (`4`) | (22, 15) | (21, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(21, 16)) | 15 |
| 35-36 | Di chuyển hướng 0 (`0`) | (21, 16) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 14 |
| 37-38 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 13 |
| 39-40 | Di chuyển hướng 5 (`5`) | (20, 14) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 12 |
| 41-43 | Di chuyển hướng 5 (`5`) | (19, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 10 |
| 44-45 | Di chuyển hướng 5 (`5`) | (18, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 9 |
| 46-47 | Chờ 2 bước (`-2`) | (17, 14) | (17, 14) | Dự kiến đứng yên tại (17, 14); hướng tới tọa độ (17, 14) | 9 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 9) (ô=237)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(0, 12))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(0, 12))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 2, 2, 3, 2, -1, 3, 3, 4, 3, 3, 4, 5, 4, 5, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (3, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 16 |
| 2-4 | Di chuyển hướng 0 (`0`) | (2, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 14 |
| 5-7 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 12 |
| 8-10 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 10 |
| 11-13 | Di chuyển hướng 5 (`5`) | (1, 5) | (0, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 5)) | 8 |
| 14-15 | Di chuyển hướng 2 (`2`) | (0, 5) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 7 |
| 16-18 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 5 |
| 19 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 3 |
| 20-21 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(3, 6)) | 51 |
| 22 | Chờ 1 bước (`-1`) | (3, 6) | (3, 6) | Dự kiến đứng yên tại (3, 6); mục tiêu Spot #25 (thương hiệu=25, tọa độ=(3, 6)) | 51 |
| 23-24 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 50 |
| 25-26 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 49 |
| 27-29 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 47 |
| 30-31 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 46 |
| 32 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 44 |
| 33-35 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 42 |
| 36-37 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 12)) | 41 |
| 38-39 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 40 |
| 40-42 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 38 |
| 43-44 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 37 |
| 45-46 | Di chuyển hướng 5 (`5`) | (1, 12) | (0, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(0, 12)) | 36 |
| 47 | Chờ 1 bước (`-1`) | (0, 12) | (0, 12) | Dự kiến đứng yên tại (0, 12); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(0, 12)) | 36 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (10, 16) (ô=426)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 4)
- Mảng hành động đã gửi server: `[2, 2, 3, 2, 2, 0, 0, 0, 1, 0, 0, 0, 0, 5, 1, 1, 1, 0, 1, -6, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 34 |
| 3-4 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 33 |
| 5-6 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 32 |
| 7 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 30 |
| 8-10 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(15, 17)) | 28 |
| 11-12 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 27 |
| 13-15 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 25 |
| 16 | Di chuyển hướng 0 (`0`) | (14, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 23 |
| 17 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 21 |
| 18-20 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 19 |
| 21-23 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 17 |
| 24 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 15 |
| 25-26 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 14 |
| 27 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 12 |
| 28-29 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 11 |
| 30-31 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 7)) | 10 |
| 32-33 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 9 |
| 34-35 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 8 |
| 36-38 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(12, 4)) | 6 |
| 39-44 | Chờ 6 bước (`-6`) | (12, 4) | (12, 4) | Dự kiến đứng yên tại (12, 4); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(12, 4)) | 51 |
| 45-46 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 51 |
| 47 | Chờ 1 bước (`-1`) | (11, 4) | (11, 4) | Dự kiến đứng yên tại (11, 4); hướng tới tọa độ (11, 4) | 51 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (7, 14) (ô=371)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 1)
- Mảng hành động đã gửi server: `[5, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(6, 14)) | 49 |
| 3-4 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 48 |
| 5 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 51 |
| 6-8 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 51 |
| 9-11 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 51 |
| 12-14 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 49 |
| 15 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 47 |
| 16-17 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 46 |
| 18-20 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 44 |
| 21-23 | Di chuyển hướng 0 (`0`) | (3, 7) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 42 |
| 24-25 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 41 |
| 26 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 39 |
| 27-28 | Di chuyển hướng 0 (`0`) | (1, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 38 |
| 29-30 | Di chuyển hướng 0 (`0`) | (1, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 37 |
| 31 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 1)) | 35 |
| 32-33 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đến điểm hẹn tọa độ (0, 0) | 34 |
| 34-36 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 32 |
| 37 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 30 |
| 38-40 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 28 |
| 41 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 26 |
| 42-44 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 0)) | 24 |
| 45-46 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 51 |
| 47 | Chờ 1 bước (`-1`) | (6, 1) | (6, 1) | Dự kiến đứng yên tại (6, 1); hướng tới tọa độ (6, 1) | 51 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (7, 14) (ô=371)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 1)
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 2, 1, 0, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (7, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 51 |
| 3 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 51 |
| 4-6 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 51 |
| 7-9 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 51 |
| 10-12 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 51 |
| 13 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 51 |
| 14-15 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 51 |
| 16-18 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 51 |
| 19-20 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(3, 6)) | 51 |
| 21-22 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 51 |
| 23-24 | Di chuyển hướng 1 (`1`) | (4, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 51 |
| 25-27 | Di chuyển hướng 1 (`1`) | (4, 4) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 51 |
| 28-30 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 51 |
| 31-32 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 51 |
| 33-35 | Di chuyển hướng 0 (`0`) | (6, 2) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 51 |
| 36-47 | Chờ 12 bước (`-12`) | (6, 1) | (6, 1) | Dự kiến đứng yên tại (6, 1); hướng tới tọa độ (6, 1) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (20, 0) (ô=20)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 4)
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 4, 3, -12, 5, 5, 0, 5, 0, 5, 5, 4, 5, 0, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (20, 0) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 51 |
| 2 | Di chuyển hướng 3 (`3`) | (20, 1) | (20, 2) | Dự kiến đến điểm hẹn tọa độ (20, 2) | 51 |
| 3-4 | Di chuyển hướng 3 (`3`) | (20, 2) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 51 |
| 5-6 | Di chuyển hướng 3 (`3`) | (21, 3) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 51 |
| 7 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 51 |
| 8-10 | Di chuyển hướng 3 (`3`) | (21, 5) | (21, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(21, 6)) | 51 |
| 11-22 | Chờ 12 bước (`-12`) | (21, 6) | (21, 6) | Dự kiến đứng yên tại (21, 6); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(21, 6)) | 51 |
| 23-24 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 51 |
| 25-26 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 51 |
| 27 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 5)) | 51 |
| 28-29 | Di chuyển hướng 5 (`5`) | (19, 5) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 51 |
| 30-31 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 51 |
| 32 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 51 |
| 33-34 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 51 |
| 35-36 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 51 |
| 37-39 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 51 |
| 40-42 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 51 |
| 43-44 | Di chuyển hướng 5 (`5`) | (13, 4) | (12, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(12, 4)) | 51 |
| 45-46 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 51 |
| 47 | Chờ 1 bước (`-1`) | (11, 4) | (11, 4) | Dự kiến đứng yên tại (11, 4); hướng tới tọa độ (11, 4) | 51 |

