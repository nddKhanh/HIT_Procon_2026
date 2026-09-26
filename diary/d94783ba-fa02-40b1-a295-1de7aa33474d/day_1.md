# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 50
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 25 | #2 | #4 | (8, 9) | 12 | 55 |
| 27 | #2 | #4 | (9, 9) | 54 | 55 |
| 33 | #0 | #4 | (11, 8) | 3 | 55 |
| 37 | #0 | #4 | (14, 9) | 50 | 55 |
| 49 | #1 | #5 | (23, 22) | 19 | 55 |
| 50 | #0 | #4 | (18, 7) | 48 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 6) (ô=152)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(18, 7))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(18, 7))
- Mảng hành động đã gửi server: `[2, 3, 2, 5, 0, 0, 5, 0, 0, 3, 3, 3, 3, 2, 2, 3, 2, 2, 3, 3, 2, 2, 2, 1, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 22 |
| 2-3 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(10, 7)) | 21 |
| 4-5 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 20 |
| 6-8 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(10, 7)) | 18 |
| 9-10 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 17 |
| 11-12 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 16 |
| 13-14 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 15 |
| 15 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 13 |
| 16-17 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 3)) | 12 |
| 18-19 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 11 |
| 20-21 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 10 |
| 22 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 8 |
| 23-24 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 7 |
| 25-26 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(10, 7)) | 6 |
| 27-28 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 5 |
| 29-31 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 3 |
| 32-33 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 54 |
| 34 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 52 |
| 35 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 50 |
| 36-37 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(14, 10)) | 54 |
| 38-39 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 53 |
| 40-41 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 52 |
| 42-43 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 10)) | 51 |
| 44-45 | Di chuyển hướng 1 (`1`) | (17, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 50 |
| 46-47 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(18, 8)) | 49 |
| 48-49 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(18, 7)) | 55 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (9, 14) (ô=345)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(23, 22))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(23, 22))
- Mảng hành động đã gửi server: `[1, 4, 3, 3, 3, 3, 2, 1, 1, 1, 2, 2, 1, 1, 2, 2, 4, 4, 3, 3, 3, 3, 3, 3, 2, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 13)) | 54 |
| 2-3 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 53 |
| 4-5 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 52 |
| 6-8 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 50 |
| 9 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 48 |
| 10-11 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 47 |
| 12 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 45 |
| 13 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 43 |
| 14-15 | Di chuyển hướng 1 (`1`) | (13, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 42 |
| 16-17 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 41 |
| 18-19 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 40 |
| 20 | Di chuyển hướng 2 (`2`) | (15, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 38 |
| 21-22 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 37 |
| 23 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 13)) | 35 |
| 24-25 | Di chuyển hướng 2 (`2`) | (17, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 34 |
| 26-28 | Di chuyển hướng 2 (`2`) | (18, 13) | (19, 13) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(19, 13)) | 32 |
| 29-30 | Di chuyển hướng 4 (`4`) | (19, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 31 |
| 31-32 | Di chuyển hướng 4 (`4`) | (18, 14) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 30 |
| 33-34 | Di chuyển hướng 3 (`3`) | (18, 15) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 29 |
| 35 | Di chuyển hướng 3 (`3`) | (18, 16) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 27 |
| 36-37 | Di chuyển hướng 3 (`3`) | (19, 17) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 26 |
| 38-39 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 25 |
| 40-41 | Di chuyển hướng 3 (`3`) | (20, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 24 |
| 42 | Di chuyển hướng 3 (`3`) | (20, 20) | (21, 21) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 21)) | 22 |
| 43-44 | Di chuyển hướng 2 (`2`) | (21, 21) | (22, 21) | Dự kiến đến điểm hẹn tọa độ (22, 21) | 21 |
| 45-46 | Di chuyển hướng 3 (`3`) | (22, 21) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 20 |
| 47-48 | Di chuyển hướng 2 (`2`) | (22, 22) | (23, 22) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(23, 22)) | 55 |
| 49 | Chờ 1 bước (`-1`) | (23, 22) | (23, 22) | Dự kiến đứng yên tại (23, 22); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(23, 22)) | 55 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 11) (ô=268)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 2)
- Mảng hành động đã gửi server: `[2, 1, 1, 5, 5, 5, 0, 3, 2, 2, 2, 2, 2, 2, 0, 1, 0, 0, 0, 0, 0, 5, 5, 5, 0, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 25 |
| 2-3 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 24 |
| 4 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 22 |
| 5-6 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 21 |
| 7-8 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 20 |
| 9-10 | Di chuyển hướng 5 (`5`) | (4, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 19 |
| 11-12 | Di chuyển hướng 0 (`0`) | (3, 9) | (2, 8) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(2, 8)) | 18 |
| 13-14 | Di chuyển hướng 3 (`3`) | (2, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 17 |
| 15-16 | Di chuyển hướng 2 (`2`) | (3, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 16 |
| 17-18 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 15 |
| 19-20 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 14 |
| 21-22 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 13 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 55 |
| 25-26 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 55 |
| 27-28 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 54 |
| 29-30 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 53 |
| 31-32 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 52 |
| 33-34 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 51 |
| 35 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 49 |
| 36-37 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 3)) | 48 |
| 38-39 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 47 |
| 40-41 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 46 |
| 42-43 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 45 |
| 44 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 43 |
| 45-46 | Di chuyển hướng 0 (`0`) | (3, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 1)) | 42 |
| 47-48 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 41 |
| 49 | Chờ 1 bước (`-1`) | (2, 2) | (2, 2) | Dự kiến đứng yên tại (2, 2); hướng tới tọa độ (2, 2) | 41 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (6, 18) (ô=438)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 18)
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 3, 0, 1, 1, 0, 1, 0, 2, 2, 5, 5, 4, 5, 4, 5, 5, 4, 5, 5, 5, 3, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 54 |
| 2-3 | Di chuyển hướng 3 (`3`) | (7, 18) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 53 |
| 4-5 | Di chuyển hướng 3 (`3`) | (8, 19) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 52 |
| 6 | Di chuyển hướng 3 (`3`) | (8, 20) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 50 |
| 7-8 | Di chuyển hướng 3 (`3`) | (9, 21) | (9, 22) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(9, 22)) | 49 |
| 9-10 | Di chuyển hướng 0 (`0`) | (9, 22) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 48 |
| 11-12 | Di chuyển hướng 1 (`1`) | (9, 21) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 47 |
| 13 | Di chuyển hướng 1 (`1`) | (9, 20) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 45 |
| 14-15 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 44 |
| 16-17 | Di chuyển hướng 1 (`1`) | (9, 18) | (10, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(10, 17)) | 43 |
| 18-19 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 16)) | 42 |
| 20-21 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 41 |
| 22 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 39 |
| 23-24 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 38 |
| 25 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 16)) | 36 |
| 26-27 | Di chuyển hướng 4 (`4`) | (9, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 35 |
| 28-29 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 34 |
| 30-31 | Di chuyển hướng 4 (`4`) | (8, 17) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 33 |
| 32-33 | Di chuyển hướng 5 (`5`) | (7, 18) | (6, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 32 |
| 34-35 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 31 |
| 36-37 | Di chuyển hướng 4 (`4`) | (5, 18) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 30 |
| 38 | Di chuyển hướng 5 (`5`) | (5, 19) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 28 |
| 39-40 | Di chuyển hướng 5 (`5`) | (4, 19) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 27 |
| 41-42 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 19)) | 26 |
| 43-44 | Di chuyển hướng 3 (`3`) | (2, 19) | (2, 20) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 20)) | 25 |
| 45-46 | Di chuyển hướng 1 (`1`) | (2, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 24 |
| 47-48 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 23 |
| 49 | Chờ 1 bước (`-1`) | (3, 18) | (3, 18) | Dự kiến đứng yên tại (3, 18); hướng tới tọa độ (3, 18) | 23 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (6, 18) (ô=438)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(18, 7))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(18, 7))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 5, 0, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 1, 2, 2, 3, 2, 2, 2, 1, 1, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 55 |
| 2-4 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 55 |
| 5-7 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 55 |
| 8 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 55 |
| 9 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 55 |
| 10-11 | Di chuyển hướng 5 (`5`) | (4, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 55 |
| 12-13 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 55 |
| 14 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 55 |
| 15-16 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 55 |
| 17-18 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 55 |
| 19-20 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 55 |
| 21 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 55 |
| 22-23 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 55 |
| 24 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 55 |
| 25-26 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 55 |
| 27-28 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 55 |
| 29-30 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 55 |
| 31-32 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 55 |
| 33-34 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 55 |
| 35 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 55 |
| 36 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 55 |
| 37-38 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 55 |
| 39-40 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 55 |
| 41-42 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 55 |
| 43-44 | Di chuyển hướng 1 (`1`) | (17, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 55 |
| 45-46 | Di chuyển hướng 1 (`1`) | (17, 8) | (18, 7) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(18, 7)) | 55 |
| 47-49 | Chờ 3 bước (`-3`) | (18, 7) | (18, 7) | Dự kiến đứng yên tại (18, 7); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(18, 7)) | 55 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (9, 14) (ô=345)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(23, 22))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(23, 22))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 2, 2, 2, 2, 3, 3, 2, 2, 2, 2, 2, 3, 3, 2, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 55 |
| 2-4 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 55 |
| 5 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 55 |
| 6-7 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 55 |
| 8 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 55 |
| 9 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 55 |
| 10-11 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 55 |
| 12 | Di chuyển hướng 2 (`2`) | (14, 18) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 55 |
| 13-15 | Di chuyển hướng 3 (`3`) | (15, 18) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 55 |
| 16-17 | Di chuyển hướng 3 (`3`) | (16, 19) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 55 |
| 18-19 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 55 |
| 20-21 | Di chuyển hướng 2 (`2`) | (17, 20) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 55 |
| 22-23 | Di chuyển hướng 2 (`2`) | (18, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 55 |
| 24-25 | Di chuyển hướng 2 (`2`) | (19, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 55 |
| 26 | Di chuyển hướng 2 (`2`) | (20, 20) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 55 |
| 27 | Di chuyển hướng 3 (`3`) | (21, 20) | (22, 21) | Dự kiến đến điểm hẹn tọa độ (22, 21) | 55 |
| 28-29 | Di chuyển hướng 3 (`3`) | (22, 21) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 55 |
| 30-31 | Di chuyển hướng 2 (`2`) | (22, 22) | (23, 22) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(23, 22)) | 55 |
| 32-49 | Chờ 18 bước (`-18`) | (23, 22) | (23, 22) | Dự kiến đứng yên tại (23, 22); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(23, 22)) | 55 |

