# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 63
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 14 | #5 | #7 | (1, 0) | 1 | 60 |
| 16 | #2 | #6 | (17, 9) | 2 | 60 |
| 36 | #3 | #6 | (12, 16) | 22 | 60 |
| 40 | #3 | #6 | (11, 19) | 55 | 60 |
| 62 | #0 | #7 | (1, 0) | 6 | 60 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (9, 0) (ô=9)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(1, 0))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(1, 0))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 5, 4, 5, 5, 4, 2, 3, 3, 5, 4, 5, 4, 5, 2, 1, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 0) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 48 |
| 2-3 | Di chuyển hướng 4 (`4`) | (9, 1) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 47 |
| 4-5 | Di chuyển hướng 4 (`4`) | (8, 2) | (8, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 46 |
| 6-7 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 45 |
| 8-9 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 44 |
| 10-11 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 43 |
| 12-13 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 42 |
| 14-15 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 41 |
| 16 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 39 |
| 17 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 7)) | 37 |
| 18-19 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 36 |
| 20 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 34 |
| 21-23 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 32 |
| 24-25 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 31 |
| 26-27 | Di chuyển hướng 4 (`4`) | (4, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 30 |
| 28 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 28 |
| 29-30 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 27 |
| 31-32 | Di chuyển hướng 5 (`5`) | (2, 11) | (1, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 11)) | 26 |
| 33-34 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 25 |
| 35-36 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 24 |
| 37-38 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 23 |
| 39 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 10)) | 21 |
| 40-41 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 20 |
| 42-43 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 19 |
| 44-46 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 7)) | 17 |
| 47-48 | Di chuyển hướng 0 (`0`) | (3, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 16 |
| 49 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 14 |
| 50-51 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 13 |
| 52 | Di chuyển hướng 0 (`0`) | (1, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 11 |
| 53-55 | Di chuyển hướng 0 (`0`) | (1, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 9 |
| 56-57 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 1)) | 8 |
| 58-59 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đến điểm hẹn tọa độ (0, 0) | 7 |
| 60-61 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 0)) | 60 |
| 62 | Chờ 1 bước (`-1`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 0)) | 60 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 24) (ô=636)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Spot #25 (thương hiệu=25, tọa độ=(12, 25))
- Địa điểm đích kế hoạch: Spot #25 (thương hiệu=25, tọa độ=(12, 25))
- Mảng hành động đã gửi server: `[4, -61]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (12, 24) | (12, 25) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(12, 25)) | 6 |
| 2-62 | Chờ 61 bước (`-61`) | (12, 25) | (12, 25) | Dự kiến đứng yên tại (12, 25); mục tiêu Spot #25 (thương hiệu=25, tọa độ=(12, 25)) | 6 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (25, 8) (ô=233)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(11, 9))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(11, 9))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 5, 4, -1, 1, 0, 0, 0, 0, 1, 1, 1, 4, 4, 4, 4, 3, 4, 4, 3, 4, 4, 4, 5, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (25, 8) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 14 |
| 2 | Di chuyển hướng 5 (`5`) | (24, 8) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 12 |
| 3-4 | Di chuyển hướng 5 (`5`) | (23, 8) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 11 |
| 5-6 | Di chuyển hướng 5 (`5`) | (22, 8) | (21, 8) | Dự kiến đến điểm hẹn tọa độ (21, 8) | 10 |
| 7-9 | Di chuyển hướng 5 (`5`) | (21, 8) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 8 |
| 10 | Di chuyển hướng 5 (`5`) | (20, 8) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 6 |
| 11-12 | Di chuyển hướng 5 (`5`) | (19, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 5 |
| 13 | Di chuyển hướng 5 (`5`) | (18, 8) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 3 |
| 14-15 | Di chuyển hướng 4 (`4`) | (17, 8) | (17, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 9)) | 60 |
| 16 | Chờ 1 bước (`-1`) | (17, 9) | (17, 9) | Dự kiến đứng yên tại (17, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 9)) | 60 |
| 17-18 | Di chuyển hướng 1 (`1`) | (17, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 59 |
| 19-20 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 58 |
| 21 | Di chuyển hướng 0 (`0`) | (17, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 56 |
| 22 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 54 |
| 23-24 | Di chuyển hướng 0 (`0`) | (16, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 53 |
| 25-26 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(16, 3)) | 52 |
| 27-28 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 51 |
| 29-30 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(17, 1)) | 50 |
| 31-32 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 49 |
| 33-34 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(16, 3)) | 48 |
| 35-36 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 47 |
| 37-38 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 46 |
| 39-40 | Di chuyển hướng 3 (`3`) | (15, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 45 |
| 41-42 | Di chuyển hướng 4 (`4`) | (15, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 44 |
| 43 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 42 |
| 44 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 40 |
| 45-46 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 39 |
| 47-48 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 38 |
| 49-50 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 37 |
| 51-54 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 35 |
| 55-56 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 34 |
| 57-58 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 33 |
| 59-61 | Di chuyển hướng 0 (`0`) | (11, 10) | (11, 9) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(11, 9)) | 31 |
| 62 | Chờ 1 bước (`-1`) | (11, 9) | (11, 9) | Dự kiến đứng yên tại (11, 9); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(11, 9)) | 31 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 9) (ô=241)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 25)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 25)
- Mảng hành động đã gửi server: `[3, 3, 2, 3, 2, 2, 2, 2, 2, 3, 4, 4, 5, 5, 5, 2, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 4, 4, 4, 5, 5, 0, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 47 |
| 2-3 | Di chuyển hướng 3 (`3`) | (7, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 46 |
| 4 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 44 |
| 5 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 42 |
| 6 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 40 |
| 7-8 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 39 |
| 9-10 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 38 |
| 11-12 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 37 |
| 13-16 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 35 |
| 17-18 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 33 |
| 19 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 31 |
| 20-22 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 29 |
| 23-25 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 27 |
| 26-29 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 25 |
| 30-31 | Di chuyển hướng 5 (`5`) | (12, 15) | (11, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 15)) | 24 |
| 32-33 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 23 |
| 34-35 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 60 |
| 36-37 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 59 |
| 38 | Di chuyển hướng 4 (`4`) | (12, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 57 |
| 39 | Di chuyển hướng 4 (`4`) | (11, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 60 |
| 40-41 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 59 |
| 42 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 57 |
| 43-44 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 56 |
| 45 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 54 |
| 46-47 | Di chuyển hướng 5 (`5`) | (8, 22) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 53 |
| 48 | Di chuyển hướng 5 (`5`) | (7, 22) | (6, 22) | Dự kiến đến điểm hẹn tọa độ (6, 22) | 51 |
| 49-50 | Di chuyển hướng 4 (`4`) | (6, 22) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 50 |
| 51-52 | Di chuyển hướng 4 (`4`) | (6, 23) | (5, 24) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(5, 24)) | 49 |
| 53-54 | Di chuyển hướng 4 (`4`) | (5, 24) | (5, 25) | Dự kiến đến điểm hẹn tọa độ (5, 25) | 48 |
| 55 | Di chuyển hướng 5 (`5`) | (5, 25) | (4, 25) | Dự kiến đến điểm hẹn tọa độ (4, 25) | 46 |
| 56 | Di chuyển hướng 5 (`5`) | (4, 25) | (3, 25) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 25)) | 44 |
| 57-58 | Di chuyển hướng 0 (`0`) | (3, 25) | (2, 24) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 24)) | 43 |
| 59-60 | Di chuyển hướng 2 (`2`) | (2, 24) | (3, 24) | Dự kiến đến điểm hẹn tọa độ (3, 24) | 42 |
| 61-62 | Di chuyển hướng 3 (`3`) | (3, 24) | (4, 25) | Dự kiến đến điểm hẹn tọa độ (4, 25) | 41 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (17, 17) (ô=459)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(22, 18))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(22, 18))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 2, 3, 3, 2, 3, 2, 4, 5, 5, 5, 0, 5, 5, 5, 2, 1, 1, 1, 1, 1, 2, 1, 2, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (17, 17) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 33 |
| 2-3 | Di chuyển hướng 3 (`3`) | (17, 18) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 32 |
| 4-5 | Di chuyển hướng 3 (`3`) | (18, 19) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 31 |
| 6-7 | Di chuyển hướng 3 (`3`) | (18, 20) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 30 |
| 8 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 28 |
| 9-10 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 27 |
| 11-12 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 26 |
| 13 | Di chuyển hướng 2 (`2`) | (21, 23) | (22, 23) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(22, 23)) | 24 |
| 14-15 | Di chuyển hướng 3 (`3`) | (22, 23) | (22, 24) | Dự kiến đến điểm hẹn tọa độ (22, 24) | 23 |
| 16-18 | Di chuyển hướng 2 (`2`) | (22, 24) | (23, 24) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(23, 24)) | 21 |
| 19-20 | Di chuyển hướng 4 (`4`) | (23, 24) | (23, 25) | Dự kiến đến điểm hẹn tọa độ (23, 25) | 20 |
| 21-22 | Di chuyển hướng 5 (`5`) | (23, 25) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 19 |
| 23-24 | Di chuyển hướng 5 (`5`) | (22, 25) | (21, 25) | Dự kiến đến điểm hẹn tọa độ (21, 25) | 18 |
| 25-26 | Di chuyển hướng 5 (`5`) | (21, 25) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 17 |
| 27-28 | Di chuyển hướng 0 (`0`) | (20, 25) | (19, 24) | Dự kiến đến điểm hẹn tọa độ (19, 24) | 16 |
| 29 | Di chuyển hướng 5 (`5`) | (19, 24) | (18, 24) | Dự kiến đến điểm hẹn tọa độ (18, 24) | 14 |
| 30-31 | Di chuyển hướng 5 (`5`) | (18, 24) | (17, 24) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(17, 24)) | 13 |
| 32-33 | Di chuyển hướng 5 (`5`) | (17, 24) | (16, 24) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 24)) | 12 |
| 34-35 | Di chuyển hướng 2 (`2`) | (16, 24) | (17, 24) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(17, 24)) | 11 |
| 36-37 | Di chuyển hướng 1 (`1`) | (17, 24) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 10 |
| 38 | Di chuyển hướng 1 (`1`) | (18, 23) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 8 |
| 39-40 | Di chuyển hướng 1 (`1`) | (18, 22) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 7 |
| 41 | Di chuyển hướng 1 (`1`) | (19, 21) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 5 |
| 42-43 | Di chuyển hướng 1 (`1`) | (19, 20) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 4 |
| 44-45 | Di chuyển hướng 2 (`2`) | (20, 19) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 3 |
| 46-47 | Di chuyển hướng 1 (`1`) | (21, 19) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 2 |
| 48 | Di chuyển hướng 2 (`2`) | (21, 18) | (22, 18) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(22, 18)) | 0 |
| 49-62 | Chờ 14 bước (`-14`) | (22, 18) | (22, 18) | Dự kiến đứng yên tại (22, 18); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(22, 18)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (0, 3) (ô=78)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(4, 10))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(4, 10))
- Mảng hành động đã gửi server: `[1, 0, 1, 2, -7, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 5, 4, 5, 5, 4, 4, 5, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 4 |
| 2-3 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 1)) | 3 |
| 4-5 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đến điểm hẹn tọa độ (0, 0) | 2 |
| 6-7 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 0)) | 1 |
| 8-14 | Chờ 7 bước (`-7`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 0)) | 60 |
| 15-16 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 59 |
| 17-18 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 58 |
| 19-21 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 56 |
| 22-23 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 55 |
| 24-25 | Di chuyển hướng 2 (`2`) | (5, 0) | (6, 0) | Dự kiến đến điểm hẹn tọa độ (6, 0) | 54 |
| 26-27 | Di chuyển hướng 2 (`2`) | (6, 0) | (7, 0) | Dự kiến đến điểm hẹn tọa độ (7, 0) | 53 |
| 28-29 | Di chuyển hướng 2 (`2`) | (7, 0) | (8, 0) | Dự kiến đến điểm hẹn tọa độ (8, 0) | 52 |
| 30-31 | Di chuyển hướng 2 (`2`) | (8, 0) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 51 |
| 32-33 | Di chuyển hướng 2 (`2`) | (9, 0) | (10, 0) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(10, 0)) | 50 |
| 34-35 | Di chuyển hướng 2 (`2`) | (10, 0) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 49 |
| 36 | Di chuyển hướng 3 (`3`) | (11, 0) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 47 |
| 37-38 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 2)) | 46 |
| 39-40 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 45 |
| 41-42 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 44 |
| 43-44 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 43 |
| 45-46 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 42 |
| 47-48 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 41 |
| 49-50 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 40 |
| 51 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 38 |
| 52-53 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 37 |
| 54-55 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 36 |
| 56-57 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 35 |
| 58-60 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 33 |
| 61-62 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 10)) | 32 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (13, 12) (ô=325)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 19)
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 2, -4, 4, 4, 4, 4, 4, 4, 5, 4, 4, 4, 4, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 60 |
| 4-5 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 60 |
| 6-7 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 60 |
| 8-9 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 60 |
| 10-11 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 9)) | 60 |
| 12-15 | Chờ 4 bước (`-4`) | (17, 9) | (17, 9) | Dự kiến đứng yên tại (17, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 9)) | 60 |
| 16-17 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 60 |
| 18-19 | Di chuyển hướng 4 (`4`) | (16, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 60 |
| 20-21 | Di chuyển hướng 4 (`4`) | (16, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 60 |
| 22-23 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 60 |
| 24 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 60 |
| 25-27 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 60 |
| 28-30 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 60 |
| 31-34 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 60 |
| 35-36 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 60 |
| 37 | Di chuyển hướng 4 (`4`) | (12, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 60 |
| 38 | Di chuyển hướng 4 (`4`) | (11, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 60 |
| 39-62 | Chờ 24 bước (`-24`) | (11, 19) | (11, 19) | Dự kiến đứng yên tại (11, 19); hướng tới tọa độ (11, 19) | 60 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (9, 1) (ô=35)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(1, 0))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(1, 0))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 0, -49]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 60 |
| 2-3 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 60 |
| 4 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 60 |
| 5 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 60 |
| 6 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 60 |
| 7-9 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 60 |
| 10-11 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 60 |
| 12-13 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 0)) | 60 |
| 14-62 | Chờ 49 bước (`-49`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 0)) | 60 |

