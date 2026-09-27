# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 64
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 32 | #2 | #4 | (9, 18) | 43 | 64 |
| 34 | #2 | #4 | (10, 17) | 63 | 64 |
| 37 | #2 | #4 | (10, 16) | 62 | 64 |
| 38 | #2 | #4 | (11, 15) | 62 | 64 |
| 40 | #2 | #4 | (11, 14) | 63 | 64 |
| 42 | #2 | #4 | (12, 13) | 63 | 64 |
| 48 | #2 | #4 | (13, 11) | 61 | 64 |
| 60 | #1 | #4 | (13, 11) | 24 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (31, 4) (ô=159)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 3)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 4, 5, 5, 5, 5, 5, 4, 5, 5, 4, 5, 4, 5, 5, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 0, 5, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (31, 4) | (30, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(30, 4)) | 63 |
| 2-3 | Di chuyển hướng 5 (`5`) | (30, 4) | (29, 4) | Dự kiến đến điểm hẹn tọa độ (29, 4) | 62 |
| 4-5 | Di chuyển hướng 5 (`5`) | (29, 4) | (28, 4) | Dự kiến đến điểm hẹn tọa độ (28, 4) | 61 |
| 6-7 | Di chuyển hướng 5 (`5`) | (28, 4) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 60 |
| 8-9 | Di chuyển hướng 4 (`4`) | (27, 4) | (27, 5) | Dự kiến đến điểm hẹn tọa độ (27, 5) | 59 |
| 10-11 | Di chuyển hướng 5 (`5`) | (27, 5) | (26, 5) | Dự kiến đến điểm hẹn tọa độ (26, 5) | 58 |
| 12-13 | Di chuyển hướng 5 (`5`) | (26, 5) | (25, 5) | Dự kiến đến điểm hẹn tọa độ (25, 5) | 57 |
| 14-15 | Di chuyển hướng 5 (`5`) | (25, 5) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 56 |
| 16-17 | Di chuyển hướng 5 (`5`) | (24, 5) | (23, 5) | Dự kiến đến điểm hẹn tọa độ (23, 5) | 55 |
| 18 | Di chuyển hướng 5 (`5`) | (23, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 53 |
| 19-20 | Di chuyển hướng 4 (`4`) | (22, 5) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 52 |
| 21-22 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 51 |
| 23-24 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 50 |
| 25-26 | Di chuyển hướng 4 (`4`) | (19, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 49 |
| 27-28 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 48 |
| 29-30 | Di chuyển hướng 4 (`4`) | (18, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 47 |
| 31-32 | Di chuyển hướng 5 (`5`) | (17, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 46 |
| 33 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 44 |
| 34-35 | Di chuyển hướng 0 (`0`) | (15, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 43 |
| 36-37 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 42 |
| 38 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 40 |
| 39-40 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 39 |
| 41-42 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 38 |
| 43-44 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 37 |
| 45-46 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 36 |
| 47-48 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 3)) | 35 |
| 49-50 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 34 |
| 51-52 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 33 |
| 53-54 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 32 |
| 55-56 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 31 |
| 57 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 29 |
| 58-59 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 28 |
| 60-61 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 2)) | 27 |
| 62-63 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 26 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (28, 30) (ô=988)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 9)
- Mảng hành động đã gửi server: `[5, 5, 4, 5, 5, 5, 0, 0, 0, 5, 5, 0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 1, 1, 1, 0, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (28, 30) | (27, 30) | Dự kiến đến điểm hẹn tọa độ (27, 30) | 63 |
| 2-3 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 62 |
| 4-5 | Di chuyển hướng 4 (`4`) | (26, 30) | (26, 31) | Dự kiến đến điểm hẹn tọa độ (26, 31) | 61 |
| 6 | Di chuyển hướng 5 (`5`) | (26, 31) | (25, 31) | Dự kiến đến điểm hẹn tọa độ (25, 31) | 59 |
| 7 | Di chuyển hướng 5 (`5`) | (25, 31) | (24, 31) | Dự kiến đến điểm hẹn tọa độ (24, 31) | 57 |
| 8-9 | Di chuyển hướng 5 (`5`) | (24, 31) | (23, 31) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 31)) | 56 |
| 10-11 | Di chuyển hướng 0 (`0`) | (23, 31) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 55 |
| 12-13 | Di chuyển hướng 0 (`0`) | (22, 30) | (22, 29) | Dự kiến đến điểm hẹn tọa độ (22, 29) | 54 |
| 14 | Di chuyển hướng 0 (`0`) | (22, 29) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 52 |
| 15-16 | Di chuyển hướng 5 (`5`) | (21, 28) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 51 |
| 17-18 | Di chuyển hướng 5 (`5`) | (20, 28) | (19, 28) | Dự kiến đến điểm hẹn tọa độ (19, 28) | 50 |
| 19-21 | Di chuyển hướng 0 (`0`) | (19, 28) | (19, 27) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 27)) | 48 |
| 22-23 | Di chuyển hướng 5 (`5`) | (19, 27) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 47 |
| 24-25 | Di chuyển hướng 5 (`5`) | (18, 27) | (17, 27) | Dự kiến đến điểm hẹn tọa độ (17, 27) | 46 |
| 26-27 | Di chuyển hướng 5 (`5`) | (17, 27) | (16, 27) | Dự kiến đến điểm hẹn tọa độ (16, 27) | 45 |
| 28 | Di chuyển hướng 0 (`0`) | (16, 27) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 43 |
| 29 | Di chuyển hướng 0 (`0`) | (15, 26) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 41 |
| 30-31 | Di chuyển hướng 0 (`0`) | (15, 25) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 40 |
| 32-33 | Di chuyển hướng 0 (`0`) | (14, 24) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 39 |
| 34-35 | Di chuyển hướng 0 (`0`) | (14, 23) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 38 |
| 36-37 | Di chuyển hướng 0 (`0`) | (13, 22) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 37 |
| 38-39 | Di chuyển hướng 0 (`0`) | (13, 21) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 36 |
| 40-42 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 34 |
| 43-44 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 33 |
| 45-46 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 32 |
| 47-48 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 31 |
| 49 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 29 |
| 50-51 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 28 |
| 52-53 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 27 |
| 54-55 | Di chuyển hướng 1 (`1`) | (12, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 26 |
| 56-57 | Di chuyển hướng 1 (`1`) | (13, 13) | (13, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 25 |
| 58-59 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 64 |
| 60 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 62 |
| 61-62 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 61 |
| 63 | Chờ 1 bước (`-1`) | (13, 9) | (13, 9) | Dự kiến đứng yên tại (13, 9); hướng tới tọa độ (13, 9) | 61 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 5) (ô=163)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 9)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 2, 3, 4, 4, 1, 1, 1, 1, 1, 2, 1, 0, 5, 5, 5, 5, 5, 5, 5, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 63 |
| 2-4 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 61 |
| 5-6 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 60 |
| 7-9 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 58 |
| 10-11 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 57 |
| 12-13 | Di chuyển hướng 3 (`3`) | (6, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 56 |
| 14 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 54 |
| 15-16 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 53 |
| 17-18 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 52 |
| 19-20 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 51 |
| 21-22 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 50 |
| 23-25 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 48 |
| 26-27 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 47 |
| 28 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 45 |
| 29-31 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 64 |
| 32-33 | Di chuyển hướng 1 (`1`) | (9, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 64 |
| 34-36 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 64 |
| 37 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 64 |
| 38-39 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 64 |
| 40-41 | Di chuyển hướng 1 (`1`) | (11, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 64 |
| 42-43 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 63 |
| 44-45 | Di chuyển hướng 1 (`1`) | (13, 13) | (13, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 62 |
| 46-47 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 64 |
| 48 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 62 |
| 49 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 60 |
| 50-51 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 59 |
| 52-53 | Di chuyển hướng 5 (`5`) | (10, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 58 |
| 54-56 | Di chuyển hướng 5 (`5`) | (9, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 56 |
| 57-58 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 55 |
| 59-60 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(6, 11)) | 54 |
| 61-62 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 53 |
| 63 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (30, 6) (ô=222)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(19, 2))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(19, 2))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 3, 0, 1, 1, 1, 1, 1, 1, 0, 5, 5, 5, 4, 4, 5, 4, 5, 4, 4, 5, 5, 4, 4, 1, 1, 0, 0, 0, 0, 0, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (30, 6) | (30, 7) | Dự kiến đến điểm hẹn tọa độ (30, 7) | 63 |
| 2 | Di chuyển hướng 4 (`4`) | (30, 7) | (29, 8) | Dự kiến đến điểm hẹn tọa độ (29, 8) | 61 |
| 3-4 | Di chuyển hướng 4 (`4`) | (29, 8) | (29, 9) | Dự kiến đến điểm hẹn tọa độ (29, 9) | 60 |
| 5-6 | Di chuyển hướng 4 (`4`) | (29, 9) | (28, 10) | Dự kiến đến điểm hẹn tọa độ (28, 10) | 59 |
| 7 | Di chuyển hướng 4 (`4`) | (28, 10) | (28, 11) | Dự kiến đến điểm hẹn tọa độ (28, 11) | 57 |
| 8-9 | Di chuyển hướng 3 (`3`) | (28, 11) | (28, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(28, 12)) | 56 |
| 10-11 | Di chuyển hướng 0 (`0`) | (28, 12) | (28, 11) | Dự kiến đến điểm hẹn tọa độ (28, 11) | 55 |
| 12-13 | Di chuyển hướng 1 (`1`) | (28, 11) | (28, 10) | Dự kiến đến điểm hẹn tọa độ (28, 10) | 54 |
| 14 | Di chuyển hướng 1 (`1`) | (28, 10) | (29, 9) | Dự kiến đến điểm hẹn tọa độ (29, 9) | 52 |
| 15-16 | Di chuyển hướng 1 (`1`) | (29, 9) | (29, 8) | Dự kiến đến điểm hẹn tọa độ (29, 8) | 51 |
| 17-18 | Di chuyển hướng 1 (`1`) | (29, 8) | (30, 7) | Dự kiến đến điểm hẹn tọa độ (30, 7) | 50 |
| 19 | Di chuyển hướng 1 (`1`) | (30, 7) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 48 |
| 20-21 | Di chuyển hướng 1 (`1`) | (30, 6) | (31, 5) | Dự kiến đến điểm hẹn tọa độ (31, 5) | 47 |
| 22-23 | Di chuyển hướng 0 (`0`) | (31, 5) | (30, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(30, 4)) | 46 |
| 24-25 | Di chuyển hướng 5 (`5`) | (30, 4) | (29, 4) | Dự kiến đến điểm hẹn tọa độ (29, 4) | 45 |
| 26-27 | Di chuyển hướng 5 (`5`) | (29, 4) | (28, 4) | Dự kiến đến điểm hẹn tọa độ (28, 4) | 44 |
| 28-29 | Di chuyển hướng 5 (`5`) | (28, 4) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 43 |
| 30-31 | Di chuyển hướng 4 (`4`) | (27, 4) | (27, 5) | Dự kiến đến điểm hẹn tọa độ (27, 5) | 42 |
| 32-33 | Di chuyển hướng 4 (`4`) | (27, 5) | (26, 6) | Dự kiến đến điểm hẹn tọa độ (26, 6) | 41 |
| 34 | Di chuyển hướng 5 (`5`) | (26, 6) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 39 |
| 35-36 | Di chuyển hướng 4 (`4`) | (25, 6) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 38 |
| 37 | Di chuyển hướng 5 (`5`) | (25, 7) | (24, 7) | Dự kiến đến điểm hẹn tọa độ (24, 7) | 36 |
| 38-39 | Di chuyển hướng 4 (`4`) | (24, 7) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 35 |
| 40-41 | Di chuyển hướng 4 (`4`) | (23, 8) | (23, 9) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(23, 9)) | 34 |
| 42-43 | Di chuyển hướng 5 (`5`) | (23, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 33 |
| 44 | Di chuyển hướng 5 (`5`) | (22, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 31 |
| 45 | Di chuyển hướng 4 (`4`) | (21, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 29 |
| 46-47 | Di chuyển hướng 4 (`4`) | (20, 10) | (20, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 28 |
| 48-49 | Di chuyển hướng 1 (`1`) | (20, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 27 |
| 50-51 | Di chuyển hướng 1 (`1`) | (20, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 26 |
| 52 | Di chuyển hướng 0 (`0`) | (21, 9) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 24 |
| 53-54 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 23 |
| 55-56 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 22 |
| 57-58 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 21 |
| 59 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 19 |
| 60-61 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 18 |
| 62-63 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(19, 2)) | 17 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (20, 20) (ô=660)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 11)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 4, 4, 5, 0, 0, 0, 0, 0, 5, 0, 5, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (20, 20) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 64 |
| 2-3 | Di chuyển hướng 4 (`4`) | (20, 21) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 64 |
| 4-5 | Di chuyển hướng 4 (`4`) | (19, 22) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 64 |
| 6-7 | Di chuyển hướng 4 (`4`) | (19, 23) | (18, 24) | Dự kiến đến điểm hẹn tọa độ (18, 24) | 64 |
| 8 | Di chuyển hướng 4 (`4`) | (18, 24) | (18, 25) | Dự kiến đến điểm hẹn tọa độ (18, 25) | 64 |
| 9-10 | Di chuyển hướng 4 (`4`) | (18, 25) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 64 |
| 11-12 | Di chuyển hướng 4 (`4`) | (17, 26) | (17, 27) | Dự kiến đến điểm hẹn tọa độ (17, 27) | 64 |
| 13-14 | Di chuyển hướng 5 (`5`) | (17, 27) | (16, 27) | Dự kiến đến điểm hẹn tọa độ (16, 27) | 64 |
| 15 | Di chuyển hướng 0 (`0`) | (16, 27) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 64 |
| 16 | Di chuyển hướng 0 (`0`) | (15, 26) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 64 |
| 17-18 | Di chuyển hướng 0 (`0`) | (15, 25) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 64 |
| 19-20 | Di chuyển hướng 0 (`0`) | (14, 24) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 64 |
| 21-22 | Di chuyển hướng 0 (`0`) | (14, 23) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 64 |
| 23-24 | Di chuyển hướng 5 (`5`) | (13, 22) | (12, 22) | Dự kiến đến điểm hẹn tọa độ (12, 22) | 64 |
| 25 | Di chuyển hướng 0 (`0`) | (12, 22) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 64 |
| 26-27 | Di chuyển hướng 5 (`5`) | (12, 21) | (11, 21) | Dự kiến đến điểm hẹn tọa độ (11, 21) | 64 |
| 28 | Di chuyển hướng 0 (`0`) | (11, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 64 |
| 29-30 | Di chuyển hướng 0 (`0`) | (10, 20) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 64 |
| 31 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 64 |
| 32-33 | Di chuyển hướng 1 (`1`) | (9, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 64 |
| 34-36 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 64 |
| 37 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 64 |
| 38-39 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 64 |
| 40-41 | Di chuyển hướng 1 (`1`) | (11, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 64 |
| 42-43 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 64 |
| 44-46 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 64 |
| 47-63 | Chờ 17 bước (`-17`) | (13, 11) | (13, 11) | Dự kiến đứng yên tại (13, 11); hướng tới tọa độ (13, 11) | 64 |

