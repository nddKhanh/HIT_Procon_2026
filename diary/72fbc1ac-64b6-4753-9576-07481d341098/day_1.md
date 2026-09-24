# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 46
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 4) (ô=116)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(21, 11))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(21, 11))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 3, 2, 3, 3, 1, 0, 5, 5, 4, 5, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 50 |
| 2-3 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 49 |
| 4-6 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 47 |
| 7 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 45 |
| 8-9 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 44 |
| 10 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 42 |
| 11 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 40 |
| 12-14 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 38 |
| 15-17 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 36 |
| 18 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 34 |
| 19-20 | Di chuyển hướng 2 (`2`) | (21, 7) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 33 |
| 21-22 | Di chuyển hướng 3 (`3`) | (22, 7) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 32 |
| 23-24 | Di chuyển hướng 3 (`3`) | (22, 8) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 31 |
| 25 | Di chuyển hướng 2 (`2`) | (23, 9) | (24, 9) | Dự kiến đến điểm hẹn tọa độ (24, 9) | 29 |
| 26-28 | Di chuyển hướng 3 (`3`) | (24, 9) | (24, 10) | Dự kiến đến điểm hẹn tọa độ (24, 10) | 27 |
| 29-30 | Di chuyển hướng 3 (`3`) | (24, 10) | (25, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(25, 11)) | 26 |
| 31-32 | Di chuyển hướng 1 (`1`) | (25, 11) | (25, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(25, 10)) | 25 |
| 33-34 | Di chuyển hướng 0 (`0`) | (25, 10) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(25, 9)) | 24 |
| 35-36 | Di chuyển hướng 5 (`5`) | (25, 9) | (24, 9) | Dự kiến đến điểm hẹn tọa độ (24, 9) | 23 |
| 37-39 | Di chuyển hướng 5 (`5`) | (24, 9) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 21 |
| 40 | Di chuyển hướng 4 (`4`) | (23, 9) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 19 |
| 41-42 | Di chuyển hướng 5 (`5`) | (22, 10) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 18 |
| 43-45 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(21, 11)) | 16 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (25, 11) (ô=311)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 1)
- Mảng hành động đã gửi server: `[1, 0, 0, 0, 5, 5, 0, 5, 0, 5, 0, 0, 5, 2, 2, 1, 1, 1, -7, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (25, 11) | (25, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(25, 10)) | 21 |
| 2-3 | Di chuyển hướng 0 (`0`) | (25, 10) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(25, 9)) | 20 |
| 4-5 | Di chuyển hướng 0 (`0`) | (25, 9) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 19 |
| 6-7 | Di chuyển hướng 0 (`0`) | (24, 8) | (24, 7) | Dự kiến đến điểm hẹn tọa độ (24, 7) | 18 |
| 8-9 | Di chuyển hướng 5 (`5`) | (24, 7) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 17 |
| 10-11 | Di chuyển hướng 5 (`5`) | (23, 7) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 16 |
| 12-13 | Di chuyển hướng 0 (`0`) | (22, 7) | (21, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(21, 6)) | 15 |
| 14-15 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 14 |
| 16-17 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 5)) | 13 |
| 18-19 | Di chuyển hướng 5 (`5`) | (20, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 5)) | 12 |
| 20-21 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 11 |
| 22-24 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 3)) | 9 |
| 25-26 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 3)) | 8 |
| 27-28 | Di chuyển hướng 2 (`2`) | (17, 3) | (18, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 3)) | 7 |
| 29-30 | Di chuyển hướng 2 (`2`) | (18, 3) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 6 |
| 31-32 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 5 |
| 33-35 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 3 |
| 36 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 0)) | 1 |
| 37-43 | Chờ 7 bước (`-7`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 0)) | 51 |
| 44-45 | Di chuyển hướng 4 (`4`) | (20, 0) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 50 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 16) (ô=426)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(25, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(25, 4)
- Mảng hành động đã gửi server: `[2, 1, 1, 2, 1, 1, 1, 2, 2, 1, 2, 1, 2, 1, 1, 1, -2, 1, 1, 2, 2, 1, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 22 |
| 3-4 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 21 |
| 5-6 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 20 |
| 7-9 | Di chuyển hướng 2 (`2`) | (12, 14) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 18 |
| 10 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 16 |
| 11-13 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 14 |
| 14 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 12 |
| 15 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 10 |
| 16 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 8 |
| 17-18 | Di chuyển hướng 1 (`1`) | (17, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 7 |
| 19-20 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 6 |
| 21-23 | Di chuyển hướng 1 (`1`) | (18, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 4 |
| 24-25 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 3 |
| 26-27 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 2 |
| 28-29 | Di chuyển hướng 1 (`1`) | (20, 8) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 1 |
| 30-31 | Di chuyển hướng 1 (`1`) | (21, 7) | (21, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(21, 6)) | 0 |
| 32-33 | Chờ 2 bước (`-2`) | (21, 6) | (21, 6) | Dự kiến đứng yên tại (21, 6); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(21, 6)) | 51 |
| 34-35 | Di chuyển hướng 1 (`1`) | (21, 6) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 50 |
| 36-38 | Di chuyển hướng 1 (`1`) | (22, 5) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 48 |
| 39 | Di chuyển hướng 2 (`2`) | (22, 4) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 46 |
| 40 | Di chuyển hướng 2 (`2`) | (23, 4) | (24, 4) | Dự kiến đến điểm hẹn tọa độ (24, 4) | 44 |
| 41-43 | Di chuyển hướng 1 (`1`) | (24, 4) | (25, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(25, 3)) | 42 |
| 44-45 | Di chuyển hướng 3 (`3`) | (25, 3) | (25, 4) | Dự kiến đến điểm hẹn tọa độ (25, 4) | 41 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (6, 1) (ô=32)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 9)
- Mảng hành động đã gửi server: `[0, 4, 4, 4, 5, 4, 5, 5, 4, 1, 0, 1, 0, 3, 3, 3, 3, 3, 2, 3, 3, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 1) | (5, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 0)) | 50 |
| 2-3 | Di chuyển hướng 4 (`4`) | (5, 0) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 49 |
| 4-6 | Di chuyển hướng 4 (`4`) | (5, 1) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 47 |
| 7-9 | Di chuyển hướng 4 (`4`) | (4, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 45 |
| 10-12 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 43 |
| 13-15 | Di chuyển hướng 4 (`4`) | (3, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 41 |
| 16-17 | Di chuyển hướng 5 (`5`) | (2, 4) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 40 |
| 18-19 | Di chuyển hướng 5 (`5`) | (1, 4) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 39 |
| 20 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 5)) | 37 |
| 21-22 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 36 |
| 23 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đến điểm hẹn tọa độ (0, 3) | 34 |
| 24 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 32 |
| 25 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 1)) | 30 |
| 26-27 | Di chuyển hướng 3 (`3`) | (0, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 29 |
| 28 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 27 |
| 29-30 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 26 |
| 31-32 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 25 |
| 33 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 23 |
| 34-35 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(3, 6)) | 22 |
| 36-37 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 21 |
| 38-39 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 20 |
| 40-42 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 18 |
| 43-44 | Di chuyển hướng 5 (`5`) | (4, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 17 |
| 45 | Chờ 1 bước (`-1`) | (3, 9) | (3, 9) | Dự kiến đứng yên tại (3, 9); hướng tới tọa độ (3, 9) | 17 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (17, 3) (ô=95)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 16)
- Mảng hành động đã gửi server: `[3, 3, 2, 4, 4, 5, 5, 5, 5, 5, 5, 4, 4, -1, 4, 4, 3, 4, 3, 4, 4, 4, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 19 |
| 2 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 17 |
| 3-4 | Di chuyển hướng 2 (`2`) | (18, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 5)) | 16 |
| 5-6 | Di chuyển hướng 4 (`4`) | (19, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 15 |
| 7-9 | Di chuyển hướng 4 (`4`) | (18, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 13 |
| 10-12 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 11 |
| 13 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 9 |
| 14 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 7 |
| 15-16 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 6 |
| 17 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 51 |
| 18 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 7)) | 49 |
| 19-20 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 48 |
| 21-22 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 51 |
| 23 | Chờ 1 bước (`-1`) | (11, 9) | (11, 9) | Dự kiến đứng yên tại (11, 9); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 51 |
| 24-25 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 51 |
| 26-28 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 49 |
| 29 | Di chuyển hướng 3 (`3`) | (10, 11) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 47 |
| 30 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 45 |
| 31-32 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 44 |
| 33-34 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 43 |
| 35-37 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 41 |
| 38-40 | Di chuyển hướng 4 (`4`) | (9, 16) | (9, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 17)) | 39 |
| 41-42 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 38 |
| 43-45 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 36 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (1, 12) (ô=313)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 14)
- Mảng hành động đã gửi server: `[5, 1, 0, 1, 1, 1, 1, 3, 3, 3, 3, 3, 4, 5, 2, 2, 3, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (1, 12) | (0, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(0, 12)) | 31 |
| 2-3 | Di chuyển hướng 1 (`1`) | (0, 12) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 30 |
| 4-6 | Di chuyển hướng 0 (`0`) | (1, 11) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 28 |
| 7-9 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 26 |
| 10 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 24 |
| 11-13 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 22 |
| 14-16 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 20 |
| 17-18 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 19 |
| 19-21 | Di chuyển hướng 3 (`3`) | (3, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 17 |
| 22-24 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 15 |
| 25-26 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 14 |
| 27 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 12 |
| 28-30 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 10 |
| 31-32 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 12)) | 9 |
| 33-34 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 8 |
| 35-36 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 7 |
| 37-39 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 5 |
| 40-42 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(6, 14)) | 3 |
| 43-44 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 51 |
| 45 | Chờ 1 bước (`-1`) | (7, 14) | (7, 14) | Dự kiến đứng yên tại (7, 14); hướng tới tọa độ (7, 14) | 51 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (12, 4) (ô=116)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 14)
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 4, -12, 4, 4, 4, 4, 4, 5, 5, 2, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 51 |
| 2-4 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 51 |
| 5-6 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 7)) | 51 |
| 7-8 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 51 |
| 9-10 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 51 |
| 11-22 | Chờ 12 bước (`-12`) | (11, 9) | (11, 9) | Dự kiến đứng yên tại (11, 9); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 51 |
| 23-24 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 51 |
| 25-27 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 51 |
| 28 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 51 |
| 29-31 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 51 |
| 32 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 51 |
| 33-35 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 51 |
| 36-38 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(6, 14)) | 51 |
| 39-40 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 51 |
| 41-45 | Chờ 5 bước (`-5`) | (7, 14) | (7, 14) | Dự kiến đứng yên tại (7, 14); hướng tới tọa độ (7, 14) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (6, 1) (ô=32)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(20, 0))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(20, 0))
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 0, 1, 0, 0, 0, 1, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 51 |
| 2-4 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 51 |
| 5 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 51 |
| 6-8 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 51 |
| 9-10 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 51 |
| 11 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 51 |
| 12 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 51 |
| 13 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 51 |
| 14-15 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 7)) | 51 |
| 16-17 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 51 |
| 18 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 51 |
| 19 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 51 |
| 20-21 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 51 |
| 22 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 51 |
| 23 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 51 |
| 24-26 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 51 |
| 27-29 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 51 |
| 30 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 51 |
| 31-32 | Di chuyển hướng 2 (`2`) | (20, 6) | (21, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(21, 6)) | 51 |
| 33-34 | Di chuyển hướng 0 (`0`) | (21, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 51 |
| 35-37 | Di chuyển hướng 1 (`1`) | (21, 5) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 51 |
| 38 | Di chuyển hướng 0 (`0`) | (21, 4) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 51 |
| 39-40 | Di chuyển hướng 0 (`0`) | (21, 3) | (20, 2) | Dự kiến đến điểm hẹn tọa độ (20, 2) | 51 |
| 41-42 | Di chuyển hướng 0 (`0`) | (20, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 51 |
| 43 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 0)) | 51 |
| 44-45 | Chờ 2 bước (`-2`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 0)) | 51 |

