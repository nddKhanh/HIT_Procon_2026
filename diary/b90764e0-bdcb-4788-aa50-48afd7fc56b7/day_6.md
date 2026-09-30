# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 55
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 15 | #0 | #1 | (18, 11) | 32 | 51 |
| 18 | #3 | #2 | (5, 12) | 2 | 51 |
| 43 | #4 | #2 | (5, 12) | 0 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 8) (ô=197)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 5)
- Mảng hành động đã gửi server: `[4, 3, 0, 5, 4, 4, 5, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 4, 4, 4, 5, 4, 4, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (21, 8) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 41 |
| 2-3 | Di chuyển hướng 3 (`3`) | (21, 9) | (21, 10) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(21, 10)) | 39 |
| 4-5 | Di chuyển hướng 0 (`0`) | (21, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 38 |
| 6-7 | Di chuyển hướng 5 (`5`) | (21, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 36 |
| 8-9 | Di chuyển hướng 4 (`4`) | (20, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 35 |
| 10-12 | Di chuyển hướng 4 (`4`) | (19, 10) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 33 |
| 13-14 | Di chuyển hướng 5 (`5`) | (19, 11) | (18, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 11)) | 51 |
| 15-16 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 10)) | 50 |
| 17-18 | Di chuyển hướng 1 (`1`) | (17, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 49 |
| 19-21 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 47 |
| 22-23 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 46 |
| 24-25 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 45 |
| 26-27 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 44 |
| 28-30 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 42 |
| 31-32 | Di chuyển hướng 1 (`1`) | (17, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(18, 3)) | 41 |
| 33-34 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 40 |
| 35-37 | Di chuyển hướng 1 (`1`) | (17, 2) | (18, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 1)) | 38 |
| 38-39 | Di chuyển hướng 0 (`0`) | (18, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 0)) | 37 |
| 40-41 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 36 |
| 42-44 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 34 |
| 45-46 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 33 |
| 47 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 31 |
| 48 | Di chuyển hướng 4 (`4`) | (15, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 29 |
| 49 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 27 |
| 50-52 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 25 |
| 53-54 | Chờ 2 bước (`-2`) | (13, 5) | (13, 5) | Dự kiến đứng yên tại (13, 5); hướng tới tọa độ (13, 5) | 25 |

### Xe #1 - Tiếp tế

- Vị trí đầu ngày: (18, 11) (ô=260)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(18, 11))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(18, 11))
- Mảng hành động đã gửi server: `[-55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-54 | Chờ 55 bước (`-55`) | (18, 11) | (18, 11) | Dự kiến đứng yên tại (18, 11); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 11)) | 51 |

### Xe #2 - Tiếp tế

- Vị trí đầu ngày: (3, 10) (ô=223)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(5, 12))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(5, 12))
- Mảng hành động đã gửi server: `[3, 3, 2, -48]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 51 |
| 4-5 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 51 |
| 6 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 12)) | 51 |
| 7-54 | Chờ 48 bước (`-48`) | (5, 12) | (5, 12) | Dự kiến đứng yên tại (5, 12); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 12)) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 9) (ô=209)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 3)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 5, 5, 5, 5, 1, 0, 0, -12, 0, 1, 0, 0, 0, 0, 0, 0, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 16 |
| 2-4 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 11)) | 14 |
| 5-6 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 13 |
| 7 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 11 |
| 8 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 9 |
| 9 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 7 |
| 10-12 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 5 |
| 13-15 | Di chuyển hướng 5 (`5`) | (6, 13) | (5, 13) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 13)) | 3 |
| 16-17 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 12)) | 51 |
| 18-19 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 50 |
| 20-21 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(4, 10)) | 49 |
| 22-33 | Chờ 12 bước (`-12`) | (4, 10) | (4, 10) | Dự kiến đứng yên tại (4, 10); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(4, 10)) | 49 |
| 34-35 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 48 |
| 36-38 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 46 |
| 39-41 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 44 |
| 42-44 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 42 |
| 45 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 40 |
| 46-48 | Di chuyển hướng 0 (`0`) | (3, 5) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 38 |
| 49-50 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 37 |
| 51-52 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 2)) | 36 |
| 53-54 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 35 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (2, 4) (ô=90)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(1, 12))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(1, 12))
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 2, 2, 3, 2, 0, 0, 1, 4, 4, 5, 4, 4, 4, 4, 4, 3, 3, -1, 4, 0, 5, 4, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 31 |
| 2-4 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 29 |
| 5 | Di chuyển hướng 2 (`2`) | (4, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 27 |
| 6-7 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 26 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 25 |
| 10 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 23 |
| 11-13 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 21 |
| 14 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 6)) | 19 |
| 15-16 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(9, 5)) | 18 |
| 17-18 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 17 |
| 19-20 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 3)) | 16 |
| 21-22 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 15 |
| 23-24 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 14 |
| 25-27 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 12 |
| 28 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 10 |
| 29-31 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 8 |
| 32-34 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 6 |
| 35 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 4 |
| 36-38 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(4, 10)) | 2 |
| 39-40 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 1 |
| 41-42 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 12)) | 51 |
| 43 | Chờ 1 bước (`-1`) | (5, 12) | (5, 12) | Dự kiến đứng yên tại (5, 12); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 12)) | 51 |
| 44-45 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 13)) | 50 |
| 46-47 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 49 |
| 48 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 47 |
| 49-50 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 46 |
| 51 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 44 |
| 52-54 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(1, 12)) | 42 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (19, 19) (ô=437)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(8, 18))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(8, 18))
- Mảng hành động đã gửi server: `[5, 5, 4, 5, 2, 1, 2, 2, 2, 1, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 4, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (19, 19) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 37 |
| 3-4 | Di chuyển hướng 5 (`5`) | (18, 19) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 36 |
| 5-6 | Di chuyển hướng 4 (`4`) | (17, 19) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 35 |
| 7-8 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 20)) | 34 |
| 9-10 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 33 |
| 11-12 | Di chuyển hướng 1 (`1`) | (16, 20) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 32 |
| 13-14 | Di chuyển hướng 2 (`2`) | (17, 19) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 31 |
| 15-16 | Di chuyển hướng 2 (`2`) | (18, 19) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 30 |
| 17-19 | Di chuyển hướng 2 (`2`) | (19, 19) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 28 |
| 20-21 | Di chuyển hướng 1 (`1`) | (20, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(20, 18)) | 27 |
| 22-23 | Di chuyển hướng 0 (`0`) | (20, 18) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 26 |
| 24-26 | Di chuyển hướng 0 (`0`) | (20, 17) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 24 |
| 27-29 | Di chuyển hướng 5 (`5`) | (19, 16) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 22 |
| 30-31 | Di chuyển hướng 5 (`5`) | (18, 16) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 21 |
| 32 | Di chuyển hướng 5 (`5`) | (17, 16) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 19 |
| 33 | Di chuyển hướng 5 (`5`) | (16, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 17 |
| 34-35 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 16 |
| 36 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 14 |
| 37-39 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 12 |
| 40-41 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 11 |
| 42-43 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 10 |
| 44 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 8 |
| 45 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 6 |
| 46 | Di chuyển hướng 4 (`4`) | (9, 17) | (8, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 18)) | 4 |
| 47-54 | Chờ 8 bước (`-8`) | (8, 18) | (8, 18) | Dự kiến đứng yên tại (8, 18); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 18)) | 4 |

