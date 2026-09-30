# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 56
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 47 | #5 | #7 | (9, 0) | 27 | 60 |
| 49 | #5 | #7 | (10, 0) | 59 | 60 |
| 54 | #1 | #6 | (7, 25) | 12 | 60 |
| 56 | #0 | #7 | (10, 0) | 24 | 60 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 2) (ô=57)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(10, 0))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(10, 0))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 5, 3, 4, 3, 2, 3, 3, 3, 2, 3, 3, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (5, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 59 |
| 2 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 57 |
| 3-5 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 55 |
| 6-7 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 54 |
| 8-9 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 53 |
| 10-11 | Di chuyển hướng 5 (`5`) | (1, 1) | (0, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 1)) | 52 |
| 12-13 | Di chuyển hướng 3 (`3`) | (0, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 51 |
| 14-15 | Di chuyển hướng 4 (`4`) | (0, 2) | (0, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(0, 3)) | 50 |
| 16-17 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 49 |
| 18-19 | Di chuyển hướng 2 (`2`) | (0, 4) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 48 |
| 20 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 46 |
| 21-22 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 45 |
| 23 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 7)) | 43 |
| 24-25 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 42 |
| 26 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 40 |
| 27-29 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 38 |
| 30-31 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 10)) | 37 |
| 32-33 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 36 |
| 34-35 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 35 |
| 36-38 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 33 |
| 39-40 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 32 |
| 41-43 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 30 |
| 44-45 | Di chuyển hướng 1 (`1`) | (7, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 29 |
| 46-47 | Di chuyển hướng 1 (`1`) | (7, 4) | (8, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 28 |
| 48-49 | Di chuyển hướng 1 (`1`) | (8, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 27 |
| 50-51 | Di chuyển hướng 1 (`1`) | (8, 2) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 26 |
| 52-53 | Di chuyển hướng 1 (`1`) | (9, 1) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 25 |
| 54-55 | Di chuyển hướng 2 (`2`) | (9, 0) | (10, 0) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(10, 0)) | 60 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 7) (ô=194)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 25)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 25)
- Mảng hành động đã gửi server: `[4, 4, 3, 3, 3, 2, 2, 3, 4, 4, 5, 4, 4, 4, 4, 4, 4, 5, 5, 4, 5, 4, 5, 5, 5, 4, 3, 2, 2, 1, 2, 3, -1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 59 |
| 2-3 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(11, 9)) | 58 |
| 4-5 | Di chuyển hướng 3 (`3`) | (11, 9) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 57 |
| 6-8 | Di chuyển hướng 3 (`3`) | (11, 10) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 55 |
| 9-10 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 54 |
| 11-12 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 53 |
| 13 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 51 |
| 14 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 49 |
| 15 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 47 |
| 16-18 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 45 |
| 19-21 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 43 |
| 22 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 41 |
| 23-24 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 40 |
| 25 | Di chuyển hướng 4 (`4`) | (12, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 38 |
| 26 | Di chuyển hướng 4 (`4`) | (11, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 36 |
| 27-28 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 35 |
| 29 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 33 |
| 30-31 | Di chuyển hướng 5 (`5`) | (10, 21) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 32 |
| 32-33 | Di chuyển hướng 5 (`5`) | (9, 21) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 31 |
| 34 | Di chuyển hướng 4 (`4`) | (8, 21) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 29 |
| 35 | Di chuyển hướng 5 (`5`) | (7, 22) | (6, 22) | Dự kiến đến điểm hẹn tọa độ (6, 22) | 27 |
| 36-37 | Di chuyển hướng 4 (`4`) | (6, 22) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 26 |
| 38-39 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 25 |
| 40 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến đến điểm hẹn tọa độ (4, 23) | 23 |
| 41-42 | Di chuyển hướng 5 (`5`) | (4, 23) | (3, 23) | Dự kiến đến điểm hẹn tọa độ (3, 23) | 22 |
| 43-44 | Di chuyển hướng 4 (`4`) | (3, 23) | (2, 24) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 24)) | 21 |
| 45-46 | Di chuyển hướng 3 (`3`) | (2, 24) | (3, 25) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 25)) | 20 |
| 47-48 | Di chuyển hướng 2 (`2`) | (3, 25) | (4, 25) | Dự kiến đến điểm hẹn tọa độ (4, 25) | 19 |
| 49 | Di chuyển hướng 2 (`2`) | (4, 25) | (5, 25) | Dự kiến đến điểm hẹn tọa độ (5, 25) | 17 |
| 50 | Di chuyển hướng 1 (`1`) | (5, 25) | (5, 24) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(5, 24)) | 15 |
| 51-52 | Di chuyển hướng 2 (`2`) | (5, 24) | (6, 24) | Dự kiến đến điểm hẹn tọa độ (6, 24) | 14 |
| 53 | Di chuyển hướng 3 (`3`) | (6, 24) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 60 |
| 54 | Chờ 1 bước (`-1`) | (7, 25) | (7, 25) | Dự kiến đứng yên tại (7, 25); hướng tới tọa độ (7, 25) | 60 |
| 55 | Chờ 1 bước (`-1`) | (7, 25) | (7, 25) | Dự kiến đứng yên tại (7, 25); hướng tới tọa độ (7, 25) | 60 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (23, 4) (ô=127)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(22, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(22, 9)
- Mảng hành động đã gửi server: `[5, 4, 5, 4, 4, 4, 5, 5, 4, 1, 0, 0, 0, 0, 1, 1, 1, 3, 3, 3, 3, 2, 2, 2, 3, 2, 3, 2, 3, 5, 5, 5, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (23, 4) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 59 |
| 2-3 | Di chuyển hướng 4 (`4`) | (22, 4) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 58 |
| 4 | Di chuyển hướng 5 (`5`) | (22, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 56 |
| 5 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 54 |
| 6-7 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 53 |
| 8-9 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 52 |
| 10-11 | Di chuyển hướng 5 (`5`) | (19, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 51 |
| 12 | Di chuyển hướng 5 (`5`) | (18, 8) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 49 |
| 13-14 | Di chuyển hướng 4 (`4`) | (17, 8) | (17, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 9)) | 48 |
| 15-16 | Di chuyển hướng 1 (`1`) | (17, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 47 |
| 17-18 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 46 |
| 19 | Di chuyển hướng 0 (`0`) | (17, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 44 |
| 20 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 42 |
| 21-22 | Di chuyển hướng 0 (`0`) | (16, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 41 |
| 23-24 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(16, 3)) | 40 |
| 25-26 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 39 |
| 27-28 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(17, 1)) | 38 |
| 29-30 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 37 |
| 31-32 | Di chuyển hướng 3 (`3`) | (17, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 36 |
| 33-34 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 35 |
| 35-36 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 34 |
| 37-38 | Di chuyển hướng 2 (`2`) | (19, 5) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 33 |
| 39-40 | Di chuyển hướng 2 (`2`) | (20, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 32 |
| 41 | Di chuyển hướng 2 (`2`) | (21, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 30 |
| 42 | Di chuyển hướng 3 (`3`) | (22, 5) | (22, 6) | Dự kiến đến điểm hẹn tọa độ (22, 6) | 28 |
| 43 | Di chuyển hướng 2 (`2`) | (22, 6) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 26 |
| 44-45 | Di chuyển hướng 3 (`3`) | (23, 6) | (24, 7) | Dự kiến đến điểm hẹn tọa độ (24, 7) | 25 |
| 46-47 | Di chuyển hướng 2 (`2`) | (24, 7) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 24 |
| 48 | Di chuyển hướng 3 (`3`) | (25, 7) | (25, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(25, 8)) | 22 |
| 49-50 | Di chuyển hướng 5 (`5`) | (25, 8) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 21 |
| 51 | Di chuyển hướng 5 (`5`) | (24, 8) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 19 |
| 52-53 | Di chuyển hướng 5 (`5`) | (23, 8) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 18 |
| 54-55 | Di chuyển hướng 4 (`4`) | (22, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 17 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 19) (ô=505)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 21)
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 5, 5, 4, 4, 2, 3, 2, 2, 2, 2, 2, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 4, 4, 4, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 59 |
| 2 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 57 |
| 3-4 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 56 |
| 5 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 54 |
| 6-7 | Di chuyển hướng 5 (`5`) | (8, 22) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 53 |
| 8 | Di chuyển hướng 5 (`5`) | (7, 22) | (6, 22) | Dự kiến đến điểm hẹn tọa độ (6, 22) | 51 |
| 9-10 | Di chuyển hướng 4 (`4`) | (6, 22) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 50 |
| 11-12 | Di chuyển hướng 4 (`4`) | (6, 23) | (5, 24) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(5, 24)) | 49 |
| 13-14 | Di chuyển hướng 2 (`2`) | (5, 24) | (6, 24) | Dự kiến đến điểm hẹn tọa độ (6, 24) | 48 |
| 15 | Di chuyển hướng 3 (`3`) | (6, 24) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 46 |
| 16-18 | Di chuyển hướng 2 (`2`) | (7, 25) | (8, 25) | Dự kiến đến điểm hẹn tọa độ (8, 25) | 44 |
| 19 | Di chuyển hướng 2 (`2`) | (8, 25) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 42 |
| 20-22 | Di chuyển hướng 2 (`2`) | (9, 25) | (10, 25) | Dự kiến đến điểm hẹn tọa độ (10, 25) | 40 |
| 23-24 | Di chuyển hướng 2 (`2`) | (10, 25) | (11, 25) | Dự kiến đến điểm hẹn tọa độ (11, 25) | 39 |
| 25-26 | Di chuyển hướng 2 (`2`) | (11, 25) | (12, 25) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(12, 25)) | 38 |
| 27-28 | Di chuyển hướng 1 (`1`) | (12, 25) | (12, 24) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(12, 24)) | 37 |
| 29-30 | Di chuyển hướng 0 (`0`) | (12, 24) | (12, 23) | Dự kiến đến điểm hẹn tọa độ (12, 23) | 36 |
| 31-33 | Di chuyển hướng 0 (`0`) | (12, 23) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 34 |
| 34-35 | Di chuyển hướng 1 (`1`) | (11, 22) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 33 |
| 36-37 | Di chuyển hướng 0 (`0`) | (12, 21) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 32 |
| 38 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 30 |
| 39-40 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 29 |
| 41 | Di chuyển hướng 1 (`1`) | (11, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 27 |
| 42 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 25 |
| 43-44 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 15)) | 24 |
| 45-46 | Di chuyển hướng 4 (`4`) | (11, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 23 |
| 47-48 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 22 |
| 49 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 20 |
| 50-52 | Di chuyển hướng 4 (`4`) | (9, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 18 |
| 53-54 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 17 |
| 55 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 15 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 12) (ô=323)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 18)
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 3, 4, 4, 3, 4, 2, 1, 2, 2, 2, 2, 2, 3, 0, 0, 1, 0, 0, 1, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 59 |
| 2-3 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 58 |
| 4 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 56 |
| 5 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 54 |
| 6 | Di chuyển hướng 3 (`3`) | (15, 13) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 52 |
| 7-9 | Di chuyển hướng 3 (`3`) | (15, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 50 |
| 10-11 | Di chuyển hướng 3 (`3`) | (16, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 49 |
| 12 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 47 |
| 13-14 | Di chuyển hướng 3 (`3`) | (17, 17) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 46 |
| 15-16 | Di chuyển hướng 4 (`4`) | (17, 18) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 45 |
| 17-18 | Di chuyển hướng 3 (`3`) | (17, 19) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 44 |
| 19-20 | Di chuyển hướng 4 (`4`) | (17, 20) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 43 |
| 21 | Di chuyển hướng 4 (`4`) | (17, 21) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 41 |
| 22-23 | Di chuyển hướng 3 (`3`) | (16, 22) | (17, 23) | Dự kiến đến điểm hẹn tọa độ (17, 23) | 40 |
| 24-25 | Di chuyển hướng 4 (`4`) | (17, 23) | (16, 24) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 24)) | 39 |
| 26-27 | Di chuyển hướng 2 (`2`) | (16, 24) | (17, 24) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(17, 24)) | 38 |
| 28-29 | Di chuyển hướng 1 (`1`) | (17, 24) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 37 |
| 30 | Di chuyển hướng 2 (`2`) | (18, 23) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 35 |
| 31-32 | Di chuyển hướng 2 (`2`) | (19, 23) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 34 |
| 33-34 | Di chuyển hướng 2 (`2`) | (20, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 33 |
| 35 | Di chuyển hướng 2 (`2`) | (21, 23) | (22, 23) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(22, 23)) | 31 |
| 36-37 | Di chuyển hướng 2 (`2`) | (22, 23) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 30 |
| 38-40 | Di chuyển hướng 3 (`3`) | (23, 23) | (23, 24) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(23, 24)) | 28 |
| 41-42 | Di chuyển hướng 0 (`0`) | (23, 24) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 27 |
| 43-45 | Di chuyển hướng 0 (`0`) | (23, 23) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 25 |
| 46-47 | Di chuyển hướng 1 (`1`) | (22, 22) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 24 |
| 48 | Di chuyển hướng 0 (`0`) | (23, 21) | (22, 20) | Dự kiến đến điểm hẹn tọa độ (22, 20) | 22 |
| 49-50 | Di chuyển hướng 0 (`0`) | (22, 20) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 21 |
| 51-52 | Di chuyển hướng 1 (`1`) | (22, 19) | (22, 18) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(22, 18)) | 20 |
| 53-54 | Di chuyển hướng 5 (`5`) | (22, 18) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 19 |
| 55 | Di chuyển hướng 5 (`5`) | (21, 18) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 17 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (5, 6) (ô=161)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 3)
- Mảng hành động đã gửi server: `[5, 4, 5, 4, 4, 4, 4, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 59 |
| 2 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 57 |
| 3 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 7)) | 55 |
| 4-5 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 54 |
| 6-7 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 53 |
| 8-9 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 52 |
| 10 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 11)) | 50 |
| 11-12 | Di chuyển hướng 1 (`1`) | (1, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 49 |
| 13 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 47 |
| 14-15 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 46 |
| 16-17 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 7)) | 45 |
| 18-19 | Di chuyển hướng 0 (`0`) | (3, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 44 |
| 20 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 42 |
| 21-22 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 41 |
| 23 | Di chuyển hướng 1 (`1`) | (1, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 39 |
| 24-25 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 38 |
| 26-27 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 37 |
| 28-29 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 0)) | 36 |
| 30-31 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 35 |
| 32-33 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 34 |
| 34-36 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 32 |
| 37-38 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 31 |
| 39-40 | Di chuyển hướng 2 (`2`) | (5, 0) | (6, 0) | Dự kiến đến điểm hẹn tọa độ (6, 0) | 30 |
| 41-42 | Di chuyển hướng 2 (`2`) | (6, 0) | (7, 0) | Dự kiến đến điểm hẹn tọa độ (7, 0) | 29 |
| 43-44 | Di chuyển hướng 2 (`2`) | (7, 0) | (8, 0) | Dự kiến đến điểm hẹn tọa độ (8, 0) | 28 |
| 45-46 | Di chuyển hướng 2 (`2`) | (8, 0) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 60 |
| 47-48 | Di chuyển hướng 2 (`2`) | (9, 0) | (10, 0) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(10, 0)) | 60 |
| 49-50 | Di chuyển hướng 2 (`2`) | (10, 0) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 59 |
| 51 | Di chuyển hướng 3 (`3`) | (11, 0) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 57 |
| 52-53 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 2)) | 56 |
| 54-55 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 55 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (24, 24) (ô=648)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 25)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 25)
- Mảng hành động đã gửi server: `[5, 0, 5, 5, 0, 0, 5, 0, 0, 0, 0, 0, 5, 5, 0, 5, 4, 4, 4, 4, 4, 4, 4, 5, 4, 4, 4, -9]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (24, 24) | (23, 24) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(23, 24)) | 60 |
| 2-3 | Di chuyển hướng 0 (`0`) | (23, 24) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 60 |
| 4-6 | Di chuyển hướng 5 (`5`) | (23, 23) | (22, 23) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(22, 23)) | 60 |
| 7-8 | Di chuyển hướng 5 (`5`) | (22, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 60 |
| 9 | Di chuyển hướng 0 (`0`) | (21, 23) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 60 |
| 10-11 | Di chuyển hướng 0 (`0`) | (20, 22) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 60 |
| 12-13 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 60 |
| 14 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 60 |
| 15-16 | Di chuyển hướng 0 (`0`) | (18, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 60 |
| 17-18 | Di chuyển hướng 0 (`0`) | (18, 19) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 60 |
| 19-20 | Di chuyển hướng 0 (`0`) | (17, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 60 |
| 21-22 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 60 |
| 23 | Di chuyển hướng 5 (`5`) | (16, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 60 |
| 24-25 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 60 |
| 26 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 60 |
| 27-29 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 60 |
| 30 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 60 |
| 31-32 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 60 |
| 33 | Di chuyển hướng 4 (`4`) | (12, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 60 |
| 34 | Di chuyển hướng 4 (`4`) | (11, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 60 |
| 35-36 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 60 |
| 37 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 60 |
| 38-39 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 60 |
| 40 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 60 |
| 41-42 | Di chuyển hướng 4 (`4`) | (8, 22) | (8, 23) | Dự kiến đến điểm hẹn tọa độ (8, 23) | 60 |
| 43 | Di chuyển hướng 4 (`4`) | (8, 23) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 60 |
| 44-46 | Di chuyển hướng 4 (`4`) | (7, 24) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 60 |
| 47-55 | Chờ 9 bước (`-9`) | (7, 25) | (7, 25) | Dự kiến đứng yên tại (7, 25); hướng tới tọa độ (7, 25) | 60 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (23, 6) (ô=179)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(10, 0))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(10, 0))
- Mảng hành động đã gửi server: `[5, 4, 5, 4, 5, 5, 4, 4, 4, 4, 5, 5, 5, 5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (23, 6) | (22, 6) | Dự kiến đến điểm hẹn tọa độ (22, 6) | 60 |
| 2 | Di chuyển hướng 4 (`4`) | (22, 6) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 60 |
| 3-4 | Di chuyển hướng 5 (`5`) | (22, 7) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 60 |
| 5-6 | Di chuyển hướng 4 (`4`) | (21, 7) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 60 |
| 7 | Di chuyển hướng 5 (`5`) | (20, 8) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 60 |
| 8-9 | Di chuyển hướng 5 (`5`) | (19, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 60 |
| 10 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 60 |
| 11-12 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 60 |
| 13-14 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 60 |
| 15-16 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 60 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 60 |
| 18-19 | Di chuyển hướng 5 (`5`) | (15, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 60 |
| 20 | Di chuyển hướng 5 (`5`) | (14, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 60 |
| 21 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 60 |
| 22-23 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 60 |
| 24-25 | Di chuyển hướng 1 (`1`) | (12, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 60 |
| 26-28 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 60 |
| 29 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 60 |
| 30-31 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 60 |
| 32-33 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 60 |
| 34-35 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 60 |
| 36-37 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 60 |
| 38-39 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 60 |
| 40-41 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 60 |
| 42-43 | Di chuyển hướng 1 (`1`) | (8, 2) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 60 |
| 44-45 | Di chuyển hướng 1 (`1`) | (9, 1) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 60 |
| 46-47 | Di chuyển hướng 2 (`2`) | (9, 0) | (10, 0) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(10, 0)) | 60 |
| 48-55 | Chờ 8 bước (`-8`) | (10, 0) | (10, 0) | Dự kiến đứng yên tại (10, 0); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(10, 0)) | 60 |

