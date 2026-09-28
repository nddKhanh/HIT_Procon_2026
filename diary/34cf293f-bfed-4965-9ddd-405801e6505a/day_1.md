# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 96
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 25 | #4 | #6 | (16, 25) | 1 | 64 |
| 30 | #3 | #7 | (7, 7) | 6 | 64 |
| 40 | #2 | #7 | (12, 10) | 22 | 64 |
| 41 | #2 | #7 | (12, 9) | 62 | 64 |
| 42 | #1 | #6 | (16, 25) | 20 | 64 |
| 43 | #2 | #7 | (12, 8) | 63 | 64 |
| 44 | #2 | #7 | (13, 7) | 62 | 64 |
| 45 | #2 | #7 | (13, 6) | 62 | 64 |
| 47 | #2 | #7 | (14, 5) | 63 | 64 |
| 49 | #2 | #7 | (14, 4) | 63 | 64 |
| 49 | #5 | #6 | (16, 25) | 18 | 64 |
| 51 | #2 | #7 | (15, 3) | 63 | 64 |
| 54 | #2 | #7 | (15, 3) | 61 | 64 |
| 61 | #4 | #7 | (15, 3) | 30 | 64 |
| 65 | #3 | #7 | (15, 3) | 36 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (22, 7) (ô=246)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=2, tọa độ=(0, 0))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=2, tọa độ=(0, 0))
- Mảng hành động đã gửi server: `[1, 1, 0, 5, 0, 0, 4, 4, 5, 0, 5, 5, 5, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 5, 0, 1, -43]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (22, 7) | (22, 6) | Dự kiến đến điểm hẹn tọa độ (22, 6) | 59 |
| 2-3 | Di chuyển hướng 1 (`1`) | (22, 6) | (23, 5) | Dự kiến đến điểm hẹn tọa độ (23, 5) | 58 |
| 4-5 | Di chuyển hướng 0 (`0`) | (23, 5) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 57 |
| 6-7 | Di chuyển hướng 5 (`5`) | (22, 4) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 56 |
| 8 | Di chuyển hướng 0 (`0`) | (21, 4) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 54 |
| 9-10 | Di chuyển hướng 0 (`0`) | (21, 3) | (20, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 53 |
| 11-12 | Di chuyển hướng 4 (`4`) | (20, 2) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 52 |
| 13 | Di chuyển hướng 4 (`4`) | (20, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 50 |
| 14-16 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 48 |
| 17 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 46 |
| 18 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 44 |
| 19-20 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 43 |
| 21-22 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 42 |
| 23 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 40 |
| 24 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 38 |
| 25-26 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 37 |
| 27 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 35 |
| 28-30 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 33 |
| 31-32 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 32 |
| 33 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 30 |
| 34 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 28 |
| 35-36 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 27 |
| 37-38 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 26 |
| 39-40 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 25 |
| 41 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 23 |
| 42 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 21 |
| 43-44 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 20 |
| 45-46 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 19 |
| 47-48 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 18 |
| 49-50 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 17 |
| 51-52 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 16 |
| 53-95 | Chờ 43 bước (`-43`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 16 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 20) (ô=658)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=3, tọa độ=(22, 26))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=3, tọa độ=(22, 26))
- Mảng hành động đã gửi server: `[3, 3, 5, 0, 0, 0, 0, 5, 5, 5, 5, 4, 4, 4, 3, 4, 3, 3, 2, 2, 2, 2, 3, 2, 3, 3, 2, 3, 3, 0, 1, 1, 1, 2, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (18, 20) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 47 |
| 2-4 | Di chuyển hướng 3 (`3`) | (19, 21) | (19, 22) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 45 |
| 5-6 | Di chuyển hướng 5 (`5`) | (19, 22) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 44 |
| 7-8 | Di chuyển hướng 0 (`0`) | (18, 22) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 43 |
| 9-10 | Di chuyển hướng 0 (`0`) | (18, 21) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 42 |
| 11-12 | Di chuyển hướng 0 (`0`) | (17, 20) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 41 |
| 13 | Di chuyển hướng 0 (`0`) | (17, 19) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 39 |
| 14 | Di chuyển hướng 5 (`5`) | (16, 18) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 37 |
| 15-16 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 36 |
| 17-18 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 35 |
| 19-20 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 18)) | 34 |
| 21-22 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 33 |
| 23 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 31 |
| 24-25 | Di chuyển hướng 4 (`4`) | (11, 20) | (11, 21) | Dự kiến đến điểm hẹn tọa độ (11, 21) | 30 |
| 26-27 | Di chuyển hướng 3 (`3`) | (11, 21) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 29 |
| 28-29 | Di chuyển hướng 4 (`4`) | (11, 22) | (11, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 28 |
| 30-31 | Di chuyển hướng 3 (`3`) | (11, 23) | (11, 24) | Dự kiến đến điểm hẹn tọa độ (11, 24) | 27 |
| 32-33 | Di chuyển hướng 3 (`3`) | (11, 24) | (12, 25) | Dự kiến đến điểm hẹn tọa độ (12, 25) | 26 |
| 34-35 | Di chuyển hướng 2 (`2`) | (12, 25) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 25 |
| 36-37 | Di chuyển hướng 2 (`2`) | (13, 25) | (14, 25) | Dự kiến đến điểm hẹn tọa độ (14, 25) | 24 |
| 38 | Di chuyển hướng 2 (`2`) | (14, 25) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 22 |
| 39-41 | Di chuyển hướng 2 (`2`) | (15, 25) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 64 |
| 42-43 | Di chuyển hướng 3 (`3`) | (16, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 63 |
| 44-45 | Di chuyển hướng 2 (`2`) | (16, 26) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 62 |
| 46-47 | Di chuyển hướng 3 (`3`) | (17, 26) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 61 |
| 48 | Di chuyển hướng 3 (`3`) | (18, 27) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 59 |
| 49-50 | Di chuyển hướng 2 (`2`) | (18, 28) | (19, 28) | Dự kiến đến điểm hẹn tọa độ (19, 28) | 58 |
| 51 | Di chuyển hướng 3 (`3`) | (19, 28) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 56 |
| 52-53 | Di chuyển hướng 3 (`3`) | (20, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 55 |
| 54-55 | Di chuyển hướng 0 (`0`) | (20, 30) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 54 |
| 56-57 | Di chuyển hướng 1 (`1`) | (20, 29) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 53 |
| 58 | Di chuyển hướng 1 (`1`) | (20, 28) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 51 |
| 59-60 | Di chuyển hướng 1 (`1`) | (21, 27) | (21, 26) | Dự kiến đến điểm hẹn tọa độ (21, 26) | 50 |
| 61-62 | Di chuyển hướng 2 (`2`) | (21, 26) | (22, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(22, 26)) | 49 |
| 63-95 | Chờ 33 bước (`-33`) | (22, 26) | (22, 26) | Dự kiến đứng yên tại (22, 26); mục tiêu Spot #13 (thương hiệu=3, tọa độ=(22, 26)) | 49 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (20, 30) (ô=980)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 1)
- Mảng hành động đã gửi server: `[0, 1, 1, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 2, 5, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 5, 0, 1, 2, 2, 3, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 30) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 53 |
| 2-3 | Di chuyển hướng 1 (`1`) | (20, 29) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 52 |
| 4 | Di chuyển hướng 1 (`1`) | (20, 28) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 50 |
| 5-6 | Di chuyển hướng 0 (`0`) | (21, 27) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 49 |
| 7-8 | Di chuyển hướng 0 (`0`) | (20, 26) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 48 |
| 9 | Di chuyển hướng 5 (`5`) | (20, 25) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 46 |
| 10-11 | Di chuyển hướng 0 (`0`) | (19, 25) | (18, 24) | Dự kiến đến điểm hẹn tọa độ (18, 24) | 45 |
| 12-13 | Di chuyển hướng 0 (`0`) | (18, 24) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 44 |
| 14-15 | Di chuyển hướng 0 (`0`) | (18, 23) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 43 |
| 16-17 | Di chuyển hướng 0 (`0`) | (17, 22) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 42 |
| 18-19 | Di chuyển hướng 0 (`0`) | (17, 21) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 41 |
| 20 | Di chuyển hướng 0 (`0`) | (16, 20) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 39 |
| 21 | Di chuyển hướng 0 (`0`) | (16, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 37 |
| 22-23 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 36 |
| 24-25 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 35 |
| 26-27 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 18)) | 34 |
| 28-29 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 33 |
| 30-31 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 32 |
| 32 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 30 |
| 33 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 28 |
| 34 | Di chuyển hướng 1 (`1`) | (11, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 26 |
| 35-36 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 25 |
| 37-38 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 24 |
| 39 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 64 |
| 40 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 64 |
| 41-42 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 64 |
| 43 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 64 |
| 44 | Di chuyển hướng 1 (`1`) | (13, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 64 |
| 45-46 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 64 |
| 47-48 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 64 |
| 49-50 | Di chuyển hướng 1 (`1`) | (14, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 64 |
| 51 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 62 |
| 52-53 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 64 |
| 54 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 62 |
| 55 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 60 |
| 56-57 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 59 |
| 58 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 57 |
| 59-61 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 55 |
| 62-63 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 54 |
| 64 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 52 |
| 65 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 50 |
| 66-67 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 49 |
| 68-69 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 48 |
| 70-71 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 47 |
| 72 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 45 |
| 73 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 43 |
| 74-75 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 42 |
| 76-77 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 41 |
| 78-79 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 40 |
| 80-81 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 39 |
| 82-83 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 38 |
| 84-85 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 37 |
| 86-87 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 35 |
| 88-89 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 33 |
| 90-91 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 32 |
| 92 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 30 |
| 93 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 28 |
| 94-95 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 27 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 7) (ô=231)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(24, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(24, 9)
- Mảng hành động đã gửi server: `[-31, 5, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 2, 2, 2, 3, 2, 1, 1, 2, 2, 3, 4, 3, 4, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-30 | Chờ 31 bước (`-31`) | (7, 7) | (7, 7) | Dự kiến đứng yên tại (7, 7); hướng tới tọa độ (7, 7) | 64 |
| 31-32 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 63 |
| 33 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 61 |
| 34-35 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 60 |
| 36-37 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 59 |
| 38-39 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 58 |
| 40-41 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 57 |
| 42-43 | Di chuyển hướng 0 (`0`) | (3, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 56 |
| 44-45 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 55 |
| 46 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 53 |
| 47 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 51 |
| 48-49 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 50 |
| 50-51 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 49 |
| 52-53 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 48 |
| 54 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 46 |
| 55 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 44 |
| 56-57 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 43 |
| 58-60 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 41 |
| 61 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 39 |
| 62-63 | Di chuyển hướng 3 (`3`) | (14, 1) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 38 |
| 64 | Di chuyển hướng 3 (`3`) | (14, 2) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 64 |
| 65 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 62 |
| 66-67 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 61 |
| 68-69 | Di chuyển hướng 2 (`2`) | (17, 3) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 60 |
| 70 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 58 |
| 71 | Di chuyển hướng 2 (`2`) | (18, 4) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 56 |
| 72-74 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 54 |
| 75 | Di chuyển hướng 1 (`1`) | (20, 3) | (20, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 52 |
| 76-77 | Di chuyển hướng 2 (`2`) | (20, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 51 |
| 78-80 | Di chuyển hướng 2 (`2`) | (21, 2) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 49 |
| 81-82 | Di chuyển hướng 3 (`3`) | (22, 2) | (23, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 48 |
| 83-84 | Di chuyển hướng 4 (`4`) | (23, 3) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 47 |
| 85-86 | Di chuyển hướng 3 (`3`) | (22, 4) | (23, 5) | Dự kiến đến điểm hẹn tọa độ (23, 5) | 46 |
| 87-88 | Di chuyển hướng 4 (`4`) | (23, 5) | (22, 6) | Dự kiến đến điểm hẹn tọa độ (22, 6) | 45 |
| 89-90 | Di chuyển hướng 3 (`3`) | (22, 6) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 44 |
| 91-92 | Di chuyển hướng 3 (`3`) | (23, 7) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 43 |
| 93-94 | Di chuyển hướng 3 (`3`) | (23, 8) | (24, 9) | Dự kiến đến điểm hẹn tọa độ (24, 9) | 42 |
| 95 | Chờ 1 bước (`-1`) | (24, 9) | (24, 9) | Dự kiến đứng yên tại (24, 9); hướng tới tọa độ (24, 9) | 42 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (8, 24) (ô=776)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=2, tọa độ=(0, 0))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=2, tọa độ=(0, 0))
- Mảng hành động đã gửi server: `[5, 0, 1, 2, 2, 3, 2, 3, 3, 2, 2, 2, 2, -1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 5, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 5, 0, 1, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 16 |
| 2-3 | Di chuyển hướng 0 (`0`) | (7, 24) | (7, 23) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 23)) | 15 |
| 4-5 | Di chuyển hướng 1 (`1`) | (7, 23) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 14 |
| 6-7 | Di chuyển hướng 2 (`2`) | (7, 22) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 13 |
| 8-9 | Di chuyển hướng 2 (`2`) | (8, 22) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 12 |
| 10-11 | Di chuyển hướng 3 (`3`) | (9, 22) | (10, 23) | Dự kiến đến điểm hẹn tọa độ (10, 23) | 11 |
| 12 | Di chuyển hướng 2 (`2`) | (10, 23) | (11, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 9 |
| 13-14 | Di chuyển hướng 3 (`3`) | (11, 23) | (11, 24) | Dự kiến đến điểm hẹn tọa độ (11, 24) | 8 |
| 15-16 | Di chuyển hướng 3 (`3`) | (11, 24) | (12, 25) | Dự kiến đến điểm hẹn tọa độ (12, 25) | 7 |
| 17-18 | Di chuyển hướng 2 (`2`) | (12, 25) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 6 |
| 19-20 | Di chuyển hướng 2 (`2`) | (13, 25) | (14, 25) | Dự kiến đến điểm hẹn tọa độ (14, 25) | 5 |
| 21 | Di chuyển hướng 2 (`2`) | (14, 25) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 3 |
| 22-24 | Di chuyển hướng 2 (`2`) | (15, 25) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 64 |
| 25 | Chờ 1 bước (`-1`) | (16, 25) | (16, 25) | Dự kiến đứng yên tại (16, 25); mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 64 |
| 26-27 | Di chuyển hướng 0 (`0`) | (16, 25) | (15, 24) | Dự kiến đến điểm hẹn tọa độ (15, 24) | 63 |
| 28-29 | Di chuyển hướng 1 (`1`) | (15, 24) | (16, 23) | Dự kiến đến điểm hẹn tọa độ (16, 23) | 62 |
| 30 | Di chuyển hướng 1 (`1`) | (16, 23) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 60 |
| 31 | Di chuyển hướng 0 (`0`) | (16, 22) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 58 |
| 32-33 | Di chuyển hướng 0 (`0`) | (16, 21) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 57 |
| 34 | Di chuyển hướng 1 (`1`) | (15, 20) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 55 |
| 35 | Di chuyển hướng 1 (`1`) | (16, 19) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 53 |
| 36 | Di chuyển hướng 0 (`0`) | (16, 18) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 51 |
| 37 | Di chuyển hướng 0 (`0`) | (16, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 49 |
| 38-39 | Di chuyển hướng 0 (`0`) | (15, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 48 |
| 40 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 46 |
| 41 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 44 |
| 42-43 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 43 |
| 44 | Di chuyển hướng 1 (`1`) | (15, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 41 |
| 45-46 | Di chuyển hướng 1 (`1`) | (16, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 40 |
| 47-48 | Di chuyển hướng 0 (`0`) | (16, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 39 |
| 49-50 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 38 |
| 51-52 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 37 |
| 53 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 35 |
| 54-55 | Di chuyển hướng 1 (`1`) | (15, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 34 |
| 56 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 32 |
| 57-58 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 31 |
| 59-60 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 64 |
| 61 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 62 |
| 62 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 60 |
| 63-64 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 59 |
| 65 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 57 |
| 66-68 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 55 |
| 69-70 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 54 |
| 71 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 52 |
| 72 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 50 |
| 73-74 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 49 |
| 75-76 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 48 |
| 77-78 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 47 |
| 79 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 45 |
| 80 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 43 |
| 81-82 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 42 |
| 83-84 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 41 |
| 85-86 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 40 |
| 87-88 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 39 |
| 89-90 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 38 |
| 91-95 | Chờ 5 bước (`-5`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 38 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (20, 27) (ô=884)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(7, 23))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(7, 23))
- Mảng hành động đã gửi server: `[2, 1, 2, 4, 4, 4, 4, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 3, 3, 5, 4, 5, 4, 4, 5, 5, 5, 0, 5, 0, 5, 5, 0, 5, 4, -26]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (20, 27) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 46 |
| 2-3 | Di chuyển hướng 1 (`1`) | (21, 27) | (21, 26) | Dự kiến đến điểm hẹn tọa độ (21, 26) | 45 |
| 4-5 | Di chuyển hướng 2 (`2`) | (21, 26) | (22, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(22, 26)) | 44 |
| 6-7 | Di chuyển hướng 4 (`4`) | (22, 26) | (22, 27) | Dự kiến đến điểm hẹn tọa độ (22, 27) | 43 |
| 8-10 | Di chuyển hướng 4 (`4`) | (22, 27) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 41 |
| 11-12 | Di chuyển hướng 4 (`4`) | (21, 28) | (21, 29) | Dự kiến đến điểm hẹn tọa độ (21, 29) | 40 |
| 13-14 | Di chuyển hướng 4 (`4`) | (21, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 39 |
| 15-16 | Di chuyển hướng 0 (`0`) | (20, 30) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 38 |
| 17-18 | Di chuyển hướng 1 (`1`) | (20, 29) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 37 |
| 19 | Di chuyển hướng 0 (`0`) | (20, 28) | (20, 27) | Dự kiến đến điểm hẹn tọa độ (20, 27) | 35 |
| 20-21 | Di chuyển hướng 0 (`0`) | (20, 27) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 34 |
| 22-23 | Di chuyển hướng 0 (`0`) | (19, 26) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 33 |
| 24-25 | Di chuyển hướng 0 (`0`) | (19, 25) | (18, 24) | Dự kiến đến điểm hẹn tọa độ (18, 24) | 32 |
| 26-27 | Di chuyển hướng 0 (`0`) | (18, 24) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 31 |
| 28-29 | Di chuyển hướng 1 (`1`) | (18, 23) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 30 |
| 30-31 | Di chuyển hướng 0 (`0`) | (18, 22) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 29 |
| 32-33 | Di chuyển hướng 1 (`1`) | (18, 21) | (18, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 28 |
| 34-35 | Di chuyển hướng 3 (`3`) | (18, 20) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 27 |
| 36-38 | Di chuyển hướng 3 (`3`) | (19, 21) | (19, 22) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 25 |
| 39-40 | Di chuyển hướng 5 (`5`) | (19, 22) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 24 |
| 41-42 | Di chuyển hướng 4 (`4`) | (18, 22) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 23 |
| 43-44 | Di chuyển hướng 5 (`5`) | (18, 23) | (17, 23) | Dự kiến đến điểm hẹn tọa độ (17, 23) | 22 |
| 45 | Di chuyển hướng 4 (`4`) | (17, 23) | (16, 24) | Dự kiến đến điểm hẹn tọa độ (16, 24) | 20 |
| 46-48 | Di chuyển hướng 4 (`4`) | (16, 24) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 64 |
| 49-50 | Di chuyển hướng 5 (`5`) | (16, 25) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 63 |
| 51-53 | Di chuyển hướng 5 (`5`) | (15, 25) | (14, 25) | Dự kiến đến điểm hẹn tọa độ (14, 25) | 61 |
| 54 | Di chuyển hướng 5 (`5`) | (14, 25) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 59 |
| 55-56 | Di chuyển hướng 0 (`0`) | (13, 25) | (12, 24) | Dự kiến đến điểm hẹn tọa độ (12, 24) | 58 |
| 57-58 | Di chuyển hướng 5 (`5`) | (12, 24) | (11, 24) | Dự kiến đến điểm hẹn tọa độ (11, 24) | 57 |
| 59-60 | Di chuyển hướng 0 (`0`) | (11, 24) | (11, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 56 |
| 61-62 | Di chuyển hướng 5 (`5`) | (11, 23) | (10, 23) | Dự kiến đến điểm hẹn tọa độ (10, 23) | 55 |
| 63 | Di chuyển hướng 5 (`5`) | (10, 23) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 53 |
| 64-65 | Di chuyển hướng 0 (`0`) | (9, 23) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 52 |
| 66-67 | Di chuyển hướng 5 (`5`) | (8, 22) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 51 |
| 68-69 | Di chuyển hướng 4 (`4`) | (7, 22) | (7, 23) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 23)) | 50 |
| 70-95 | Chờ 26 bước (`-26`) | (7, 23) | (7, 23) | Dự kiến đứng yên tại (7, 23); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 23)) | 50 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (16, 26) (ô=848)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=5, tọa độ=(16, 25))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=5, tọa độ=(16, 25))
- Mảng hành động đã gửi server: `[0, -94]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (16, 26) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 64 |
| 2-95 | Chờ 94 bước (`-94`) | (16, 25) | (16, 25) | Dự kiến đứng yên tại (16, 25); mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 64 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (23, 3) (ô=119)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 3)
- Mảng hành động đã gửi server: `[4, 5, 4, 4, 5, 5, 4, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 0, 5, 2, 3, 3, 2, 2, 2, 3, 0, 1, 1, 1, 1, 1, 1, -45]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (23, 3) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 64 |
| 2-3 | Di chuyển hướng 5 (`5`) | (22, 4) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 64 |
| 4 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 64 |
| 5-6 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 64 |
| 7 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 64 |
| 8-9 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 64 |
| 10-11 | Di chuyển hướng 4 (`4`) | (18, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 64 |
| 12-13 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 64 |
| 14 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 64 |
| 15 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 64 |
| 16-17 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 64 |
| 18-19 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 64 |
| 20-21 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 64 |
| 22 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 64 |
| 23 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 64 |
| 24-25 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 64 |
| 26 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 64 |
| 27 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 64 |
| 28-29 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 64 |
| 30-31 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 64 |
| 32-33 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 64 |
| 34 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 64 |
| 35 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 64 |
| 36 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 64 |
| 37 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 64 |
| 38-39 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 64 |
| 40 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 64 |
| 41-42 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 64 |
| 43 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 64 |
| 44 | Di chuyển hướng 1 (`1`) | (13, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 64 |
| 45-46 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 64 |
| 47-48 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 64 |
| 49-50 | Di chuyển hướng 1 (`1`) | (14, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 64 |
| 51-95 | Chờ 45 bước (`-45`) | (15, 3) | (15, 3) | Dự kiến đứng yên tại (15, 3); hướng tới tọa độ (15, 3) | 64 |

