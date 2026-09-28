# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 160
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 11 | #4 | #6 | (11, 23) | 0 | 64 |
| 13 | #2 | #6 | (11, 22) | 42 | 64 |
| 14 | #4 | #6 | (11, 22) | 63 | 64 |
| 16 | #4 | #6 | (12, 22) | 63 | 64 |
| 18 | #4 | #6 | (13, 21) | 63 | 64 |
| 21 | #4 | #6 | (14, 19) | 61 | 64 |
| 31 | #4 | #6 | (16, 13) | 56 | 64 |
| 34 | #4 | #6 | (16, 11) | 61 | 64 |
| 36 | #4 | #6 | (15, 10) | 63 | 64 |
| 36 | #5 | #7 | (20, 2) | 0 | 64 |
| 38 | #4 | #6 | (16, 9) | 63 | 64 |
| 40 | #4 | #6 | (16, 8) | 63 | 64 |
| 43 | #4 | #6 | (16, 6) | 61 | 64 |
| 50 | #0 | #6 | (16, 6) | 15 | 64 |
| 131 | #4 | #7 | (20, 2) | 6 | 64 |
| 138 | #0 | #7 | (20, 2) | 6 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 30) (ô=980)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(23, 3))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(23, 3))
- Mảng hành động đã gửi server: `[0, 1, 1, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 1, 1, 1, 1, 1, 2, 1, 1, 1, 0, 1, 0, 0, 1, 0, 4, 5, 5, 4, 5, 5, 5, 5, 5, 5, 0, 0, 5, 5, 0, 0, 4, 5, 5, 0, 1, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 3, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 30) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 52 |
| 2-3 | Di chuyển hướng 1 (`1`) | (20, 29) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 51 |
| 4 | Di chuyển hướng 1 (`1`) | (20, 28) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 49 |
| 5-6 | Di chuyển hướng 0 (`0`) | (21, 27) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 48 |
| 7-8 | Di chuyển hướng 0 (`0`) | (20, 26) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 47 |
| 9 | Di chuyển hướng 5 (`5`) | (20, 25) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 45 |
| 10-11 | Di chuyển hướng 0 (`0`) | (19, 25) | (18, 24) | Dự kiến đến điểm hẹn tọa độ (18, 24) | 44 |
| 12-13 | Di chuyển hướng 0 (`0`) | (18, 24) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 43 |
| 14-15 | Di chuyển hướng 0 (`0`) | (18, 23) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 42 |
| 16-17 | Di chuyển hướng 0 (`0`) | (17, 22) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 41 |
| 18-19 | Di chuyển hướng 0 (`0`) | (17, 21) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 40 |
| 20 | Di chuyển hướng 0 (`0`) | (16, 20) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 38 |
| 21-22 | Di chuyển hướng 0 (`0`) | (16, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 36 |
| 23-24 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 35 |
| 25-26 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 34 |
| 27-28 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 18)) | 33 |
| 29-30 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 32 |
| 31-32 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 31 |
| 33-34 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 30 |
| 35 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 28 |
| 36-37 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 27 |
| 38 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 25 |
| 39 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 23 |
| 40 | Di chuyển hướng 1 (`1`) | (15, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 21 |
| 41-42 | Di chuyển hướng 1 (`1`) | (16, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 20 |
| 43-44 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 19 |
| 45-46 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 18 |
| 47-48 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 17 |
| 49 | Di chuyển hướng 0 (`0`) | (17, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 64 |
| 50-51 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 63 |
| 52 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 61 |
| 53-54 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 60 |
| 55-56 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 59 |
| 57-59 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 57 |
| 60-61 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 56 |
| 62-63 | Di chuyển hướng 4 (`4`) | (13, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 55 |
| 64-65 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 54 |
| 66 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 52 |
| 67-68 | Di chuyển hướng 5 (`5`) | (11, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 51 |
| 69-70 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 50 |
| 71-72 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 49 |
| 73 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 47 |
| 74-75 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 46 |
| 76 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 44 |
| 77-78 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 43 |
| 79-80 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 42 |
| 81-82 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 41 |
| 83-84 | Di chuyển hướng 0 (`0`) | (3, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 40 |
| 85-86 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 39 |
| 87-88 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 38 |
| 89-90 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 37 |
| 91-92 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 36 |
| 93-94 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 35 |
| 95-96 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 34 |
| 97-98 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 32 |
| 99-100 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 30 |
| 101-102 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 29 |
| 103-104 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 28 |
| 105 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 26 |
| 106-107 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 25 |
| 108-109 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 24 |
| 110-111 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 23 |
| 112-113 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 21 |
| 114-115 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 19 |
| 116-117 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 18 |
| 118-120 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 16 |
| 121-122 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 14 |
| 123-124 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 13 |
| 125-126 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 12 |
| 127-128 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 11 |
| 129-130 | Di chuyển hướng 2 (`2`) | (17, 1) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 10 |
| 131-132 | Di chuyển hướng 2 (`2`) | (18, 1) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 9 |
| 133-135 | Di chuyển hướng 2 (`2`) | (19, 1) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 7 |
| 136-137 | Di chuyển hướng 3 (`3`) | (20, 1) | (20, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 64 |
| 138-139 | Di chuyển hướng 2 (`2`) | (20, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 63 |
| 140-142 | Di chuyển hướng 2 (`2`) | (21, 2) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 61 |
| 143-144 | Di chuyển hướng 3 (`3`) | (22, 2) | (23, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 60 |
| 145-159 | Chờ 15 bước (`-15`) | (23, 3) | (23, 3) | Dự kiến đứng yên tại (23, 3); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 60 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 20) (ô=658)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(2, 28))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(2, 28))
- Mảng hành động đã gửi server: `[3, 3, 2, 3, 3, 3, 3, 4, 4, 4, 4, 0, 5, 0, 0, 0, 5, 0, 5, 5, 5, 0, 5, 0, 5, 5, 0, 5, 4, 4, 4, 4, 5, 5, 4, 4, -89]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (18, 20) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 42 |
| 2-4 | Di chuyển hướng 3 (`3`) | (19, 21) | (19, 22) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 40 |
| 5-6 | Di chuyển hướng 2 (`2`) | (19, 22) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 39 |
| 7-8 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 38 |
| 9-10 | Di chuyển hướng 3 (`3`) | (21, 23) | (21, 24) | Dự kiến đến điểm hẹn tọa độ (21, 24) | 37 |
| 11-12 | Di chuyển hướng 3 (`3`) | (21, 24) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 36 |
| 13-14 | Di chuyển hướng 3 (`3`) | (22, 25) | (22, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(22, 26)) | 35 |
| 15-16 | Di chuyển hướng 4 (`4`) | (22, 26) | (22, 27) | Dự kiến đến điểm hẹn tọa độ (22, 27) | 34 |
| 17-19 | Di chuyển hướng 4 (`4`) | (22, 27) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 32 |
| 20-21 | Di chuyển hướng 4 (`4`) | (21, 28) | (21, 29) | Dự kiến đến điểm hẹn tọa độ (21, 29) | 31 |
| 22-23 | Di chuyển hướng 4 (`4`) | (21, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 30 |
| 24-25 | Di chuyển hướng 0 (`0`) | (20, 30) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 29 |
| 26-27 | Di chuyển hướng 5 (`5`) | (20, 29) | (19, 29) | Dự kiến đến điểm hẹn tọa độ (19, 29) | 28 |
| 28 | Di chuyển hướng 0 (`0`) | (19, 29) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 26 |
| 29-30 | Di chuyển hướng 0 (`0`) | (18, 28) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 25 |
| 31 | Di chuyển hướng 0 (`0`) | (18, 27) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 23 |
| 32-33 | Di chuyển hướng 5 (`5`) | (17, 26) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 22 |
| 34-35 | Di chuyển hướng 0 (`0`) | (16, 26) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 21 |
| 36-37 | Di chuyển hướng 5 (`5`) | (16, 25) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 20 |
| 38-40 | Di chuyển hướng 5 (`5`) | (15, 25) | (14, 25) | Dự kiến đến điểm hẹn tọa độ (14, 25) | 18 |
| 41 | Di chuyển hướng 5 (`5`) | (14, 25) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 16 |
| 42-43 | Di chuyển hướng 0 (`0`) | (13, 25) | (12, 24) | Dự kiến đến điểm hẹn tọa độ (12, 24) | 15 |
| 44-45 | Di chuyển hướng 5 (`5`) | (12, 24) | (11, 24) | Dự kiến đến điểm hẹn tọa độ (11, 24) | 14 |
| 46-47 | Di chuyển hướng 0 (`0`) | (11, 24) | (11, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 13 |
| 48-49 | Di chuyển hướng 5 (`5`) | (11, 23) | (10, 23) | Dự kiến đến điểm hẹn tọa độ (10, 23) | 12 |
| 50 | Di chuyển hướng 5 (`5`) | (10, 23) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 10 |
| 51-52 | Di chuyển hướng 0 (`0`) | (9, 23) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 9 |
| 53-54 | Di chuyển hướng 5 (`5`) | (8, 22) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 8 |
| 55-56 | Di chuyển hướng 4 (`4`) | (7, 22) | (7, 23) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 23)) | 7 |
| 57-58 | Di chuyển hướng 4 (`4`) | (7, 23) | (6, 24) | Dự kiến đến điểm hẹn tọa độ (6, 24) | 6 |
| 59-60 | Di chuyển hướng 4 (`4`) | (6, 24) | (6, 25) | Dự kiến đến điểm hẹn tọa độ (6, 25) | 5 |
| 61-62 | Di chuyển hướng 4 (`4`) | (6, 25) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 4 |
| 63-64 | Di chuyển hướng 5 (`5`) | (5, 26) | (4, 26) | Dự kiến đến điểm hẹn tọa độ (4, 26) | 3 |
| 65-66 | Di chuyển hướng 5 (`5`) | (4, 26) | (3, 26) | Dự kiến đến điểm hẹn tọa độ (3, 26) | 2 |
| 67-68 | Di chuyển hướng 4 (`4`) | (3, 26) | (3, 27) | Dự kiến đến điểm hẹn tọa độ (3, 27) | 1 |
| 69-70 | Di chuyển hướng 4 (`4`) | (3, 27) | (2, 28) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 28)) | 0 |
| 71-159 | Chờ 89 bước (`-89`) | (2, 28) | (2, 28) | Dự kiến đứng yên tại (2, 28); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 28)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (18, 20) (ô=658)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(19, 22))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(19, 22))
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 4, 5, 5, 5, 4, 3, 3, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 1, 2, 4, 4, 4, 4, 0, 1, 0, 0, 1, 0, 0, 1, -94]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (18, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 52 |
| 2-3 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 51 |
| 4 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 49 |
| 5 | Di chuyển hướng 4 (`4`) | (15, 20) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 47 |
| 6-7 | Di chuyển hướng 4 (`4`) | (15, 21) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 46 |
| 8-9 | Di chuyển hướng 5 (`5`) | (14, 22) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 45 |
| 10 | Di chuyển hướng 5 (`5`) | (13, 22) | (12, 22) | Dự kiến đến điểm hẹn tọa độ (12, 22) | 43 |
| 11-12 | Di chuyển hướng 5 (`5`) | (12, 22) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 64 |
| 13-14 | Di chuyển hướng 4 (`4`) | (11, 22) | (11, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 63 |
| 15-16 | Di chuyển hướng 3 (`3`) | (11, 23) | (11, 24) | Dự kiến đến điểm hẹn tọa độ (11, 24) | 62 |
| 17-18 | Di chuyển hướng 3 (`3`) | (11, 24) | (12, 25) | Dự kiến đến điểm hẹn tọa độ (12, 25) | 61 |
| 19-20 | Di chuyển hướng 2 (`2`) | (12, 25) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 60 |
| 21-22 | Di chuyển hướng 2 (`2`) | (13, 25) | (14, 25) | Dự kiến đến điểm hẹn tọa độ (14, 25) | 59 |
| 23 | Di chuyển hướng 2 (`2`) | (14, 25) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 57 |
| 24-26 | Di chuyển hướng 2 (`2`) | (15, 25) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 55 |
| 27-28 | Di chuyển hướng 3 (`3`) | (16, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 54 |
| 29-30 | Di chuyển hướng 2 (`2`) | (16, 26) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 53 |
| 31-32 | Di chuyển hướng 2 (`2`) | (17, 26) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 52 |
| 33 | Di chuyển hướng 2 (`2`) | (18, 26) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 50 |
| 34-35 | Di chuyển hướng 2 (`2`) | (19, 26) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 49 |
| 36-37 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 48 |
| 38-39 | Di chuyển hướng 1 (`1`) | (21, 27) | (21, 26) | Dự kiến đến điểm hẹn tọa độ (21, 26) | 47 |
| 40-41 | Di chuyển hướng 2 (`2`) | (21, 26) | (22, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(22, 26)) | 46 |
| 42-43 | Di chuyển hướng 4 (`4`) | (22, 26) | (22, 27) | Dự kiến đến điểm hẹn tọa độ (22, 27) | 45 |
| 44-46 | Di chuyển hướng 4 (`4`) | (22, 27) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 43 |
| 47-48 | Di chuyển hướng 4 (`4`) | (21, 28) | (21, 29) | Dự kiến đến điểm hẹn tọa độ (21, 29) | 42 |
| 49-50 | Di chuyển hướng 4 (`4`) | (21, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 41 |
| 51-52 | Di chuyển hướng 0 (`0`) | (20, 30) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 40 |
| 53-54 | Di chuyển hướng 1 (`1`) | (20, 29) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 39 |
| 55 | Di chuyển hướng 0 (`0`) | (20, 28) | (20, 27) | Dự kiến đến điểm hẹn tọa độ (20, 27) | 37 |
| 56-57 | Di chuyển hướng 0 (`0`) | (20, 27) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 36 |
| 58-59 | Di chuyển hướng 1 (`1`) | (19, 26) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 35 |
| 60 | Di chuyển hướng 0 (`0`) | (20, 25) | (19, 24) | Dự kiến đến điểm hẹn tọa độ (19, 24) | 33 |
| 61-62 | Di chuyển hướng 0 (`0`) | (19, 24) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 32 |
| 63-65 | Di chuyển hướng 1 (`1`) | (19, 23) | (19, 22) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 30 |
| 66-159 | Chờ 94 bước (`-94`) | (19, 22) | (19, 22) | Dự kiến đứng yên tại (19, 22); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 30 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 2) (ô=64)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=0, tọa độ=(18, 20))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=0, tọa độ=(18, 20))
- Mảng hành động đã gửi server: `[0, 1, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 4, 3, 3, 2, 2, 2, 2, 3, 1, 2, 0, 0, 0, 0, 5, 0, 0, -71]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 60 |
| 2-3 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 59 |
| 4-5 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 58 |
| 6-7 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 56 |
| 8-9 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 54 |
| 10-11 | Di chuyển hướng 3 (`3`) | (3, 1) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 53 |
| 12-13 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 52 |
| 14-15 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 51 |
| 16-17 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 50 |
| 18-19 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 49 |
| 20-21 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 48 |
| 22 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 46 |
| 23-24 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 45 |
| 25-26 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 44 |
| 27-28 | Di chuyển hướng 3 (`3`) | (7, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 43 |
| 29 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 41 |
| 30-31 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 40 |
| 32 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 38 |
| 33-34 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 37 |
| 35-36 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 36 |
| 37-39 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 34 |
| 40 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 32 |
| 41-42 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 18)) | 31 |
| 43-44 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 30 |
| 45-46 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 29 |
| 47-48 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 28 |
| 49-51 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 26 |
| 52-53 | Di chuyển hướng 3 (`3`) | (15, 21) | (15, 22) | Dự kiến đến điểm hẹn tọa độ (15, 22) | 25 |
| 54-55 | Di chuyển hướng 3 (`3`) | (15, 22) | (16, 23) | Dự kiến đến điểm hẹn tọa độ (16, 23) | 24 |
| 56 | Di chuyển hướng 4 (`4`) | (16, 23) | (15, 24) | Dự kiến đến điểm hẹn tọa độ (15, 24) | 22 |
| 57-58 | Di chuyển hướng 3 (`3`) | (15, 24) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 21 |
| 59-60 | Di chuyển hướng 3 (`3`) | (16, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 20 |
| 61-62 | Di chuyển hướng 2 (`2`) | (16, 26) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 19 |
| 63-64 | Di chuyển hướng 2 (`2`) | (17, 26) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 18 |
| 65 | Di chuyển hướng 2 (`2`) | (18, 26) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 16 |
| 66-67 | Di chuyển hướng 2 (`2`) | (19, 26) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 15 |
| 68-69 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 14 |
| 70-71 | Di chuyển hướng 1 (`1`) | (21, 27) | (21, 26) | Dự kiến đến điểm hẹn tọa độ (21, 26) | 13 |
| 72-73 | Di chuyển hướng 2 (`2`) | (21, 26) | (22, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(22, 26)) | 12 |
| 74-75 | Di chuyển hướng 0 (`0`) | (22, 26) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 11 |
| 76-77 | Di chuyển hướng 0 (`0`) | (22, 25) | (21, 24) | Dự kiến đến điểm hẹn tọa độ (21, 24) | 10 |
| 78-79 | Di chuyển hướng 0 (`0`) | (21, 24) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 9 |
| 80-81 | Di chuyển hướng 0 (`0`) | (21, 23) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 8 |
| 82-83 | Di chuyển hướng 5 (`5`) | (20, 22) | (19, 22) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 7 |
| 84-85 | Di chuyển hướng 0 (`0`) | (19, 22) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 6 |
| 86-88 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 4 |
| 89-159 | Chờ 71 bước (`-71`) | (18, 20) | (18, 20) | Dự kiến đứng yên tại (18, 20); mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 4 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 23) (ô=747)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(23, 3))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(23, 3))
- Mảng hành động đã gửi server: `[-12, 1, 2, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 4, 5, 5, 4, 5, 5, 5, 5, 5, 5, 0, 0, 5, 5, 0, 0, 4, 5, 5, 0, 1, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 3, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-11 | Chờ 12 bước (`-12`) | (11, 23) | (11, 23) | Dự kiến đứng yên tại (11, 23); mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 64 |
| 12-13 | Di chuyển hướng 1 (`1`) | (11, 23) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 64 |
| 14-15 | Di chuyển hướng 2 (`2`) | (11, 22) | (12, 22) | Dự kiến đến điểm hẹn tọa độ (12, 22) | 64 |
| 16-17 | Di chuyển hướng 1 (`1`) | (12, 22) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 64 |
| 18-19 | Di chuyển hướng 1 (`1`) | (13, 21) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 63 |
| 20 | Di chuyển hướng 1 (`1`) | (13, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 64 |
| 21-22 | Di chuyển hướng 0 (`0`) | (14, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 63 |
| 23-24 | Di chuyển hướng 1 (`1`) | (13, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 62 |
| 25-26 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 61 |
| 27-28 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 60 |
| 29 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 58 |
| 30 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 64 |
| 31-32 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 63 |
| 33 | Di chuyển hướng 1 (`1`) | (15, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 64 |
| 34-35 | Di chuyển hướng 0 (`0`) | (16, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 64 |
| 36-37 | Di chuyển hướng 1 (`1`) | (15, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 64 |
| 38-39 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 64 |
| 40-41 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 63 |
| 42 | Di chuyển hướng 0 (`0`) | (17, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 64 |
| 43-44 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 63 |
| 45 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 61 |
| 46-47 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 60 |
| 48-49 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 59 |
| 50-52 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 57 |
| 53-54 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 56 |
| 55-56 | Di chuyển hướng 4 (`4`) | (13, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 55 |
| 57-58 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 54 |
| 59 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 52 |
| 60-61 | Di chuyển hướng 5 (`5`) | (11, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 51 |
| 62-63 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 50 |
| 64-65 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 49 |
| 66 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 47 |
| 67-68 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 46 |
| 69 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 44 |
| 70-71 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 43 |
| 72-73 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 42 |
| 74-75 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 41 |
| 76-77 | Di chuyển hướng 0 (`0`) | (3, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 40 |
| 78-79 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 39 |
| 80-81 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 38 |
| 82-83 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 37 |
| 84-85 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 36 |
| 86-87 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 35 |
| 88-89 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 34 |
| 90-91 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 32 |
| 92-93 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 30 |
| 94-95 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 29 |
| 96-97 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 28 |
| 98 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 26 |
| 99-100 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 25 |
| 101-102 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 24 |
| 103-104 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 23 |
| 105-106 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 21 |
| 107-108 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 19 |
| 109-110 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 18 |
| 111-113 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 16 |
| 114-115 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 14 |
| 116-117 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 13 |
| 118-119 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 12 |
| 120-121 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 11 |
| 122-123 | Di chuyển hướng 2 (`2`) | (17, 1) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 10 |
| 124-125 | Di chuyển hướng 2 (`2`) | (18, 1) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 9 |
| 126-128 | Di chuyển hướng 2 (`2`) | (19, 1) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 7 |
| 129-130 | Di chuyển hướng 3 (`3`) | (20, 1) | (20, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 64 |
| 131-132 | Di chuyển hướng 2 (`2`) | (20, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 63 |
| 133-135 | Di chuyển hướng 2 (`2`) | (21, 2) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 61 |
| 136-137 | Di chuyển hướng 3 (`3`) | (22, 2) | (23, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 60 |
| 138-159 | Chờ 22 bước (`-22`) | (23, 3) | (23, 3) | Dự kiến đứng yên tại (23, 3); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 60 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (19, 1) (ô=51)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(7, 23))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(7, 23))
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 3, 0, 5, 5, -19, 4, 4, 5, 0, 5, 5, 4, 5, 5, 4, 5, 5, 5, 5, 5, 5, 0, 0, 5, 5, 0, 0, 4, 5, 5, 0, 1, 3, 3, 3, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, -29]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (19, 1) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 10 |
| 3-4 | Di chuyển hướng 2 (`2`) | (20, 1) | (21, 1) | Dự kiến đến điểm hẹn tọa độ (21, 1) | 9 |
| 5 | Di chuyển hướng 2 (`2`) | (21, 1) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 7 |
| 6-8 | Di chuyển hướng 3 (`3`) | (22, 1) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 5 |
| 9-10 | Di chuyển hướng 3 (`3`) | (22, 2) | (23, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 4 |
| 11-12 | Di chuyển hướng 0 (`0`) | (23, 3) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 3 |
| 13-14 | Di chuyển hướng 5 (`5`) | (22, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 2 |
| 15-17 | Di chuyển hướng 5 (`5`) | (21, 2) | (20, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 0 |
| 18-36 | Chờ 19 bước (`-19`) | (20, 2) | (20, 2) | Dự kiến đứng yên tại (20, 2); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 64 |
| 37-38 | Di chuyển hướng 4 (`4`) | (20, 2) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 63 |
| 39 | Di chuyển hướng 4 (`4`) | (20, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 61 |
| 40-42 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 59 |
| 43 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 57 |
| 44 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 55 |
| 45-46 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 54 |
| 47-48 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 53 |
| 49-51 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 51 |
| 52-53 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 50 |
| 54-55 | Di chuyển hướng 4 (`4`) | (13, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 49 |
| 56-57 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 48 |
| 58 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 46 |
| 59-60 | Di chuyển hướng 5 (`5`) | (11, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 45 |
| 61-62 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 44 |
| 63-64 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 43 |
| 65 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 41 |
| 66-67 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 40 |
| 68 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 38 |
| 69-70 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 37 |
| 71-72 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 36 |
| 73-74 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 35 |
| 75-76 | Di chuyển hướng 0 (`0`) | (3, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 34 |
| 77-78 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 33 |
| 79-80 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 32 |
| 81-82 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 31 |
| 83-84 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 30 |
| 85-86 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 29 |
| 87-88 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 28 |
| 89-90 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 27 |
| 91-92 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 26 |
| 93 | Di chuyển hướng 4 (`4`) | (2, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 24 |
| 94 | Di chuyển hướng 4 (`4`) | (1, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 22 |
| 95-96 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 21 |
| 97-98 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 20 |
| 99-100 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 19 |
| 101-102 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 18 |
| 103 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 16 |
| 104-105 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 15 |
| 106-107 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 14 |
| 108-109 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 13 |
| 110-111 | Di chuyển hướng 3 (`3`) | (3, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 12 |
| 112-113 | Di chuyển hướng 3 (`3`) | (3, 14) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 11 |
| 114-116 | Di chuyển hướng 3 (`3`) | (4, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 9 |
| 117-119 | Di chuyển hướng 3 (`3`) | (4, 16) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 7 |
| 120-121 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 6 |
| 122 | Di chuyển hướng 3 (`3`) | (4, 18) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 4 |
| 123-124 | Di chuyển hướng 3 (`3`) | (5, 19) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 3 |
| 125-126 | Di chuyển hướng 3 (`3`) | (5, 20) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 2 |
| 127-128 | Di chuyển hướng 3 (`3`) | (6, 21) | (6, 22) | Dự kiến đến điểm hẹn tọa độ (6, 22) | 1 |
| 129-130 | Di chuyển hướng 3 (`3`) | (6, 22) | (7, 23) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 23)) | 0 |
| 131-159 | Chờ 29 bước (`-29`) | (7, 23) | (7, 23) | Dự kiến đứng yên tại (7, 23); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 23)) | 0 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (15, 24) (ô=783)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 6)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 0, 1, 2, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, -118]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 24) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 64 |
| 2-4 | Di chuyển hướng 5 (`5`) | (14, 24) | (13, 24) | Dự kiến đến điểm hẹn tọa độ (13, 24) | 64 |
| 5-6 | Di chuyển hướng 5 (`5`) | (13, 24) | (12, 24) | Dự kiến đến điểm hẹn tọa độ (12, 24) | 64 |
| 7-8 | Di chuyển hướng 5 (`5`) | (12, 24) | (11, 24) | Dự kiến đến điểm hẹn tọa độ (11, 24) | 64 |
| 9-10 | Di chuyển hướng 0 (`0`) | (11, 24) | (11, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 64 |
| 11-12 | Di chuyển hướng 1 (`1`) | (11, 23) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 64 |
| 13-14 | Di chuyển hướng 2 (`2`) | (11, 22) | (12, 22) | Dự kiến đến điểm hẹn tọa độ (12, 22) | 64 |
| 15-16 | Di chuyển hướng 1 (`1`) | (12, 22) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 64 |
| 17-18 | Di chuyển hướng 1 (`1`) | (13, 21) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 64 |
| 19 | Di chuyển hướng 1 (`1`) | (13, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 64 |
| 20-21 | Di chuyển hướng 1 (`1`) | (14, 19) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 64 |
| 22-23 | Di chuyển hướng 1 (`1`) | (14, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 64 |
| 24-25 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 64 |
| 26-27 | Di chuyển hướng 0 (`0`) | (15, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 64 |
| 28 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 64 |
| 29 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 64 |
| 30-31 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 64 |
| 32 | Di chuyển hướng 1 (`1`) | (15, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 64 |
| 33-34 | Di chuyển hướng 0 (`0`) | (16, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 64 |
| 35-36 | Di chuyển hướng 1 (`1`) | (15, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 64 |
| 37-38 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 64 |
| 39-40 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 64 |
| 41 | Di chuyển hướng 0 (`0`) | (17, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 64 |
| 42-159 | Chờ 118 bước (`-118`) | (16, 6) | (16, 6) | Dự kiến đứng yên tại (16, 6); hướng tới tọa độ (16, 6) | 64 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (3, 1) (ô=35)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(20, 2))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(20, 2))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 3, 3, -124]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 64 |
| 2-3 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 64 |
| 4-5 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 64 |
| 6-7 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 64 |
| 8-9 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 64 |
| 10-11 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 64 |
| 12-13 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 64 |
| 14-15 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 64 |
| 16-17 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 64 |
| 18-20 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 64 |
| 21-22 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 64 |
| 23-24 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 64 |
| 25-26 | Di chuyển hướng 1 (`1`) | (15, 1) | (15, 0) | Dự kiến đến điểm hẹn tọa độ (15, 0) | 64 |
| 27 | Di chuyển hướng 2 (`2`) | (15, 0) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 64 |
| 28 | Di chuyển hướng 2 (`2`) | (16, 0) | (17, 0) | Dự kiến đến điểm hẹn tọa độ (17, 0) | 64 |
| 29-30 | Di chuyển hướng 2 (`2`) | (17, 0) | (18, 0) | Dự kiến đến điểm hẹn tọa độ (18, 0) | 64 |
| 31 | Di chuyển hướng 2 (`2`) | (18, 0) | (19, 0) | Dự kiến đến điểm hẹn tọa độ (19, 0) | 64 |
| 32-33 | Di chuyển hướng 3 (`3`) | (19, 0) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 64 |
| 34-35 | Di chuyển hướng 3 (`3`) | (20, 1) | (20, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 64 |
| 36-159 | Chờ 124 bước (`-124`) | (20, 2) | (20, 2) | Dự kiến đứng yên tại (20, 2); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 64 |

