# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 104
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 10 | #2 | #3 | (7, 2) | 6 | 32 |
| 18 | #0 | #3 | (11, 5) | 3 | 32 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 2) (ô=41)
- Nhiên liệu đầu ngày: 9
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(10, 15))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(10, 15))
- Mảng hành động đã gửi server: `[4, 4, 4, 5, -13, 0, 5, 0, 0, 5, 5, 4, 4, 3, 4, 4, 3, 4, 3, 4, 3, 3, 3, 2, 2, 2, 3, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (11, 5) (Spot #9 (thương hiệu=1, tọa độ=(11, 5))) | 8 |
| 2 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (11, 5) (Spot #9 (thương hiệu=1, tọa độ=(11, 5))) | 6 |
| 3 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới tọa độ (11, 5) (Spot #9 (thương hiệu=1, tọa độ=(11, 5))) | 4 |
| 4-5 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(11, 5)) | 3 |
| 6-18 | Chờ 13 bước (`-13`) | (11, 5) | (11, 5) | Dự kiến đứng yên tại (11, 5); hướng tới tọa độ (11, 5) | 32 |
| 19-20 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 31 |
| 21-22 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 30 |
| 23-24 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 29 |
| 25-26 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 28 |
| 27 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 26 |
| 28 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 24 |
| 29-30 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 23 |
| 31-32 | Di chuyển hướng 4 (`4`) | (6, 3) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 22 |
| 33-34 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 21 |
| 35-36 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 20 |
| 37-38 | Di chuyển hướng 4 (`4`) | (5, 6) | (5, 7) | Dự kiến di chuyển đến (5, 7); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 19 |
| 39-40 | Di chuyển hướng 3 (`3`) | (5, 7) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 18 |
| 41 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 16 |
| 42-43 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 14 |
| 44-45 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 13 |
| 46-47 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến di chuyển đến (5, 12); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 12 |
| 48-49 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 11 |
| 50-52 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 9 |
| 53-54 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 8 |
| 55-58 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 6 |
| 59-61 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 14)) | 4 |
| 62-63 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 15)) | 3 |
| 64-103 | Chờ 40 bước (`-40`) | (10, 15) | (10, 15) | Dự kiến đứng yên tại (10, 15); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 15)) | 3 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (5, 6) (ô=89)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(1, 13))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(1, 13))
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 4, 4, 2, 3, 3, 2, 2, 2, 2, 3, 5, 5, 0, 5, 5, 4, 0, 5, 0, 5, 5, -50]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (5, 6) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 31 |
| 2-3 | Di chuyển hướng 3 (`3`) | (5, 7) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới tọa độ (3, 12) (Spot #5 (thương hiệu=5, tọa độ=(3, 12))) | 30 |
| 4 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (3, 12) (Spot #5 (thương hiệu=5, tọa độ=(3, 12))) | 28 |
| 5-6 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (3, 12) (Spot #5 (thương hiệu=5, tọa độ=(3, 12))) | 26 |
| 7-8 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (3, 12) (Spot #5 (thương hiệu=5, tọa độ=(3, 12))) | 24 |
| 9-10 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 12)) | 23 |
| 11-12 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 22 |
| 13-14 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến di chuyển đến (5, 13); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 21 |
| 15-16 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến di chuyển đến (5, 14); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 20 |
| 17-18 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 19 |
| 19-20 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 18 |
| 21-24 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (9, 14) (Spot #4 (thương hiệu=4, tọa độ=(9, 14))) | 16 |
| 25-27 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 14)) | 14 |
| 28-29 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 15)) | 13 |
| 30-31 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (5, 15) (Spot #1 (thương hiệu=1, tọa độ=(5, 15))) | 12 |
| 32-33 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (5, 15) (Spot #1 (thương hiệu=1, tọa độ=(5, 15))) | 11 |
| 34-35 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (5, 15) (Spot #1 (thương hiệu=1, tọa độ=(5, 15))) | 10 |
| 36-39 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (5, 15) (Spot #1 (thương hiệu=1, tọa độ=(5, 15))) | 8 |
| 40-41 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến di chuyển đến (5, 14); hướng tới tọa độ (5, 15) (Spot #1 (thương hiệu=1, tọa độ=(5, 15))) | 7 |
| 42-43 | Di chuyển hướng 4 (`4`) | (5, 14) | (5, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 15)) | 6 |
| 44-45 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (1, 13) (Spot #2 (thương hiệu=2, tọa độ=(1, 13))) | 5 |
| 46-47 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới tọa độ (1, 13) (Spot #2 (thương hiệu=2, tọa độ=(1, 13))) | 4 |
| 48-49 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến di chuyển đến (3, 13); hướng tới tọa độ (1, 13) (Spot #2 (thương hiệu=2, tọa độ=(1, 13))) | 3 |
| 50-51 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (1, 13) (Spot #2 (thương hiệu=2, tọa độ=(1, 13))) | 2 |
| 52-53 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 13)) | 0 |
| 54-103 | Chờ 50 bước (`-50`) | (1, 13) | (1, 13) | Dự kiến đứng yên tại (1, 13); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 13)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 2) (ô=41)
- Nhiên liệu đầu ngày: 14
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(5, 6))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(5, 6))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 4, 4, 3, 4, -85]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (5, 6) (Spot #6 (thương hiệu=6, tọa độ=(5, 6))) | 13 |
| 2-3 | Di chuyển hướng 5 (`5`) | (12, 2) | (11, 2) | Dự kiến di chuyển đến (11, 2); hướng tới tọa độ (5, 6) (Spot #6 (thương hiệu=6, tọa độ=(5, 6))) | 12 |
| 4-5 | Di chuyển hướng 5 (`5`) | (11, 2) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới tọa độ (5, 6) (Spot #6 (thương hiệu=6, tọa độ=(5, 6))) | 11 |
| 6-7 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới tọa độ (5, 6) (Spot #6 (thương hiệu=6, tọa độ=(5, 6))) | 10 |
| 8 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới tọa độ (5, 6) (Spot #6 (thương hiệu=6, tọa độ=(5, 6))) | 8 |
| 9 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (5, 6) (Spot #6 (thương hiệu=6, tọa độ=(5, 6))) | 32 |
| 10 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (5, 6) (Spot #6 (thương hiệu=6, tọa độ=(5, 6))) | 30 |
| 11-12 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (5, 6) (Spot #6 (thương hiệu=6, tọa độ=(5, 6))) | 29 |
| 13-14 | Di chuyển hướng 4 (`4`) | (6, 3) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (5, 6) (Spot #6 (thương hiệu=6, tọa độ=(5, 6))) | 28 |
| 15-16 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (5, 6) (Spot #6 (thương hiệu=6, tọa độ=(5, 6))) | 27 |
| 17-18 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 26 |
| 19-103 | Chờ 85 bước (`-85`) | (5, 6) | (5, 6) | Dự kiến đứng yên tại (5, 6); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 26 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (5, 6) (ô=89)
- Nhiên liệu đầu ngày: 32
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #9 (thương hiệu=1, tọa độ=(11, 5))
- Mảng hành động đã gửi server: `[1, 0, 1, 1, 2, 2, 3, 3, 3, 2, -86]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 5) (Spot #9 (thương hiệu=1, tọa độ=(11, 5))) | 32 |
| 2-3 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 5) (Spot #9 (thương hiệu=1, tọa độ=(11, 5))) | 32 |
| 4-5 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 5) (Spot #9 (thương hiệu=1, tọa độ=(11, 5))) | 32 |
| 6-7 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 5) (Spot #9 (thương hiệu=1, tọa độ=(11, 5))) | 32 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 5) (Spot #9 (thương hiệu=1, tọa độ=(11, 5))) | 32 |
| 10 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 5) (Spot #9 (thương hiệu=1, tọa độ=(11, 5))) | 32 |
| 11 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 5) (Spot #9 (thương hiệu=1, tọa độ=(11, 5))) | 32 |
| 12-13 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 5) (Spot #9 (thương hiệu=1, tọa độ=(11, 5))) | 32 |
| 14-15 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 5) (Spot #9 (thương hiệu=1, tọa độ=(11, 5))) | 32 |
| 16-17 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (11, 5) | 32 |
| 18-103 | Chờ 86 bước (`-86`) | (11, 5) | (11, 5) | Dự kiến đứng yên tại (11, 5); điểm hẹn của xe tuần tra #0 tại (11, 5) | 32 |

