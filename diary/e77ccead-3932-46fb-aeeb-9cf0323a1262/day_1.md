# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 47
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (4, 13) (ô=290)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(15, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(15, 12))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 2, 3, 3, 3, 4, 1, 1, 3, 4, 3, -1, 1, 1, 1, 2, 1, 1, 1, 0, 1, 1, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 18 |
| 2-3 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 17 |
| 4-5 | Di chuyển hướng 3 (`3`) | (5, 15) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 16 |
| 6 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 14 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến di chuyển đến (7, 17); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 13 |
| 9-10 | Di chuyển hướng 3 (`3`) | (7, 17) | (7, 18) | Dự kiến di chuyển đến (7, 18); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 12 |
| 11-12 | Di chuyển hướng 3 (`3`) | (7, 18) | (8, 19) | Dự kiến di chuyển đến (8, 19); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 11 |
| 13 | Di chuyển hướng 3 (`3`) | (8, 19) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 9 |
| 14-15 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 21)) | 8 |
| 16-17 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (9, 19) (Spot #10 (thương hiệu=10, tọa độ=(9, 19))) | 7 |
| 18-19 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 19)) | 6 |
| 20-21 | Di chuyển hướng 3 (`3`) | (9, 19) | (9, 20) | Dự kiến di chuyển đến (9, 20); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 5 |
| 22 | Di chuyển hướng 4 (`4`) | (9, 20) | (9, 21) | Dự kiến di chuyển đến (9, 21); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 3 |
| 23-24 | Di chuyển hướng 3 (`3`) | (9, 21) | (9, 22) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 22)) | 2 |
| 25 | Chờ 1 bước (`-1`) | (9, 22) | (9, 22) | Dự kiến đứng yên tại (9, 22); hướng tới tọa độ (9, 22) | 52 |
| 26-27 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 51 |
| 28-29 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 50 |
| 30 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 48 |
| 31 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 19)) | 46 |
| 32-33 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 45 |
| 34-35 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 44 |
| 36 | Di chuyển hướng 1 (`1`) | (13, 17) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 42 |
| 37-38 | Di chuyển hướng 0 (`0`) | (13, 16) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 41 |
| 39-40 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến di chuyển đến (13, 14); hướng tới tọa độ (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 40 |
| 41-42 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 39 |
| 43-44 | Di chuyển hướng 2 (`2`) | (14, 13) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới tọa độ (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 38 |
| 45 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 12)) | 36 |
| 46 | Chờ 1 bước (`-1`) | (15, 12) | (15, 12) | Dự kiến đứng yên tại (15, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 12)) | 36 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 19) (ô=430)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(7, 12))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(7, 12))
- Mảng hành động đã gửi server: `[5, 4, 4, 4, 5, 5, 0, 5, 5, 5, 2, 2, 2, 2, 1, 0, 0, 0, 5, 0, 0, 0, 1, 1, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 51 |
| 2 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 49 |
| 3 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 47 |
| 4-5 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 22)) | 46 |
| 6-7 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến di chuyển đến (8, 22); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 45 |
| 8 | Di chuyển hướng 5 (`5`) | (8, 22) | (7, 22) | Dự kiến di chuyển đến (7, 22); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 43 |
| 9-10 | Di chuyển hướng 0 (`0`) | (7, 22) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 42 |
| 11-12 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 41 |
| 13-14 | Di chuyển hướng 5 (`5`) | (6, 21) | (5, 21) | Dự kiến di chuyển đến (5, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 40 |
| 15-16 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 21)) | 39 |
| 17-18 | Di chuyển hướng 2 (`2`) | (4, 21) | (5, 21) | Dự kiến di chuyển đến (5, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 38 |
| 19-20 | Di chuyển hướng 2 (`2`) | (5, 21) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 37 |
| 21-22 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 36 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 21)) | 35 |
| 25-26 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 34 |
| 27-28 | Di chuyển hướng 0 (`0`) | (8, 20) | (8, 19) | Dự kiến di chuyển đến (8, 19); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 33 |
| 29 | Di chuyển hướng 0 (`0`) | (8, 19) | (7, 18) | Dự kiến di chuyển đến (7, 18); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 31 |
| 30-31 | Di chuyển hướng 0 (`0`) | (7, 18) | (7, 17) | Dự kiến di chuyển đến (7, 17); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 30 |
| 32-33 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 29 |
| 34-35 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 28 |
| 36 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 26 |
| 37-38 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 25 |
| 39-40 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến di chuyển đến (5, 13); hướng tới tọa độ (7, 12) (Spot #5 (thương hiệu=5, tọa độ=(7, 12))) | 24 |
| 41-42 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến di chuyển đến (5, 12); hướng tới tọa độ (7, 12) (Spot #5 (thương hiệu=5, tọa độ=(7, 12))) | 23 |
| 43-44 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (7, 12) (Spot #5 (thương hiệu=5, tọa độ=(7, 12))) | 22 |
| 45-46 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 12)) | 21 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (21, 4) (ô=109)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(7, 8))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(7, 8))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 2, 3, 2, 0, 1, 3, 3, 3, -6, 5, 5, 5, 5, 5, 0, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 4) | (20, 4) | Dự kiến di chuyển đến (20, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 19 |
| 2-3 | Di chuyển hướng 5 (`5`) | (20, 4) | (19, 4) | Dự kiến di chuyển đến (19, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 18 |
| 4-5 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 4)) | 17 |
| 6-7 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(17, 4)) | 16 |
| 8-9 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến di chuyển đến (18, 4); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 15 |
| 10-11 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến di chuyển đến (19, 5); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 14 |
| 12-13 | Di chuyển hướng 2 (`2`) | (19, 5) | (20, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(20, 5)) | 13 |
| 14-15 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến di chuyển đến (19, 4); hướng tới tọa độ (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 12 |
| 16-17 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 3)) | 11 |
| 18-19 | Di chuyển hướng 3 (`3`) | (20, 3) | (20, 4) | Dự kiến di chuyển đến (20, 4); hướng tới tọa độ (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 10 |
| 20-21 | Di chuyển hướng 3 (`3`) | (20, 4) | (21, 5) | Dự kiến di chuyển đến (21, 5); hướng tới tọa độ (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 9 |
| 22-24 | Di chuyển hướng 3 (`3`) | (21, 5) | (21, 6) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(21, 6)) | 7 |
| 25-30 | Chờ 6 bước (`-6`) | (21, 6) | (21, 6) | Dự kiến đứng yên tại (21, 6); hướng tới tọa độ (21, 6) | 52 |
| 31-32 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến di chuyển đến (20, 6); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 51 |
| 33-34 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 50 |
| 35 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 48 |
| 36 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 46 |
| 37-38 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 45 |
| 39-40 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến di chuyển đến (16, 5); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 44 |
| 41-42 | Di chuyển hướng 0 (`0`) | (16, 5) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 43 |
| 43-44 | Di chuyển hướng 0 (`0`) | (15, 4) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 42 |
| 45 | Di chuyển hướng 5 (`5`) | (15, 3) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 40 |
| 46 | Chờ 1 bước (`-1`) | (14, 3) | (14, 3) | Dự kiến đứng yên tại (14, 3); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 8)) | 40 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 8) (ô=183)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(10, 7))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(10, 7))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 3, 3, 2, 2, 1, 1, 5, 3, 3, 4, 4, 1, 0, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (7, 8) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 51 |
| 2 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 49 |
| 3-4 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 48 |
| 5-6 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 47 |
| 7-8 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 46 |
| 9-10 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 45 |
| 11 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 1)) | 43 |
| 12-13 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (7, 1) (Spot #20 (thương hiệu=20, tọa độ=(7, 1))) | 42 |
| 14 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (7, 1) (Spot #20 (thương hiệu=20, tọa độ=(7, 1))) | 40 |
| 15 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 1)) | 38 |
| 16-17 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến di chuyển đến (8, 1); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 37 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến di chuyển đến (9, 1); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 36 |
| 20-21 | Di chuyển hướng 3 (`3`) | (9, 1) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 35 |
| 22-23 | Di chuyển hướng 3 (`3`) | (9, 2) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 34 |
| 24 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 32 |
| 25 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 30 |
| 26-27 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 29 |
| 28-29 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(13, 1)) | 28 |
| 30-31 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(12, 1)) | 27 |
| 32-33 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 26 |
| 34-35 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 25 |
| 36 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 23 |
| 37-39 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 5)) | 21 |
| 40-41 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 20 |
| 42-44 | Di chuyển hướng 0 (`0`) | (12, 4) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 18 |
| 45-46 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 17 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (12, 19) (ô=430)
- Nhiên liệu đầu ngày: 52
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #3 (thương hiệu=3, tọa độ=(9, 22))
- Mảng hành động đã gửi server: `[5, 4, 4, 4, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 2 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 3 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 4-5 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (9, 22) | 52 |
| 6-46 | Chờ 41 bước (`-41`) | (9, 22) | (9, 22) | Dự kiến đứng yên tại (9, 22); điểm hẹn của xe tuần tra #0 tại (9, 22) | 52 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (7, 8) (ô=183)
- Nhiên liệu đầu ngày: 52
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #22 (thương hiệu=22, tọa độ=(21, 6))
- Mảng hành động đã gửi server: `[1, 2, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 2, 2, 2, 2, 2, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 2 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 3-4 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 5 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 6-8 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 9-10 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 11 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 12-13 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 14 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 15-16 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 17 | Di chuyển hướng 3 (`3`) | (15, 3) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 18-19 | Di chuyển hướng 3 (`3`) | (15, 4) | (16, 5) | Dự kiến di chuyển đến (16, 5); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 20-21 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 22-23 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 24-25 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 26 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 27 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến di chuyển đến (20, 6); hướng tới điểm hẹn của xe tuần tra #2 tại (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 52 |
| 28-29 | Di chuyển hướng 2 (`2`) | (20, 6) | (21, 6) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (21, 6) | 52 |
| 30-46 | Chờ 17 bước (`-17`) | (21, 6) | (21, 6) | Dự kiến đứng yên tại (21, 6); điểm hẹn của xe tuần tra #2 tại (21, 6) | 52 |

