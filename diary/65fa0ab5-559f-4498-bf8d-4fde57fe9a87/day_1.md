# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 50
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #5 | (10, 20) | 54 | 55 |
| 4 | #2 | #5 | (11, 20) | 54 | 55 |
| 6 | #2 | #5 | (12, 19) | 54 | 55 |
| 8 | #2 | #5 | (12, 18) | 54 | 55 |
| 10 | #2 | #5 | (13, 18) | 54 | 55 |
| 30 | #0 | #4 | (9, 18) | 2 | 55 |
| 35 | #0 | #4 | (8, 18) | 52 | 55 |
| 39 | #0 | #4 | (6, 18) | 51 | 55 |
| 41 | #3 | #5 | (21, 9) | 2 | 55 |
| 43 | #0 | #4 | (5, 17) | 51 | 55 |
| 49 | #3 | #5 | (21, 9) | 51 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (1, 21) (ô=505)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(3, 14))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(3, 14))
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 2, 1, 2, 1, 2, 2, 2, 3, 4, 4, 0, 5, 5, 5, 0, 0, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 21) | (1, 20) | Dự kiến đến điểm hẹn tọa độ (1, 20) | 20 |
| 2-4 | Di chuyển hướng 1 (`1`) | (1, 20) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 18 |
| 5-6 | Di chuyển hướng 1 (`1`) | (2, 19) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 17 |
| 7-9 | Di chuyển hướng 2 (`2`) | (2, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 15 |
| 10-12 | Di chuyển hướng 2 (`2`) | (3, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 13 |
| 13-15 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 11 |
| 16 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 9 |
| 17-18 | Di chuyển hướng 1 (`1`) | (6, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 8 |
| 19-20 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 7 |
| 21-22 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 6 |
| 23-25 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 16)) | 4 |
| 26-27 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(10, 17)) | 3 |
| 28-29 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 55 |
| 30-32 | Di chuyển hướng 4 (`4`) | (9, 18) | (9, 19) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 19)) | 53 |
| 33-34 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 55 |
| 35-37 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 53 |
| 38 | Di chuyển hướng 5 (`5`) | (7, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 55 |
| 39-41 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 53 |
| 42 | Di chuyển hướng 0 (`0`) | (5, 18) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 55 |
| 43 | Di chuyển hướng 0 (`0`) | (5, 17) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 53 |
| 44-46 | Di chuyển hướng 0 (`0`) | (4, 16) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 51 |
| 47-49 | Di chuyển hướng 0 (`0`) | (4, 15) | (3, 14) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 14)) | 49 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (4, 3) (ô=76)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 12)
- Mảng hành động đã gửi server: `[5, 4, 4, 0, 1, 0, 3, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 4, 4, 3, 4, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 53 |
| 3-4 | Di chuyển hướng 4 (`4`) | (3, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 52 |
| 5-7 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 5)) | 50 |
| 8-9 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 49 |
| 10-12 | Di chuyển hướng 1 (`1`) | (1, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 47 |
| 13-14 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 2)) | 46 |
| 15-16 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 45 |
| 17-18 | Di chuyển hướng 2 (`2`) | (2, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 44 |
| 19-20 | Di chuyển hướng 2 (`2`) | (3, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 43 |
| 21-23 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 41 |
| 24 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 39 |
| 25-26 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 38 |
| 27-29 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 3)) | 36 |
| 30-31 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 35 |
| 32-33 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 34 |
| 34-36 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 6)) | 32 |
| 37-38 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 31 |
| 39-40 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 30 |
| 41-42 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 29 |
| 43 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(7, 10)) | 27 |
| 44-45 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 26 |
| 46 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 24 |
| 47-48 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 23 |
| 49 | Chờ 1 bước (`-1`) | (5, 12) | (5, 12) | Dự kiến đứng yên tại (5, 12); hướng tới tọa độ (5, 12) | 23 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 21) (ô=514)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(0, 16))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(0, 16))
- Mảng hành động đã gửi server: `[1, 2, 1, 1, 2, 4, 4, 4, 4, 5, 4, 0, 5, 5, 0, 5, 5, 5, 5, 0, 0, 5, 0, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 55 |
| 2-3 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 55 |
| 4-5 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 55 |
| 6-7 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 18)) | 55 |
| 8-9 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 18)) | 55 |
| 10-11 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 54 |
| 12-13 | Di chuyển hướng 4 (`4`) | (13, 19) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 53 |
| 14-16 | Di chuyển hướng 4 (`4`) | (12, 20) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 51 |
| 17-18 | Di chuyển hướng 4 (`4`) | (12, 21) | (11, 22) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 22)) | 50 |
| 19-20 | Di chuyển hướng 5 (`5`) | (11, 22) | (10, 22) | Dự kiến đến điểm hẹn tọa độ (10, 22) | 49 |
| 21-22 | Di chuyển hướng 4 (`4`) | (10, 22) | (10, 23) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 23)) | 48 |
| 23-24 | Di chuyển hướng 0 (`0`) | (10, 23) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 47 |
| 25-26 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 46 |
| 27-28 | Di chuyển hướng 5 (`5`) | (8, 22) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 45 |
| 29 | Di chuyển hướng 0 (`0`) | (7, 22) | (7, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(7, 21)) | 43 |
| 30-31 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 42 |
| 32-34 | Di chuyển hướng 5 (`5`) | (6, 21) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 40 |
| 35 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 38 |
| 36-37 | Di chuyển hướng 5 (`5`) | (4, 21) | (3, 21) | Dự kiến đến điểm hẹn tọa độ (3, 21) | 37 |
| 38-40 | Di chuyển hướng 0 (`0`) | (3, 21) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 35 |
| 41-42 | Di chuyển hướng 0 (`0`) | (2, 20) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 34 |
| 43-44 | Di chuyển hướng 5 (`5`) | (2, 19) | (1, 19) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 19)) | 33 |
| 45-46 | Di chuyển hướng 0 (`0`) | (1, 19) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 32 |
| 47-48 | Di chuyển hướng 0 (`0`) | (0, 18) | (0, 17) | Dự kiến đến điểm hẹn tọa độ (0, 17) | 31 |
| 49 | Di chuyển hướng 1 (`1`) | (0, 17) | (0, 16) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(0, 16)) | 29 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (22, 20) (ô=502)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 9)
- Mảng hành động đã gửi server: `[3, 3, 0, 5, 5, 5, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 2, 2, 1, 2, 1, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (22, 20) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 25 |
| 3-4 | Di chuyển hướng 3 (`3`) | (23, 21) | (23, 22) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(23, 22)) | 24 |
| 5-6 | Di chuyển hướng 0 (`0`) | (23, 22) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 23 |
| 7-8 | Di chuyển hướng 5 (`5`) | (23, 21) | (22, 21) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(22, 21)) | 22 |
| 9-10 | Di chuyển hướng 5 (`5`) | (22, 21) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 21 |
| 11 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 21)) | 19 |
| 12-13 | Di chuyển hướng 1 (`1`) | (20, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 18 |
| 14-15 | Di chuyển hướng 0 (`0`) | (20, 20) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 17 |
| 16-18 | Di chuyển hướng 0 (`0`) | (20, 19) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 15 |
| 19-20 | Di chuyển hướng 1 (`1`) | (19, 18) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 14 |
| 21-22 | Di chuyển hướng 0 (`0`) | (20, 17) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 13 |
| 23-25 | Di chuyển hướng 0 (`0`) | (19, 16) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 11 |
| 26-27 | Di chuyển hướng 0 (`0`) | (19, 15) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 10 |
| 28-29 | Di chuyển hướng 0 (`0`) | (18, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 9 |
| 30-31 | Di chuyển hướng 0 (`0`) | (18, 13) | (17, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 12)) | 8 |
| 32-33 | Di chuyển hướng 1 (`1`) | (17, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 7 |
| 34-35 | Di chuyển hướng 1 (`1`) | (18, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 6 |
| 36-37 | Di chuyển hướng 2 (`2`) | (18, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 5 |
| 38 | Di chuyển hướng 2 (`2`) | (19, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 3 |
| 39-40 | Di chuyển hướng 1 (`1`) | (20, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 55 |
| 41-42 | Di chuyển hướng 2 (`2`) | (21, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 54 |
| 43-44 | Di chuyển hướng 1 (`1`) | (22, 9) | (22, 8) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 8)) | 53 |
| 45-46 | Di chuyển hướng 4 (`4`) | (22, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 52 |
| 47-48 | Di chuyển hướng 5 (`5`) | (22, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 55 |
| 49 | Chờ 1 bước (`-1`) | (21, 9) | (21, 9) | Dự kiến đứng yên tại (21, 9); hướng tới tọa độ (21, 9) | 55 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (4, 3) (ô=76)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 17)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 3, 3, 4, 3, 4, 3, 3, 3, 3, 3, 5, 5, 5, 5, 0, -9]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 55 |
| 3-4 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 55 |
| 5-7 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 55 |
| 8 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 55 |
| 9-11 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 55 |
| 12-13 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 55 |
| 14 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(7, 10)) | 55 |
| 15-16 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 55 |
| 17 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 55 |
| 18-20 | Di chuyển hướng 4 (`4`) | (7, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 55 |
| 21 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 55 |
| 22-24 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 55 |
| 25 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 55 |
| 26-28 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 55 |
| 29 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 55 |
| 30-32 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 55 |
| 33-35 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 55 |
| 36 | Di chuyển hướng 5 (`5`) | (7, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 55 |
| 37-39 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 55 |
| 40 | Di chuyển hướng 0 (`0`) | (5, 18) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 55 |
| 41-49 | Chờ 9 bước (`-9`) | (5, 17) | (5, 17) | Dự kiến đứng yên tại (5, 17); hướng tới tọa độ (5, 17) | 55 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (10, 21) (ô=514)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 9)
- Mảng hành động đã gửi server: `[1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 4, 5, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 55 |
| 2-3 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 55 |
| 4-5 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 55 |
| 6-7 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 18)) | 55 |
| 8-9 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 18)) | 55 |
| 10-11 | Di chuyển hướng 1 (`1`) | (13, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 55 |
| 12-13 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 55 |
| 14 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 55 |
| 15-16 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 55 |
| 17-18 | Di chuyển hướng 2 (`2`) | (15, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 55 |
| 19-20 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 55 |
| 21-22 | Di chuyển hướng 1 (`1`) | (17, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 55 |
| 23-24 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 55 |
| 25-26 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 55 |
| 27-29 | Di chuyển hướng 1 (`1`) | (19, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 55 |
| 30 | Di chuyển hướng 1 (`1`) | (19, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 55 |
| 31 | Di chuyển hướng 2 (`2`) | (20, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 55 |
| 32-33 | Di chuyển hướng 2 (`2`) | (21, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 55 |
| 34-35 | Di chuyển hướng 1 (`1`) | (22, 9) | (22, 8) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 8)) | 55 |
| 36-37 | Di chuyển hướng 4 (`4`) | (22, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 55 |
| 38-39 | Di chuyển hướng 5 (`5`) | (22, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 55 |
| 40-49 | Chờ 10 bước (`-10`) | (21, 9) | (21, 9) | Dự kiến đứng yên tại (21, 9); hướng tới tọa độ (21, 9) | 55 |

