# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 56
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 8 | #4 | #5 | (10, 19) | 1 | 53 |
| 21 | #1 | #5 | (14, 14) | 2 | 53 |
| 23 | #1 | #5 | (14, 13) | 52 | 53 |
| 25 | #1 | #5 | (13, 12) | 52 | 53 |
| 28 | #1 | #5 | (13, 11) | 51 | 53 |
| 30 | #1 | #5 | (12, 10) | 52 | 53 |
| 32 | #1 | #5 | (12, 9) | 52 | 53 |
| 35 | #1 | #5 | (10, 8) | 50 | 53 |
| 37 | #1 | #5 | (10, 7) | 52 | 53 |
| 38 | #1 | #5 | (9, 6) | 51 | 53 |
| 40 | #1 | #5 | (9, 5) | 52 | 53 |
| 42 | #1 | #5 | (8, 4) | 52 | 53 |
| 44 | #1 | #5 | (7, 4) | 52 | 53 |
| 45 | #1 | #5 | (6, 4) | 51 | 53 |
| 46 | #2 | #3 | (4, 11) | 10 | 53 |
| 47 | #1 | #5 | (5, 4) | 52 | 53 |
| 48 | #1 | #5 | (5, 3) | 51 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 21) (ô=483)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(21, 21))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(21, 21))
- Mảng hành động đã gửi server: `[-56]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-55 | Chờ 56 bước (`-56`) | (21, 21) | (21, 21) | Dự kiến đứng yên tại (21, 21); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 21)) | 1 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 14) (ô=322)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 3)
- Mảng hành động đã gửi server: `[-21, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 5, 5, 5, 0, 5, 4, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-20 | Chờ 21 bước (`-21`) | (14, 14) | (14, 14) | Dự kiến đứng yên tại (14, 14); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 14)) | 53 |
| 21-22 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 53 |
| 23-24 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 53 |
| 25-27 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 11)) | 53 |
| 28-29 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 53 |
| 30-31 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 53 |
| 32 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 51 |
| 33-34 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 53 |
| 35-36 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 53 |
| 37 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 53 |
| 38-39 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 53 |
| 40-41 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 53 |
| 42-43 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 53 |
| 44 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 53 |
| 45-46 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 53 |
| 47 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 3)) | 53 |
| 48-49 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 52 |
| 50-51 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 51 |
| 52 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(2, 4)) | 49 |
| 53-54 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 48 |
| 55 | Chờ 1 bước (`-1`) | (2, 3) | (2, 3) | Dự kiến đứng yên tại (2, 3); hướng tới tọa độ (2, 3) | 48 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (5, 16) (ô=357)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 7)
- Mảng hành động đã gửi server: `[3, 4, 3, 4, 4, 5, 5, 3, 4, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 2, 1, 0, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 38 |
| 2 | Di chuyển hướng 4 (`4`) | (6, 17) | (5, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 18)) | 36 |
| 3-4 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 35 |
| 5-6 | Di chuyển hướng 4 (`4`) | (6, 19) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 34 |
| 7-9 | Di chuyển hướng 4 (`4`) | (5, 20) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 32 |
| 10 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 30 |
| 11-13 | Di chuyển hướng 5 (`5`) | (4, 21) | (3, 21) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 21)) | 28 |
| 14-15 | Di chuyển hướng 3 (`3`) | (3, 21) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 27 |
| 16-17 | Di chuyển hướng 4 (`4`) | (3, 22) | (3, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(3, 23)) | 26 |
| 18-19 | Di chuyển hướng 1 (`1`) | (3, 23) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 25 |
| 20-21 | Di chuyển hướng 0 (`0`) | (3, 22) | (3, 21) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 21)) | 24 |
| 22-23 | Di chuyển hướng 1 (`1`) | (3, 21) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 23 |
| 24-26 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 21 |
| 27-28 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 20 |
| 29-30 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 19 |
| 31-32 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 18 |
| 33-35 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(3, 15)) | 16 |
| 36-37 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 15 |
| 38-40 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 13 |
| 41-43 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 11 |
| 44-45 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 53 |
| 46-48 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(5, 11)) | 51 |
| 49-50 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 50 |
| 51-52 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 49 |
| 53-54 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 48 |
| 55 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 46 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (5, 3) (ô=71)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 11)
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 4, 3, 3, 4, -39]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 53 |
| 2 | Di chuyển hướng 4 (`4`) | (5, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 53 |
| 3-5 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 53 |
| 6-8 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 53 |
| 9 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 53 |
| 10 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 53 |
| 11-13 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 53 |
| 14-16 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 53 |
| 17-55 | Chờ 39 bước (`-39`) | (4, 11) | (4, 11) | Dự kiến đứng yên tại (4, 11); hướng tới tọa độ (4, 11) | 53 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (10, 19) (ô=428)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 16)
- Mảng hành động đã gửi server: `[-9, 2, 2, 2, 2, 3, 2, 2, 2, 3, 3, 2, 2, 1, 0, 5, 0, 0, 0, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-8 | Chờ 9 bước (`-9`) | (10, 19) | (10, 19) | Dự kiến đứng yên tại (10, 19); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 19)) | 53 |
| 9-10 | Di chuyển hướng 2 (`2`) | (10, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 52 |
| 11-13 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 50 |
| 14-16 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 48 |
| 17-18 | Di chuyển hướng 2 (`2`) | (13, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 47 |
| 19 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 20)) | 45 |
| 20-21 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 44 |
| 22-23 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 43 |
| 24-26 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 20)) | 41 |
| 27-28 | Di chuyển hướng 3 (`3`) | (17, 20) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 40 |
| 29-31 | Di chuyển hướng 3 (`3`) | (18, 21) | (18, 22) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 22)) | 38 |
| 32-33 | Di chuyển hướng 2 (`2`) | (18, 22) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 37 |
| 34-36 | Di chuyển hướng 2 (`2`) | (19, 22) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 35 |
| 37-38 | Di chuyển hướng 1 (`1`) | (20, 22) | (21, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 21)) | 34 |
| 39-40 | Di chuyển hướng 0 (`0`) | (21, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 33 |
| 41-43 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 31 |
| 44-46 | Di chuyển hướng 0 (`0`) | (19, 20) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 29 |
| 47-49 | Di chuyển hướng 0 (`0`) | (19, 19) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 27 |
| 50 | Di chuyển hướng 0 (`0`) | (18, 18) | (18, 17) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 17)) | 25 |
| 51-52 | Di chuyển hướng 5 (`5`) | (18, 17) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 24 |
| 53-55 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 22 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (8, 15) (ô=338)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(5, 3))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(5, 3))
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 2, 1, 1, 1, 2, 2, 1, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 5, 5, 0, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 53 |
| 2-3 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 53 |
| 4-5 | Di chuyển hướng 4 (`4`) | (9, 17) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 53 |
| 6 | Di chuyển hướng 3 (`3`) | (8, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 53 |
| 7 | Di chuyển hướng 2 (`2`) | (9, 19) | (10, 19) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 19)) | 53 |
| 8-9 | Di chuyển hướng 1 (`1`) | (10, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 53 |
| 10-11 | Di chuyển hướng 1 (`1`) | (10, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 53 |
| 12-13 | Di chuyển hướng 1 (`1`) | (11, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 53 |
| 14 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 53 |
| 15-16 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 53 |
| 17-18 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 53 |
| 19-20 | Di chuyển hướng 1 (`1`) | (14, 15) | (14, 14) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 14)) | 53 |
| 21-22 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 53 |
| 23-24 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 53 |
| 25-27 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 11)) | 53 |
| 28-29 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 53 |
| 30-31 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 53 |
| 32 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 53 |
| 33-34 | Di chuyển hướng 0 (`0`) | (11, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 53 |
| 35-36 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 53 |
| 37 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 53 |
| 38-39 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 53 |
| 40-41 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 53 |
| 42-43 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 53 |
| 44 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 53 |
| 45-46 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 53 |
| 47 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 3)) | 53 |
| 48-55 | Chờ 8 bước (`-8`) | (5, 3) | (5, 3) | Dự kiến đứng yên tại (5, 3); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 3)) | 53 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (8, 15) (ô=338)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 3)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2, 2, 5, 5, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 52 |
| 2-4 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 50 |
| 5-7 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 48 |
| 8 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 46 |
| 9-11 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 44 |
| 12-14 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 42 |
| 15-16 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 41 |
| 17 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 39 |
| 18-20 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 37 |
| 21-22 | Di chuyển hướng 1 (`1`) | (13, 7) | (13, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 6)) | 36 |
| 23-24 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 35 |
| 25-26 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 34 |
| 27-29 | Di chuyển hướng 1 (`1`) | (14, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 32 |
| 30-31 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 31 |
| 32-33 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 3)) | 30 |
| 34-35 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 29 |
| 36-37 | Di chuyển hướng 2 (`2`) | (17, 2) | (18, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(18, 2)) | 28 |
| 38-39 | Di chuyển hướng 1 (`1`) | (18, 2) | (19, 1) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(19, 1)) | 27 |
| 40-41 | Di chuyển hướng 1 (`1`) | (19, 1) | (19, 0) | Dự kiến đến điểm hẹn tọa độ (19, 0) | 26 |
| 42 | Di chuyển hướng 2 (`2`) | (19, 0) | (20, 0) | Dự kiến đến điểm hẹn tọa độ (20, 0) | 24 |
| 43-45 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(21, 0)) | 22 |
| 46-47 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đến điểm hẹn tọa độ (20, 0) | 21 |
| 48-50 | Di chuyển hướng 5 (`5`) | (20, 0) | (19, 0) | Dự kiến đến điểm hẹn tọa độ (19, 0) | 19 |
| 51 | Di chuyển hướng 4 (`4`) | (19, 0) | (19, 1) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(19, 1)) | 17 |
| 52-53 | Di chuyển hướng 4 (`4`) | (19, 1) | (18, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(18, 2)) | 16 |
| 54-55 | Di chuyển hướng 4 (`4`) | (18, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 15 |

