# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 59
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 9 | #0 | #6 | (5, 4) | 2 | 54 |
| 16 | #3 | #7 | (9, 17) | 0 | 54 |
| 25 | #2 | #6 | (12, 8) | 0 | 54 |
| 25 | #4 | #6 | (12, 8) | 24 | 54 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (6, 1) (ô=32)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(3, 12))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(3, 12))
- Mảng hành động đã gửi server: `[4, 4, 3, -4, 4, 4, 3, 3, 3, 3, 4, 3, 3, 3, 3, 4, 5, 4, 4, 4, 4, 0, 0, 0, 0, 0, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (6, 1) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 4 |
| 2-3 | Di chuyển hướng 4 (`4`) | (5, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 3 |
| 4-5 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 2 |
| 6-9 | Chờ 4 bước (`-4`) | (5, 4) | (5, 4) | Dự kiến đứng yên tại (5, 4); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 54 |
| 10-11 | Di chuyển hướng 4 (`4`) | (5, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 53 |
| 12-14 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 51 |
| 15-16 | Di chuyển hướng 3 (`3`) | (4, 6) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 50 |
| 17-18 | Di chuyển hướng 3 (`3`) | (5, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 49 |
| 19-20 | Di chuyển hướng 3 (`3`) | (5, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 48 |
| 21-22 | Di chuyển hướng 3 (`3`) | (6, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 47 |
| 23-24 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 45 |
| 25-27 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 43 |
| 28 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 41 |
| 29 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 39 |
| 30-31 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 38 |
| 32-33 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 37 |
| 34-35 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 36 |
| 36-37 | Di chuyển hướng 4 (`4`) | (6, 16) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 35 |
| 38-40 | Di chuyển hướng 4 (`4`) | (6, 17) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 33 |
| 41-42 | Di chuyển hướng 4 (`4`) | (5, 18) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 32 |
| 43-44 | Di chuyển hướng 4 (`4`) | (5, 19) | (4, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 20)) | 31 |
| 45-46 | Di chuyển hướng 0 (`0`) | (4, 20) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 30 |
| 47-48 | Di chuyển hướng 0 (`0`) | (4, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 29 |
| 49-50 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 28 |
| 51-52 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 27 |
| 53-54 | Di chuyển hướng 0 (`0`) | (2, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 26 |
| 55-56 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 25 |
| 57 | Di chuyển hướng 1 (`1`) | (2, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 23 |
| 58 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(3, 12)) | 21 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (22, 14) (ô=386)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(25, 14))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(25, 14))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 4, 4, 4, 5, 4, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 3, 3, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (22, 14) | (21, 14) | Dự kiến đến điểm hẹn tọa độ (21, 14) | 31 |
| 2-3 | Di chuyển hướng 5 (`5`) | (21, 14) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 30 |
| 4 | Di chuyển hướng 5 (`5`) | (20, 14) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 28 |
| 5-6 | Di chuyển hướng 5 (`5`) | (19, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 27 |
| 7 | Di chuyển hướng 4 (`4`) | (18, 14) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 25 |
| 8-9 | Di chuyển hướng 4 (`4`) | (18, 15) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 24 |
| 10-11 | Di chuyển hướng 4 (`4`) | (17, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 23 |
| 12-13 | Di chuyển hướng 5 (`5`) | (17, 17) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 22 |
| 14 | Di chuyển hướng 4 (`4`) | (16, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 20 |
| 15-16 | Di chuyển hướng 2 (`2`) | (15, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 19 |
| 17-18 | Di chuyển hướng 2 (`2`) | (16, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 18 |
| 19 | Di chuyển hướng 2 (`2`) | (17, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 16 |
| 20-22 | Di chuyển hướng 2 (`2`) | (18, 18) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 14 |
| 23 | Di chuyển hướng 2 (`2`) | (19, 18) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 12 |
| 24-25 | Di chuyển hướng 1 (`1`) | (20, 18) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 11 |
| 26 | Di chuyển hướng 1 (`1`) | (21, 17) | (21, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(21, 16)) | 9 |
| 27-28 | Di chuyển hướng 1 (`1`) | (21, 16) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 8 |
| 29-30 | Di chuyển hướng 1 (`1`) | (22, 15) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 7 |
| 31-32 | Di chuyển hướng 1 (`1`) | (22, 14) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 6 |
| 33-34 | Di chuyển hướng 1 (`1`) | (23, 13) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 5 |
| 35-36 | Di chuyển hướng 2 (`2`) | (23, 12) | (24, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(24, 12)) | 4 |
| 37-38 | Di chuyển hướng 3 (`3`) | (24, 12) | (25, 13) | Dự kiến đến điểm hẹn tọa độ (25, 13) | 3 |
| 39 | Di chuyển hướng 3 (`3`) | (25, 13) | (25, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(25, 14)) | 1 |
| 40-58 | Chờ 19 bước (`-19`) | (25, 14) | (25, 14) | Dự kiến đứng yên tại (25, 14); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(25, 14)) | 1 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 8) (ô=216)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(22, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(22, 5)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, -17, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 3, 3, 3, 3, 2, 2, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 3 |
| 2-3 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 2 |
| 4-5 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 1 |
| 6-7 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 0 |
| 8-24 | Chờ 17 bước (`-17`) | (12, 8) | (12, 8) | Dự kiến đứng yên tại (12, 8); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 54 |
| 25-26 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 53 |
| 27-28 | Di chuyển hướng 1 (`1`) | (13, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 51 |
| 29-31 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 49 |
| 32 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 47 |
| 33 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 45 |
| 34-36 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 43 |
| 37-38 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 42 |
| 39 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 40 |
| 40-41 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 0)) | 39 |
| 42-43 | Di chuyển hướng 2 (`2`) | (17, 0) | (18, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(18, 0)) | 38 |
| 44-45 | Di chuyển hướng 3 (`3`) | (18, 0) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 37 |
| 46-48 | Di chuyển hướng 3 (`3`) | (19, 1) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 35 |
| 49-50 | Di chuyển hướng 3 (`3`) | (19, 2) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 34 |
| 51-52 | Di chuyển hướng 3 (`3`) | (20, 3) | (20, 4) | Dự kiến đến điểm hẹn tọa độ (20, 4) | 33 |
| 53 | Di chuyển hướng 3 (`3`) | (20, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 31 |
| 54 | Di chuyển hướng 2 (`2`) | (21, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 29 |
| 55-56 | Di chuyển hướng 2 (`2`) | (22, 5) | (23, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 5)) | 28 |
| 57-58 | Di chuyển hướng 5 (`5`) | (23, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 27 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 20) (ô=531)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 12)
- Mảng hành động đã gửi server: `[5, 0, 0, 0, -9, 2, 1, 1, 1, 0, 3, 3, 3, 2, 3, 2, 3, 1, 1, 1, 0, 0, 1, 2, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 3 |
| 2-3 | Di chuyển hướng 0 (`0`) | (10, 20) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 2 |
| 4-5 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 1 |
| 6-7 | Di chuyển hướng 0 (`0`) | (9, 18) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 0 |
| 8-16 | Chờ 9 bước (`-9`) | (9, 17) | (9, 17) | Dự kiến đứng yên tại (9, 17); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 54 |
| 17-18 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 53 |
| 19-20 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 52 |
| 21-22 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 50 |
| 23-24 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 49 |
| 25 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 13)) | 47 |
| 26-27 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 46 |
| 28 | Di chuyển hướng 3 (`3`) | (11, 14) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 44 |
| 29-30 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 43 |
| 31-32 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 42 |
| 33-34 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 40 |
| 35-36 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 39 |
| 37-38 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 38 |
| 39-40 | Di chuyển hướng 1 (`1`) | (15, 18) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 37 |
| 41 | Di chuyển hướng 1 (`1`) | (16, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 35 |
| 42-44 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 33 |
| 45 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 31 |
| 46-47 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 30 |
| 48 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(16, 12)) | 28 |
| 49-50 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 27 |
| 51-53 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 25 |
| 54-55 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 24 |
| 56-57 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 23 |
| 58 | Chờ 1 bước (`-1`) | (20, 12) | (20, 12) | Dự kiến đứng yên tại (20, 12); hướng tới tọa độ (20, 12) | 23 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (2, 13) (ô=340)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #24 (thương hiệu=24, tọa độ=(18, 0))
- Địa điểm đích kế hoạch: Spot #24 (thương hiệu=24, tọa độ=(18, 0))
- Mảng hành động đã gửi server: `[2, 2, 1, 2, 1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 0, 0, 0, 0, 0, 0, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 40 |
| 2 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 38 |
| 3-4 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 37 |
| 5-6 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 36 |
| 7 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 34 |
| 8-10 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 32 |
| 11-12 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 30 |
| 13-14 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 29 |
| 15-16 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 28 |
| 17-18 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 27 |
| 19-20 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 26 |
| 21-22 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 25 |
| 23-24 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 54 |
| 25-26 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 53 |
| 27-28 | Di chuyển hướng 2 (`2`) | (13, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 51 |
| 29-30 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 50 |
| 31-32 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 48 |
| 33-34 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 47 |
| 35-36 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 46 |
| 37-38 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 45 |
| 39-40 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 44 |
| 41-42 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 43 |
| 43-44 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 5)) | 42 |
| 45-46 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 41 |
| 47 | Di chuyển hướng 0 (`0`) | (19, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 39 |
| 48-50 | Di chuyển hướng 0 (`0`) | (19, 3) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 37 |
| 51-53 | Di chuyển hướng 0 (`0`) | (18, 2) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 35 |
| 54-55 | Di chuyển hướng 0 (`0`) | (18, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 0)) | 34 |
| 56-57 | Di chuyển hướng 2 (`2`) | (17, 0) | (18, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(18, 0)) | 33 |
| 58 | Chờ 1 bước (`-1`) | (18, 0) | (18, 0) | Dự kiến đứng yên tại (18, 0); mục tiêu Spot #24 (thương hiệu=24, tọa độ=(18, 0)) | 33 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (5, 5) (ô=135)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 3)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 5, 5, 5, 1, 1, 0, 1, 0, 0, 1, 1, 0, 2, 2, 3, 2, 2, 3, 2, 2, 3, 3, 3, 5, 5, 0, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 44 |
| 3-4 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 43 |
| 5-6 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 42 |
| 7-8 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 41 |
| 9-10 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 40 |
| 11 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 38 |
| 12-13 | Di chuyển hướng 5 (`5`) | (1, 9) | (0, 9) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 9)) | 37 |
| 14-15 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 36 |
| 16-17 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 35 |
| 18-20 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 33 |
| 21-22 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 32 |
| 23-24 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 31 |
| 25-26 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đến điểm hẹn tọa độ (0, 3) | 30 |
| 27-28 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 29 |
| 29-30 | Di chuyển hướng 1 (`1`) | (0, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 28 |
| 31-32 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 27 |
| 33-34 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 26 |
| 35 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 24 |
| 36 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 22 |
| 37-38 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 21 |
| 39 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 19 |
| 40-41 | Di chuyển hướng 3 (`3`) | (5, 1) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 18 |
| 42-43 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 17 |
| 44-45 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 16 |
| 46-47 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 15 |
| 48 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 13 |
| 49-50 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 12 |
| 51-52 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 11 |
| 53 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 9 |
| 54 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 7 |
| 55-56 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 6 |
| 57-58 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 5 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (1, 5) (ô=131)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(12, 8))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(12, 8))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 3, 3, -34]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 54 |
| 2-3 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 54 |
| 4 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 54 |
| 5-6 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 54 |
| 7-8 | Di chuyển hướng 2 (`2`) | (4, 4) | (5, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 54 |
| 9-10 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 54 |
| 11-12 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 54 |
| 13 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 54 |
| 14 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 54 |
| 15-16 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 54 |
| 17-18 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 54 |
| 19-20 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 54 |
| 21-22 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 54 |
| 23-24 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 54 |
| 25-58 | Chờ 34 bước (`-34`) | (12, 8) | (12, 8) | Dự kiến đứng yên tại (12, 8); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 54 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (15, 18) (ô=483)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(9, 17))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(9, 17))
- Mảng hành động đã gửi server: `[0, 5, 0, 5, 5, 5, 4, 5, -43]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 54 |
| 2-3 | Di chuyển hướng 5 (`5`) | (15, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 54 |
| 4-5 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 54 |
| 6-7 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 54 |
| 8-9 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 54 |
| 10-11 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 54 |
| 12-13 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 54 |
| 14-15 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 54 |
| 16-58 | Chờ 43 bước (`-43`) | (9, 17) | (9, 17) | Dự kiến đứng yên tại (9, 17); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 54 |

