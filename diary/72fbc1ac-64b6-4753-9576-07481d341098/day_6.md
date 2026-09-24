# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 55
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 12) (ô=315)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(20, 0))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(20, 0))
- Mảng hành động đã gửi server: `[2, 1, 2, 1, 1, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 5, 0, 0, 5, 2, 2, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 51 |
| 2-3 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 51 |
| 4-6 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 49 |
| 7 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 47 |
| 8-9 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 46 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 45 |
| 12-13 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 44 |
| 14-15 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 43 |
| 16 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 41 |
| 17 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 39 |
| 18-19 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 7)) | 38 |
| 20-21 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 37 |
| 22 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 35 |
| 23 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 33 |
| 24-25 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 32 |
| 26 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 30 |
| 27 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 28 |
| 28-30 | Di chuyển hướng 1 (`1`) | (18, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 26 |
| 31-33 | Di chuyển hướng 1 (`1`) | (18, 6) | (19, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 5)) | 24 |
| 34-35 | Di chuyển hướng 2 (`2`) | (19, 5) | (20, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 5)) | 23 |
| 36-37 | Di chuyển hướng 5 (`5`) | (20, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 5)) | 22 |
| 38-39 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 21 |
| 40-42 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 3)) | 19 |
| 43-44 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 3)) | 18 |
| 45-46 | Di chuyển hướng 2 (`2`) | (17, 3) | (18, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 3)) | 17 |
| 47-48 | Di chuyển hướng 2 (`2`) | (18, 3) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 16 |
| 49-50 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 15 |
| 51-53 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 13 |
| 54 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 0)) | 11 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 9) (ô=245)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(21, 16))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(21, 16))
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 3, 2, 2, 3, 3, 3, 4, 5, 4, 5, 0, 5, 3, 3, 3, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 44 |
| 2-3 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 7)) | 43 |
| 4-5 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 42 |
| 6 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 40 |
| 7 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 38 |
| 8-9 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 37 |
| 10 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 35 |
| 11 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 33 |
| 12-14 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 31 |
| 15-17 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 29 |
| 18 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 27 |
| 19-20 | Di chuyển hướng 1 (`1`) | (21, 7) | (21, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(21, 6)) | 26 |
| 21-22 | Di chuyển hướng 3 (`3`) | (21, 6) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 25 |
| 23-24 | Di chuyển hướng 2 (`2`) | (22, 7) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 24 |
| 25-26 | Di chuyển hướng 2 (`2`) | (23, 7) | (24, 7) | Dự kiến đến điểm hẹn tọa độ (24, 7) | 23 |
| 27-28 | Di chuyển hướng 3 (`3`) | (24, 7) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 22 |
| 29-30 | Di chuyển hướng 3 (`3`) | (24, 8) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(25, 9)) | 21 |
| 31-32 | Di chuyển hướng 3 (`3`) | (25, 9) | (25, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(25, 10)) | 20 |
| 33-34 | Di chuyển hướng 4 (`4`) | (25, 10) | (25, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(25, 11)) | 19 |
| 35-36 | Di chuyển hướng 5 (`5`) | (25, 11) | (24, 11) | Dự kiến đến điểm hẹn tọa độ (24, 11) | 18 |
| 37-38 | Di chuyển hướng 4 (`4`) | (24, 11) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 17 |
| 39 | Di chuyển hướng 5 (`5`) | (23, 12) | (22, 12) | Dự kiến đến điểm hẹn tọa độ (22, 12) | 15 |
| 40 | Di chuyển hướng 0 (`0`) | (22, 12) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 13 |
| 41-43 | Di chuyển hướng 5 (`5`) | (22, 11) | (21, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(21, 11)) | 11 |
| 44-45 | Di chuyển hướng 3 (`3`) | (21, 11) | (21, 12) | Dự kiến đến điểm hẹn tọa độ (21, 12) | 10 |
| 46-48 | Di chuyển hướng 3 (`3`) | (21, 12) | (22, 13) | Dự kiến đến điểm hẹn tọa độ (22, 13) | 8 |
| 49-50 | Di chuyển hướng 3 (`3`) | (22, 13) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 7 |
| 51 | Di chuyển hướng 4 (`4`) | (22, 14) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 5 |
| 52-54 | Di chuyển hướng 4 (`4`) | (22, 15) | (21, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(21, 16)) | 3 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (12, 4) (ô=116)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 4)
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 3, 2, 3, 3, 1, 0, 0, 1, 1, 0, 1, 0, 5, 4, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 50 |
| 2-3 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 49 |
| 4-6 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 47 |
| 7 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 45 |
| 8-9 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 44 |
| 10 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 42 |
| 11 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 40 |
| 12-14 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 38 |
| 15-17 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 36 |
| 18 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 34 |
| 19-20 | Di chuyển hướng 2 (`2`) | (21, 7) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 33 |
| 21-22 | Di chuyển hướng 3 (`3`) | (22, 7) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 32 |
| 23-24 | Di chuyển hướng 3 (`3`) | (22, 8) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 31 |
| 25 | Di chuyển hướng 2 (`2`) | (23, 9) | (24, 9) | Dự kiến đến điểm hẹn tọa độ (24, 9) | 29 |
| 26-28 | Di chuyển hướng 3 (`3`) | (24, 9) | (24, 10) | Dự kiến đến điểm hẹn tọa độ (24, 10) | 27 |
| 29-30 | Di chuyển hướng 3 (`3`) | (24, 10) | (25, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(25, 11)) | 26 |
| 31-32 | Di chuyển hướng 1 (`1`) | (25, 11) | (25, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(25, 10)) | 25 |
| 33-34 | Di chuyển hướng 0 (`0`) | (25, 10) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(25, 9)) | 24 |
| 35-36 | Di chuyển hướng 0 (`0`) | (25, 9) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 23 |
| 37-38 | Di chuyển hướng 1 (`1`) | (24, 8) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 22 |
| 39-41 | Di chuyển hướng 1 (`1`) | (25, 7) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 20 |
| 42 | Di chuyển hướng 0 (`0`) | (25, 6) | (25, 5) | Dự kiến đến điểm hẹn tọa độ (25, 5) | 18 |
| 43-45 | Di chuyển hướng 1 (`1`) | (25, 5) | (25, 4) | Dự kiến đến điểm hẹn tọa độ (25, 4) | 16 |
| 46-47 | Di chuyển hướng 0 (`0`) | (25, 4) | (25, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(25, 3)) | 15 |
| 48-49 | Di chuyển hướng 5 (`5`) | (25, 3) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 14 |
| 50-52 | Di chuyển hướng 4 (`4`) | (24, 3) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 12 |
| 53 | Di chuyển hướng 5 (`5`) | (23, 4) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 10 |
| 54 | Di chuyển hướng 5 (`5`) | (22, 4) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 8 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 10) (ô=260)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(5, 0))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(5, 0))
- Mảng hành động đã gửi server: `[1, 1, 0, 0, 0, 1, 0, 1, 0, 3, 3, 3, 3, 3, 2, 1, 1, 1, 0, 1, 1, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 34 |
| 3 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 32 |
| 4-6 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 30 |
| 7-9 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 28 |
| 10-12 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 5)) | 26 |
| 13-14 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 25 |
| 15 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đến điểm hẹn tọa độ (0, 3) | 23 |
| 16 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 21 |
| 17 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 1)) | 19 |
| 18-19 | Di chuyển hướng 3 (`3`) | (0, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 18 |
| 20 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 16 |
| 21-22 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 15 |
| 23-24 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 14 |
| 25 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 12 |
| 26-27 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(3, 6)) | 11 |
| 28-29 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 10 |
| 30-31 | Di chuyển hướng 1 (`1`) | (4, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 9 |
| 32-34 | Di chuyển hướng 1 (`1`) | (4, 4) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 7 |
| 35-37 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 5 |
| 38-40 | Di chuyển hướng 1 (`1`) | (4, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 3 |
| 41-43 | Di chuyển hướng 1 (`1`) | (5, 1) | (5, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 0)) | 1 |
| 44-54 | Chờ 11 bước (`-11`) | (5, 0) | (5, 0) | Dự kiến đứng yên tại (5, 0); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 0)) | 1 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (15, 17) (ô=457)
- Nhiên liệu đầu ngày: 9
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 13)
- Mảng hành động đã gửi server: `[-26, 5, 5, 0, 5, 5, 5, 4, 0, 0, 0, 5, 0, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-25 | Chờ 26 bước (`-26`) | (15, 17) | (15, 17) | Dự kiến đứng yên tại (15, 17); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(15, 17)) | 51 |
| 26-27 | Di chuyển hướng 5 (`5`) | (15, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 51 |
| 28-30 | Di chuyển hướng 5 (`5`) | (14, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 49 |
| 31 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 51 |
| 32-33 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 51 |
| 34-35 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 51 |
| 36-38 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 51 |
| 39-41 | Di chuyển hướng 4 (`4`) | (9, 16) | (9, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 17)) | 49 |
| 42-43 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 48 |
| 44 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 46 |
| 45-47 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 44 |
| 48-50 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(6, 14)) | 51 |
| 51-52 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 51 |
| 53-54 | Chờ 2 bước (`-2`) | (6, 13) | (6, 13) | Dự kiến đứng yên tại (6, 13); hướng tới tọa độ (6, 13) | 51 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (2, 7) (ô=184)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Spot #24 (thương hiệu=24, tọa độ=(6, 14))
- Địa điểm đích kế hoạch: Spot #24 (thương hiệu=24, tọa độ=(6, 14))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 3, 0, 1, 1, 1, 1, 1, 2, 3, 3, 4, -1, 3, 3, 4, 5, 2, 2, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 25 |
| 3-5 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 23 |
| 6 | Di chuyển hướng 4 (`4`) | (1, 9) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 21 |
| 7-9 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 19 |
| 10-11 | Di chuyển hướng 3 (`3`) | (0, 11) | (0, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(0, 12)) | 18 |
| 12-13 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 17 |
| 14-15 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 16 |
| 16-18 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 14 |
| 19 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 12 |
| 20-22 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 10 |
| 23-25 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(2, 6)) | 8 |
| 26-27 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(3, 6)) | 7 |
| 28-29 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 6 |
| 30-31 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 5 |
| 32-34 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 51 |
| 35 | Chờ 1 bước (`-1`) | (4, 9) | (4, 9) | Dự kiến đứng yên tại (4, 9); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 51 |
| 36-37 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 50 |
| 38 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 51 |
| 39-41 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 49 |
| 42-43 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 12)) | 48 |
| 44-45 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 47 |
| 46-47 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 46 |
| 48-50 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 51 |
| 51-53 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(6, 14)) | 51 |
| 54 | Chờ 1 bước (`-1`) | (6, 14) | (6, 14) | Dự kiến đứng yên tại (6, 14); mục tiêu Spot #24 (thương hiệu=24, tọa độ=(6, 14)) | 51 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (12, 4) (ô=116)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 13)
- Mảng hành động đã gửi server: `[4, 3, 3, 4, 4, 3, 3, 3, 3, 4, 3, 3, 3, 5, 5, 0, 5, 5, 5, 5, 0, 0, 0, 5, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 51 |
| 2-4 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 51 |
| 5-6 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 51 |
| 7 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 51 |
| 8-9 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 51 |
| 10 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 51 |
| 11-12 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 51 |
| 13 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 51 |
| 14-16 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 51 |
| 17-19 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 51 |
| 20 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 51 |
| 21 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 51 |
| 22-24 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(15, 17)) | 51 |
| 25-26 | Di chuyển hướng 5 (`5`) | (15, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 51 |
| 27-29 | Di chuyển hướng 5 (`5`) | (14, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 51 |
| 30 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 51 |
| 31-32 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 51 |
| 33-34 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 51 |
| 35-37 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 51 |
| 38-40 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 51 |
| 41 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 51 |
| 42-44 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 51 |
| 45-47 | Di chuyển hướng 0 (`0`) | (7, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 51 |
| 48 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 51 |
| 49-54 | Chờ 6 bước (`-6`) | (6, 13) | (6, 13) | Dự kiến đứng yên tại (6, 13); hướng tới tọa độ (6, 13) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (3, 12) (ô=315)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #24 (thương hiệu=24, tọa độ=(6, 14))
- Địa điểm đích kế hoạch: Spot #24 (thương hiệu=24, tọa độ=(6, 14))
- Mảng hành động đã gửi server: `[2, 1, 0, 0, -27, 3, 3, 3, 3, 3, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 51 |
| 2-3 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 51 |
| 4-6 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 51 |
| 7 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 51 |
| 8-34 | Chờ 27 bước (`-27`) | (4, 9) | (4, 9) | Dự kiến đứng yên tại (4, 9); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 9)) | 51 |
| 35-36 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 51 |
| 37 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 51 |
| 38-40 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 51 |
| 41-43 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 51 |
| 44-46 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(6, 14)) | 51 |
| 47-54 | Chờ 8 bước (`-8`) | (6, 14) | (6, 14) | Dự kiến đứng yên tại (6, 14); mục tiêu Spot #24 (thương hiệu=24, tọa độ=(6, 14)) | 51 |

