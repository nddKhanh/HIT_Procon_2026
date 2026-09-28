# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 64
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 35 | #1 | #6 | (16, 26) | 40 | 64 |
| 37 | #5 | #6 | (16, 26) | 35 | 64 |
| 49 | #2 | #6 | (16, 26) | 24 | 64 |
| 55 | #0 | #7 | (23, 3) | 14 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (1, 1) (ô=33)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(22, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(22, 7)
- Mảng hành động đã gửi server: `[4, 2, 2, 1, 0, 5, 5, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 2, 2, 2, 3, 2, 1, 1, 2, 2, 3, -1, 4, 3, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 63 |
| 2-3 | Di chuyển hướng 2 (`2`) | (0, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 62 |
| 4-5 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 61 |
| 6-7 | Di chuyển hướng 1 (`1`) | (2, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 60 |
| 8-9 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 59 |
| 10 | Di chuyển hướng 5 (`5`) | (2, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 57 |
| 11 | Di chuyển hướng 5 (`5`) | (1, 0) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 55 |
| 12-13 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 54 |
| 14 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 52 |
| 15 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 50 |
| 16-17 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 49 |
| 18 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 47 |
| 19 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 45 |
| 20-21 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 44 |
| 22-23 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 43 |
| 24-25 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 42 |
| 26 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 40 |
| 27 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 38 |
| 28-29 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 37 |
| 30-32 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 35 |
| 33 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 33 |
| 34-35 | Di chuyển hướng 3 (`3`) | (14, 1) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 32 |
| 36 | Di chuyển hướng 3 (`3`) | (14, 2) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 30 |
| 37 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 28 |
| 38-39 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 27 |
| 40-41 | Di chuyển hướng 2 (`2`) | (17, 3) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 26 |
| 42 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 24 |
| 43 | Di chuyển hướng 2 (`2`) | (18, 4) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 22 |
| 44-46 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 20 |
| 47 | Di chuyển hướng 1 (`1`) | (20, 3) | (20, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 18 |
| 48-49 | Di chuyển hướng 2 (`2`) | (20, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 17 |
| 50-52 | Di chuyển hướng 2 (`2`) | (21, 2) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 15 |
| 53-54 | Di chuyển hướng 3 (`3`) | (22, 2) | (23, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 64 |
| 55 | Chờ 1 bước (`-1`) | (23, 3) | (23, 3) | Dự kiến đứng yên tại (23, 3); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 64 |
| 56-57 | Di chuyển hướng 4 (`4`) | (23, 3) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 63 |
| 58-59 | Di chuyển hướng 3 (`3`) | (22, 4) | (23, 5) | Dự kiến đến điểm hẹn tọa độ (23, 5) | 62 |
| 60-61 | Di chuyển hướng 4 (`4`) | (23, 5) | (22, 6) | Dự kiến đến điểm hẹn tọa độ (22, 6) | 61 |
| 62-63 | Di chuyển hướng 4 (`4`) | (22, 6) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 60 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 14) (ô=466)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=0, tọa độ=(18, 20))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=0, tọa độ=(18, 20))
- Mảng hành động đã gửi server: `[4, 5, 4, 4, 5, 4, 4, 4, 5, 4, 4, 4, 3, 3, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 1, 2, 0, 0, 0, 0, 5, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (18, 14) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 63 |
| 2-3 | Di chuyển hướng 5 (`5`) | (18, 15) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 62 |
| 4 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 60 |
| 5-6 | Di chuyển hướng 4 (`4`) | (16, 16) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 59 |
| 7 | Di chuyển hướng 5 (`5`) | (16, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 57 |
| 8-9 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 56 |
| 10-11 | Di chuyển hướng 4 (`4`) | (14, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 55 |
| 12-13 | Di chuyển hướng 4 (`4`) | (14, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 54 |
| 14 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 52 |
| 15-16 | Di chuyển hướng 4 (`4`) | (12, 20) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 51 |
| 17-18 | Di chuyển hướng 4 (`4`) | (12, 21) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 50 |
| 19-20 | Di chuyển hướng 4 (`4`) | (11, 22) | (11, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 49 |
| 21-22 | Di chuyển hướng 3 (`3`) | (11, 23) | (11, 24) | Dự kiến đến điểm hẹn tọa độ (11, 24) | 48 |
| 23-24 | Di chuyển hướng 3 (`3`) | (11, 24) | (12, 25) | Dự kiến đến điểm hẹn tọa độ (12, 25) | 47 |
| 25-26 | Di chuyển hướng 2 (`2`) | (12, 25) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 46 |
| 27-28 | Di chuyển hướng 2 (`2`) | (13, 25) | (14, 25) | Dự kiến đến điểm hẹn tọa độ (14, 25) | 45 |
| 29 | Di chuyển hướng 2 (`2`) | (14, 25) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 43 |
| 30-32 | Di chuyển hướng 2 (`2`) | (15, 25) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 41 |
| 33-34 | Di chuyển hướng 3 (`3`) | (16, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 64 |
| 35-36 | Di chuyển hướng 2 (`2`) | (16, 26) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 63 |
| 37-38 | Di chuyển hướng 2 (`2`) | (17, 26) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 62 |
| 39 | Di chuyển hướng 2 (`2`) | (18, 26) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 60 |
| 40-41 | Di chuyển hướng 2 (`2`) | (19, 26) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 59 |
| 42-43 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 58 |
| 44-45 | Di chuyển hướng 1 (`1`) | (21, 27) | (21, 26) | Dự kiến đến điểm hẹn tọa độ (21, 26) | 57 |
| 46-47 | Di chuyển hướng 2 (`2`) | (21, 26) | (22, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(22, 26)) | 56 |
| 48-49 | Di chuyển hướng 0 (`0`) | (22, 26) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 55 |
| 50-51 | Di chuyển hướng 0 (`0`) | (22, 25) | (21, 24) | Dự kiến đến điểm hẹn tọa độ (21, 24) | 54 |
| 52-53 | Di chuyển hướng 0 (`0`) | (21, 24) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 53 |
| 54-55 | Di chuyển hướng 0 (`0`) | (21, 23) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 52 |
| 56-57 | Di chuyển hướng 5 (`5`) | (20, 22) | (19, 22) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 51 |
| 58-59 | Di chuyển hướng 0 (`0`) | (19, 22) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 50 |
| 60-62 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 48 |
| 63 | Chờ 1 bước (`-1`) | (18, 20) | (18, 20) | Dự kiến đứng yên tại (18, 20); mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 48 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (25, 10) (ô=345)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(20, 30))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(20, 30))
- Mảng hành động đã gửi server: `[5, 5, 4, 4, 4, 5, 4, 4, 4, 4, 3, 4, 4, 0, 5, 0, 5, 5, 5, 5, 4, 3, 3, 3, 3, 3, 2, 3, 3, 2, 2, 2, 2, 3, 4, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (25, 10) | (24, 10) | Dự kiến đến điểm hẹn tọa độ (24, 10) | 63 |
| 2-3 | Di chuyển hướng 5 (`5`) | (24, 10) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 62 |
| 4 | Di chuyển hướng 4 (`4`) | (23, 10) | (23, 11) | Dự kiến đến điểm hẹn tọa độ (23, 11) | 60 |
| 5-6 | Di chuyển hướng 4 (`4`) | (23, 11) | (22, 12) | Dự kiến đến điểm hẹn tọa độ (22, 12) | 59 |
| 7-8 | Di chuyển hướng 4 (`4`) | (22, 12) | (22, 13) | Dự kiến đến điểm hẹn tọa độ (22, 13) | 58 |
| 9 | Di chuyển hướng 5 (`5`) | (22, 13) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 56 |
| 10 | Di chuyển hướng 4 (`4`) | (21, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 54 |
| 11 | Di chuyển hướng 4 (`4`) | (20, 14) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 52 |
| 12-13 | Di chuyển hướng 4 (`4`) | (20, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 51 |
| 14-15 | Di chuyển hướng 4 (`4`) | (19, 16) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 50 |
| 16 | Di chuyển hướng 3 (`3`) | (19, 17) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 48 |
| 17-18 | Di chuyển hướng 4 (`4`) | (19, 18) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 47 |
| 19 | Di chuyển hướng 4 (`4`) | (19, 19) | (18, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 45 |
| 20-21 | Di chuyển hướng 0 (`0`) | (18, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 44 |
| 22-23 | Di chuyển hướng 5 (`5`) | (18, 19) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 43 |
| 24 | Di chuyển hướng 0 (`0`) | (17, 19) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 41 |
| 25 | Di chuyển hướng 5 (`5`) | (16, 18) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 39 |
| 26-27 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 38 |
| 28-29 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 37 |
| 30-31 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 18)) | 36 |
| 32-33 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 35 |
| 34 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 33 |
| 35-36 | Di chuyển hướng 3 (`3`) | (12, 20) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 32 |
| 37-38 | Di chuyển hướng 3 (`3`) | (13, 21) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 31 |
| 39 | Di chuyển hướng 3 (`3`) | (13, 22) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 29 |
| 40-41 | Di chuyển hướng 3 (`3`) | (14, 23) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 28 |
| 42-44 | Di chuyển hướng 2 (`2`) | (14, 24) | (15, 24) | Dự kiến đến điểm hẹn tọa độ (15, 24) | 26 |
| 45-46 | Di chuyển hướng 3 (`3`) | (15, 24) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 25 |
| 47-48 | Di chuyển hướng 3 (`3`) | (16, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 64 |
| 49-50 | Di chuyển hướng 2 (`2`) | (16, 26) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 63 |
| 51-52 | Di chuyển hướng 2 (`2`) | (17, 26) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 62 |
| 53 | Di chuyển hướng 2 (`2`) | (18, 26) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 60 |
| 54-55 | Di chuyển hướng 2 (`2`) | (19, 26) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 59 |
| 56-57 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 58 |
| 58-59 | Di chuyển hướng 4 (`4`) | (21, 27) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 57 |
| 60 | Di chuyển hướng 4 (`4`) | (20, 28) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 55 |
| 61-62 | Di chuyển hướng 3 (`3`) | (20, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 54 |
| 63 | Chờ 1 bước (`-1`) | (20, 30) | (20, 30) | Dự kiến đứng yên tại (20, 30); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 54 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (24, 2) (ô=88)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 7)
- Mảng hành động đã gửi server: `[4, 5, 4, 5, 0, 5, 4, 5, 0, 5, 5, 5, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 5, 5, 3, 4, -1, 3, 3, 2, 3, 2, 2, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (24, 2) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 63 |
| 2-3 | Di chuyển hướng 5 (`5`) | (24, 3) | (23, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 62 |
| 4-5 | Di chuyển hướng 4 (`4`) | (23, 3) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 61 |
| 6-7 | Di chuyển hướng 5 (`5`) | (22, 4) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 60 |
| 8 | Di chuyển hướng 0 (`0`) | (21, 4) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 58 |
| 9-10 | Di chuyển hướng 5 (`5`) | (21, 3) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 57 |
| 11 | Di chuyển hướng 4 (`4`) | (20, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 55 |
| 12-14 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 53 |
| 15 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 51 |
| 16 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 49 |
| 17-18 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 48 |
| 19-20 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 47 |
| 21 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 45 |
| 22 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 43 |
| 23-24 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 42 |
| 25 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 40 |
| 26-28 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 38 |
| 29-30 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 37 |
| 31 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 35 |
| 32 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 33 |
| 33-34 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 32 |
| 35-36 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 31 |
| 37-38 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 30 |
| 39 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 28 |
| 40 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 26 |
| 41-42 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 25 |
| 43 | Di chuyển hướng 5 (`5`) | (2, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 23 |
| 44 | Di chuyển hướng 5 (`5`) | (1, 0) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 21 |
| 45-46 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 20 |
| 47-48 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 19 |
| 49 | Chờ 1 bước (`-1`) | (0, 2) | (0, 2) | Dự kiến đứng yên tại (0, 2); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 19 |
| 50-51 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 18 |
| 52-53 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 17 |
| 54 | Di chuyển hướng 2 (`2`) | (1, 4) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 15 |
| 55 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 13 |
| 56 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 11 |
| 57-58 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 10 |
| 59-60 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 9 |
| 61-62 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 8 |
| 63 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 6 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (3, 0) (ô=3)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 24)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 24)
- Mảng hành động đã gửi server: `[5, 5, 5, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 4, 4, 4, 3, 4, 5, 5, 0, 5, 4, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (3, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 63 |
| 2 | Di chuyển hướng 5 (`5`) | (2, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 61 |
| 3 | Di chuyển hướng 5 (`5`) | (1, 0) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 59 |
| 4-5 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 58 |
| 6 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 56 |
| 7 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 54 |
| 8-9 | Di chuyển hướng 3 (`3`) | (3, 1) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 53 |
| 10-11 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 52 |
| 12-13 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 51 |
| 14-15 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 50 |
| 16-17 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 49 |
| 18-19 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 48 |
| 20 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 46 |
| 21-22 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 45 |
| 23-24 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 44 |
| 25-26 | Di chuyển hướng 3 (`3`) | (7, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 43 |
| 27 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 41 |
| 28-29 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 40 |
| 30 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 38 |
| 31-32 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 37 |
| 33-34 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 36 |
| 35-37 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 34 |
| 38 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 32 |
| 39-40 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 18)) | 31 |
| 41-42 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 30 |
| 43 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 28 |
| 44-45 | Di chuyển hướng 4 (`4`) | (11, 20) | (11, 21) | Dự kiến đến điểm hẹn tọa độ (11, 21) | 27 |
| 46-47 | Di chuyển hướng 3 (`3`) | (11, 21) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 26 |
| 48-49 | Di chuyển hướng 4 (`4`) | (11, 22) | (11, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 25 |
| 50-51 | Di chuyển hướng 5 (`5`) | (11, 23) | (10, 23) | Dự kiến đến điểm hẹn tọa độ (10, 23) | 24 |
| 52 | Di chuyển hướng 5 (`5`) | (10, 23) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 22 |
| 53-54 | Di chuyển hướng 0 (`0`) | (9, 23) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 21 |
| 55-56 | Di chuyển hướng 5 (`5`) | (8, 22) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 20 |
| 57-58 | Di chuyển hướng 4 (`4`) | (7, 22) | (7, 23) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 23)) | 19 |
| 59-60 | Di chuyển hướng 3 (`3`) | (7, 23) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 18 |
| 61-62 | Di chuyển hướng 2 (`2`) | (7, 24) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 17 |
| 63 | Chờ 1 bước (`-1`) | (8, 24) | (8, 24) | Dự kiến đứng yên tại (8, 24); hướng tới tọa độ (8, 24) | 17 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (26, 5) (ô=186)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 27)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 27)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 4, 4, 4, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 2, 2, 2, 2, 3, 1, 2, 4, 4, 4, 4, 0, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (26, 5) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 63 |
| 2-3 | Di chuyển hướng 4 (`4`) | (25, 6) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 62 |
| 4-5 | Di chuyển hướng 4 (`4`) | (25, 7) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 61 |
| 6-7 | Di chuyển hướng 4 (`4`) | (24, 8) | (24, 9) | Dự kiến đến điểm hẹn tọa độ (24, 9) | 60 |
| 8-9 | Di chuyển hướng 4 (`4`) | (24, 9) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 59 |
| 10 | Di chuyển hướng 4 (`4`) | (23, 10) | (23, 11) | Dự kiến đến điểm hẹn tọa độ (23, 11) | 57 |
| 11-12 | Di chuyển hướng 4 (`4`) | (23, 11) | (22, 12) | Dự kiến đến điểm hẹn tọa độ (22, 12) | 56 |
| 13-14 | Di chuyển hướng 4 (`4`) | (22, 12) | (22, 13) | Dự kiến đến điểm hẹn tọa độ (22, 13) | 55 |
| 15 | Di chuyển hướng 5 (`5`) | (22, 13) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 53 |
| 16 | Di chuyển hướng 4 (`4`) | (21, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 51 |
| 17 | Di chuyển hướng 4 (`4`) | (20, 14) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 49 |
| 18-19 | Di chuyển hướng 4 (`4`) | (20, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 48 |
| 20-21 | Di chuyển hướng 4 (`4`) | (19, 16) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 47 |
| 22 | Di chuyển hướng 4 (`4`) | (19, 17) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 45 |
| 23-24 | Di chuyển hướng 4 (`4`) | (18, 18) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 44 |
| 25-26 | Di chuyển hướng 4 (`4`) | (18, 19) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 43 |
| 27-28 | Di chuyển hướng 4 (`4`) | (17, 20) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 42 |
| 29-30 | Di chuyển hướng 4 (`4`) | (17, 21) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 41 |
| 31 | Di chuyển hướng 4 (`4`) | (16, 22) | (16, 23) | Dự kiến đến điểm hẹn tọa độ (16, 23) | 39 |
| 32 | Di chuyển hướng 4 (`4`) | (16, 23) | (15, 24) | Dự kiến đến điểm hẹn tọa độ (15, 24) | 37 |
| 33-34 | Di chuyển hướng 3 (`3`) | (15, 24) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 36 |
| 35-36 | Di chuyển hướng 3 (`3`) | (16, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 64 |
| 37-38 | Di chuyển hướng 2 (`2`) | (16, 26) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 63 |
| 39-40 | Di chuyển hướng 2 (`2`) | (17, 26) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 62 |
| 41 | Di chuyển hướng 2 (`2`) | (18, 26) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 60 |
| 42-43 | Di chuyển hướng 2 (`2`) | (19, 26) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 59 |
| 44-45 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 58 |
| 46-47 | Di chuyển hướng 1 (`1`) | (21, 27) | (21, 26) | Dự kiến đến điểm hẹn tọa độ (21, 26) | 57 |
| 48-49 | Di chuyển hướng 2 (`2`) | (21, 26) | (22, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(22, 26)) | 56 |
| 50-51 | Di chuyển hướng 4 (`4`) | (22, 26) | (22, 27) | Dự kiến đến điểm hẹn tọa độ (22, 27) | 55 |
| 52-54 | Di chuyển hướng 4 (`4`) | (22, 27) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 53 |
| 55-56 | Di chuyển hướng 4 (`4`) | (21, 28) | (21, 29) | Dự kiến đến điểm hẹn tọa độ (21, 29) | 52 |
| 57-58 | Di chuyển hướng 4 (`4`) | (21, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 51 |
| 59-60 | Di chuyển hướng 0 (`0`) | (20, 30) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 50 |
| 61-62 | Di chuyển hướng 1 (`1`) | (20, 29) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 49 |
| 63 | Di chuyển hướng 0 (`0`) | (20, 28) | (20, 27) | Dự kiến đến điểm hẹn tọa độ (20, 27) | 47 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (8, 29) (ô=936)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 26)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 26)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 1, 1, 1, -49]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 29) | (9, 29) | Dự kiến đến điểm hẹn tọa độ (9, 29) | 64 |
| 2 | Di chuyển hướng 2 (`2`) | (9, 29) | (10, 29) | Dự kiến đến điểm hẹn tọa độ (10, 29) | 64 |
| 3-4 | Di chuyển hướng 2 (`2`) | (10, 29) | (11, 29) | Dự kiến đến điểm hẹn tọa độ (11, 29) | 64 |
| 5-6 | Di chuyển hướng 2 (`2`) | (11, 29) | (12, 29) | Dự kiến đến điểm hẹn tọa độ (12, 29) | 64 |
| 7 | Di chuyển hướng 2 (`2`) | (12, 29) | (13, 29) | Dự kiến đến điểm hẹn tọa độ (13, 29) | 64 |
| 8 | Di chuyển hướng 2 (`2`) | (13, 29) | (14, 29) | Dự kiến đến điểm hẹn tọa độ (14, 29) | 64 |
| 9-10 | Di chuyển hướng 2 (`2`) | (14, 29) | (15, 29) | Dự kiến đến điểm hẹn tọa độ (15, 29) | 64 |
| 11 | Di chuyển hướng 1 (`1`) | (15, 29) | (15, 28) | Dự kiến đến điểm hẹn tọa độ (15, 28) | 64 |
| 12 | Di chuyển hướng 1 (`1`) | (15, 28) | (16, 27) | Dự kiến đến điểm hẹn tọa độ (16, 27) | 64 |
| 13-14 | Di chuyển hướng 1 (`1`) | (16, 27) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 64 |
| 15-63 | Chờ 49 bước (`-49`) | (16, 26) | (16, 26) | Dự kiến đứng yên tại (16, 26); hướng tới tọa độ (16, 26) | 64 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (28, 23) (ô=764)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(23, 3))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(23, 3))
- Mảng hành động đã gửi server: `[0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -32]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (28, 23) | (27, 22) | Dự kiến đến điểm hẹn tọa độ (27, 22) | 64 |
| 2-3 | Di chuyển hướng 0 (`0`) | (27, 22) | (27, 21) | Dự kiến đến điểm hẹn tọa độ (27, 21) | 64 |
| 4 | Di chuyển hướng 0 (`0`) | (27, 21) | (26, 20) | Dự kiến đến điểm hẹn tọa độ (26, 20) | 64 |
| 5 | Di chuyển hướng 1 (`1`) | (26, 20) | (27, 19) | Dự kiến đến điểm hẹn tọa độ (27, 19) | 64 |
| 6-7 | Di chuyển hướng 1 (`1`) | (27, 19) | (27, 18) | Dự kiến đến điểm hẹn tọa độ (27, 18) | 64 |
| 8 | Di chuyển hướng 1 (`1`) | (27, 18) | (28, 17) | Dự kiến đến điểm hẹn tọa độ (28, 17) | 64 |
| 9-10 | Di chuyển hướng 1 (`1`) | (28, 17) | (28, 16) | Dự kiến đến điểm hẹn tọa độ (28, 16) | 64 |
| 11 | Di chuyển hướng 1 (`1`) | (28, 16) | (29, 15) | Dự kiến đến điểm hẹn tọa độ (29, 15) | 64 |
| 12 | Di chuyển hướng 0 (`0`) | (29, 15) | (28, 14) | Dự kiến đến điểm hẹn tọa độ (28, 14) | 64 |
| 13 | Di chuyển hướng 0 (`0`) | (28, 14) | (28, 13) | Dự kiến đến điểm hẹn tọa độ (28, 13) | 64 |
| 14-15 | Di chuyển hướng 0 (`0`) | (28, 13) | (27, 12) | Dự kiến đến điểm hẹn tọa độ (27, 12) | 64 |
| 16-17 | Di chuyển hướng 0 (`0`) | (27, 12) | (27, 11) | Dự kiến đến điểm hẹn tọa độ (27, 11) | 64 |
| 18 | Di chuyển hướng 0 (`0`) | (27, 11) | (26, 10) | Dự kiến đến điểm hẹn tọa độ (26, 10) | 64 |
| 19-20 | Di chuyển hướng 0 (`0`) | (26, 10) | (26, 9) | Dự kiến đến điểm hẹn tọa độ (26, 9) | 64 |
| 21-22 | Di chuyển hướng 0 (`0`) | (26, 9) | (25, 8) | Dự kiến đến điểm hẹn tọa độ (25, 8) | 64 |
| 23-24 | Di chuyển hướng 0 (`0`) | (25, 8) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 64 |
| 25-26 | Di chuyển hướng 0 (`0`) | (25, 7) | (24, 6) | Dự kiến đến điểm hẹn tọa độ (24, 6) | 64 |
| 27-28 | Di chuyển hướng 0 (`0`) | (24, 6) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 64 |
| 29 | Di chuyển hướng 0 (`0`) | (24, 5) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 64 |
| 30-31 | Di chuyển hướng 0 (`0`) | (23, 4) | (23, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 64 |
| 32-63 | Chờ 32 bước (`-32`) | (23, 3) | (23, 3) | Dự kiến đứng yên tại (23, 3); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 64 |

