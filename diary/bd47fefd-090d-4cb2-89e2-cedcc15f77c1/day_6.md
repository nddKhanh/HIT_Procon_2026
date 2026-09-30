# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 65
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #0 | #7 | (1, 1) | 59 | 60 |
| 10 | #1 | #6 | (12, 24) | 5 | 60 |
| 13 | #1 | #6 | (12, 23) | 59 | 60 |
| 16 | #1 | #6 | (11, 22) | 58 | 60 |
| 18 | #1 | #6 | (12, 21) | 59 | 60 |
| 21 | #1 | #6 | (12, 19) | 57 | 60 |
| 24 | #3 | #6 | (10, 16) | 21 | 60 |
| 45 | #2 | #7 | (17, 9) | 2 | 60 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (1, 0) (ô=1)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 10)
- Mảng hành động đã gửi server: `[4, 5, 3, 4, 3, 2, 3, 3, 3, 2, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 4, 4, 3, 3, 4, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 60 |
| 2-3 | Di chuyển hướng 5 (`5`) | (1, 1) | (0, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 1)) | 59 |
| 4-5 | Di chuyển hướng 3 (`3`) | (0, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 58 |
| 6-7 | Di chuyển hướng 4 (`4`) | (0, 2) | (0, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(0, 3)) | 57 |
| 8-9 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 56 |
| 10-11 | Di chuyển hướng 2 (`2`) | (0, 4) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 55 |
| 12 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 53 |
| 13-14 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 52 |
| 15 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 7)) | 50 |
| 16-17 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 49 |
| 18 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 47 |
| 19-21 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 45 |
| 22-23 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 44 |
| 24-26 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 42 |
| 27-28 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 41 |
| 29-31 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 39 |
| 32-33 | Di chuyển hướng 1 (`1`) | (7, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 38 |
| 34-35 | Di chuyển hướng 1 (`1`) | (7, 4) | (8, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 37 |
| 36-37 | Di chuyển hướng 1 (`1`) | (8, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 36 |
| 38-39 | Di chuyển hướng 1 (`1`) | (8, 2) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 35 |
| 40-41 | Di chuyển hướng 1 (`1`) | (9, 1) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 34 |
| 42-43 | Di chuyển hướng 2 (`2`) | (9, 0) | (10, 0) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(10, 0)) | 33 |
| 44-45 | Di chuyển hướng 2 (`2`) | (10, 0) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 32 |
| 46 | Di chuyển hướng 3 (`3`) | (11, 0) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 30 |
| 47-48 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 2)) | 29 |
| 49-50 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 28 |
| 51-52 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 27 |
| 53-54 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 26 |
| 55-56 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 25 |
| 57-58 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 24 |
| 59-60 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 23 |
| 61-62 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(11, 9)) | 22 |
| 63-64 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 21 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 25) (ô=662)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 25)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 25)
- Mảng hành động đã gửi server: `[1, -9, 0, 0, 1, 0, 1, 0, 1, 1, 1, 2, 3, 3, 3, 2, 2, 3, 3, 3, 2, 3, 3, 2, 2, 3, 4, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (12, 25) | (12, 24) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(12, 24)) | 5 |
| 2-10 | Chờ 9 bước (`-9`) | (12, 24) | (12, 24) | Dự kiến đứng yên tại (12, 24); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(12, 24)) | 60 |
| 11-12 | Di chuyển hướng 0 (`0`) | (12, 24) | (12, 23) | Dự kiến đến điểm hẹn tọa độ (12, 23) | 60 |
| 13-15 | Di chuyển hướng 0 (`0`) | (12, 23) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 60 |
| 16-17 | Di chuyển hướng 1 (`1`) | (11, 22) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 60 |
| 18-19 | Di chuyển hướng 0 (`0`) | (12, 21) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 59 |
| 20 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 60 |
| 21-22 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 59 |
| 23 | Di chuyển hướng 1 (`1`) | (11, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 57 |
| 24 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 55 |
| 25-26 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 54 |
| 27-30 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 52 |
| 31-33 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 50 |
| 34 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 48 |
| 35 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 46 |
| 36-37 | Di chuyển hướng 2 (`2`) | (15, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 45 |
| 38-39 | Di chuyển hướng 2 (`2`) | (16, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 44 |
| 40-41 | Di chuyển hướng 3 (`3`) | (17, 18) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 43 |
| 42-43 | Di chuyển hướng 3 (`3`) | (18, 19) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 42 |
| 44-45 | Di chuyển hướng 3 (`3`) | (18, 20) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 41 |
| 46 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 39 |
| 47-48 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 38 |
| 49-50 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 37 |
| 51 | Di chuyển hướng 2 (`2`) | (21, 23) | (22, 23) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(22, 23)) | 35 |
| 52-53 | Di chuyển hướng 2 (`2`) | (22, 23) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 34 |
| 54-56 | Di chuyển hướng 3 (`3`) | (23, 23) | (23, 24) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(23, 24)) | 32 |
| 57-58 | Di chuyển hướng 4 (`4`) | (23, 24) | (23, 25) | Dự kiến đến điểm hẹn tọa độ (23, 25) | 31 |
| 59-60 | Di chuyển hướng 5 (`5`) | (23, 25) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 30 |
| 61-62 | Di chuyển hướng 5 (`5`) | (22, 25) | (21, 25) | Dự kiến đến điểm hẹn tọa độ (21, 25) | 29 |
| 63-64 | Di chuyển hướng 5 (`5`) | (21, 25) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 28 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 9) (ô=245)
- Nhiên liệu đầu ngày: 31
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(24, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(24, 9)
- Mảng hành động đã gửi server: `[3, 3, 3, 2, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 4, 4, 4, 3, 3, 3, 3, 4, -1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 5, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 9) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 30 |
| 2-4 | Di chuyển hướng 3 (`3`) | (11, 10) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 28 |
| 5-6 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 27 |
| 7-8 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 26 |
| 9-12 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 24 |
| 13-14 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 23 |
| 15-16 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 22 |
| 17-18 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 21 |
| 19 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 19 |
| 20 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 17 |
| 21-22 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 16 |
| 23-24 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 15 |
| 25-26 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(16, 3)) | 14 |
| 27-28 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 13 |
| 29-30 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(17, 1)) | 12 |
| 31-32 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 11 |
| 33-34 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(16, 3)) | 10 |
| 35-36 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 9 |
| 37-38 | Di chuyển hướng 3 (`3`) | (15, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 8 |
| 39-40 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 7 |
| 41 | Di chuyển hướng 3 (`3`) | (16, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 5 |
| 42 | Di chuyển hướng 3 (`3`) | (17, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 3 |
| 43-44 | Di chuyển hướng 4 (`4`) | (17, 8) | (17, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 9)) | 60 |
| 45 | Chờ 1 bước (`-1`) | (17, 9) | (17, 9) | Dự kiến đứng yên tại (17, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 9)) | 60 |
| 46-47 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 59 |
| 48-49 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 58 |
| 50 | Di chuyển hướng 2 (`2`) | (18, 8) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 56 |
| 51-52 | Di chuyển hướng 2 (`2`) | (19, 8) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 55 |
| 53 | Di chuyển hướng 2 (`2`) | (20, 8) | (21, 8) | Dự kiến đến điểm hẹn tọa độ (21, 8) | 53 |
| 54-56 | Di chuyển hướng 2 (`2`) | (21, 8) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 51 |
| 57-58 | Di chuyển hướng 2 (`2`) | (22, 8) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 50 |
| 59-60 | Di chuyển hướng 2 (`2`) | (23, 8) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 49 |
| 61 | Di chuyển hướng 2 (`2`) | (24, 8) | (25, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(25, 8)) | 47 |
| 62-63 | Di chuyển hướng 5 (`5`) | (25, 8) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 46 |
| 64 | Di chuyển hướng 4 (`4`) | (24, 8) | (24, 9) | Dự kiến đến điểm hẹn tọa độ (24, 9) | 44 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (4, 25) (ô=654)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(23, 23)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(23, 23)
- Mảng hành động đã gửi server: `[5, 0, 2, 2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 3, 3, 5, 2, 2, 2, 1, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (4, 25) | (3, 25) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 25)) | 39 |
| 1-2 | Di chuyển hướng 0 (`0`) | (3, 25) | (2, 24) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 24)) | 38 |
| 3-4 | Di chuyển hướng 2 (`2`) | (2, 24) | (3, 24) | Dự kiến đến điểm hẹn tọa độ (3, 24) | 37 |
| 5-6 | Di chuyển hướng 2 (`2`) | (3, 24) | (4, 24) | Dự kiến đến điểm hẹn tọa độ (4, 24) | 36 |
| 7-8 | Di chuyển hướng 2 (`2`) | (4, 24) | (5, 24) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(5, 24)) | 35 |
| 9-10 | Di chuyển hướng 1 (`1`) | (5, 24) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 34 |
| 11-12 | Di chuyển hướng 1 (`1`) | (6, 23) | (6, 22) | Dự kiến đến điểm hẹn tọa độ (6, 22) | 33 |
| 13-14 | Di chuyển hướng 2 (`2`) | (6, 22) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 32 |
| 15 | Di chuyển hướng 1 (`1`) | (7, 22) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 30 |
| 16 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 28 |
| 17 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 26 |
| 18-19 | Di chuyển hướng 1 (`1`) | (9, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 25 |
| 20-22 | Di chuyển hướng 1 (`1`) | (9, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 23 |
| 23 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 60 |
| 24-25 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 15)) | 59 |
| 26-27 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 58 |
| 28-29 | Di chuyển hướng 2 (`2`) | (12, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 57 |
| 30-33 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 55 |
| 34-36 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 53 |
| 37 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 51 |
| 38 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 49 |
| 39-40 | Di chuyển hướng 3 (`3`) | (15, 18) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 48 |
| 41-43 | Di chuyển hướng 3 (`3`) | (16, 19) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 46 |
| 44-45 | Di chuyển hướng 3 (`3`) | (16, 20) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 45 |
| 46 | Di chuyển hướng 4 (`4`) | (17, 21) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 43 |
| 47-48 | Di chuyển hướng 3 (`3`) | (16, 22) | (17, 23) | Dự kiến đến điểm hẹn tọa độ (17, 23) | 42 |
| 49-50 | Di chuyển hướng 3 (`3`) | (17, 23) | (17, 24) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(17, 24)) | 41 |
| 51-52 | Di chuyển hướng 5 (`5`) | (17, 24) | (16, 24) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 24)) | 40 |
| 53-54 | Di chuyển hướng 2 (`2`) | (16, 24) | (17, 24) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(17, 24)) | 39 |
| 55-56 | Di chuyển hướng 2 (`2`) | (17, 24) | (18, 24) | Dự kiến đến điểm hẹn tọa độ (18, 24) | 38 |
| 57-58 | Di chuyển hướng 2 (`2`) | (18, 24) | (19, 24) | Dự kiến đến điểm hẹn tọa độ (19, 24) | 37 |
| 59 | Di chuyển hướng 1 (`1`) | (19, 24) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 35 |
| 60-61 | Di chuyển hướng 2 (`2`) | (20, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 34 |
| 62 | Di chuyển hướng 2 (`2`) | (21, 23) | (22, 23) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(22, 23)) | 32 |
| 63-64 | Di chuyển hướng 2 (`2`) | (22, 23) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 31 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (22, 18) (ô=490)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(22, 18))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(22, 18))
- Mảng hành động đã gửi server: `[-65]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-64 | Chờ 65 bước (`-65`) | (22, 18) | (22, 18) | Dự kiến đứng yên tại (22, 18); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(22, 18)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (4, 10) (ô=264)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(1, 0))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(1, 0))
- Mảng hành động đã gửi server: `[0, 0, 0, 2, 3, 3, 5, 4, 5, 5, 4, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 2, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 31 |
| 2-3 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 30 |
| 4-6 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 7)) | 28 |
| 7-8 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 27 |
| 9 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 25 |
| 10-12 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 23 |
| 13-14 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 22 |
| 15-16 | Di chuyển hướng 4 (`4`) | (4, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 21 |
| 17 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 19 |
| 18-19 | Di chuyển hướng 5 (`5`) | (2, 10) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 18 |
| 20 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 11)) | 16 |
| 21-22 | Di chuyển hướng 0 (`0`) | (1, 11) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 15 |
| 23-24 | Di chuyển hướng 0 (`0`) | (0, 10) | (0, 9) | Dự kiến đến điểm hẹn tọa độ (0, 9) | 14 |
| 25 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 12 |
| 26-27 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 11 |
| 28-29 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 10 |
| 30 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 8 |
| 31-32 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 7 |
| 33-34 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(0, 3)) | 6 |
| 35-36 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 5 |
| 37-38 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 1)) | 4 |
| 39-40 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đến điểm hẹn tọa độ (0, 0) | 3 |
| 41-42 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 0)) | 2 |
| 43-64 | Chờ 22 bước (`-22`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 0)) | 2 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (11, 19) (ô=505)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 16)
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 3, 0, 0, 1, 0, 1, 0, 0, 0, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 19) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 60 |
| 2 | Di chuyển hướng 3 (`3`) | (11, 20) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 60 |
| 3-4 | Di chuyển hướng 3 (`3`) | (12, 21) | (12, 22) | Dự kiến đến điểm hẹn tọa độ (12, 22) | 60 |
| 5-6 | Di chuyển hướng 4 (`4`) | (12, 22) | (12, 23) | Dự kiến đến điểm hẹn tọa độ (12, 23) | 60 |
| 7-9 | Di chuyển hướng 3 (`3`) | (12, 23) | (12, 24) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(12, 24)) | 60 |
| 10-11 | Di chuyển hướng 0 (`0`) | (12, 24) | (12, 23) | Dự kiến đến điểm hẹn tọa độ (12, 23) | 60 |
| 12-14 | Di chuyển hướng 0 (`0`) | (12, 23) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 60 |
| 15-16 | Di chuyển hướng 1 (`1`) | (11, 22) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 60 |
| 17-18 | Di chuyển hướng 0 (`0`) | (12, 21) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 60 |
| 19 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 60 |
| 20-21 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 60 |
| 22 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 60 |
| 23 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 60 |
| 24-64 | Chờ 41 bước (`-41`) | (10, 16) | (10, 16) | Dự kiến đứng yên tại (10, 16); hướng tới tọa độ (10, 16) | 60 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (1, 0) (ô=1)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(17, 9))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(17, 9))
- Mảng hành động đã gửi server: `[4, 3, 3, 4, 3, 3, 2, 3, 3, 3, 3, 2, 2, 3, 2, 3, 2, 2, 2, 2, 1, 2, 2, 1, 1, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 60 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 60 |
| 4-5 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 60 |
| 6-7 | Di chuyển hướng 4 (`4`) | (2, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 60 |
| 8 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 60 |
| 9-10 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 60 |
| 11 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 60 |
| 12 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 60 |
| 13 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 60 |
| 14-16 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 60 |
| 17-18 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 60 |
| 19 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 60 |
| 20-21 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 60 |
| 22-23 | Di chuyển hướng 3 (`3`) | (7, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 60 |
| 24 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 60 |
| 25 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 60 |
| 26 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 60 |
| 27-28 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 60 |
| 29-30 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 60 |
| 31-32 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 60 |
| 33-36 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 60 |
| 37-38 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 60 |
| 39-40 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 60 |
| 41-42 | Di chuyển hướng 1 (`1`) | (16, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 60 |
| 43-44 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 9)) | 60 |
| 45-64 | Chờ 20 bước (`-20`) | (17, 9) | (17, 9) | Dự kiến đứng yên tại (17, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 9)) | 60 |

