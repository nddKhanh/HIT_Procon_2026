# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 53
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 12) (ô=266)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(4, 14))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(4, 14))
- Mảng hành động đã gửi server: `[0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 2, 2, 2, 2, 3, 3, 4, 3, 3, 3, 5, 4, 5, -1, 4, 5, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 28 |
| 2 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 26 |
| 3-4 | Di chuyển hướng 1 (`1`) | (2, 10) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 25 |
| 5-6 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 24 |
| 7-8 | Di chuyển hướng 1 (`1`) | (3, 8) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 23 |
| 9-10 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 22 |
| 11-12 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến di chuyển đến (3, 5); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 21 |
| 13-14 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 20 |
| 15-16 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 19 |
| 17-18 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 18 |
| 19 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 1)) | 16 |
| 20-21 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (7, 1) (Spot #20 (thương hiệu=20, tọa độ=(7, 1))) | 15 |
| 22-23 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (7, 1) (Spot #20 (thương hiệu=20, tọa độ=(7, 1))) | 13 |
| 24-25 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 1)) | 11 |
| 26-27 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến di chuyển đến (8, 1); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 10 |
| 28-29 | Di chuyển hướng 3 (`3`) | (8, 1) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 9 |
| 30-31 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 8 |
| 32-33 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 7 |
| 34-35 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 6 |
| 36-37 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 5 |
| 38 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 7)) | 3 |
| 39-40 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 2 |
| 41-42 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 1 |
| 43-44 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 8)) | 0 |
| 45 | Chờ 1 bước (`-1`) | (7, 8) | (7, 8) | Dự kiến đứng yên tại (7, 8); hướng tới tọa độ (7, 8) | 52 |
| 46-47 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 51 |
| 48-49 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 50 |
| 50-51 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 49 |
| 52 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 47 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 20) (ô=442)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(15, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(15, 12))
- Mảng hành động đã gửi server: `[2, 3, 2, 2, 2, 2, 1, 1, 3, 3, 4, 1, 1, 1, 2, 1, 1, 1, 0, 1, 1, 2, 1, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 20) | (3, 20) | Dự kiến di chuyển đến (3, 20); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 31 |
| 2-3 | Di chuyển hướng 3 (`3`) | (3, 20) | (4, 21) | Dự kiến di chuyển đến (4, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 30 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 21) | (5, 21) | Dự kiến di chuyển đến (5, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 29 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 21) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 28 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 27 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 21)) | 26 |
| 12-13 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (9, 19) (Spot #10 (thương hiệu=10, tọa độ=(9, 19))) | 25 |
| 14-15 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 19)) | 24 |
| 16-17 | Di chuyển hướng 3 (`3`) | (9, 19) | (9, 20) | Dự kiến di chuyển đến (9, 20); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 23 |
| 18 | Di chuyển hướng 3 (`3`) | (9, 20) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 21 |
| 19-20 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 22)) | 20 |
| 21-22 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 19 |
| 23-24 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 18 |
| 25-26 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 16 |
| 27-28 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 19)) | 14 |
| 29-30 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 13 |
| 31-32 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 12 |
| 33 | Di chuyển hướng 1 (`1`) | (13, 17) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 10 |
| 34-35 | Di chuyển hướng 0 (`0`) | (13, 16) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 9 |
| 36-37 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến di chuyển đến (13, 14); hướng tới tọa độ (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 8 |
| 38-39 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 7 |
| 40-41 | Di chuyển hướng 2 (`2`) | (14, 13) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới tọa độ (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 6 |
| 42 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 12)) | 4 |
| 43-52 | Chờ 10 bước (`-10`) | (15, 12) | (15, 12) | Dự kiến đứng yên tại (15, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 12)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (16, 6) (ô=148)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(21, 4))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(21, 4))
- Mảng hành động đã gửi server: `[2, 1, 1, 5, 0, 5, 5, 0, 0, 5, 5, 3, 3, 4, 4, 3, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 33 |
| 2-3 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến di chuyển đến (18, 5); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 32 |
| 4-5 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 4)) | 31 |
| 6-7 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(17, 4)) | 30 |
| 8-9 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến di chuyển đến (17, 3); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 29 |
| 10-12 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 27 |
| 13-14 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 26 |
| 15 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến di chuyển đến (14, 2); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 24 |
| 16-17 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 23 |
| 18 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(13, 1)) | 21 |
| 19-20 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(12, 1)) | 20 |
| 21-22 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 19 |
| 23-24 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 18 |
| 25 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 16 |
| 26-28 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 5)) | 14 |
| 29-30 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 13 |
| 31-32 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 12 |
| 33-34 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 11 |
| 35-36 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến di chuyển đến (15, 6); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 10 |
| 37-38 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 9 |
| 39-40 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 8 |
| 41-42 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 7 |
| 43 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 5 |
| 44 | Di chuyển hướng 1 (`1`) | (19, 6) | (20, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(20, 5)) | 3 |
| 45-46 | Di chuyển hướng 1 (`1`) | (20, 5) | (20, 4) | Dự kiến di chuyển đến (20, 4); hướng tới tọa độ (21, 4) (Spot #6 (thương hiệu=6, tọa độ=(21, 4))) | 2 |
| 47-48 | Di chuyển hướng 2 (`2`) | (20, 4) | (21, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 4)) | 1 |
| 49-52 | Chờ 4 bước (`-4`) | (21, 4) | (21, 4) | Dự kiến đứng yên tại (21, 4); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 4)) | 1 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (13, 1) (ô=35)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(21, 4))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(21, 4))
- Mảng hành động đã gửi server: `[5, -15, 3, 3, 4, 4, 3, 2, 2, 2, 2, 2, 1, 1, 2, 3, 0, 1, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(12, 1)) | 0 |
| 2-16 | Chờ 15 bước (`-15`) | (12, 1) | (12, 1) | Dự kiến đứng yên tại (12, 1); hướng tới tọa độ (12, 1) | 52 |
| 17-18 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 51 |
| 19-20 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 50 |
| 21 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 48 |
| 22-24 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 5)) | 46 |
| 25-26 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 45 |
| 27-28 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 44 |
| 29-30 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 43 |
| 31-32 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến di chuyển đến (15, 6); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 42 |
| 33-34 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 41 |
| 35-36 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 40 |
| 37-38 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến di chuyển đến (18, 5); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 39 |
| 39-40 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 4)) | 38 |
| 41-42 | Di chuyển hướng 2 (`2`) | (18, 4) | (19, 4) | Dự kiến di chuyển đến (19, 4); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 37 |
| 43-44 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(20, 5)) | 36 |
| 45-46 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến di chuyển đến (19, 4); hướng tới tọa độ (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 35 |
| 47-48 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 3)) | 34 |
| 49-50 | Di chuyển hướng 3 (`3`) | (20, 3) | (20, 4) | Dự kiến di chuyển đến (20, 4); hướng tới tọa độ (21, 4) (Spot #6 (thương hiệu=6, tọa độ=(21, 4))) | 33 |
| 51-52 | Di chuyển hướng 2 (`2`) | (20, 4) | (21, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 4)) | 32 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (9, 22) (ô=493)
- Nhiên liệu đầu ngày: 52
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #15 (thương hiệu=15, tọa độ=(7, 8))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 5, 0, 5, 0, 0, 0, 0, 0, 1, 2, 2, 2, 1, 2, 1, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (9, 22) | (9, 21) | Dự kiến di chuyển đến (9, 21); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 21) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 4-5 | Di chuyển hướng 0 (`0`) | (8, 20) | (8, 19) | Dự kiến di chuyển đến (8, 19); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 6-7 | Di chuyển hướng 0 (`0`) | (8, 19) | (7, 18) | Dự kiến di chuyển đến (7, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 8-9 | Di chuyển hướng 0 (`0`) | (7, 18) | (7, 17) | Dự kiến di chuyển đến (7, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 10-11 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 12-13 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 14 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 15 | Di chuyển hướng 0 (`0`) | (4, 16) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 16 | Di chuyển hướng 0 (`0`) | (4, 15) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 17-18 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến di chuyển đến (3, 13); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 19-21 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 22-23 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 24 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 25-26 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 27-28 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 29-30 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 31 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 32-33 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 34-35 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (7, 8) | 52 |
| 36-52 | Chờ 17 bước (`-17`) | (7, 8) | (7, 8) | Dự kiến đứng yên tại (7, 8); điểm hẹn của xe tuần tra #0 tại (7, 8) | 52 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (20, 3) (ô=86)
- Nhiên liệu đầu ngày: 52
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #14 (thương hiệu=14, tọa độ=(12, 1))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 0, 5, 0, -37]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (20, 3) | (19, 3) | Dự kiến di chuyển đến (19, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 1) (Spot #14 (thương hiệu=14, tọa độ=(12, 1))) | 52 |
| 2 | Di chuyển hướng 5 (`5`) | (19, 3) | (18, 3) | Dự kiến di chuyển đến (18, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 1) (Spot #14 (thương hiệu=14, tọa độ=(12, 1))) | 52 |
| 3-4 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến di chuyển đến (17, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 1) (Spot #14 (thương hiệu=14, tọa độ=(12, 1))) | 52 |
| 5-7 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 1) (Spot #14 (thương hiệu=14, tọa độ=(12, 1))) | 52 |
| 8-9 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 1) (Spot #14 (thương hiệu=14, tọa độ=(12, 1))) | 52 |
| 10 | Di chuyển hướng 5 (`5`) | (15, 3) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 1) (Spot #14 (thương hiệu=14, tọa độ=(12, 1))) | 52 |
| 11-12 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 1) (Spot #14 (thương hiệu=14, tọa độ=(12, 1))) | 52 |
| 13 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 1) (Spot #14 (thương hiệu=14, tọa độ=(12, 1))) | 52 |
| 14-15 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (12, 1) | 52 |
| 16-52 | Chờ 37 bước (`-37`) | (12, 1) | (12, 1) | Dự kiến đứng yên tại (12, 1); điểm hẹn của xe tuần tra #3 tại (12, 1) | 52 |

