# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 63
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 46 | #2 | #0 | (12, 17) | 3 | 59 |
| 46 | #4 | #0 | (12, 17) | 1 | 59 |

### Xe #0 - Tiếp tế

- Vị trí đầu ngày: (4, 7) (ô=137)
- Nhiên liệu đầu ngày: 59
- Vai trò: Hỗ trợ xe tuần tra #4
- Điểm hẹn của xe tuần tra: Spot #3 (thương hiệu=3, tọa độ=(12, 17))
- Mảng hành động đã gửi server: `[2, 2, 1, 2, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 7) | (5, 7) | Dự kiến di chuyển đến (5, 7); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 2-3 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 4-5 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 6-7 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 8-9 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 10-11 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 12-13 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 14 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 15 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 16-17 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 18-19 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 20-21 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 22 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 23 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 24-25 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 26 | Di chuyển hướng 3 (`3`) | (15, 7) | (15, 8) | Dự kiến di chuyển đến (15, 8); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 27-28 | Di chuyển hướng 3 (`3`) | (15, 8) | (16, 9) | Dự kiến di chuyển đến (16, 9); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 29 | Di chuyển hướng 4 (`4`) | (16, 9) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 30-31 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 32-33 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 34-36 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 37-38 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến di chuyển đến (13, 14); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 39-40 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 41-42 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 59 |
| 43-45 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đến điểm hẹn của xe tuần tra #4 tại (12, 17) | 59 |
| 46-62 | Chờ 17 bước (`-17`) | (12, 17) | (12, 17) | Dự kiến đứng yên tại (12, 17); điểm hẹn của xe tuần tra #4 tại (12, 17) | 59 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (5, 7) (ô=138)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(18, 8))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(18, 8))
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 0, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, 3, 3, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 4, 3, 3, 4, 3, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (2, 7) (Spot #0 (thương hiệu=0, tọa độ=(2, 7))) | 57 |
| 2-3 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (2, 7) (Spot #0 (thương hiệu=0, tọa độ=(2, 7))) | 56 |
| 4 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 7)) | 54 |
| 5-6 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến di chuyển đến (1, 6); hướng tới tọa độ (1, 5) (Spot #11 (thương hiệu=11, tọa độ=(1, 5))) | 53 |
| 7-8 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 52 |
| 9-10 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới tọa độ (8, 5) (Spot #7 (thương hiệu=7, tọa độ=(8, 5))) | 51 |
| 11 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến di chuyển đến (3, 5); hướng tới tọa độ (8, 5) (Spot #7 (thương hiệu=7, tọa độ=(8, 5))) | 49 |
| 12-14 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (8, 5) (Spot #7 (thương hiệu=7, tọa độ=(8, 5))) | 47 |
| 15 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (8, 5) (Spot #7 (thương hiệu=7, tọa độ=(8, 5))) | 45 |
| 16-17 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (8, 5) (Spot #7 (thương hiệu=7, tọa độ=(8, 5))) | 44 |
| 18-20 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (8, 5) (Spot #7 (thương hiệu=7, tọa độ=(8, 5))) | 42 |
| 21-22 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 41 |
| 23-24 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (8, 1) (Spot #4 (thương hiệu=4, tọa độ=(8, 1))) | 40 |
| 25-26 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (8, 1) (Spot #4 (thương hiệu=4, tọa độ=(8, 1))) | 39 |
| 27 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới tọa độ (8, 1) (Spot #4 (thương hiệu=4, tọa độ=(8, 1))) | 37 |
| 28-29 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 1)) | 36 |
| 30-31 | Di chuyển hướng 3 (`3`) | (8, 1) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới tọa độ (13, 3) (Spot #2 (thương hiệu=2, tọa độ=(13, 3))) | 35 |
| 32-33 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (13, 3) (Spot #2 (thương hiệu=2, tọa độ=(13, 3))) | 34 |
| 34 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (13, 3) (Spot #2 (thương hiệu=2, tọa độ=(13, 3))) | 32 |
| 35 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (13, 3) (Spot #2 (thương hiệu=2, tọa độ=(13, 3))) | 30 |
| 36-37 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (13, 3) (Spot #2 (thương hiệu=2, tọa độ=(13, 3))) | 29 |
| 38-39 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 28 |
| 40-41 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới tọa độ (17, 1) (Spot #16 (thương hiệu=3, tọa độ=(17, 1))) | 27 |
| 42-43 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới tọa độ (17, 1) (Spot #16 (thương hiệu=3, tọa độ=(17, 1))) | 26 |
| 44 | Di chuyển hướng 1 (`1`) | (15, 3) | (15, 2) | Dự kiến di chuyển đến (15, 2); hướng tới tọa độ (17, 1) (Spot #16 (thương hiệu=3, tọa độ=(17, 1))) | 24 |
| 45-46 | Di chuyển hướng 1 (`1`) | (15, 2) | (16, 1) | Dự kiến di chuyển đến (16, 1); hướng tới tọa độ (17, 1) (Spot #16 (thương hiệu=3, tọa độ=(17, 1))) | 23 |
| 47-48 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(17, 1)) | 22 |
| 49-50 | Di chuyển hướng 2 (`2`) | (17, 1) | (18, 1) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(18, 1)) | 21 |
| 51-52 | Di chuyển hướng 4 (`4`) | (18, 1) | (17, 2) | Dự kiến di chuyển đến (17, 2); hướng tới tọa độ (18, 8) (Spot #12 (thương hiệu=12, tọa độ=(18, 8))) | 20 |
| 53 | Di chuyển hướng 3 (`3`) | (17, 2) | (18, 3) | Dự kiến di chuyển đến (18, 3); hướng tới tọa độ (18, 8) (Spot #12 (thương hiệu=12, tọa độ=(18, 8))) | 18 |
| 54-55 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến di chuyển đến (18, 4); hướng tới tọa độ (18, 8) (Spot #12 (thương hiệu=12, tọa độ=(18, 8))) | 17 |
| 56 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến di chuyển đến (18, 5); hướng tới tọa độ (18, 8) (Spot #12 (thương hiệu=12, tọa độ=(18, 8))) | 15 |
| 57-58 | Di chuyển hướng 3 (`3`) | (18, 5) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (18, 8) (Spot #12 (thương hiệu=12, tọa độ=(18, 8))) | 14 |
| 59-61 | Di chuyển hướng 4 (`4`) | (18, 6) | (18, 7) | Dự kiến di chuyển đến (18, 7); hướng tới tọa độ (18, 8) (Spot #12 (thương hiệu=12, tọa độ=(18, 8))) | 12 |
| 62 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 8)) | 10 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 12) (ô=242)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(12, 17))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(12, 17))
- Mảng hành động đã gửi server: `[4, 2, 2, 3, 3, 4, 5, 5, 5, 4, 5, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(14, 13)) | 16 |
| 3-4 | Di chuyển hướng 2 (`2`) | (14, 13) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới tọa độ (16, 14) (Spot #13 (thương hiệu=0, tọa độ=(16, 14))) | 15 |
| 5-7 | Di chuyển hướng 2 (`2`) | (15, 13) | (16, 13) | Dự kiến di chuyển đến (16, 13); hướng tới tọa độ (16, 14) (Spot #13 (thương hiệu=0, tọa độ=(16, 14))) | 13 |
| 8 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(16, 14)) | 11 |
| 9-10 | Di chuyển hướng 3 (`3`) | (16, 14) | (17, 15) | Dự kiến di chuyển đến (17, 15); hướng tới tọa độ (16, 16) (Spot #6 (thương hiệu=6, tọa độ=(16, 16))) | 10 |
| 11-12 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(16, 16)) | 9 |
| 13-14 | Di chuyển hướng 5 (`5`) | (16, 16) | (15, 16) | Dự kiến di chuyển đến (15, 16); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 8 |
| 15-16 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 7 |
| 17-18 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 6 |
| 19 | Di chuyển hướng 4 (`4`) | (13, 16) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 4 |
| 20-21 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 17)) | 3 |
| 22-62 | Chờ 41 bước (`-41`) | (12, 17) | (12, 17) | Dự kiến đứng yên tại (12, 17); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 17)) | 59 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 4) (ô=78)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=3, tọa độ=(17, 1))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=3, tọa độ=(17, 1))
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 2, 1, 1, 1, 1, 1, 1, 2, 1, 2, 3, 3, 4, 4, 3, 4, 3, 0, 1, 0, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới tọa độ (1, 8) (Spot #15 (thương hiệu=2, tọa độ=(1, 8))) | 49 |
| 1 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới tọa độ (1, 8) (Spot #15 (thương hiệu=2, tọa độ=(1, 8))) | 47 |
| 2-3 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến di chuyển đến (2, 7); hướng tới tọa độ (1, 8) (Spot #15 (thương hiệu=2, tọa độ=(1, 8))) | 46 |
| 4-5 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(1, 8)) | 45 |
| 6-7 | Di chuyển hướng 2 (`2`) | (1, 8) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (7, 1) (Spot #9 (thương hiệu=9, tọa độ=(7, 1))) | 44 |
| 8-9 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (7, 1) (Spot #9 (thương hiệu=9, tọa độ=(7, 1))) | 43 |
| 10 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (7, 1) (Spot #9 (thương hiệu=9, tọa độ=(7, 1))) | 41 |
| 11-13 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (7, 1) (Spot #9 (thương hiệu=9, tọa độ=(7, 1))) | 39 |
| 14 | Di chuyển hướng 1 (`1`) | (4, 5) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (7, 1) (Spot #9 (thương hiệu=9, tọa độ=(7, 1))) | 37 |
| 15-16 | Di chuyển hướng 1 (`1`) | (4, 4) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (7, 1) (Spot #9 (thương hiệu=9, tọa độ=(7, 1))) | 36 |
| 17-18 | Di chuyển hướng 1 (`1`) | (5, 3) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (7, 1) (Spot #9 (thương hiệu=9, tọa độ=(7, 1))) | 35 |
| 19-20 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (7, 1) (Spot #9 (thương hiệu=9, tọa độ=(7, 1))) | 34 |
| 21-22 | Di chuyển hướng 1 (`1`) | (6, 2) | (7, 1) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 1)) | 33 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 1)) | 32 |
| 25-26 | Di chuyển hướng 3 (`3`) | (8, 1) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới tọa độ (8, 5) (Spot #7 (thương hiệu=7, tọa độ=(8, 5))) | 31 |
| 27-28 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (8, 5) (Spot #7 (thương hiệu=7, tọa độ=(8, 5))) | 30 |
| 29 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (8, 5) (Spot #7 (thương hiệu=7, tọa độ=(8, 5))) | 28 |
| 30-31 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 27 |
| 32-33 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (8, 8) (Spot #10 (thương hiệu=10, tọa độ=(8, 8))) | 26 |
| 34-35 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (8, 8) (Spot #10 (thương hiệu=10, tọa độ=(8, 8))) | 25 |
| 36-37 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(8, 8)) | 24 |
| 38-39 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (13, 3) (Spot #2 (thương hiệu=2, tọa độ=(13, 3))) | 23 |
| 40-41 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (13, 3) (Spot #2 (thương hiệu=2, tọa độ=(13, 3))) | 22 |
| 42-43 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (13, 3) (Spot #2 (thương hiệu=2, tọa độ=(13, 3))) | 21 |
| 44-45 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (13, 3) (Spot #2 (thương hiệu=2, tọa độ=(13, 3))) | 20 |
| 46-47 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (13, 3) (Spot #2 (thương hiệu=2, tọa độ=(13, 3))) | 19 |
| 48 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (13, 3) (Spot #2 (thương hiệu=2, tọa độ=(13, 3))) | 17 |
| 49 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (13, 3) (Spot #2 (thương hiệu=2, tọa độ=(13, 3))) | 15 |
| 50-51 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (13, 3) (Spot #2 (thương hiệu=2, tọa độ=(13, 3))) | 14 |
| 52-53 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 13 |
| 54-55 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới tọa độ (17, 1) (Spot #16 (thương hiệu=3, tọa độ=(17, 1))) | 12 |
| 56-57 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới tọa độ (17, 1) (Spot #16 (thương hiệu=3, tọa độ=(17, 1))) | 11 |
| 58 | Di chuyển hướng 1 (`1`) | (15, 3) | (15, 2) | Dự kiến di chuyển đến (15, 2); hướng tới tọa độ (17, 1) (Spot #16 (thương hiệu=3, tọa độ=(17, 1))) | 9 |
| 59-60 | Di chuyển hướng 1 (`1`) | (15, 2) | (16, 1) | Dự kiến di chuyển đến (16, 1); hướng tới tọa độ (17, 1) (Spot #16 (thương hiệu=3, tọa độ=(17, 1))) | 8 |
| 61-62 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(17, 1)) | 7 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (1, 11) (ô=210)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(8, 5))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(8, 5))
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 2, 3, 3, 2, 2, 3, 2, 2, 3, 3, -21, 2, 1, 2, 2, 2, 1, 0, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 20 |
| 2-3 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 19 |
| 4 | Di chuyển hướng 2 (`2`) | (3, 11) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 17 |
| 5-6 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 16 |
| 7-8 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến di chuyển đến (5, 12); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 15 |
| 9 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 13 |
| 10-11 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 12 |
| 12-13 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 11 |
| 14 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 9 |
| 15-17 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 7 |
| 18 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 5 |
| 19-21 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 3 |
| 22-23 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (12, 17) (Spot #3 (thương hiệu=3, tọa độ=(12, 17))) | 2 |
| 24-25 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 17)) | 1 |
| 26-46 | Chờ 21 bước (`-21`) | (12, 17) | (12, 17) | Dự kiến đứng yên tại (12, 17); hướng tới tọa độ (12, 17) | 59 |
| 47-48 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (16, 16) (Spot #6 (thương hiệu=6, tọa độ=(16, 16))) | 58 |
| 49-50 | Di chuyển hướng 1 (`1`) | (13, 17) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (16, 16) (Spot #6 (thương hiệu=6, tọa độ=(16, 16))) | 57 |
| 51 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (16, 16) (Spot #6 (thương hiệu=6, tọa độ=(16, 16))) | 55 |
| 52-53 | Di chuyển hướng 2 (`2`) | (14, 16) | (15, 16) | Dự kiến di chuyển đến (15, 16); hướng tới tọa độ (16, 16) (Spot #6 (thương hiệu=6, tọa độ=(16, 16))) | 54 |
| 54-55 | Di chuyển hướng 2 (`2`) | (15, 16) | (16, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(16, 16)) | 53 |
| 56-57 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến di chuyển đến (17, 15); hướng tới tọa độ (8, 5) (Spot #7 (thương hiệu=7, tọa độ=(8, 5))) | 52 |
| 58-59 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến di chuyển đến (16, 14); hướng tới tọa độ (8, 5) (Spot #7 (thương hiệu=7, tọa độ=(8, 5))) | 51 |
| 60-61 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến di chuyển đến (16, 13); hướng tới tọa độ (8, 5) (Spot #7 (thương hiệu=7, tọa độ=(8, 5))) | 50 |
| 62 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (8, 5) (Spot #7 (thương hiệu=7, tọa độ=(8, 5))) | 48 |

