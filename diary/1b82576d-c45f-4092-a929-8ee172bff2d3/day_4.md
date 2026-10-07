# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 72
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 20 | #3 | #4 | (12, 0) | 2 | 80 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 10) (ô=248)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=17, tọa độ=(15, 23))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=17, tọa độ=(15, 23))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 0, 0, 0, 1, 0, 1, 0, 3, 4, 3, 4, 4, 4, 4, 4, 4, 5, 2, 2, 3, 3, 4, 5, 4, 4, 4, 3, 2, 2, 2, 3, 3, 2, 2, 2, 3, 2, 2, 2, 2, 3, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 10) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 79 |
| 2 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 77 |
| 3 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 75 |
| 4 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 73 |
| 5 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 71 |
| 6 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 69 |
| 7-8 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 68 |
| 9-10 | Di chuyển hướng 1 (`1`) | (4, 4) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 67 |
| 11 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 65 |
| 12 | Di chuyển hướng 1 (`1`) | (4, 2) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 63 |
| 13 | Di chuyển hướng 0 (`0`) | (5, 1) | (4, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 0)) | 61 |
| 14-15 | Di chuyển hướng 3 (`3`) | (4, 0) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 60 |
| 16 | Di chuyển hướng 4 (`4`) | (5, 1) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 58 |
| 17 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 56 |
| 18 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 54 |
| 19-20 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 53 |
| 21-23 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 51 |
| 24 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 49 |
| 25 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 47 |
| 26 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 45 |
| 27 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 43 |
| 28-29 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (1, 14) (Spot #14 (thương hiệu=10, tọa độ=(1, 14))) | 42 |
| 30 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (1, 14) (Spot #14 (thương hiệu=10, tọa độ=(1, 14))) | 40 |
| 31 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (1, 14) (Spot #14 (thương hiệu=10, tọa độ=(1, 14))) | 38 |
| 32 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (1, 14) (Spot #14 (thương hiệu=10, tọa độ=(1, 14))) | 36 |
| 33-35 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến di chuyển đến (3, 12); hướng tới tọa độ (1, 14) (Spot #14 (thương hiệu=10, tọa độ=(1, 14))) | 34 |
| 36 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (1, 14) (Spot #14 (thương hiệu=10, tọa độ=(1, 14))) | 32 |
| 37 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (1, 14) (Spot #14 (thương hiệu=10, tọa độ=(1, 14))) | 30 |
| 38-40 | Di chuyển hướng 4 (`4`) | (2, 13) | (1, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 14)) | 28 |
| 41-42 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến di chuyển đến (1, 15); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 27 |
| 43 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến di chuyển đến (1, 16); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 25 |
| 44 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 23 |
| 45 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 21 |
| 46-47 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (11, 19) (Spot #18 (thương hiệu=13, tọa độ=(11, 19))) | 20 |
| 48 | Di chuyển hướng 3 (`3`) | (4, 16) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới tọa độ (11, 19) (Spot #18 (thương hiệu=13, tọa độ=(11, 19))) | 18 |
| 49 | Di chuyển hướng 3 (`3`) | (5, 17) | (5, 18) | Dự kiến di chuyển đến (5, 18); hướng tới tọa độ (11, 19) (Spot #18 (thương hiệu=13, tọa độ=(11, 19))) | 16 |
| 50-51 | Di chuyển hướng 2 (`2`) | (5, 18) | (6, 18) | Dự kiến di chuyển đến (6, 18); hướng tới tọa độ (11, 19) (Spot #18 (thương hiệu=13, tọa độ=(11, 19))) | 15 |
| 52-53 | Di chuyển hướng 2 (`2`) | (6, 18) | (7, 18) | Dự kiến di chuyển đến (7, 18); hướng tới tọa độ (11, 19) (Spot #18 (thương hiệu=13, tọa độ=(11, 19))) | 14 |
| 54-55 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến di chuyển đến (8, 18); hướng tới tọa độ (11, 19) (Spot #18 (thương hiệu=13, tọa độ=(11, 19))) | 13 |
| 56-57 | Di chuyển hướng 3 (`3`) | (8, 18) | (9, 19) | Dự kiến di chuyển đến (9, 19); hướng tới tọa độ (11, 19) (Spot #18 (thương hiệu=13, tọa độ=(11, 19))) | 12 |
| 58 | Di chuyển hướng 2 (`2`) | (9, 19) | (10, 19) | Dự kiến di chuyển đến (10, 19); hướng tới tọa độ (11, 19) (Spot #18 (thương hiệu=13, tọa độ=(11, 19))) | 10 |
| 59 | Di chuyển hướng 2 (`2`) | (10, 19) | (11, 19) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=13, tọa độ=(11, 19)) | 8 |
| 60-61 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (15, 23) (Spot #23 (thương hiệu=17, tọa độ=(15, 23))) | 7 |
| 62-63 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới tọa độ (15, 23) (Spot #23 (thương hiệu=17, tọa độ=(15, 23))) | 6 |
| 64-65 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới tọa độ (15, 23) (Spot #23 (thương hiệu=17, tọa độ=(15, 23))) | 5 |
| 66-67 | Di chuyển hướng 3 (`3`) | (13, 20) | (14, 21) | Dự kiến di chuyển đến (14, 21); hướng tới tọa độ (15, 23) (Spot #23 (thương hiệu=17, tọa độ=(15, 23))) | 4 |
| 68-69 | Di chuyển hướng 3 (`3`) | (14, 21) | (14, 22) | Dự kiến di chuyển đến (14, 22); hướng tới tọa độ (15, 23) (Spot #23 (thương hiệu=17, tọa độ=(15, 23))) | 3 |
| 70 | Di chuyển hướng 3 (`3`) | (14, 22) | (15, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=17, tọa độ=(15, 23)) | 1 |
| 71 | Chờ 1 bước (`-1`) | (15, 23) | (15, 23) | Dự kiến đứng yên tại (15, 23); mục tiêu Spot #23 (thương hiệu=17, tọa độ=(15, 23)) | 1 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 14) (ô=344)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=16, tọa độ=(9, 23))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=16, tọa độ=(9, 23))
- Mảng hành động đã gửi server: `[0, 1, 0, 1, 4, 3, 3, 3, 4, 4, 3, 3, 4, 4, 3, 4, 3, -43]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 21 |
| 2-3 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 20 |
| 4-5 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 19 |
| 6 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 17 |
| 7-8 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (8, 16) (Spot #16 (thương hiệu=11, tọa độ=(8, 16))) | 16 |
| 9 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (8, 16) (Spot #16 (thương hiệu=11, tọa độ=(8, 16))) | 14 |
| 10-11 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (8, 16) (Spot #16 (thương hiệu=11, tọa độ=(8, 16))) | 13 |
| 12-13 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến di chuyển đến (9, 14); hướng tới tọa độ (8, 16) (Spot #16 (thương hiệu=11, tọa độ=(8, 16))) | 12 |
| 14-15 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (8, 16) (Spot #16 (thương hiệu=11, tọa độ=(8, 16))) | 11 |
| 16-17 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=11, tọa độ=(8, 16)) | 10 |
| 18-19 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (8, 20) (Spot #8 (thương hiệu=5, tọa độ=(8, 20))) | 9 |
| 20-21 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến di chuyển đến (9, 18); hướng tới tọa độ (8, 20) (Spot #8 (thương hiệu=5, tọa độ=(8, 20))) | 8 |
| 22 | Di chuyển hướng 4 (`4`) | (9, 18) | (9, 19) | Dự kiến di chuyển đến (9, 19); hướng tới tọa độ (8, 20) (Spot #8 (thương hiệu=5, tọa độ=(8, 20))) | 6 |
| 23 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 4 |
| 24-25 | Di chuyển hướng 3 (`3`) | (8, 20) | (9, 21) | Dự kiến di chuyển đến (9, 21); hướng tới tọa độ (9, 23) (Spot #22 (thương hiệu=16, tọa độ=(9, 23))) | 3 |
| 26-27 | Di chuyển hướng 4 (`4`) | (9, 21) | (8, 22) | Dự kiến di chuyển đến (8, 22); hướng tới tọa độ (9, 23) (Spot #22 (thương hiệu=16, tọa độ=(9, 23))) | 2 |
| 28 | Di chuyển hướng 3 (`3`) | (8, 22) | (9, 23) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 0 |
| 29-71 | Chờ 43 bước (`-43`) | (9, 23) | (9, 23) | Dự kiến đứng yên tại (9, 23); mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (20, 0) (ô=20)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 0)
- Mảng hành động đã gửi server: `[-72]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-71 | Chờ 72 bước (`-72`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); hướng tới tọa độ (20, 0) | 1 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (23, 4) (ô=119)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=14, tọa độ=(16, 21))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=14, tọa độ=(16, 21))
- Mảng hành động đã gửi server: `[5, 5, 4, 4, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, -1, 2, 3, 4, 3, 3, 4, 4, 3, 3, 3, 3, 2, 2, 2, 3, 3, 2, 3, 3, 4, 4, 4, 4, 3, 3, 3, 3, 2, 5, 0, 5, 5, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (23, 4) | (22, 4) | Dự kiến di chuyển đến (22, 4); hướng tới tọa độ (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 28 |
| 2 | Di chuyển hướng 5 (`5`) | (22, 4) | (21, 4) | Dự kiến di chuyển đến (21, 4); hướng tới tọa độ (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 26 |
| 3-4 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến di chuyển đến (21, 5); hướng tới tọa độ (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 25 |
| 5 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến di chuyển đến (20, 6); hướng tới tọa độ (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 23 |
| 6 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 21 |
| 7 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến di chuyển đến (19, 5); hướng tới tọa độ (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 19 |
| 8 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến di chuyển đến (18, 4); hướng tới tọa độ (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 17 |
| 9-10 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến di chuyển đến (18, 3); hướng tới tọa độ (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 16 |
| 11 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến di chuyển đến (17, 2); hướng tới tọa độ (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 14 |
| 12 | Di chuyển hướng 0 (`0`) | (17, 2) | (17, 1) | Dự kiến di chuyển đến (17, 1); hướng tới tọa độ (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 12 |
| 13 | Di chuyển hướng 0 (`0`) | (17, 1) | (16, 0) | Dự kiến di chuyển đến (16, 0); hướng tới tọa độ (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 10 |
| 14 | Di chuyển hướng 5 (`5`) | (16, 0) | (15, 0) | Dự kiến di chuyển đến (15, 0); hướng tới tọa độ (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 8 |
| 15 | Di chuyển hướng 5 (`5`) | (15, 0) | (14, 0) | Dự kiến di chuyển đến (14, 0); hướng tới tọa độ (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 6 |
| 16-18 | Di chuyển hướng 5 (`5`) | (14, 0) | (13, 0) | Dự kiến di chuyển đến (13, 0); hướng tới tọa độ (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 4 |
| 19 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 0)) | 80 |
| 20 | Chờ 1 bước (`-1`) | (12, 0) | (12, 0) | Dự kiến đứng yên tại (12, 0); hướng tới tọa độ (12, 0) | 80 |
| 21-22 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến di chuyển đến (13, 0); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 79 |
| 23 | Di chuyển hướng 3 (`3`) | (13, 0) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 77 |
| 24 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 75 |
| 25-26 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 74 |
| 27-28 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 73 |
| 29-30 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 72 |
| 31 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 70 |
| 32-33 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 69 |
| 34-35 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 68 |
| 36-37 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 67 |
| 38-39 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 66 |
| 40 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 64 |
| 41 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến di chuyển đến (17, 10); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 62 |
| 42 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến di chuyển đến (18, 10); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 60 |
| 43 | Di chuyển hướng 3 (`3`) | (18, 10) | (19, 11) | Dự kiến di chuyển đến (19, 11); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 58 |
| 44 | Di chuyển hướng 3 (`3`) | (19, 11) | (19, 12) | Dự kiến di chuyển đến (19, 12); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 56 |
| 45 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến di chuyển đến (20, 12); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 54 |
| 46 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến di chuyển đến (21, 13); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 52 |
| 47 | Di chuyển hướng 3 (`3`) | (21, 13) | (21, 14) | Dự kiến di chuyển đến (21, 14); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 50 |
| 48 | Di chuyển hướng 4 (`4`) | (21, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=12, tọa độ=(21, 15)) | 48 |
| 49-50 | Di chuyển hướng 4 (`4`) | (21, 15) | (20, 16) | Dự kiến di chuyển đến (20, 16); hướng tới tọa độ (22, 22) (Spot #19 (thương hiệu=13, tọa độ=(22, 22))) | 47 |
| 51 | Di chuyển hướng 4 (`4`) | (20, 16) | (20, 17) | Dự kiến di chuyển đến (20, 17); hướng tới tọa độ (22, 22) (Spot #19 (thương hiệu=13, tọa độ=(22, 22))) | 45 |
| 52 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến di chuyển đến (19, 18); hướng tới tọa độ (22, 22) (Spot #19 (thương hiệu=13, tọa độ=(22, 22))) | 43 |
| 53 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến di chuyển đến (20, 19); hướng tới tọa độ (22, 22) (Spot #19 (thương hiệu=13, tọa độ=(22, 22))) | 41 |
| 54 | Di chuyển hướng 3 (`3`) | (20, 19) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (22, 22) (Spot #19 (thương hiệu=13, tọa độ=(22, 22))) | 39 |
| 55-57 | Di chuyển hướng 3 (`3`) | (20, 20) | (21, 21) | Dự kiến di chuyển đến (21, 21); hướng tới tọa độ (22, 22) (Spot #19 (thương hiệu=13, tọa độ=(22, 22))) | 37 |
| 58 | Di chuyển hướng 3 (`3`) | (21, 21) | (21, 22) | Dự kiến di chuyển đến (21, 22); hướng tới tọa độ (22, 22) (Spot #19 (thương hiệu=13, tọa độ=(22, 22))) | 35 |
| 59 | Di chuyển hướng 2 (`2`) | (21, 22) | (22, 22) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=13, tọa độ=(22, 22)) | 33 |
| 60-61 | Di chuyển hướng 5 (`5`) | (22, 22) | (21, 22) | Dự kiến di chuyển đến (21, 22); hướng tới tọa độ (16, 21) (Spot #20 (thương hiệu=14, tọa độ=(16, 21))) | 32 |
| 62 | Di chuyển hướng 0 (`0`) | (21, 22) | (21, 21) | Dự kiến di chuyển đến (21, 21); hướng tới tọa độ (16, 21) (Spot #20 (thương hiệu=14, tọa độ=(16, 21))) | 30 |
| 63 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến di chuyển đến (20, 21); hướng tới tọa độ (16, 21) (Spot #20 (thương hiệu=14, tọa độ=(16, 21))) | 28 |
| 64 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến di chuyển đến (19, 21); hướng tới tọa độ (16, 21) (Spot #20 (thương hiệu=14, tọa độ=(16, 21))) | 26 |
| 65-67 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến di chuyển đến (18, 21); hướng tới tọa độ (16, 21) (Spot #20 (thương hiệu=14, tọa độ=(16, 21))) | 24 |
| 68-69 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến di chuyển đến (17, 21); hướng tới tọa độ (16, 21) (Spot #20 (thương hiệu=14, tọa độ=(16, 21))) | 23 |
| 70 | Di chuyển hướng 5 (`5`) | (17, 21) | (16, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=14, tọa độ=(16, 21)) | 21 |
| 71 | Chờ 1 bước (`-1`) | (16, 21) | (16, 21) | Dự kiến đứng yên tại (16, 21); mục tiêu Spot #20 (thương hiệu=14, tọa độ=(16, 21)) | 21 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (8, 10) (ô=248)
- Nhiên liệu đầu ngày: 80
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #1 (thương hiệu=1, tọa độ=(12, 0))
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 2, 1, 1, 0, 5, 5, 0, 1, 1, 1, 2, -53]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 10) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 80 |
| 2-4 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến di chuyển đến (9, 8); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 80 |
| 5-6 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 80 |
| 7 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến di chuyển đến (11, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 80 |
| 8 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 80 |
| 9 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 80 |
| 10 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 80 |
| 11 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 80 |
| 12 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến di chuyển đến (11, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 80 |
| 13 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 80 |
| 14 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 80 |
| 15 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 80 |
| 16 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 80 |
| 17 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến di chuyển đến (11, 0); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 80 |
| 18 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (12, 0) | 80 |
| 19-71 | Chờ 53 bước (`-53`) | (12, 0) | (12, 0) | Dự kiến đứng yên tại (12, 0); điểm hẹn của xe tuần tra #3 tại (12, 0) | 80 |

