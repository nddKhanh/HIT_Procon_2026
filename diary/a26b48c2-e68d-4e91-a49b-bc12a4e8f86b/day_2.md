# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 88
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (26, 30) (ô=986)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #24 (thương hiệu=16, tọa độ=(14, 28))
- Địa điểm đích kế hoạch: Spot #24 (thương hiệu=16, tọa độ=(14, 28))
- Mảng hành động đã gửi server: `[2, 5, 0, 5, 5, 5, 4, 4, 5, 5, 5, 0, 0, 5, 2, 1, 1, 0, 0, 0, 0, 0, 0, 5, 0, 3, 4, 4, 4, 4, 3, 3, 3, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 47 |
| 4-5 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến di chuyển đến (26, 30); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 46 |
| 6-9 | Di chuyển hướng 0 (`0`) | (26, 30) | (26, 29) | Dự kiến di chuyển đến (26, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 44 |
| 10 | Di chuyển hướng 5 (`5`) | (26, 29) | (25, 29) | Dự kiến di chuyển đến (25, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 42 |
| 11-12 | Di chuyển hướng 5 (`5`) | (25, 29) | (24, 29) | Dự kiến di chuyển đến (24, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 41 |
| 13-14 | Di chuyển hướng 5 (`5`) | (24, 29) | (23, 29) | Dự kiến di chuyển đến (23, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 40 |
| 15-16 | Di chuyển hướng 4 (`4`) | (23, 29) | (22, 30) | Dự kiến di chuyển đến (22, 30); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 39 |
| 17 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 37 |
| 18-19 | Di chuyển hướng 5 (`5`) | (22, 31) | (21, 31) | Dự kiến di chuyển đến (21, 31); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 36 |
| 20-22 | Di chuyển hướng 5 (`5`) | (21, 31) | (20, 31) | Dự kiến di chuyển đến (20, 31); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 34 |
| 23-25 | Di chuyển hướng 5 (`5`) | (20, 31) | (19, 31) | Dự kiến di chuyển đến (19, 31); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 32 |
| 26-28 | Di chuyển hướng 0 (`0`) | (19, 31) | (18, 30) | Dự kiến di chuyển đến (18, 30); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 30 |
| 29-31 | Di chuyển hướng 0 (`0`) | (18, 30) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 28 |
| 32 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 26 |
| 33-34 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 25 |
| 35 | Di chuyển hướng 1 (`1`) | (18, 29) | (18, 28) | Dự kiến di chuyển đến (18, 28); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 23 |
| 36 | Di chuyển hướng 1 (`1`) | (18, 28) | (19, 27) | Dự kiến di chuyển đến (19, 27); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 21 |
| 37 | Di chuyển hướng 0 (`0`) | (19, 27) | (18, 26) | Dự kiến di chuyển đến (18, 26); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 19 |
| 38 | Di chuyển hướng 0 (`0`) | (18, 26) | (18, 25) | Dự kiến di chuyển đến (18, 25); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 17 |
| 39-41 | Di chuyển hướng 0 (`0`) | (18, 25) | (17, 24) | Dự kiến di chuyển đến (17, 24); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 15 |
| 42-43 | Di chuyển hướng 0 (`0`) | (17, 24) | (17, 23) | Dự kiến di chuyển đến (17, 23); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 14 |
| 44-45 | Di chuyển hướng 0 (`0`) | (17, 23) | (16, 22) | Dự kiến di chuyển đến (16, 22); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 13 |
| 46-47 | Di chuyển hướng 0 (`0`) | (16, 22) | (16, 21) | Dự kiến di chuyển đến (16, 21); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 12 |
| 48-49 | Di chuyển hướng 5 (`5`) | (16, 21) | (15, 21) | Dự kiến di chuyển đến (15, 21); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 11 |
| 50-51 | Di chuyển hướng 0 (`0`) | (15, 21) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 10 |
| 52-53 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến di chuyển đến (15, 21); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 9 |
| 54-55 | Di chuyển hướng 4 (`4`) | (15, 21) | (14, 22) | Dự kiến di chuyển đến (14, 22); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 8 |
| 56-57 | Di chuyển hướng 4 (`4`) | (14, 22) | (14, 23) | Dự kiến di chuyển đến (14, 23); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 7 |
| 58-59 | Di chuyển hướng 4 (`4`) | (14, 23) | (13, 24) | Dự kiến di chuyển đến (13, 24); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 6 |
| 60-62 | Di chuyển hướng 4 (`4`) | (13, 24) | (13, 25) | Dự kiến di chuyển đến (13, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 4 |
| 63-64 | Di chuyển hướng 3 (`3`) | (13, 25) | (13, 26) | Dự kiến di chuyển đến (13, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 3 |
| 65-66 | Di chuyển hướng 3 (`3`) | (13, 26) | (14, 27) | Dự kiến di chuyển đến (14, 27); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 2 |
| 67-69 | Di chuyển hướng 3 (`3`) | (14, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 0 |
| 70-87 | Chờ 18 bước (`-18`) | (14, 28) | (14, 28) | Dự kiến đứng yên tại (14, 28); mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (22, 21) (ô=694)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(13, 0))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(13, 0))
- Mảng hành động đã gửi server: `[0, 0, 0, 2, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 2, 5, 0, 5, 5, 0, 0, 5, 5, 5, 0, 0, 1, 1, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến di chuyển đến (21, 20); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 57 |
| 2-4 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 55 |
| 5 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 53 |
| 6-7 | Di chuyển hướng 2 (`2`) | (20, 18) | (21, 18) | Dự kiến di chuyển đến (21, 18); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 52 |
| 8-10 | Di chuyển hướng 1 (`1`) | (21, 18) | (22, 17) | Dự kiến di chuyển đến (22, 17); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 50 |
| 11-13 | Di chuyển hướng 0 (`0`) | (22, 17) | (21, 16) | Dự kiến di chuyển đến (21, 16); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 48 |
| 14-16 | Di chuyển hướng 0 (`0`) | (21, 16) | (21, 15) | Dự kiến di chuyển đến (21, 15); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 46 |
| 17-18 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến di chuyển đến (20, 14); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 45 |
| 19 | Di chuyển hướng 1 (`1`) | (20, 14) | (21, 13) | Dự kiến di chuyển đến (21, 13); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 43 |
| 20 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến di chuyển đến (20, 12); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 41 |
| 21 | Di chuyển hướng 0 (`0`) | (20, 12) | (20, 11) | Dự kiến di chuyển đến (20, 11); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 39 |
| 22 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến di chuyển đến (19, 10); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 37 |
| 23-24 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến di chuyển đến (19, 9); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 36 |
| 25 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến di chuyển đến (19, 8); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 34 |
| 26-27 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 33 |
| 28 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 31 |
| 29-30 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 30 |
| 31 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 28 |
| 32 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 26 |
| 33 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 24 |
| 34-35 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 23 |
| 36-37 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 22 |
| 38-39 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 21 |
| 40 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 19 |
| 41-42 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 18 |
| 43 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 16 |
| 44 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 14 |
| 45 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 12 |
| 46 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 10 |
| 47-87 | Chờ 41 bước (`-41`) | (13, 0) | (13, 0) | Dự kiến đứng yên tại (13, 0); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 10 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 29) (ô=931)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=12, tọa độ=(5, 23))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=12, tọa độ=(5, 23))
- Mảng hành động đã gửi server: `[5, 5, 4, 1, 0, 1, 1, 2, 1, 1, 1, 2, -69]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (3, 29) | (2, 29) | Dự kiến di chuyển đến (2, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 24 |
| 3-5 | Di chuyển hướng 5 (`5`) | (2, 29) | (1, 29) | Dự kiến di chuyển đến (1, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 22 |
| 6 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 20 |
| 7-8 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến di chuyển đến (1, 29); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 19 |
| 9 | Di chuyển hướng 0 (`0`) | (1, 29) | (0, 28) | Dự kiến di chuyển đến (0, 28); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 17 |
| 10 | Di chuyển hướng 1 (`1`) | (0, 28) | (1, 27) | Dự kiến di chuyển đến (1, 27); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 15 |
| 11 | Di chuyển hướng 1 (`1`) | (1, 27) | (1, 26) | Dự kiến di chuyển đến (1, 26); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 13 |
| 12-14 | Di chuyển hướng 2 (`2`) | (1, 26) | (2, 26) | Dự kiến di chuyển đến (2, 26); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 11 |
| 15 | Di chuyển hướng 1 (`1`) | (2, 26) | (3, 25) | Dự kiến di chuyển đến (3, 25); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 9 |
| 16 | Di chuyển hướng 1 (`1`) | (3, 25) | (3, 24) | Dự kiến di chuyển đến (3, 24); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 7 |
| 17 | Di chuyển hướng 1 (`1`) | (3, 24) | (4, 23) | Dự kiến di chuyển đến (4, 23); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 5 |
| 18 | Di chuyển hướng 2 (`2`) | (4, 23) | (5, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 3 |
| 19-87 | Chờ 69 bước (`-69`) | (5, 23) | (5, 23) | Dự kiến đứng yên tại (5, 23); mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 3 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (30, 29) (ô=958)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=2, tọa độ=(31, 0))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=2, tọa độ=(31, 0))
- Mảng hành động đã gửi server: `[1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 5, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 5, 0, 5, 5, 0, 0, 1, 1, 2, 1, 2, 2, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (30, 29) | (30, 28) | Dự kiến di chuyển đến (30, 28); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 58 |
| 2 | Di chuyển hướng 1 (`1`) | (30, 28) | (31, 27) | Dự kiến di chuyển đến (31, 27); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 56 |
| 3 | Di chuyển hướng 0 (`0`) | (31, 27) | (30, 26) | Dự kiến di chuyển đến (30, 26); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 54 |
| 4 | Di chuyển hướng 0 (`0`) | (30, 26) | (30, 25) | Dự kiến di chuyển đến (30, 25); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 52 |
| 5 | Di chuyển hướng 1 (`1`) | (30, 25) | (30, 24) | Dự kiến di chuyển đến (30, 24); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 50 |
| 6-7 | Di chuyển hướng 1 (`1`) | (30, 24) | (31, 23) | Dự kiến di chuyển đến (31, 23); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 49 |
| 8-10 | Di chuyển hướng 1 (`1`) | (31, 23) | (31, 22) | Dự kiến di chuyển đến (31, 22); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 47 |
| 11-12 | Di chuyển hướng 0 (`0`) | (31, 22) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 46 |
| 13-14 | Di chuyển hướng 1 (`1`) | (31, 21) | (31, 20) | Dự kiến di chuyển đến (31, 20); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 45 |
| 15 | Di chuyển hướng 0 (`0`) | (31, 20) | (31, 19) | Dự kiến di chuyển đến (31, 19); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 43 |
| 16 | Di chuyển hướng 5 (`5`) | (31, 19) | (30, 19) | Dự kiến di chuyển đến (30, 19); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 41 |
| 17 | Di chuyển hướng 0 (`0`) | (30, 19) | (29, 18) | Dự kiến di chuyển đến (29, 18); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 39 |
| 18 | Di chuyển hướng 0 (`0`) | (29, 18) | (29, 17) | Dự kiến di chuyển đến (29, 17); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 37 |
| 19 | Di chuyển hướng 0 (`0`) | (29, 17) | (28, 16) | Dự kiến di chuyển đến (28, 16); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 35 |
| 20 | Di chuyển hướng 1 (`1`) | (28, 16) | (29, 15) | Dự kiến di chuyển đến (29, 15); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 33 |
| 21-23 | Di chuyển hướng 1 (`1`) | (29, 15) | (29, 14) | Dự kiến di chuyển đến (29, 14); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 31 |
| 24-25 | Di chuyển hướng 1 (`1`) | (29, 14) | (30, 13) | Dự kiến di chuyển đến (30, 13); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 30 |
| 26-28 | Di chuyển hướng 1 (`1`) | (30, 13) | (30, 12) | Dự kiến di chuyển đến (30, 12); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 28 |
| 29-31 | Di chuyển hướng 1 (`1`) | (30, 12) | (31, 11) | Dự kiến di chuyển đến (31, 11); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 26 |
| 32-33 | Di chuyển hướng 1 (`1`) | (31, 11) | (31, 10) | Dự kiến di chuyển đến (31, 10); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 25 |
| 34-35 | Di chuyển hướng 0 (`0`) | (31, 10) | (31, 9) | Dự kiến di chuyển đến (31, 9); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 24 |
| 36-38 | Di chuyển hướng 1 (`1`) | (31, 9) | (31, 8) | Dự kiến di chuyển đến (31, 8); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 22 |
| 39-41 | Di chuyển hướng 0 (`0`) | (31, 8) | (31, 7) | Dự kiến di chuyển đến (31, 7); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 20 |
| 42-44 | Di chuyển hướng 1 (`1`) | (31, 7) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 18 |
| 45-46 | Di chuyển hướng 5 (`5`) | (31, 6) | (30, 6) | Dự kiến di chuyển đến (30, 6); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 17 |
| 47 | Di chuyển hướng 0 (`0`) | (30, 6) | (30, 5) | Dự kiến di chuyển đến (30, 5); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 15 |
| 48 | Di chuyển hướng 5 (`5`) | (30, 5) | (29, 5) | Dự kiến di chuyển đến (29, 5); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 13 |
| 49-50 | Di chuyển hướng 5 (`5`) | (29, 5) | (28, 5) | Dự kiến di chuyển đến (28, 5); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 12 |
| 51-52 | Di chuyển hướng 0 (`0`) | (28, 5) | (27, 4) | Dự kiến di chuyển đến (27, 4); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 11 |
| 53-54 | Di chuyển hướng 0 (`0`) | (27, 4) | (27, 3) | Dự kiến di chuyển đến (27, 3); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 10 |
| 55-56 | Di chuyển hướng 1 (`1`) | (27, 3) | (27, 2) | Dự kiến di chuyển đến (27, 2); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 9 |
| 57-59 | Di chuyển hướng 1 (`1`) | (27, 2) | (28, 1) | Dự kiến di chuyển đến (28, 1); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 7 |
| 60-62 | Di chuyển hướng 2 (`2`) | (28, 1) | (29, 1) | Dự kiến di chuyển đến (29, 1); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 5 |
| 63-64 | Di chuyển hướng 1 (`1`) | (29, 1) | (29, 0) | Dự kiến di chuyển đến (29, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 4 |
| 65 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến di chuyển đến (30, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 2 |
| 66 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 0 |
| 67-87 | Chờ 21 bước (`-21`) | (31, 0) | (31, 0) | Dự kiến đứng yên tại (31, 0); mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (16, 22) (ô=720)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=6, tọa độ=(26, 18))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=6, tọa độ=(26, 18))
- Mảng hành động đã gửi server: `[0, 5, 0, 2, 2, 2, 2, 2, 2, 1, 0, 3, 2, 2, 2, 2, 2, 1, -55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (16, 22) | (16, 21) | Dự kiến di chuyển đến (16, 21); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 28 |
| 2-3 | Di chuyển hướng 5 (`5`) | (16, 21) | (15, 21) | Dự kiến di chuyển đến (15, 21); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 27 |
| 4-5 | Di chuyển hướng 0 (`0`) | (15, 21) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 26 |
| 6-7 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến di chuyển đến (15, 20); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 25 |
| 8-9 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến di chuyển đến (16, 20); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 24 |
| 10-11 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến di chuyển đến (17, 20); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 23 |
| 12-14 | Di chuyển hướng 2 (`2`) | (17, 20) | (18, 20) | Dự kiến di chuyển đến (18, 20); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 21 |
| 15-17 | Di chuyển hướng 2 (`2`) | (18, 20) | (19, 20) | Dự kiến di chuyển đến (19, 20); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 19 |
| 18 | Di chuyển hướng 2 (`2`) | (19, 20) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 17 |
| 19 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 15 |
| 20 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 13 |
| 21-22 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 12 |
| 23 | Di chuyển hướng 2 (`2`) | (21, 19) | (22, 19) | Dự kiến di chuyển đến (22, 19); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 10 |
| 24-25 | Di chuyển hướng 2 (`2`) | (22, 19) | (23, 19) | Dự kiến di chuyển đến (23, 19); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 9 |
| 26-27 | Di chuyển hướng 2 (`2`) | (23, 19) | (24, 19) | Dự kiến di chuyển đến (24, 19); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 8 |
| 28 | Di chuyển hướng 2 (`2`) | (24, 19) | (25, 19) | Dự kiến di chuyển đến (25, 19); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 6 |
| 29-31 | Di chuyển hướng 2 (`2`) | (25, 19) | (26, 19) | Dự kiến di chuyển đến (26, 19); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 4 |
| 32 | Di chuyển hướng 1 (`1`) | (26, 19) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 2 |
| 33-87 | Chờ 55 bước (`-55`) | (26, 18) | (26, 18) | Dự kiến đứng yên tại (26, 18); mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 2 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (3, 31) (ô=995)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=10, tọa độ=(5, 12))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=10, tọa độ=(5, 12))
- Mảng hành động đã gửi server: `[2, 2, 0, 1, 0, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 5, 0, 1, 0, 0, 5, 5, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 31) | (4, 31) | Dự kiến di chuyển đến (4, 31); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 58 |
| 2 | Di chuyển hướng 2 (`2`) | (4, 31) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 56 |
| 3-4 | Di chuyển hướng 0 (`0`) | (5, 31) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 55 |
| 5 | Di chuyển hướng 1 (`1`) | (4, 30) | (5, 29) | Dự kiến di chuyển đến (5, 29); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 53 |
| 6 | Di chuyển hướng 0 (`0`) | (5, 29) | (4, 28) | Dự kiến di chuyển đến (4, 28); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 51 |
| 7 | Di chuyển hướng 1 (`1`) | (4, 28) | (5, 27) | Dự kiến di chuyển đến (5, 27); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 49 |
| 8-10 | Di chuyển hướng 1 (`1`) | (5, 27) | (5, 26) | Dự kiến di chuyển đến (5, 26); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 47 |
| 11-13 | Di chuyển hướng 2 (`2`) | (5, 26) | (6, 26) | Dự kiến di chuyển đến (6, 26); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 45 |
| 14-15 | Di chuyển hướng 1 (`1`) | (6, 26) | (7, 25) | Dự kiến di chuyển đến (7, 25); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 44 |
| 16 | Di chuyển hướng 1 (`1`) | (7, 25) | (7, 24) | Dự kiến di chuyển đến (7, 24); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 42 |
| 17 | Di chuyển hướng 2 (`2`) | (7, 24) | (8, 24) | Dự kiến di chuyển đến (8, 24); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 40 |
| 18 | Di chuyển hướng 1 (`1`) | (8, 24) | (9, 23) | Dự kiến di chuyển đến (9, 23); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 38 |
| 19-20 | Di chuyển hướng 1 (`1`) | (9, 23) | (9, 22) | Dự kiến di chuyển đến (9, 22); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 37 |
| 21-22 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 36 |
| 23-24 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 35 |
| 25-27 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 33 |
| 28 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 31 |
| 29 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 29 |
| 30 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 27 |
| 31 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 25 |
| 32 | Di chuyển hướng 1 (`1`) | (10, 15) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 23 |
| 33 | Di chuyển hướng 1 (`1`) | (10, 14) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 21 |
| 34 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 19 |
| 35-36 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 18 |
| 37-38 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (8, 16) (Spot #4 (thương hiệu=1, tọa độ=(8, 16))) | 17 |
| 39-40 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới tọa độ (8, 16) (Spot #4 (thương hiệu=1, tọa độ=(8, 16))) | 16 |
| 41 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (8, 16) (Spot #4 (thương hiệu=1, tọa độ=(8, 16))) | 14 |
| 42 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (8, 16) (Spot #4 (thương hiệu=1, tọa độ=(8, 16))) | 12 |
| 43 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới tọa độ (8, 16) (Spot #4 (thương hiệu=1, tọa độ=(8, 16))) | 10 |
| 44 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 8 |
| 45-46 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 7 |
| 47-48 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 6 |
| 49-50 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 5 |
| 51 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 3 |
| 52 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 1 |
| 53-54 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 0 |
| 55-87 | Chờ 33 bước (`-33`) | (5, 12) | (5, 12) | Dự kiến đứng yên tại (5, 12); mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 0 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (11, 31) (ô=1003)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #27 (thương hiệu=19, tọa độ=(0, 30))
- Địa điểm đích kế hoạch: Spot #27 (thương hiệu=19, tọa độ=(0, 30))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 5, 0, 0, 5, 4, 4, 3, 4, 3, 0, 0, 5, 5, 5, 4, -56]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 31) | (10, 31) | Dự kiến di chuyển đến (10, 31); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 40 |
| 2 | Di chuyển hướng 0 (`0`) | (10, 31) | (9, 30) | Dự kiến di chuyển đến (9, 30); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 38 |
| 3 | Di chuyển hướng 0 (`0`) | (9, 30) | (9, 29) | Dự kiến di chuyển đến (9, 29); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 36 |
| 4 | Di chuyển hướng 0 (`0`) | (9, 29) | (8, 28) | Dự kiến di chuyển đến (8, 28); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 34 |
| 5 | Di chuyển hướng 5 (`5`) | (8, 28) | (7, 28) | Dự kiến di chuyển đến (7, 28); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 32 |
| 6 | Di chuyển hướng 0 (`0`) | (7, 28) | (7, 27) | Dự kiến di chuyển đến (7, 27); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 30 |
| 7 | Di chuyển hướng 0 (`0`) | (7, 27) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 28 |
| 8-9 | Di chuyển hướng 5 (`5`) | (6, 26) | (5, 26) | Dự kiến di chuyển đến (5, 26); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 27 |
| 10-12 | Di chuyển hướng 4 (`4`) | (5, 26) | (5, 27) | Dự kiến di chuyển đến (5, 27); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 25 |
| 13-15 | Di chuyển hướng 4 (`4`) | (5, 27) | (4, 28) | Dự kiến di chuyển đến (4, 28); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 23 |
| 16 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến di chuyển đến (5, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 21 |
| 17 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 19 |
| 18 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 17 |
| 19-20 | Di chuyển hướng 0 (`0`) | (5, 31) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 16 |
| 21 | Di chuyển hướng 0 (`0`) | (4, 30) | (4, 29) | Dự kiến di chuyển đến (4, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 14 |
| 22-24 | Di chuyển hướng 5 (`5`) | (4, 29) | (3, 29) | Dự kiến di chuyển đến (3, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 12 |
| 25-27 | Di chuyển hướng 5 (`5`) | (3, 29) | (2, 29) | Dự kiến di chuyển đến (2, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 10 |
| 28-30 | Di chuyển hướng 5 (`5`) | (2, 29) | (1, 29) | Dự kiến di chuyển đến (1, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 8 |
| 31 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 6 |
| 32-87 | Chờ 56 bước (`-56`) | (0, 30) | (0, 30) | Dự kiến đứng yên tại (0, 30); mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 6 |

