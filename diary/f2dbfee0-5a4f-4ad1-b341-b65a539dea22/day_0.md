# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 48
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 30 | #3 | #6 | (19, 14) | 35 | 55 |
| 35 | #2 | #6 | (20, 12) | 32 | 55 |
| 41 | #4 | #6 | (21, 10) | 21 | 55 |
| 48 | #3 | #6 | (21, 10) | 41 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 22) (ô=531)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 22)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 22)
- Mảng hành động đã gửi server: `[1, 4, 4, 1, 0, 0, 1, 1, 0, 1, 2, 2, 3, 2, 2, 3, 2, 2, 4, 3, 3, 3, 4, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 22) | (4, 21) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 21)) | 54 |
| 2-3 | Di chuyển hướng 4 (`4`) | (4, 21) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 53 |
| 4-5 | Di chuyển hướng 4 (`4`) | (3, 22) | (3, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(3, 23)) | 52 |
| 6-7 | Di chuyển hướng 1 (`1`) | (3, 23) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 51 |
| 8-9 | Di chuyển hướng 0 (`0`) | (3, 22) | (3, 21) | Dự kiến đến điểm hẹn tọa độ (3, 21) | 50 |
| 10-11 | Di chuyển hướng 0 (`0`) | (3, 21) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 49 |
| 12 | Di chuyển hướng 1 (`1`) | (2, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 47 |
| 13 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 45 |
| 14-16 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(3, 17)) | 43 |
| 17-18 | Di chuyển hướng 1 (`1`) | (3, 17) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 42 |
| 19-20 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 41 |
| 21-23 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 39 |
| 24-25 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 38 |
| 26 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 36 |
| 27-29 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 34 |
| 30-31 | Di chuyển hướng 3 (`3`) | (8, 17) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 33 |
| 32 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 31 |
| 33-34 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 18)) | 30 |
| 35-36 | Di chuyển hướng 4 (`4`) | (10, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 29 |
| 37 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 27 |
| 38-39 | Di chuyển hướng 3 (`3`) | (10, 20) | (11, 21) | Dự kiến đến điểm hẹn tọa độ (11, 21) | 26 |
| 40-42 | Di chuyển hướng 3 (`3`) | (11, 21) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 24 |
| 43-45 | Di chuyển hướng 4 (`4`) | (11, 22) | (11, 23) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 23)) | 22 |
| 46-47 | Di chuyển hướng 1 (`1`) | (11, 23) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 21 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 4) (ô=98)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(2, 2))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(2, 2))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 3, 3, 1, 1, 0, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 54 |
| 2-4 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 52 |
| 5-6 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 51 |
| 7-8 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 50 |
| 9-11 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 48 |
| 12-13 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 47 |
| 14-16 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(6, 11)) | 45 |
| 17-18 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 44 |
| 19-21 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 42 |
| 22 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 40 |
| 23 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 38 |
| 24-25 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 37 |
| 26-28 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 35 |
| 29-30 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 34 |
| 31-32 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 33 |
| 33-34 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 32 |
| 35-37 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 30 |
| 38 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 28 |
| 39-40 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 27 |
| 41-42 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 26 |
| 43-45 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 24 |
| 46 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(2, 2)) | 22 |
| 47 | Chờ 1 bước (`-1`) | (2, 2) | (2, 2) | Dự kiến đứng yên tại (2, 2); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(2, 2)) | 22 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (19, 2) (ô=67)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 15)
- Mảng hành động đã gửi server: `[3, 2, 2, 0, 3, 4, 3, 3, 4, 3, 4, 4, 5, 5, 5, 2, 3, 3, 3, 3, 2, 5, 4, 5, -1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (19, 2) | (20, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(20, 3)) | 54 |
| 2-3 | Di chuyển hướng 2 (`2`) | (20, 3) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 53 |
| 4-6 | Di chuyển hướng 2 (`2`) | (21, 3) | (22, 3) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(22, 3)) | 51 |
| 7-8 | Di chuyển hướng 0 (`0`) | (22, 3) | (21, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(21, 2)) | 50 |
| 9-10 | Di chuyển hướng 3 (`3`) | (21, 2) | (22, 3) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(22, 3)) | 49 |
| 11-12 | Di chuyển hướng 4 (`4`) | (22, 3) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 48 |
| 13 | Di chuyển hướng 3 (`3`) | (21, 4) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 46 |
| 14 | Di chuyển hướng 3 (`3`) | (22, 5) | (22, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(22, 6)) | 44 |
| 15-16 | Di chuyển hướng 4 (`4`) | (22, 6) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 43 |
| 17 | Di chuyển hướng 3 (`3`) | (22, 7) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 41 |
| 18-19 | Di chuyển hướng 4 (`4`) | (22, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 40 |
| 20-21 | Di chuyển hướng 4 (`4`) | (22, 9) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 39 |
| 22-23 | Di chuyển hướng 5 (`5`) | (21, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 38 |
| 24-26 | Di chuyển hướng 5 (`5`) | (20, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 36 |
| 27-28 | Di chuyển hướng 5 (`5`) | (19, 10) | (18, 10) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 10)) | 35 |
| 29-30 | Di chuyển hướng 2 (`2`) | (18, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 34 |
| 31-32 | Di chuyển hướng 3 (`3`) | (19, 10) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 33 |
| 33-34 | Di chuyển hướng 3 (`3`) | (20, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 55 |
| 35 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 53 |
| 36-38 | Di chuyển hướng 3 (`3`) | (21, 13) | (21, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 14)) | 51 |
| 39-40 | Di chuyển hướng 2 (`2`) | (21, 14) | (22, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(22, 14)) | 50 |
| 41-42 | Di chuyển hướng 5 (`5`) | (22, 14) | (21, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 14)) | 49 |
| 43-44 | Di chuyển hướng 4 (`4`) | (21, 14) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 48 |
| 45 | Di chuyển hướng 5 (`5`) | (21, 15) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 46 |
| 46 | Chờ 1 bước (`-1`) | (20, 15) | (20, 15) | Dự kiến đứng yên tại (20, 15); hướng tới tọa độ (20, 15) | 46 |
| 47 | Chờ 1 bước (`-1`) | (20, 15) | (20, 15) | Dự kiến đứng yên tại (20, 15); hướng tới tọa độ (20, 15) | 46 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (13, 7) (ô=181)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 10)
- Mảng hành động đã gửi server: `[0, 2, 3, 3, 3, 3, 4, 3, 3, 3, 3, 1, 2, 2, 3, 2, 1, 2, 0, 0, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 6)) | 54 |
| 2-3 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 6)) | 53 |
| 4-5 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 52 |
| 6-7 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 51 |
| 8 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 49 |
| 9-11 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(15, 10)) | 47 |
| 12-13 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 46 |
| 14-16 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 44 |
| 17-18 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 43 |
| 19-21 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 41 |
| 22-24 | Di chuyển hướng 3 (`3`) | (16, 14) | (17, 15) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 15)) | 39 |
| 25-26 | Di chuyển hướng 1 (`1`) | (17, 15) | (17, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(17, 14)) | 38 |
| 27-28 | Di chuyển hướng 2 (`2`) | (17, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 37 |
| 29 | Di chuyển hướng 2 (`2`) | (18, 14) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 55 |
| 30-32 | Di chuyển hướng 3 (`3`) | (19, 14) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 53 |
| 33-35 | Di chuyển hướng 2 (`2`) | (20, 15) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 51 |
| 36 | Di chuyển hướng 1 (`1`) | (21, 15) | (21, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 14)) | 49 |
| 37-38 | Di chuyển hướng 2 (`2`) | (21, 14) | (22, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(22, 14)) | 48 |
| 39-40 | Di chuyển hướng 0 (`0`) | (22, 14) | (22, 13) | Dự kiến đến điểm hẹn tọa độ (22, 13) | 47 |
| 41-43 | Di chuyển hướng 0 (`0`) | (22, 13) | (21, 12) | Dự kiến đến điểm hẹn tọa độ (21, 12) | 45 |
| 44-46 | Di chuyển hướng 0 (`0`) | (21, 12) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 43 |
| 47 | Di chuyển hướng 1 (`1`) | (21, 11) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 55 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (22, 15) (ô=382)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(22, 6))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(22, 6))
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 3, 4, 4, 4, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (22, 15) | (22, 16) | Dự kiến đến điểm hẹn tọa độ (22, 16) | 54 |
| 2-4 | Di chuyển hướng 3 (`3`) | (22, 16) | (23, 17) | Dự kiến đến điểm hẹn tọa độ (23, 17) | 52 |
| 5 | Di chuyển hướng 3 (`3`) | (23, 17) | (23, 18) | Dự kiến đến điểm hẹn tọa độ (23, 18) | 50 |
| 6 | Di chuyển hướng 4 (`4`) | (23, 18) | (23, 19) | Dự kiến đến điểm hẹn tọa độ (23, 19) | 48 |
| 7-9 | Di chuyển hướng 3 (`3`) | (23, 19) | (23, 20) | Dự kiến đến điểm hẹn tọa độ (23, 20) | 46 |
| 10-11 | Di chuyển hướng 4 (`4`) | (23, 20) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 45 |
| 12-13 | Di chuyển hướng 4 (`4`) | (23, 21) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 44 |
| 14-16 | Di chuyển hướng 4 (`4`) | (22, 22) | (22, 23) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(22, 23)) | 42 |
| 17-18 | Di chuyển hướng 0 (`0`) | (22, 23) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 41 |
| 19-21 | Di chuyển hướng 0 (`0`) | (21, 22) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 39 |
| 22 | Di chuyển hướng 0 (`0`) | (21, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 37 |
| 23 | Di chuyển hướng 0 (`0`) | (20, 20) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 35 |
| 24-25 | Di chuyển hướng 1 (`1`) | (20, 19) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 34 |
| 26-27 | Di chuyển hướng 0 (`0`) | (20, 18) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 33 |
| 28-30 | Di chuyển hướng 1 (`1`) | (20, 17) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 31 |
| 31-32 | Di chuyển hướng 1 (`1`) | (20, 16) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 30 |
| 33 | Di chuyển hướng 1 (`1`) | (21, 15) | (21, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 14)) | 28 |
| 34-35 | Di chuyển hướng 0 (`0`) | (21, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 27 |
| 36-38 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 25 |
| 39 | Di chuyển hướng 1 (`1`) | (20, 12) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 23 |
| 40 | Di chuyển hướng 1 (`1`) | (21, 11) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 55 |
| 41-42 | Di chuyển hướng 1 (`1`) | (21, 10) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 54 |
| 43-44 | Di chuyển hướng 0 (`0`) | (22, 9) | (21, 8) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(21, 8)) | 53 |
| 45-46 | Di chuyển hướng 1 (`1`) | (21, 8) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 52 |
| 47 | Di chuyển hướng 1 (`1`) | (22, 7) | (22, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(22, 6)) | 50 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (7, 8) (ô=199)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 15)
- Mảng hành động đã gửi server: `[3, 2, 3, 2, 2, 2, 2, 2, 2, 5, 4, 5, 5, 5, 4, 5, 5, 0, 5, 5, 5, 5, 3, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (7, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 54 |
| 2-3 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 53 |
| 4 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 51 |
| 5-7 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 49 |
| 8 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 47 |
| 9-11 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 45 |
| 12-13 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 44 |
| 14-16 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 42 |
| 17 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(15, 10)) | 40 |
| 18-19 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 39 |
| 20 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 37 |
| 21-22 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 36 |
| 23-24 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(12, 11)) | 35 |
| 25-26 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 34 |
| 27-29 | Di chuyển hướng 4 (`4`) | (11, 11) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 32 |
| 30 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 30 |
| 31 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 28 |
| 32 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 26 |
| 33-35 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 24 |
| 36-37 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(6, 11)) | 23 |
| 38-39 | Di chuyển hướng 5 (`5`) | (6, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 22 |
| 40-41 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(4, 11)) | 21 |
| 42-43 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 20 |
| 44 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 18 |
| 45 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 16 |
| 46-47 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 15 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (13, 23) (ô=565)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 10)
- Mảng hành động đã gửi server: `[2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (13, 23) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 55 |
| 2 | Di chuyển hướng 1 (`1`) | (14, 23) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 55 |
| 3-4 | Di chuyển hướng 2 (`2`) | (14, 22) | (15, 22) | Dự kiến đến điểm hẹn tọa độ (15, 22) | 55 |
| 5-6 | Di chuyển hướng 1 (`1`) | (15, 22) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 55 |
| 7-8 | Di chuyển hướng 2 (`2`) | (16, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 55 |
| 9-11 | Di chuyển hướng 1 (`1`) | (17, 21) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 55 |
| 12-13 | Di chuyển hướng 1 (`1`) | (17, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 55 |
| 14-16 | Di chuyển hướng 1 (`1`) | (18, 19) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 55 |
| 17-19 | Di chuyển hướng 1 (`1`) | (18, 18) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 55 |
| 20-22 | Di chuyển hướng 1 (`1`) | (19, 17) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 55 |
| 23-25 | Di chuyển hướng 1 (`1`) | (19, 16) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 55 |
| 26-28 | Di chuyển hướng 0 (`0`) | (20, 15) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 55 |
| 29-31 | Di chuyển hướng 1 (`1`) | (19, 14) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 55 |
| 32-34 | Di chuyển hướng 1 (`1`) | (20, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 55 |
| 35 | Di chuyển hướng 1 (`1`) | (20, 12) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 55 |
| 36 | Di chuyển hướng 1 (`1`) | (21, 11) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 55 |
| 37-47 | Chờ 11 bước (`-11`) | (21, 10) | (21, 10) | Dự kiến đứng yên tại (21, 10); hướng tới tọa độ (21, 10) | 55 |

