# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 61
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 17 | #4 | #6 | (22, 18) | 0 | 60 |
| 26 | #0 | #7 | (5, 9) | 4 | 60 |
| 29 | #0 | #7 | (5, 8) | 59 | 60 |
| 32 | #0 | #7 | (6, 7) | 58 | 60 |
| 34 | #0 | #7 | (6, 6) | 59 | 60 |
| 37 | #0 | #7 | (7, 5) | 58 | 60 |
| 39 | #0 | #7 | (7, 4) | 59 | 60 |
| 41 | #0 | #7 | (8, 3) | 59 | 60 |
| 42 | #3 | #6 | (13, 12) | 12 | 60 |
| 43 | #0 | #7 | (8, 2) | 59 | 60 |
| 45 | #0 | #7 | (9, 1) | 59 | 60 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (4, 6) (ô=160)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 0)
- Mảng hành động đã gửi server: `[5, 4, 4, 4, 4, 4, 2, 1, 2, 2, 1, -8, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 0, 0, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 17 |
| 1 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 7)) | 15 |
| 2-3 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 14 |
| 4-5 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 13 |
| 6-7 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 12 |
| 8-9 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 11)) | 10 |
| 10-11 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 9 |
| 12-13 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 8 |
| 14-15 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 7 |
| 16 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 10)) | 5 |
| 17-18 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 4 |
| 19-26 | Chờ 8 bước (`-8`) | (5, 9) | (5, 9) | Dự kiến đứng yên tại (5, 9); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 60 |
| 27-28 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 60 |
| 29-31 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 60 |
| 32-33 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 60 |
| 34-36 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 60 |
| 37-38 | Di chuyển hướng 1 (`1`) | (7, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 60 |
| 39-40 | Di chuyển hướng 1 (`1`) | (7, 4) | (8, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 60 |
| 41-42 | Di chuyển hướng 1 (`1`) | (8, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 60 |
| 43-44 | Di chuyển hướng 1 (`1`) | (8, 2) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 60 |
| 45-46 | Di chuyển hướng 1 (`1`) | (9, 1) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 59 |
| 47-48 | Di chuyển hướng 2 (`2`) | (9, 0) | (10, 0) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(10, 0)) | 58 |
| 49-50 | Di chuyển hướng 2 (`2`) | (10, 0) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 57 |
| 51 | Di chuyển hướng 3 (`3`) | (11, 0) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 55 |
| 52-53 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 2)) | 54 |
| 54-55 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 53 |
| 56-57 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 52 |
| 58 | Di chuyển hướng 5 (`5`) | (11, 0) | (10, 0) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(10, 0)) | 50 |
| 59-60 | Di chuyển hướng 5 (`5`) | (10, 0) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 49 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (16, 19) (ô=510)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(12, 24))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(12, 24))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 5, 5, 4, 4, 4, 4, 4, 5, 4, 4, 4, 5, 5, 4, 5, 3, 1, 2, 2, 2, 3, 2, 2, 2, 2, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (16, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 51 |
| 3-4 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 50 |
| 5 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 48 |
| 6 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 46 |
| 7-9 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 44 |
| 10-11 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 42 |
| 12-13 | Di chuyển hướng 5 (`5`) | (12, 15) | (11, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 15)) | 41 |
| 14-15 | Di chuyển hướng 4 (`4`) | (11, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 40 |
| 16-17 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 39 |
| 18 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 37 |
| 19-21 | Di chuyển hướng 4 (`4`) | (9, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 35 |
| 22-23 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 34 |
| 24 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 32 |
| 25 | Di chuyển hướng 4 (`4`) | (7, 20) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 30 |
| 26-27 | Di chuyển hướng 4 (`4`) | (7, 21) | (6, 22) | Dự kiến đến điểm hẹn tọa độ (6, 22) | 29 |
| 28-29 | Di chuyển hướng 4 (`4`) | (6, 22) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 28 |
| 30-31 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 27 |
| 32 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến đến điểm hẹn tọa độ (4, 23) | 25 |
| 33-34 | Di chuyển hướng 4 (`4`) | (4, 23) | (3, 24) | Dự kiến đến điểm hẹn tọa độ (3, 24) | 24 |
| 35-36 | Di chuyển hướng 5 (`5`) | (3, 24) | (2, 24) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 24)) | 23 |
| 37-38 | Di chuyển hướng 3 (`3`) | (2, 24) | (3, 25) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 25)) | 22 |
| 39-40 | Di chuyển hướng 1 (`1`) | (3, 25) | (3, 24) | Dự kiến đến điểm hẹn tọa độ (3, 24) | 21 |
| 41-42 | Di chuyển hướng 2 (`2`) | (3, 24) | (4, 24) | Dự kiến đến điểm hẹn tọa độ (4, 24) | 20 |
| 43-44 | Di chuyển hướng 2 (`2`) | (4, 24) | (5, 24) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(5, 24)) | 19 |
| 45-46 | Di chuyển hướng 2 (`2`) | (5, 24) | (6, 24) | Dự kiến đến điểm hẹn tọa độ (6, 24) | 18 |
| 47 | Di chuyển hướng 3 (`3`) | (6, 24) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 16 |
| 48-50 | Di chuyển hướng 2 (`2`) | (7, 25) | (8, 25) | Dự kiến đến điểm hẹn tọa độ (8, 25) | 14 |
| 51 | Di chuyển hướng 2 (`2`) | (8, 25) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 12 |
| 52-54 | Di chuyển hướng 2 (`2`) | (9, 25) | (10, 25) | Dự kiến đến điểm hẹn tọa độ (10, 25) | 10 |
| 55-56 | Di chuyển hướng 2 (`2`) | (10, 25) | (11, 25) | Dự kiến đến điểm hẹn tọa độ (11, 25) | 9 |
| 57-58 | Di chuyển hướng 2 (`2`) | (11, 25) | (12, 25) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(12, 25)) | 8 |
| 59-60 | Di chuyển hướng 1 (`1`) | (12, 25) | (12, 24) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(12, 24)) | 7 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (15, 5) (ô=145)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(25, 8))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(25, 8))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 1, 0, 0, 0, 0, 1, 1, 1, 3, 3, 3, 3, 2, 2, 2, 3, 2, 3, 2, 3, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (15, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 45 |
| 2-3 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 44 |
| 4-5 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 43 |
| 6-8 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 9)) | 41 |
| 9-10 | Di chuyển hướng 1 (`1`) | (17, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 40 |
| 11-12 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 39 |
| 13 | Di chuyển hướng 0 (`0`) | (17, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 37 |
| 14 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 35 |
| 15-16 | Di chuyển hướng 0 (`0`) | (16, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 34 |
| 17-18 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(16, 3)) | 33 |
| 19-20 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 32 |
| 21-22 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(17, 1)) | 31 |
| 23-24 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 30 |
| 25-26 | Di chuyển hướng 3 (`3`) | (17, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 29 |
| 27-28 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 28 |
| 29-30 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 27 |
| 31-32 | Di chuyển hướng 2 (`2`) | (19, 5) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 26 |
| 33-34 | Di chuyển hướng 2 (`2`) | (20, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 25 |
| 35 | Di chuyển hướng 2 (`2`) | (21, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 23 |
| 36 | Di chuyển hướng 3 (`3`) | (22, 5) | (22, 6) | Dự kiến đến điểm hẹn tọa độ (22, 6) | 21 |
| 37 | Di chuyển hướng 2 (`2`) | (22, 6) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 19 |
| 38-39 | Di chuyển hướng 3 (`3`) | (23, 6) | (24, 7) | Dự kiến đến điểm hẹn tọa độ (24, 7) | 18 |
| 40-41 | Di chuyển hướng 2 (`2`) | (24, 7) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 17 |
| 42 | Di chuyển hướng 3 (`3`) | (25, 7) | (25, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(25, 8)) | 15 |
| 43-60 | Chờ 18 bước (`-18`) | (25, 8) | (25, 8) | Dự kiến đứng yên tại (25, 8); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(25, 8)) | 15 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (17, 24) (ô=641)
- Nhiên liệu đầu ngày: 44
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 9)
- Mảng hành động đã gửi server: `[0, 0, 1, 0, 0, 0, 0, 0, 0, 5, 5, 5, 4, 2, 2, 1, 2, 1, 1, 0, 5, 5, 0, 0, 0, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (17, 24) | (17, 23) | Dự kiến đến điểm hẹn tọa độ (17, 23) | 43 |
| 2-3 | Di chuyển hướng 0 (`0`) | (17, 23) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 42 |
| 4-5 | Di chuyển hướng 1 (`1`) | (16, 22) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 41 |
| 6 | Di chuyển hướng 0 (`0`) | (17, 21) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 39 |
| 7-8 | Di chuyển hướng 0 (`0`) | (16, 20) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 38 |
| 9-11 | Di chuyển hướng 0 (`0`) | (16, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 36 |
| 12-13 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 35 |
| 14 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 33 |
| 15 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 31 |
| 16-18 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 29 |
| 19-20 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 27 |
| 21-22 | Di chuyển hướng 5 (`5`) | (12, 15) | (11, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 15)) | 26 |
| 23-24 | Di chuyển hướng 4 (`4`) | (11, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 25 |
| 25-26 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 24 |
| 27-28 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 23 |
| 29-30 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 22 |
| 31-32 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 20 |
| 33-35 | Di chuyển hướng 1 (`1`) | (14, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 18 |
| 36-38 | Di chuyển hướng 1 (`1`) | (14, 14) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 16 |
| 39 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 14 |
| 40-41 | Di chuyển hướng 5 (`5`) | (14, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 60 |
| 42-43 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 58 |
| 44-45 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 57 |
| 46-47 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 56 |
| 48-50 | Di chuyển hướng 0 (`0`) | (11, 10) | (11, 9) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(11, 9)) | 54 |
| 51-52 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 53 |
| 53-55 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 51 |
| 56-57 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 50 |
| 58-60 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 48 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (22, 18) (ô=490)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 17)
- Mảng hành động đã gửi server: `[-18, 3, 3, 4, 4, 4, 2, 3, 4, 5, 5, 5, 0, 5, 5, 5, 1, 0, 1, 1, 0, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-17 | Chờ 18 bước (`-18`) | (22, 18) | (22, 18) | Dự kiến đứng yên tại (22, 18); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(22, 18)) | 60 |
| 18-19 | Di chuyển hướng 3 (`3`) | (22, 18) | (23, 19) | Dự kiến đến điểm hẹn tọa độ (23, 19) | 59 |
| 20-21 | Di chuyển hướng 3 (`3`) | (23, 19) | (23, 20) | Dự kiến đến điểm hẹn tọa độ (23, 20) | 58 |
| 22-23 | Di chuyển hướng 4 (`4`) | (23, 20) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 57 |
| 24 | Di chuyển hướng 4 (`4`) | (23, 21) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 55 |
| 25-26 | Di chuyển hướng 4 (`4`) | (22, 22) | (22, 23) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(22, 23)) | 54 |
| 27-28 | Di chuyển hướng 2 (`2`) | (22, 23) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 53 |
| 29-31 | Di chuyển hướng 3 (`3`) | (23, 23) | (23, 24) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(23, 24)) | 51 |
| 32-33 | Di chuyển hướng 4 (`4`) | (23, 24) | (23, 25) | Dự kiến đến điểm hẹn tọa độ (23, 25) | 50 |
| 34-35 | Di chuyển hướng 5 (`5`) | (23, 25) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 49 |
| 36-37 | Di chuyển hướng 5 (`5`) | (22, 25) | (21, 25) | Dự kiến đến điểm hẹn tọa độ (21, 25) | 48 |
| 38-39 | Di chuyển hướng 5 (`5`) | (21, 25) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 47 |
| 40-41 | Di chuyển hướng 0 (`0`) | (20, 25) | (19, 24) | Dự kiến đến điểm hẹn tọa độ (19, 24) | 46 |
| 42 | Di chuyển hướng 5 (`5`) | (19, 24) | (18, 24) | Dự kiến đến điểm hẹn tọa độ (18, 24) | 44 |
| 43-44 | Di chuyển hướng 5 (`5`) | (18, 24) | (17, 24) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(17, 24)) | 43 |
| 45-46 | Di chuyển hướng 5 (`5`) | (17, 24) | (16, 24) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 24)) | 42 |
| 47-48 | Di chuyển hướng 1 (`1`) | (16, 24) | (17, 23) | Dự kiến đến điểm hẹn tọa độ (17, 23) | 41 |
| 49-50 | Di chuyển hướng 0 (`0`) | (17, 23) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 40 |
| 51-52 | Di chuyển hướng 1 (`1`) | (16, 22) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 39 |
| 53 | Di chuyển hướng 1 (`1`) | (17, 21) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 37 |
| 54-55 | Di chuyển hướng 0 (`0`) | (17, 20) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 36 |
| 56-57 | Di chuyển hướng 0 (`0`) | (17, 19) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 35 |
| 58-59 | Di chuyển hướng 1 (`1`) | (16, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 34 |
| 60 | Chờ 1 bước (`-1`) | (17, 17) | (17, 17) | Dự kiến đứng yên tại (17, 17); hướng tới tọa độ (17, 17) | 34 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (9, 0) (ô=9)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(0, 3))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(0, 3))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 3, 4, -36]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 0) | (8, 0) | Dự kiến đến điểm hẹn tọa độ (8, 0) | 17 |
| 2-3 | Di chuyển hướng 5 (`5`) | (8, 0) | (7, 0) | Dự kiến đến điểm hẹn tọa độ (7, 0) | 16 |
| 4-5 | Di chuyển hướng 5 (`5`) | (7, 0) | (6, 0) | Dự kiến đến điểm hẹn tọa độ (6, 0) | 15 |
| 6-7 | Di chuyển hướng 5 (`5`) | (6, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 14 |
| 8-9 | Di chuyển hướng 5 (`5`) | (5, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 13 |
| 10-11 | Di chuyển hướng 5 (`5`) | (4, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 12 |
| 12-14 | Di chuyển hướng 5 (`5`) | (3, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 10 |
| 15-16 | Di chuyển hướng 5 (`5`) | (2, 0) | (1, 0) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 0)) | 9 |
| 17-18 | Di chuyển hướng 4 (`4`) | (1, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 8 |
| 19-20 | Di chuyển hướng 5 (`5`) | (1, 1) | (0, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 1)) | 7 |
| 21-22 | Di chuyển hướng 3 (`3`) | (0, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 6 |
| 23-24 | Di chuyển hướng 4 (`4`) | (0, 2) | (0, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(0, 3)) | 5 |
| 25-60 | Chờ 36 bước (`-36`) | (0, 3) | (0, 3) | Dự kiến đứng yên tại (0, 3); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(0, 3)) | 5 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (14, 15) (ô=404)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 12)
- Mảng hành động đã gửi server: `[3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, -23]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 60 |
| 3 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 60 |
| 4 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 60 |
| 5-6 | Di chuyển hướng 2 (`2`) | (15, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 60 |
| 7-8 | Di chuyển hướng 2 (`2`) | (16, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 60 |
| 9-10 | Di chuyển hướng 2 (`2`) | (17, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 60 |
| 11-12 | Di chuyển hướng 2 (`2`) | (18, 18) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 60 |
| 13-14 | Di chuyển hướng 2 (`2`) | (19, 18) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 60 |
| 15 | Di chuyển hướng 2 (`2`) | (20, 18) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 60 |
| 16 | Di chuyển hướng 2 (`2`) | (21, 18) | (22, 18) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(22, 18)) | 60 |
| 17-18 | Di chuyển hướng 5 (`5`) | (22, 18) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 60 |
| 19 | Di chuyển hướng 5 (`5`) | (21, 18) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 60 |
| 20 | Di chuyển hướng 5 (`5`) | (20, 18) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 60 |
| 21-22 | Di chuyển hướng 5 (`5`) | (19, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 60 |
| 23-24 | Di chuyển hướng 5 (`5`) | (18, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 60 |
| 25-26 | Di chuyển hướng 0 (`0`) | (17, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 60 |
| 27-28 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 60 |
| 29 | Di chuyển hướng 0 (`0`) | (16, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 60 |
| 30-31 | Di chuyển hướng 0 (`0`) | (16, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 60 |
| 32-34 | Di chuyển hướng 0 (`0`) | (15, 14) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 60 |
| 35 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 60 |
| 36-37 | Di chuyển hướng 5 (`5`) | (14, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 60 |
| 38-60 | Chờ 23 bước (`-23`) | (13, 12) | (13, 12) | Dự kiến đứng yên tại (13, 12); hướng tới tọa độ (13, 12) | 60 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (17, 9) (ô=251)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 1)
- Mảng hành động đã gửi server: `[5, 5, 4, 4, 4, 5, 5, 5, 5, 0, 5, 0, 5, 5, 0, 1, 1, 1, 1, 1, 1, 1, 1, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 60 |
| 2-3 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 60 |
| 4-5 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 60 |
| 6-7 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 60 |
| 8-9 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 60 |
| 10-11 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 60 |
| 12-13 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 60 |
| 14-15 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 60 |
| 16-17 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 60 |
| 18 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 60 |
| 19 | Di chuyển hướng 5 (`5`) | (9, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 60 |
| 20 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 60 |
| 21-22 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 60 |
| 23-24 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 60 |
| 25 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 60 |
| 26-27 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 60 |
| 28-30 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 60 |
| 31-32 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 60 |
| 33-35 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 60 |
| 36-37 | Di chuyển hướng 1 (`1`) | (7, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 60 |
| 38-39 | Di chuyển hướng 1 (`1`) | (7, 4) | (8, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 60 |
| 40-41 | Di chuyển hướng 1 (`1`) | (8, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 60 |
| 42-43 | Di chuyển hướng 1 (`1`) | (8, 2) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 60 |
| 44-60 | Chờ 17 bước (`-17`) | (9, 1) | (9, 1) | Dự kiến đứng yên tại (9, 1); hướng tới tọa độ (9, 1) | 60 |

