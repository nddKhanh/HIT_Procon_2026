# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 100
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 24 | #0 | #6 | (26, 18) | 0 | 120 |
| 40 | #1 | #6 | (27, 30) | 3 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (26, 16) (ô=538)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 7)
- Mảng hành động đã gửi server: `[4, 3, -20, 4, 5, 5, 5, 5, 5, 0, 2, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 2, 5, 0, 5, 5, 0, 0, 5, 5, 5, 0, 0, 1, 1, 5, 5, 5, 5, 4, 5, 0, 5, 5, 5, 5, 4, 5, 4, 4, 4, 4, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (26, 16) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 2 |
| 2-4 | Di chuyển hướng 3 (`3`) | (26, 17) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 0 |
| 5-24 | Chờ 20 bước (`-20`) | (26, 18) | (26, 18) | Dự kiến đứng yên tại (26, 18); mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 120 |
| 25-26 | Di chuyển hướng 4 (`4`) | (26, 18) | (26, 19) | Dự kiến đến điểm hẹn tọa độ (26, 19) | 119 |
| 27 | Di chuyển hướng 5 (`5`) | (26, 19) | (25, 19) | Dự kiến đến điểm hẹn tọa độ (25, 19) | 117 |
| 28-30 | Di chuyển hướng 5 (`5`) | (25, 19) | (24, 19) | Dự kiến đến điểm hẹn tọa độ (24, 19) | 115 |
| 31 | Di chuyển hướng 5 (`5`) | (24, 19) | (23, 19) | Dự kiến đến điểm hẹn tọa độ (23, 19) | 113 |
| 32-33 | Di chuyển hướng 5 (`5`) | (23, 19) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 112 |
| 34-35 | Di chuyển hướng 5 (`5`) | (22, 19) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 111 |
| 36 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 109 |
| 37-38 | Di chuyển hướng 2 (`2`) | (20, 18) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 108 |
| 39-41 | Di chuyển hướng 1 (`1`) | (21, 18) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 106 |
| 42-44 | Di chuyển hướng 0 (`0`) | (22, 17) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 104 |
| 45-47 | Di chuyển hướng 0 (`0`) | (21, 16) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 102 |
| 48-49 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 101 |
| 50 | Di chuyển hướng 1 (`1`) | (20, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 99 |
| 51 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 97 |
| 52 | Di chuyển hướng 0 (`0`) | (20, 12) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 95 |
| 53 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 93 |
| 54-55 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 92 |
| 56 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 90 |
| 57-58 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 89 |
| 59 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 87 |
| 60-61 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 86 |
| 62 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 84 |
| 63 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 82 |
| 64 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 80 |
| 65-66 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 79 |
| 67-68 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 78 |
| 69-70 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 77 |
| 71 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 75 |
| 72-73 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 74 |
| 74 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 72 |
| 75 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 70 |
| 76 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 68 |
| 77 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 66 |
| 78-79 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 65 |
| 80 | Di chuyển hướng 5 (`5`) | (12, 0) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 63 |
| 81 | Di chuyển hướng 5 (`5`) | (11, 0) | (10, 0) | Dự kiến đến điểm hẹn tọa độ (10, 0) | 61 |
| 82 | Di chuyển hướng 5 (`5`) | (10, 0) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 59 |
| 83 | Di chuyển hướng 4 (`4`) | (9, 0) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 57 |
| 84 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 55 |
| 85 | Di chuyển hướng 0 (`0`) | (8, 1) | (7, 0) | Dự kiến đến điểm hẹn tọa độ (7, 0) | 53 |
| 86 | Di chuyển hướng 5 (`5`) | (7, 0) | (6, 0) | Dự kiến đến điểm hẹn tọa độ (6, 0) | 51 |
| 87 | Di chuyển hướng 5 (`5`) | (6, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 49 |
| 88 | Di chuyển hướng 5 (`5`) | (5, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 47 |
| 89 | Di chuyển hướng 5 (`5`) | (4, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 45 |
| 90 | Di chuyển hướng 4 (`4`) | (3, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 43 |
| 91 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 41 |
| 92 | Di chuyển hướng 4 (`4`) | (2, 1) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 39 |
| 93-94 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 38 |
| 95-96 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 37 |
| 97 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 35 |
| 98 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 33 |
| 99 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 31 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (30, 29) (ô=958)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 11)
- Mảng hành động đã gửi server: `[4, 5, 5, -33, 5, 0, 5, 5, 5, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 1, 0, 0, 0, 0, 5, 5, 5, 4, 4, 4, 4, 4, 5, 0, 1, 0, 0, 5, 5, 5, 0, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (30, 29) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 6 |
| 2-4 | Di chuyển hướng 5 (`5`) | (29, 30) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 4 |
| 5-6 | Di chuyển hướng 5 (`5`) | (28, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 3 |
| 7-39 | Chờ 33 bước (`-33`) | (27, 30) | (27, 30) | Dự kiến đứng yên tại (27, 30); mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 120 |
| 40-41 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 119 |
| 42 | Di chuyển hướng 0 (`0`) | (26, 30) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 117 |
| 43 | Di chuyển hướng 5 (`5`) | (26, 29) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 115 |
| 44-45 | Di chuyển hướng 5 (`5`) | (25, 29) | (24, 29) | Dự kiến đến điểm hẹn tọa độ (24, 29) | 114 |
| 46-47 | Di chuyển hướng 5 (`5`) | (24, 29) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 113 |
| 48-49 | Di chuyển hướng 0 (`0`) | (23, 29) | (22, 28) | Dự kiến đến điểm hẹn tọa độ (22, 28) | 112 |
| 50-51 | Di chuyển hướng 0 (`0`) | (22, 28) | (22, 27) | Dự kiến đến điểm hẹn tọa độ (22, 27) | 111 |
| 52-53 | Di chuyển hướng 0 (`0`) | (22, 27) | (21, 26) | Dự kiến đến điểm hẹn tọa độ (21, 26) | 110 |
| 54-55 | Di chuyển hướng 0 (`0`) | (21, 26) | (21, 25) | Dự kiến đến điểm hẹn tọa độ (21, 25) | 109 |
| 56-57 | Di chuyển hướng 0 (`0`) | (21, 25) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 108 |
| 58 | Di chuyển hướng 1 (`1`) | (20, 24) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 106 |
| 59 | Di chuyển hướng 0 (`0`) | (21, 23) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 104 |
| 60 | Di chuyển hướng 0 (`0`) | (20, 22) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 102 |
| 61 | Di chuyển hướng 0 (`0`) | (20, 21) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 100 |
| 62 | Di chuyển hướng 0 (`0`) | (19, 20) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 98 |
| 63 | Di chuyển hướng 0 (`0`) | (19, 19) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 96 |
| 64 | Di chuyển hướng 5 (`5`) | (18, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 94 |
| 65 | Di chuyển hướng 0 (`0`) | (17, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 92 |
| 66 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 90 |
| 67 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 88 |
| 68 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 86 |
| 69 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 84 |
| 70 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 82 |
| 71-74 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 80 |
| 75 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 78 |
| 76 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 76 |
| 77 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 74 |
| 78-79 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 73 |
| 80-81 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 72 |
| 82 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 70 |
| 83 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 68 |
| 84 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 66 |
| 85 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 64 |
| 86-87 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 63 |
| 88-89 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 62 |
| 90-91 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 61 |
| 92 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 59 |
| 93 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 57 |
| 94-95 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 56 |
| 96-97 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 55 |
| 98 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 53 |
| 99 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 51 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 31) (ô=1003)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Địa điểm đích kế hoạch: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Mảng hành động đã gửi server: `[-100]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-99 | Chờ 100 bước (`-100`) | (11, 31) | (11, 31) | Dự kiến đứng yên tại (11, 31); mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (26, 16) (ô=538)
- Nhiên liệu đầu ngày: 78
- Mục tiêu kế hoạch từ Solver: Spot #24 (thương hiệu=16, tọa độ=(14, 28))
- Địa điểm đích kế hoạch: Spot #24 (thương hiệu=16, tọa độ=(14, 28))
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 3, 2, 3, 4, 3, 4, 4, 4, 3, 3, 4, 4, 4, 5, 5, 5, 0, 5, 5, 5, 4, 4, 5, 5, 5, 0, 0, 5, 2, 1, 1, 0, 0, 0, 0, 0, 0, 5, 0, 3, 4, 4, 4, 4, 3, 3, 3, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (26, 16) | (27, 16) | Dự kiến đến điểm hẹn tọa độ (27, 16) | 77 |
| 2-3 | Di chuyển hướng 2 (`2`) | (27, 16) | (28, 16) | Dự kiến đến điểm hẹn tọa độ (28, 16) | 76 |
| 4 | Di chuyển hướng 3 (`3`) | (28, 16) | (29, 17) | Dự kiến đến điểm hẹn tọa độ (29, 17) | 74 |
| 5 | Di chuyển hướng 3 (`3`) | (29, 17) | (29, 18) | Dự kiến đến điểm hẹn tọa độ (29, 18) | 72 |
| 6 | Di chuyển hướng 3 (`3`) | (29, 18) | (30, 19) | Dự kiến đến điểm hẹn tọa độ (30, 19) | 70 |
| 7 | Di chuyển hướng 2 (`2`) | (30, 19) | (31, 19) | Dự kiến đến điểm hẹn tọa độ (31, 19) | 68 |
| 8 | Di chuyển hướng 3 (`3`) | (31, 19) | (31, 20) | Dự kiến đến điểm hẹn tọa độ (31, 20) | 66 |
| 9 | Di chuyển hướng 4 (`4`) | (31, 20) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 64 |
| 10-11 | Di chuyển hướng 3 (`3`) | (31, 21) | (31, 22) | Dự kiến đến điểm hẹn tọa độ (31, 22) | 63 |
| 12-13 | Di chuyển hướng 4 (`4`) | (31, 22) | (31, 23) | Dự kiến đến điểm hẹn tọa độ (31, 23) | 62 |
| 14-16 | Di chuyển hướng 4 (`4`) | (31, 23) | (30, 24) | Dự kiến đến điểm hẹn tọa độ (30, 24) | 60 |
| 17-18 | Di chuyển hướng 4 (`4`) | (30, 24) | (30, 25) | Dự kiến đến điểm hẹn tọa độ (30, 25) | 59 |
| 19 | Di chuyển hướng 3 (`3`) | (30, 25) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 57 |
| 20 | Di chuyển hướng 3 (`3`) | (30, 26) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 55 |
| 21 | Di chuyển hướng 4 (`4`) | (31, 27) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 53 |
| 22 | Di chuyển hướng 4 (`4`) | (30, 28) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 51 |
| 23-24 | Di chuyển hướng 4 (`4`) | (30, 29) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 50 |
| 25-27 | Di chuyển hướng 5 (`5`) | (29, 30) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 48 |
| 28-29 | Di chuyển hướng 5 (`5`) | (28, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 47 |
| 30-31 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 46 |
| 32 | Di chuyển hướng 0 (`0`) | (26, 30) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 44 |
| 33 | Di chuyển hướng 5 (`5`) | (26, 29) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 42 |
| 34-35 | Di chuyển hướng 5 (`5`) | (25, 29) | (24, 29) | Dự kiến đến điểm hẹn tọa độ (24, 29) | 41 |
| 36-37 | Di chuyển hướng 5 (`5`) | (24, 29) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 40 |
| 38-39 | Di chuyển hướng 4 (`4`) | (23, 29) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 39 |
| 40 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 37 |
| 41-42 | Di chuyển hướng 5 (`5`) | (22, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 36 |
| 43-45 | Di chuyển hướng 5 (`5`) | (21, 31) | (20, 31) | Dự kiến đến điểm hẹn tọa độ (20, 31) | 34 |
| 46-48 | Di chuyển hướng 5 (`5`) | (20, 31) | (19, 31) | Dự kiến đến điểm hẹn tọa độ (19, 31) | 32 |
| 49-51 | Di chuyển hướng 0 (`0`) | (19, 31) | (18, 30) | Dự kiến đến điểm hẹn tọa độ (18, 30) | 30 |
| 52-54 | Di chuyển hướng 0 (`0`) | (18, 30) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 28 |
| 55 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 26 |
| 56-57 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 25 |
| 58 | Di chuyển hướng 1 (`1`) | (18, 29) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 23 |
| 59 | Di chuyển hướng 1 (`1`) | (18, 28) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 21 |
| 60 | Di chuyển hướng 0 (`0`) | (19, 27) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 19 |
| 61 | Di chuyển hướng 0 (`0`) | (18, 26) | (18, 25) | Dự kiến đến điểm hẹn tọa độ (18, 25) | 17 |
| 62-64 | Di chuyển hướng 0 (`0`) | (18, 25) | (17, 24) | Dự kiến đến điểm hẹn tọa độ (17, 24) | 15 |
| 65-66 | Di chuyển hướng 0 (`0`) | (17, 24) | (17, 23) | Dự kiến đến điểm hẹn tọa độ (17, 23) | 14 |
| 67-68 | Di chuyển hướng 0 (`0`) | (17, 23) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 13 |
| 69-70 | Di chuyển hướng 0 (`0`) | (16, 22) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 12 |
| 71-72 | Di chuyển hướng 5 (`5`) | (16, 21) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 11 |
| 73-74 | Di chuyển hướng 0 (`0`) | (15, 21) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 10 |
| 75-76 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 9 |
| 77-78 | Di chuyển hướng 4 (`4`) | (15, 21) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 8 |
| 79-80 | Di chuyển hướng 4 (`4`) | (14, 22) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 7 |
| 81-82 | Di chuyển hướng 4 (`4`) | (14, 23) | (13, 24) | Dự kiến đến điểm hẹn tọa độ (13, 24) | 6 |
| 83-85 | Di chuyển hướng 4 (`4`) | (13, 24) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 4 |
| 86-87 | Di chuyển hướng 3 (`3`) | (13, 25) | (13, 26) | Dự kiến đến điểm hẹn tọa độ (13, 26) | 3 |
| 88-89 | Di chuyển hướng 3 (`3`) | (13, 26) | (14, 27) | Dự kiến đến điểm hẹn tọa độ (14, 27) | 2 |
| 90-92 | Di chuyển hướng 3 (`3`) | (14, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 0 |
| 93-99 | Chờ 7 bước (`-7`) | (14, 28) | (14, 28) | Dự kiến đứng yên tại (14, 28); mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (3, 31) (ô=995)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Spot #29 (thương hiệu=21, tọa độ=(5, 31))
- Địa điểm đích kế hoạch: Spot #29 (thương hiệu=21, tọa độ=(5, 31))
- Mảng hành động đã gửi server: `[2, 2, -97]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 31) | (4, 31) | Dự kiến đến điểm hẹn tọa độ (4, 31) | 6 |
| 2 | Di chuyển hướng 2 (`2`) | (4, 31) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 4 |
| 3-99 | Chờ 97 bước (`-97`) | (5, 31) | (5, 31) | Dự kiến đứng yên tại (5, 31); mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 4 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (31, 0) (ô=31)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=2, tọa độ=(31, 0))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=2, tọa độ=(31, 0))
- Mảng hành động đã gửi server: `[-100]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-99 | Chờ 100 bước (`-100`) | (31, 0) | (31, 0) | Dự kiến đứng yên tại (31, 0); mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 3 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (15, 12) (ô=399)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #28 (thương hiệu=20, tọa độ=(27, 30))
- Địa điểm đích kế hoạch: Spot #28 (thương hiệu=20, tọa độ=(27, 30))
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 3, 3, 2, 3, 3, 2, 1, 2, 2, 2, 2, 2, 1, 4, 4, 4, 4, 3, 2, 3, 3, 4, 3, 4, 4, 3, 2, -60]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 120 |
| 4 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 120 |
| 5 | Di chuyển hướng 3 (`3`) | (16, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 120 |
| 6 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 120 |
| 7 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 120 |
| 8 | Di chuyển hướng 3 (`3`) | (17, 17) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 120 |
| 9 | Di chuyển hướng 2 (`2`) | (17, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 120 |
| 10 | Di chuyển hướng 3 (`3`) | (18, 18) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 120 |
| 11 | Di chuyển hướng 3 (`3`) | (19, 19) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 120 |
| 12 | Di chuyển hướng 2 (`2`) | (19, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 120 |
| 13 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 120 |
| 14 | Di chuyển hướng 2 (`2`) | (21, 19) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 120 |
| 15-16 | Di chuyển hướng 2 (`2`) | (22, 19) | (23, 19) | Dự kiến đến điểm hẹn tọa độ (23, 19) | 120 |
| 17-18 | Di chuyển hướng 2 (`2`) | (23, 19) | (24, 19) | Dự kiến đến điểm hẹn tọa độ (24, 19) | 120 |
| 19 | Di chuyển hướng 2 (`2`) | (24, 19) | (25, 19) | Dự kiến đến điểm hẹn tọa độ (25, 19) | 120 |
| 20-22 | Di chuyển hướng 2 (`2`) | (25, 19) | (26, 19) | Dự kiến đến điểm hẹn tọa độ (26, 19) | 120 |
| 23 | Di chuyển hướng 1 (`1`) | (26, 19) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 120 |
| 24-25 | Di chuyển hướng 4 (`4`) | (26, 18) | (26, 19) | Dự kiến đến điểm hẹn tọa độ (26, 19) | 120 |
| 26 | Di chuyển hướng 4 (`4`) | (26, 19) | (25, 20) | Dự kiến đến điểm hẹn tọa độ (25, 20) | 120 |
| 27 | Di chuyển hướng 4 (`4`) | (25, 20) | (25, 21) | Dự kiến đến điểm hẹn tọa độ (25, 21) | 120 |
| 28 | Di chuyển hướng 4 (`4`) | (25, 21) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 120 |
| 29 | Di chuyển hướng 3 (`3`) | (24, 22) | (25, 23) | Dự kiến đến điểm hẹn tọa độ (25, 23) | 120 |
| 30 | Di chuyển hướng 2 (`2`) | (25, 23) | (26, 23) | Dự kiến đến điểm hẹn tọa độ (26, 23) | 120 |
| 31 | Di chuyển hướng 3 (`3`) | (26, 23) | (26, 24) | Dự kiến đến điểm hẹn tọa độ (26, 24) | 120 |
| 32-33 | Di chuyển hướng 3 (`3`) | (26, 24) | (27, 25) | Dự kiến đến điểm hẹn tọa độ (27, 25) | 120 |
| 34 | Di chuyển hướng 4 (`4`) | (27, 25) | (26, 26) | Dự kiến đến điểm hẹn tọa độ (26, 26) | 120 |
| 35 | Di chuyển hướng 3 (`3`) | (26, 26) | (27, 27) | Dự kiến đến điểm hẹn tọa độ (27, 27) | 120 |
| 36 | Di chuyển hướng 4 (`4`) | (27, 27) | (26, 28) | Dự kiến đến điểm hẹn tọa độ (26, 28) | 120 |
| 37 | Di chuyển hướng 4 (`4`) | (26, 28) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 120 |
| 38 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 120 |
| 39 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 120 |
| 40-99 | Chờ 60 bước (`-60`) | (27, 30) | (27, 30) | Dự kiến đứng yên tại (27, 30); mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 120 |

