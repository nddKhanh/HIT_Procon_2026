# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 112
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 24 | #1 | #4 | (23, 1) | 0 | 64 |
| 32 | #3 | #4 | (23, 1) | 11 | 64 |
| 39 | #0 | #5 | (31, 23) | 1 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 16) (ô=524)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(5, 7))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(5, 7))
- Mảng hành động đã gửi server: `[4, 3, 2, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3, 3, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, -1, 0, 5, 5, 5, 5, 0, 0, 0, 0, 5, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 0, 5, 0, 0, 5, 0, 5, 5, 5, 0, 0, 0, 5, -28]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=2, tọa độ=(12, 17)) | 41 |
| 2-3 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (21, 24) (Spot #11 (thương hiệu=11, tọa độ=(21, 24))) | 40 |
| 4 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến di chuyển đến (13, 18); hướng tới tọa độ (21, 24) (Spot #11 (thương hiệu=11, tọa độ=(21, 24))) | 38 |
| 5 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến di chuyển đến (14, 19); hướng tới tọa độ (21, 24) (Spot #11 (thương hiệu=11, tọa độ=(21, 24))) | 36 |
| 6 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến di chuyển đến (14, 20); hướng tới tọa độ (21, 24) (Spot #11 (thương hiệu=11, tọa độ=(21, 24))) | 34 |
| 7 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến di chuyển đến (15, 21); hướng tới tọa độ (21, 24) (Spot #11 (thương hiệu=11, tọa độ=(21, 24))) | 32 |
| 8-9 | Di chuyển hướng 3 (`3`) | (15, 21) | (15, 22) | Dự kiến di chuyển đến (15, 22); hướng tới tọa độ (21, 24) (Spot #11 (thương hiệu=11, tọa độ=(21, 24))) | 31 |
| 10 | Di chuyển hướng 2 (`2`) | (15, 22) | (16, 22) | Dự kiến di chuyển đến (16, 22); hướng tới tọa độ (21, 24) (Spot #11 (thương hiệu=11, tọa độ=(21, 24))) | 29 |
| 11 | Di chuyển hướng 2 (`2`) | (16, 22) | (17, 22) | Dự kiến di chuyển đến (17, 22); hướng tới tọa độ (21, 24) (Spot #11 (thương hiệu=11, tọa độ=(21, 24))) | 27 |
| 12 | Di chuyển hướng 2 (`2`) | (17, 22) | (18, 22) | Dự kiến di chuyển đến (18, 22); hướng tới tọa độ (21, 24) (Spot #11 (thương hiệu=11, tọa độ=(21, 24))) | 25 |
| 13 | Di chuyển hướng 2 (`2`) | (18, 22) | (19, 22) | Dự kiến di chuyển đến (19, 22); hướng tới tọa độ (21, 24) (Spot #11 (thương hiệu=11, tọa độ=(21, 24))) | 23 |
| 14 | Di chuyển hướng 2 (`2`) | (19, 22) | (20, 22) | Dự kiến di chuyển đến (20, 22); hướng tới tọa độ (21, 24) (Spot #11 (thương hiệu=11, tọa độ=(21, 24))) | 21 |
| 15 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến di chuyển đến (21, 23); hướng tới tọa độ (21, 24) (Spot #11 (thương hiệu=11, tọa độ=(21, 24))) | 19 |
| 16-18 | Di chuyển hướng 3 (`3`) | (21, 23) | (21, 24) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 24)) | 17 |
| 19-20 | Di chuyển hướng 2 (`2`) | (21, 24) | (22, 24) | Dự kiến di chuyển đến (22, 24); hướng tới tọa độ (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 16 |
| 21 | Di chuyển hướng 2 (`2`) | (22, 24) | (23, 24) | Dự kiến di chuyển đến (23, 24); hướng tới tọa độ (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 14 |
| 22-24 | Di chuyển hướng 2 (`2`) | (23, 24) | (24, 24) | Dự kiến di chuyển đến (24, 24); hướng tới tọa độ (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 12 |
| 25-27 | Di chuyển hướng 2 (`2`) | (24, 24) | (25, 24) | Dự kiến di chuyển đến (25, 24); hướng tới tọa độ (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 10 |
| 28-29 | Di chuyển hướng 2 (`2`) | (25, 24) | (26, 24) | Dự kiến di chuyển đến (26, 24); hướng tới tọa độ (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 9 |
| 30 | Di chuyển hướng 2 (`2`) | (26, 24) | (27, 24) | Dự kiến di chuyển đến (27, 24); hướng tới tọa độ (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 7 |
| 31-32 | Di chuyển hướng 1 (`1`) | (27, 24) | (28, 23) | Dự kiến di chuyển đến (28, 23); hướng tới tọa độ (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 6 |
| 33-34 | Di chuyển hướng 2 (`2`) | (28, 23) | (29, 23) | Dự kiến di chuyển đến (29, 23); hướng tới tọa độ (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 5 |
| 35-37 | Di chuyển hướng 2 (`2`) | (29, 23) | (30, 23) | Dự kiến di chuyển đến (30, 23); hướng tới tọa độ (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 3 |
| 38 | Di chuyển hướng 2 (`2`) | (30, 23) | (31, 23) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(31, 23)) | 64 |
| 39 | Chờ 1 bước (`-1`) | (31, 23) | (31, 23) | Dự kiến đứng yên tại (31, 23); hướng tới tọa độ (31, 23) | 64 |
| 40-41 | Di chuyển hướng 0 (`0`) | (31, 23) | (30, 22) | Dự kiến di chuyển đến (30, 22); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 63 |
| 42 | Di chuyển hướng 5 (`5`) | (30, 22) | (29, 22) | Dự kiến di chuyển đến (29, 22); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 61 |
| 43 | Di chuyển hướng 5 (`5`) | (29, 22) | (28, 22) | Dự kiến di chuyển đến (28, 22); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 59 |
| 44 | Di chuyển hướng 5 (`5`) | (28, 22) | (27, 22) | Dự kiến di chuyển đến (27, 22); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 57 |
| 45 | Di chuyển hướng 5 (`5`) | (27, 22) | (26, 22) | Dự kiến di chuyển đến (26, 22); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 55 |
| 46 | Di chuyển hướng 0 (`0`) | (26, 22) | (26, 21) | Dự kiến di chuyển đến (26, 21); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 53 |
| 47 | Di chuyển hướng 0 (`0`) | (26, 21) | (25, 20) | Dự kiến di chuyển đến (25, 20); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 51 |
| 48-49 | Di chuyển hướng 0 (`0`) | (25, 20) | (25, 19) | Dự kiến di chuyển đến (25, 19); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 50 |
| 50-51 | Di chuyển hướng 0 (`0`) | (25, 19) | (24, 18) | Dự kiến di chuyển đến (24, 18); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 49 |
| 52 | Di chuyển hướng 5 (`5`) | (24, 18) | (23, 18) | Dự kiến di chuyển đến (23, 18); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 47 |
| 53 | Di chuyển hướng 0 (`0`) | (23, 18) | (23, 17) | Dự kiến di chuyển đến (23, 17); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 45 |
| 54-55 | Di chuyển hướng 0 (`0`) | (23, 17) | (22, 16) | Dự kiến di chuyển đến (22, 16); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 44 |
| 56 | Di chuyển hướng 0 (`0`) | (22, 16) | (22, 15) | Dự kiến di chuyển đến (22, 15); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 42 |
| 57 | Di chuyển hướng 0 (`0`) | (22, 15) | (21, 14) | Dự kiến di chuyển đến (21, 14); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 40 |
| 58 | Di chuyển hướng 5 (`5`) | (21, 14) | (20, 14) | Dự kiến di chuyển đến (20, 14); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 38 |
| 59 | Di chuyển hướng 5 (`5`) | (20, 14) | (19, 14) | Dự kiến di chuyển đến (19, 14); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 36 |
| 60 | Di chuyển hướng 5 (`5`) | (19, 14) | (18, 14) | Dự kiến di chuyển đến (18, 14); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 34 |
| 61 | Di chuyển hướng 5 (`5`) | (18, 14) | (17, 14) | Dự kiến di chuyển đến (17, 14); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 32 |
| 62 | Di chuyển hướng 5 (`5`) | (17, 14) | (16, 14) | Dự kiến di chuyển đến (16, 14); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 30 |
| 63 | Di chuyển hướng 5 (`5`) | (16, 14) | (15, 14) | Dự kiến di chuyển đến (15, 14); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 28 |
| 64 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 26 |
| 65 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 24 |
| 66 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến di chuyển đến (13, 13); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 22 |
| 67-68 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 21 |
| 69-71 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 11)) | 19 |
| 72-73 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 18 |
| 74-75 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới tọa độ (5, 7) (Spot #2 (thương hiệu=2, tọa độ=(5, 7))) | 17 |
| 76 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (5, 7) (Spot #2 (thương hiệu=2, tọa độ=(5, 7))) | 15 |
| 77 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (5, 7) (Spot #2 (thương hiệu=2, tọa độ=(5, 7))) | 13 |
| 78 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (5, 7) (Spot #2 (thương hiệu=2, tọa độ=(5, 7))) | 11 |
| 79 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (5, 7) (Spot #2 (thương hiệu=2, tọa độ=(5, 7))) | 9 |
| 80-81 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (5, 7) (Spot #2 (thương hiệu=2, tọa độ=(5, 7))) | 8 |
| 82 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (5, 7) (Spot #2 (thương hiệu=2, tọa độ=(5, 7))) | 6 |
| 83 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 7)) | 4 |
| 84-111 | Chờ 28 bước (`-28`) | (5, 7) | (5, 7) | Dự kiến đứng yên tại (5, 7); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 7)) | 4 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (29, 6) (ô=221)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=1, tọa độ=(12, 16))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=1, tọa độ=(12, 16))
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 4, 4, 5, 0, 1, 0, 0, 0, 0, 1, 1, -1, 5, 4, 5, 5, 4, 4, 4, 4, 5, 5, 4, 4, 4, 4, 5, 4, 5, 0, 5, 5, 5, 4, 1, 2, 2, 3, 3, 2, 3, 2, 4, 3, 4, -44]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (29, 6) | (28, 6) | Dự kiến di chuyển đến (28, 6); hướng tới tọa độ (25, 9) (Spot #15 (thương hiệu=3, tọa độ=(25, 9))) | 25 |
| 1 | Di chuyển hướng 5 (`5`) | (28, 6) | (27, 6) | Dự kiến di chuyển đến (27, 6); hướng tới tọa độ (25, 9) (Spot #15 (thương hiệu=3, tọa độ=(25, 9))) | 23 |
| 2 | Di chuyển hướng 5 (`5`) | (27, 6) | (26, 6) | Dự kiến di chuyển đến (26, 6); hướng tới tọa độ (25, 9) (Spot #15 (thương hiệu=3, tọa độ=(25, 9))) | 21 |
| 3 | Di chuyển hướng 4 (`4`) | (26, 6) | (26, 7) | Dự kiến di chuyển đến (26, 7); hướng tới tọa độ (25, 9) (Spot #15 (thương hiệu=3, tọa độ=(25, 9))) | 19 |
| 4 | Di chuyển hướng 4 (`4`) | (26, 7) | (25, 8) | Dự kiến di chuyển đến (25, 8); hướng tới tọa độ (25, 9) (Spot #15 (thương hiệu=3, tọa độ=(25, 9))) | 17 |
| 5-7 | Di chuyển hướng 4 (`4`) | (25, 8) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=3, tọa độ=(25, 9)) | 15 |
| 8-9 | Di chuyển hướng 5 (`5`) | (25, 9) | (24, 9) | Dự kiến di chuyển đến (24, 9); hướng tới tọa độ (24, 7) (Spot #4 (thương hiệu=4, tọa độ=(24, 7))) | 14 |
| 10-12 | Di chuyển hướng 0 (`0`) | (24, 9) | (23, 8) | Dự kiến di chuyển đến (23, 8); hướng tới tọa độ (24, 7) (Spot #4 (thương hiệu=4, tọa độ=(24, 7))) | 12 |
| 13-14 | Di chuyển hướng 1 (`1`) | (23, 8) | (24, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(24, 7)) | 11 |
| 15-16 | Di chuyển hướng 0 (`0`) | (24, 7) | (23, 6) | Dự kiến di chuyển đến (23, 6); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 10 |
| 17 | Di chuyển hướng 0 (`0`) | (23, 6) | (23, 5) | Dự kiến di chuyển đến (23, 5); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 8 |
| 18-20 | Di chuyển hướng 0 (`0`) | (23, 5) | (22, 4) | Dự kiến di chuyển đến (22, 4); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 6 |
| 21 | Di chuyển hướng 0 (`0`) | (22, 4) | (22, 3) | Dự kiến di chuyển đến (22, 3); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 4 |
| 22 | Di chuyển hướng 1 (`1`) | (22, 3) | (22, 2) | Dự kiến di chuyển đến (22, 2); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 2 |
| 23 | Di chuyển hướng 1 (`1`) | (22, 2) | (23, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(23, 1)) | 64 |
| 24 | Chờ 1 bước (`-1`) | (23, 1) | (23, 1) | Dự kiến đứng yên tại (23, 1); hướng tới tọa độ (23, 1) | 64 |
| 25-26 | Di chuyển hướng 5 (`5`) | (23, 1) | (22, 1) | Dự kiến di chuyển đến (22, 1); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 63 |
| 27 | Di chuyển hướng 4 (`4`) | (22, 1) | (21, 2) | Dự kiến di chuyển đến (21, 2); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 61 |
| 28 | Di chuyển hướng 5 (`5`) | (21, 2) | (20, 2) | Dự kiến di chuyển đến (20, 2); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 59 |
| 29 | Di chuyển hướng 5 (`5`) | (20, 2) | (19, 2) | Dự kiến di chuyển đến (19, 2); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 57 |
| 30 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến di chuyển đến (19, 3); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 55 |
| 31-32 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến di chuyển đến (18, 4); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 54 |
| 33 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến di chuyển đến (18, 5); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 52 |
| 34 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 50 |
| 35 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 48 |
| 36 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến di chuyển đến (15, 6); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 46 |
| 37 | Di chuyển hướng 4 (`4`) | (15, 6) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 44 |
| 38-39 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 43 |
| 40 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 41 |
| 41 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 39 |
| 42 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến di chuyển đến (12, 10); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 37 |
| 43 | Di chuyển hướng 4 (`4`) | (12, 10) | (12, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 11)) | 35 |
| 44-45 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 34 |
| 46-47 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới tọa độ (7, 11) (Spot #10 (thương hiệu=10, tọa độ=(7, 11))) | 33 |
| 48 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (7, 11) (Spot #10 (thương hiệu=10, tọa độ=(7, 11))) | 31 |
| 49 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (7, 11) (Spot #10 (thương hiệu=10, tọa độ=(7, 11))) | 29 |
| 50 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (7, 11) (Spot #10 (thương hiệu=10, tọa độ=(7, 11))) | 27 |
| 51 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 11)) | 25 |
| 52-53 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (13, 13) (Spot #12 (thương hiệu=0, tọa độ=(13, 13))) | 24 |
| 54 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (13, 13) (Spot #12 (thương hiệu=0, tọa độ=(13, 13))) | 22 |
| 55 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (13, 13) (Spot #12 (thương hiệu=0, tọa độ=(13, 13))) | 20 |
| 56 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (13, 13) (Spot #12 (thương hiệu=0, tọa độ=(13, 13))) | 18 |
| 57 | Di chuyển hướng 3 (`3`) | (10, 11) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (13, 13) (Spot #12 (thương hiệu=0, tọa độ=(13, 13))) | 16 |
| 58 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (13, 13) (Spot #12 (thương hiệu=0, tọa độ=(13, 13))) | 14 |
| 59-60 | Di chuyển hướng 3 (`3`) | (11, 12) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới tọa độ (13, 13) (Spot #12 (thương hiệu=0, tọa độ=(13, 13))) | 13 |
| 61-62 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 12 |
| 63-64 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến di chuyển đến (12, 14); hướng tới tọa độ (12, 16) (Spot #13 (thương hiệu=1, tọa độ=(12, 16))) | 11 |
| 65 | Di chuyển hướng 3 (`3`) | (12, 14) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (12, 16) (Spot #13 (thương hiệu=1, tọa độ=(12, 16))) | 9 |
| 66-67 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 8 |
| 68-111 | Chờ 44 bước (`-44`) | (12, 16) | (12, 16) | Dự kiến đứng yên tại (12, 16); mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 8 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 12) (ô=395)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(8, 23))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(8, 23))
- Mảng hành động đã gửi server: `[3, 2, 0, 0, 5, 0, 5, 5, 5, 4, 1, 2, 2, 3, 3, 2, 3, 3, 3, 4, 4, 4, 5, 4, 3, 4, 4, 5, 4, -70]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 12) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới tọa độ (13, 13) (Spot #12 (thương hiệu=0, tọa độ=(13, 13))) | 47 |
| 2-3 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 46 |
| 4-5 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới tọa độ (12, 11) (Spot #9 (thương hiệu=9, tọa độ=(12, 11))) | 45 |
| 6-8 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 11)) | 43 |
| 9-10 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 42 |
| 11-12 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới tọa độ (7, 11) (Spot #10 (thương hiệu=10, tọa độ=(7, 11))) | 41 |
| 13 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (7, 11) (Spot #10 (thương hiệu=10, tọa độ=(7, 11))) | 39 |
| 14 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (7, 11) (Spot #10 (thương hiệu=10, tọa độ=(7, 11))) | 37 |
| 15 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (7, 11) (Spot #10 (thương hiệu=10, tọa độ=(7, 11))) | 35 |
| 16 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 11)) | 33 |
| 17-18 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (12, 16) (Spot #13 (thương hiệu=1, tọa độ=(12, 16))) | 32 |
| 19 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (12, 16) (Spot #13 (thương hiệu=1, tọa độ=(12, 16))) | 30 |
| 20 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (12, 16) (Spot #13 (thương hiệu=1, tọa độ=(12, 16))) | 28 |
| 21 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (12, 16) (Spot #13 (thương hiệu=1, tọa độ=(12, 16))) | 26 |
| 22 | Di chuyển hướng 3 (`3`) | (10, 11) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (12, 16) (Spot #13 (thương hiệu=1, tọa độ=(12, 16))) | 24 |
| 23 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (12, 16) (Spot #13 (thương hiệu=1, tọa độ=(12, 16))) | 22 |
| 24-25 | Di chuyển hướng 3 (`3`) | (11, 12) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới tọa độ (12, 16) (Spot #13 (thương hiệu=1, tọa độ=(12, 16))) | 21 |
| 26-27 | Di chuyển hướng 3 (`3`) | (12, 13) | (12, 14) | Dự kiến di chuyển đến (12, 14); hướng tới tọa độ (12, 16) (Spot #13 (thương hiệu=1, tọa độ=(12, 16))) | 20 |
| 28 | Di chuyển hướng 3 (`3`) | (12, 14) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (12, 16) (Spot #13 (thương hiệu=1, tọa độ=(12, 16))) | 18 |
| 29-30 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 17 |
| 31-32 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=2, tọa độ=(12, 17)) | 16 |
| 33-34 | Di chuyển hướng 4 (`4`) | (12, 17) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (8, 23) (Spot #3 (thương hiệu=3, tọa độ=(8, 23))) | 15 |
| 35 | Di chuyển hướng 5 (`5`) | (11, 18) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới tọa độ (8, 23) (Spot #3 (thương hiệu=3, tọa độ=(8, 23))) | 13 |
| 36 | Di chuyển hướng 4 (`4`) | (10, 18) | (10, 19) | Dự kiến di chuyển đến (10, 19); hướng tới tọa độ (8, 23) (Spot #3 (thương hiệu=3, tọa độ=(8, 23))) | 11 |
| 37 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (8, 23) (Spot #3 (thương hiệu=3, tọa độ=(8, 23))) | 9 |
| 38 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (8, 23) (Spot #3 (thương hiệu=3, tọa độ=(8, 23))) | 7 |
| 39 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến di chuyển đến (9, 22); hướng tới tọa độ (8, 23) (Spot #3 (thương hiệu=3, tọa độ=(8, 23))) | 5 |
| 40 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến di chuyển đến (8, 22); hướng tới tọa độ (8, 23) (Spot #3 (thương hiệu=3, tọa độ=(8, 23))) | 3 |
| 41 | Di chuyển hướng 4 (`4`) | (8, 22) | (8, 23) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 23)) | 1 |
| 42-111 | Chờ 70 bước (`-70`) | (8, 23) | (8, 23) | Dự kiến đứng yên tại (8, 23); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 23)) | 1 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (13, 13) (ô=429)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(28, 1))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(28, 1))
- Mảng hành động đã gửi server: `[4, 3, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, -70]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến di chuyển đến (12, 14); hướng tới tọa độ (12, 16) (Spot #13 (thương hiệu=1, tọa độ=(12, 16))) | 45 |
| 2 | Di chuyển hướng 3 (`3`) | (12, 14) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (12, 16) (Spot #13 (thương hiệu=1, tọa độ=(12, 16))) | 43 |
| 3-4 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 42 |
| 5-6 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 41 |
| 7-8 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến di chuyển đến (13, 14); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 40 |
| 9 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 38 |
| 10 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 36 |
| 11 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 34 |
| 12-13 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 33 |
| 14 | Di chuyển hướng 1 (`1`) | (15, 10) | (16, 9) | Dự kiến di chuyển đến (16, 9); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 31 |
| 15-17 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 29 |
| 18-20 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến di chuyển đến (17, 7); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 27 |
| 21-22 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 26 |
| 23 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến di chuyển đến (18, 5); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 24 |
| 24 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến di chuyển đến (18, 4); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 22 |
| 25 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến di chuyển đến (19, 3); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 20 |
| 26-27 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến di chuyển đến (19, 2); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 19 |
| 28 | Di chuyển hướng 2 (`2`) | (19, 2) | (20, 2) | Dự kiến di chuyển đến (20, 2); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 17 |
| 29 | Di chuyển hướng 2 (`2`) | (20, 2) | (21, 2) | Dự kiến di chuyển đến (21, 2); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 15 |
| 30 | Di chuyển hướng 1 (`1`) | (21, 2) | (22, 1) | Dự kiến di chuyển đến (22, 1); hướng tới tọa độ (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 13 |
| 31 | Di chuyển hướng 2 (`2`) | (22, 1) | (23, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(23, 1)) | 64 |
| 32-33 | Di chuyển hướng 2 (`2`) | (23, 1) | (24, 1) | Dự kiến di chuyển đến (24, 1); hướng tới tọa độ (28, 1) (Spot #8 (thương hiệu=8, tọa độ=(28, 1))) | 63 |
| 34-35 | Di chuyển hướng 2 (`2`) | (24, 1) | (25, 1) | Dự kiến di chuyển đến (25, 1); hướng tới tọa độ (28, 1) (Spot #8 (thương hiệu=8, tọa độ=(28, 1))) | 62 |
| 36-37 | Di chuyển hướng 2 (`2`) | (25, 1) | (26, 1) | Dự kiến di chuyển đến (26, 1); hướng tới tọa độ (28, 1) (Spot #8 (thương hiệu=8, tọa độ=(28, 1))) | 61 |
| 38 | Di chuyển hướng 2 (`2`) | (26, 1) | (27, 1) | Dự kiến di chuyển đến (27, 1); hướng tới tọa độ (28, 1) (Spot #8 (thương hiệu=8, tọa độ=(28, 1))) | 59 |
| 39-41 | Di chuyển hướng 2 (`2`) | (27, 1) | (28, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(28, 1)) | 57 |
| 42-111 | Chờ 70 bước (`-70`) | (28, 1) | (28, 1) | Dự kiến đứng yên tại (28, 1); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(28, 1)) | 57 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (5, 7) (ô=229)
- Nhiên liệu đầu ngày: 64
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #6 (thương hiệu=6, tọa độ=(23, 1))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 1, 2, -89]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 2 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 3 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 4 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 5 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 6 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 7 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 8 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 9 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 10 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 11 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến di chuyển đến (15, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 12 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 13 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 14 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến di chuyển đến (18, 5); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 15 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến di chuyển đến (18, 4); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 16 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến di chuyển đến (19, 3); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 17-18 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến di chuyển đến (19, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 19 | Di chuyển hướng 2 (`2`) | (19, 2) | (20, 2) | Dự kiến di chuyển đến (20, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 20 | Di chuyển hướng 2 (`2`) | (20, 2) | (21, 2) | Dự kiến di chuyển đến (21, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 21 | Di chuyển hướng 1 (`1`) | (21, 2) | (22, 1) | Dự kiến di chuyển đến (22, 1); hướng tới điểm hẹn của xe tuần tra #1 tại (23, 1) (Spot #6 (thương hiệu=6, tọa độ=(23, 1))) | 64 |
| 22 | Di chuyển hướng 2 (`2`) | (22, 1) | (23, 1) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (23, 1) | 64 |
| 23-111 | Chờ 89 bước (`-89`) | (23, 1) | (23, 1) | Dự kiến đứng yên tại (23, 1); điểm hẹn của xe tuần tra #1 tại (23, 1) | 64 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (18, 10) (ô=338)
- Nhiên liệu đầu ngày: 64
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #5 (thương hiệu=5, tọa độ=(31, 23))
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 3, 4, 3, 2, 2, 2, 3, 3, 4, 3, 2, 2, 2, 3, 3, 4, 3, 3, -87]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 2 (`2`) | (18, 10) | (19, 10) | Dự kiến di chuyển đến (19, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 4 | Di chuyển hướng 2 (`2`) | (19, 10) | (20, 10) | Dự kiến di chuyển đến (20, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 5 | Di chuyển hướng 2 (`2`) | (20, 10) | (21, 10) | Dự kiến di chuyển đến (21, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 6 | Di chuyển hướng 3 (`3`) | (21, 10) | (22, 11) | Dự kiến di chuyển đến (22, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 7 | Di chuyển hướng 3 (`3`) | (22, 11) | (22, 12) | Dự kiến di chuyển đến (22, 12); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 8 | Di chuyển hướng 4 (`4`) | (22, 12) | (22, 13) | Dự kiến di chuyển đến (22, 13); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 9 | Di chuyển hướng 3 (`3`) | (22, 13) | (22, 14) | Dự kiến di chuyển đến (22, 14); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 10 | Di chuyển hướng 2 (`2`) | (22, 14) | (23, 14) | Dự kiến di chuyển đến (23, 14); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 11 | Di chuyển hướng 2 (`2`) | (23, 14) | (24, 14) | Dự kiến di chuyển đến (24, 14); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 12 | Di chuyển hướng 2 (`2`) | (24, 14) | (25, 14) | Dự kiến di chuyển đến (25, 14); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 13 | Di chuyển hướng 3 (`3`) | (25, 14) | (26, 15) | Dự kiến di chuyển đến (26, 15); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 14 | Di chuyển hướng 3 (`3`) | (26, 15) | (26, 16) | Dự kiến di chuyển đến (26, 16); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 15 | Di chuyển hướng 4 (`4`) | (26, 16) | (26, 17) | Dự kiến di chuyển đến (26, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 16 | Di chuyển hướng 3 (`3`) | (26, 17) | (26, 18) | Dự kiến di chuyển đến (26, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 17 | Di chuyển hướng 2 (`2`) | (26, 18) | (27, 18) | Dự kiến di chuyển đến (27, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 18 | Di chuyển hướng 2 (`2`) | (27, 18) | (28, 18) | Dự kiến di chuyển đến (28, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 19 | Di chuyển hướng 2 (`2`) | (28, 18) | (29, 18) | Dự kiến di chuyển đến (29, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 20 | Di chuyển hướng 3 (`3`) | (29, 18) | (30, 19) | Dự kiến di chuyển đến (30, 19); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 21 | Di chuyển hướng 3 (`3`) | (30, 19) | (30, 20) | Dự kiến di chuyển đến (30, 20); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 22 | Di chuyển hướng 4 (`4`) | (30, 20) | (30, 21) | Dự kiến di chuyển đến (30, 21); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 23 | Di chuyển hướng 3 (`3`) | (30, 21) | (30, 22) | Dự kiến di chuyển đến (30, 22); hướng tới điểm hẹn của xe tuần tra #0 tại (31, 23) (Spot #5 (thương hiệu=5, tọa độ=(31, 23))) | 64 |
| 24 | Di chuyển hướng 3 (`3`) | (30, 22) | (31, 23) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (31, 23) | 64 |
| 25-111 | Chờ 87 bước (`-87`) | (31, 23) | (31, 23) | Dự kiến đứng yên tại (31, 23); điểm hẹn của xe tuần tra #0 tại (31, 23) | 64 |

