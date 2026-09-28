# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 224
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 6 | #3 | #7 | (1, 2) | 9 | 64 |
| 10 | #5 | #7 | (1, 2) | 4 | 64 |
| 28 | #4 | #6 | (16, 25) | 3 | 64 |
| 40 | #0 | #6 | (20, 30) | 0 | 64 |
| 40 | #1 | #6 | (20, 30) | 3 | 64 |
| 63 | #4 | #6 | (20, 30) | 39 | 64 |
| 76 | #2 | #7 | (1, 2) | 7 | 64 |
| 91 | #3 | #6 | (20, 30) | 0 | 64 |
| 93 | #5 | #6 | (20, 30) | 2 | 64 |
| 123 | #0 | #7 | (1, 2) | 11 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 30) (ô=980)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(23, 3))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(23, 3))
- Mảng hành động đã gửi server: `[-40, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 5, 4, 5, 5, 5, 0, 5, 5, 0, 0, 5, 5, 5, 5, 5, 4, 5, 5, 0, 1, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 3, -45]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-39 | Chờ 40 bước (`-40`) | (20, 30) | (20, 30) | Dự kiến đứng yên tại (20, 30); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 64 |
| 40-41 | Di chuyển hướng 0 (`0`) | (20, 30) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 63 |
| 42-43 | Di chuyển hướng 0 (`0`) | (20, 29) | (19, 28) | Dự kiến đến điểm hẹn tọa độ (19, 28) | 62 |
| 44 | Di chuyển hướng 1 (`1`) | (19, 28) | (20, 27) | Dự kiến đến điểm hẹn tọa độ (20, 27) | 60 |
| 45-46 | Di chuyển hướng 0 (`0`) | (20, 27) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 59 |
| 47-48 | Di chuyển hướng 0 (`0`) | (19, 26) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 58 |
| 49-50 | Di chuyển hướng 0 (`0`) | (19, 25) | (18, 24) | Dự kiến đến điểm hẹn tọa độ (18, 24) | 57 |
| 51-52 | Di chuyển hướng 0 (`0`) | (18, 24) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 56 |
| 53-54 | Di chuyển hướng 1 (`1`) | (18, 23) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 55 |
| 55-56 | Di chuyển hướng 0 (`0`) | (18, 22) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 54 |
| 57-58 | Di chuyển hướng 1 (`1`) | (18, 21) | (18, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 53 |
| 59-60 | Di chuyển hướng 0 (`0`) | (18, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 52 |
| 61-62 | Di chuyển hướng 0 (`0`) | (18, 19) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 51 |
| 63-64 | Di chuyển hướng 0 (`0`) | (17, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 50 |
| 65-66 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 49 |
| 67-68 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 48 |
| 69 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 46 |
| 70-71 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 45 |
| 72-73 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 44 |
| 74-75 | Di chuyển hướng 0 (`0`) | (16, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 43 |
| 76-77 | Di chuyển hướng 1 (`1`) | (16, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 42 |
| 78-79 | Di chuyển hướng 0 (`0`) | (16, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 41 |
| 80-81 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 40 |
| 82-83 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 39 |
| 84 | Di chuyển hướng 1 (`1`) | (16, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 37 |
| 85-86 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 36 |
| 87-88 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 34 |
| 89-90 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 33 |
| 91-92 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 32 |
| 93-94 | Di chuyển hướng 4 (`4`) | (15, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 30 |
| 95-96 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 29 |
| 97-98 | Di chuyển hướng 5 (`5`) | (13, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 28 |
| 99 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 26 |
| 100-101 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 25 |
| 102 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 23 |
| 103-104 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 22 |
| 105-106 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 21 |
| 107-108 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 20 |
| 109-110 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 19 |
| 111-112 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 18 |
| 113-114 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 17 |
| 115-116 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 15 |
| 117-118 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 13 |
| 119-120 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 12 |
| 121-122 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 64 |
| 123-124 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 63 |
| 125-126 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 62 |
| 127-128 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 61 |
| 129-130 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 60 |
| 131-132 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 58 |
| 133-134 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 56 |
| 135-136 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 55 |
| 137-138 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 54 |
| 139 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 52 |
| 140-141 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 51 |
| 142-143 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 50 |
| 144-145 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 49 |
| 146-147 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 47 |
| 148-149 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 45 |
| 150-151 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 44 |
| 152-154 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 42 |
| 155-156 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 40 |
| 157-158 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 39 |
| 159-160 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 38 |
| 161-162 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 37 |
| 163-164 | Di chuyển hướng 2 (`2`) | (17, 1) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 36 |
| 165-166 | Di chuyển hướng 2 (`2`) | (18, 1) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 35 |
| 167-169 | Di chuyển hướng 2 (`2`) | (19, 1) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 33 |
| 170-171 | Di chuyển hướng 3 (`3`) | (20, 1) | (20, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 32 |
| 172-173 | Di chuyển hướng 2 (`2`) | (20, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 31 |
| 174-176 | Di chuyển hướng 2 (`2`) | (21, 2) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 29 |
| 177-178 | Di chuyển hướng 3 (`3`) | (22, 2) | (23, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 28 |
| 179-223 | Chờ 45 bước (`-45`) | (23, 3) | (23, 3) | Dự kiến đứng yên tại (23, 3); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 28 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (20, 30) (ô=980)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(20, 30))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(20, 30))
- Mảng hành động đã gửi server: `[-224]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-223 | Chờ 224 bước (`-224`) | (20, 30) | (20, 30) | Dự kiến đứng yên tại (20, 30); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 64 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (12, 18) (ô=588)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(23, 3))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(23, 3))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 3, 2, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 5, 4, 5, 5, 5, 0, 5, 5, 0, 0, 5, 5, 5, 5, 5, 4, 5, 5, 0, 1, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 3, -92]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 57 |
| 2-3 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 56 |
| 4-5 | Di chuyển hướng 2 (`2`) | (14, 18) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 55 |
| 6-7 | Di chuyển hướng 2 (`2`) | (15, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 54 |
| 8 | Di chuyển hướng 3 (`3`) | (16, 18) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 52 |
| 9 | Di chuyển hướng 3 (`3`) | (17, 19) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 50 |
| 10-11 | Di chuyển hướng 2 (`2`) | (17, 20) | (18, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 49 |
| 12-13 | Di chuyển hướng 0 (`0`) | (18, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 48 |
| 14-15 | Di chuyển hướng 0 (`0`) | (18, 19) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 47 |
| 16-17 | Di chuyển hướng 0 (`0`) | (17, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 46 |
| 18-19 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 45 |
| 20-21 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 44 |
| 22 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 42 |
| 23-24 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 41 |
| 25-26 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 40 |
| 27-28 | Di chuyển hướng 0 (`0`) | (16, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 39 |
| 29-30 | Di chuyển hướng 1 (`1`) | (16, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 38 |
| 31-32 | Di chuyển hướng 0 (`0`) | (16, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 37 |
| 33-34 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 36 |
| 35-36 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 35 |
| 37 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 33 |
| 38-39 | Di chuyển hướng 1 (`1`) | (15, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 32 |
| 40-41 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 30 |
| 42-43 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 29 |
| 44-45 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 28 |
| 46-47 | Di chuyển hướng 4 (`4`) | (15, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 26 |
| 48-49 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 25 |
| 50-51 | Di chuyển hướng 5 (`5`) | (13, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 24 |
| 52 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 22 |
| 53-54 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 21 |
| 55 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 19 |
| 56-57 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 18 |
| 58-59 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 17 |
| 60-61 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 16 |
| 62-63 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 15 |
| 64-65 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 14 |
| 66-67 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 13 |
| 68-69 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 11 |
| 70-71 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 9 |
| 72-73 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 8 |
| 74-75 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 64 |
| 76-77 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 63 |
| 78-79 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 62 |
| 80-81 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 61 |
| 82-83 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 60 |
| 84-85 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 58 |
| 86-87 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 56 |
| 88-89 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 55 |
| 90-91 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 54 |
| 92 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 52 |
| 93-94 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 51 |
| 95-96 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 50 |
| 97-98 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 49 |
| 99-100 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 47 |
| 101-102 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 45 |
| 103-104 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 44 |
| 105-107 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 42 |
| 108-109 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 40 |
| 110-111 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 39 |
| 112-113 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 38 |
| 114-115 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 37 |
| 116-117 | Di chuyển hướng 2 (`2`) | (17, 1) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 36 |
| 118-119 | Di chuyển hướng 2 (`2`) | (18, 1) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 35 |
| 120-122 | Di chuyển hướng 2 (`2`) | (19, 1) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 33 |
| 123-124 | Di chuyển hướng 3 (`3`) | (20, 1) | (20, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 32 |
| 125-126 | Di chuyển hướng 2 (`2`) | (20, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 31 |
| 127-129 | Di chuyển hướng 2 (`2`) | (21, 2) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 29 |
| 130-131 | Di chuyển hướng 3 (`3`) | (22, 2) | (23, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 28 |
| 132-223 | Chờ 92 bước (`-92`) | (23, 3) | (23, 3) | Dự kiến đứng yên tại (23, 3); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 28 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 0) (ô=0)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(20, 30))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(20, 30))
- Mảng hành động đã gửi server: `[3, 4, 2, 2, 1, -1, 2, 2, 2, 2, 2, 3, 3, 2, 2, 3, 2, 2, 2, 1, 2, 3, 4, 4, 3, 4, 3, 4, 3, 3, 4, 4, 4, 3, 3, 3, 3, 4, 4, 3, 4, 4, 3, 3, 2, 2, 2, 2, 3, 3, 4, 4, -133]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 11 |
| 2-3 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 10 |
| 4-5 | Di chuyển hướng 2 (`2`) | (0, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 64 |
| 6-7 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 63 |
| 8-9 | Di chuyển hướng 1 (`1`) | (2, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 62 |
| 10 | Chờ 1 bước (`-1`) | (3, 1) | (3, 1) | Dự kiến đứng yên tại (3, 1); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 62 |
| 11-12 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 61 |
| 13-14 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 59 |
| 15-16 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 57 |
| 17-18 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 56 |
| 19-20 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 55 |
| 21-22 | Di chuyển hướng 3 (`3`) | (8, 1) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 54 |
| 23-24 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 53 |
| 25-26 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 52 |
| 27-28 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 51 |
| 29 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 49 |
| 30-31 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 48 |
| 32 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 46 |
| 33-34 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 45 |
| 35-36 | Di chuyển hướng 1 (`1`) | (14, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 44 |
| 37-38 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 42 |
| 39-40 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 41 |
| 41-42 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 40 |
| 43-44 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 38 |
| 45-46 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 37 |
| 47 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 35 |
| 48-49 | Di chuyển hướng 3 (`3`) | (15, 8) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 34 |
| 50-51 | Di chuyển hướng 4 (`4`) | (16, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 33 |
| 52-53 | Di chuyển hướng 3 (`3`) | (15, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 32 |
| 54-55 | Di chuyển hướng 3 (`3`) | (16, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 31 |
| 56-57 | Di chuyển hướng 4 (`4`) | (16, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 30 |
| 58-59 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 29 |
| 60 | Di chuyển hướng 4 (`4`) | (15, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 27 |
| 61 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 25 |
| 62-63 | Di chuyển hướng 3 (`3`) | (15, 16) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 24 |
| 64 | Di chuyển hướng 3 (`3`) | (16, 17) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 22 |
| 65 | Di chuyển hướng 3 (`3`) | (16, 18) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 20 |
| 66 | Di chuyển hướng 4 (`4`) | (17, 19) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 18 |
| 67 | Di chuyển hướng 4 (`4`) | (16, 20) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 16 |
| 68-69 | Di chuyển hướng 3 (`3`) | (16, 21) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 15 |
| 70 | Di chuyển hướng 4 (`4`) | (16, 22) | (16, 23) | Dự kiến đến điểm hẹn tọa độ (16, 23) | 13 |
| 71 | Di chuyển hướng 4 (`4`) | (16, 23) | (15, 24) | Dự kiến đến điểm hẹn tọa độ (15, 24) | 11 |
| 72-73 | Di chuyển hướng 3 (`3`) | (15, 24) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 10 |
| 74-75 | Di chuyển hướng 3 (`3`) | (16, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 9 |
| 76-77 | Di chuyển hướng 2 (`2`) | (16, 26) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 8 |
| 78-79 | Di chuyển hướng 2 (`2`) | (17, 26) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 7 |
| 80 | Di chuyển hướng 2 (`2`) | (18, 26) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 5 |
| 81-82 | Di chuyển hướng 2 (`2`) | (19, 26) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 4 |
| 83-84 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 3 |
| 85-86 | Di chuyển hướng 3 (`3`) | (21, 27) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 2 |
| 87-88 | Di chuyển hướng 4 (`4`) | (21, 28) | (21, 29) | Dự kiến đến điểm hẹn tọa độ (21, 29) | 1 |
| 89-90 | Di chuyển hướng 4 (`4`) | (21, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 64 |
| 91-223 | Chờ 133 bước (`-133`) | (20, 30) | (20, 30) | Dự kiến đứng yên tại (20, 30); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 64 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (16, 25) (ô=816)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(2, 28))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(2, 28))
- Mảng hành động đã gửi server: `[-29, 5, 5, 5, 0, 5, 0, 3, 3, 2, 2, 3, 3, 3, 2, 3, 2, 2, 2, 3, 1, 1, 1, 1, 0, 0, 0, 0, 5, 0, 0, 0, 5, 0, 5, 5, 5, 5, 4, 4, 4, 5, 5, 4, 5, 4, 4, 4, 4, 4, 5, 5, 4, -97]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-28 | Chờ 29 bước (`-29`) | (16, 25) | (16, 25) | Dự kiến đứng yên tại (16, 25); mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 64 |
| 29-30 | Di chuyển hướng 5 (`5`) | (16, 25) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 63 |
| 31-33 | Di chuyển hướng 5 (`5`) | (15, 25) | (14, 25) | Dự kiến đến điểm hẹn tọa độ (14, 25) | 61 |
| 34 | Di chuyển hướng 5 (`5`) | (14, 25) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 59 |
| 35-36 | Di chuyển hướng 0 (`0`) | (13, 25) | (12, 24) | Dự kiến đến điểm hẹn tọa độ (12, 24) | 58 |
| 37-38 | Di chuyển hướng 5 (`5`) | (12, 24) | (11, 24) | Dự kiến đến điểm hẹn tọa độ (11, 24) | 57 |
| 39-40 | Di chuyển hướng 0 (`0`) | (11, 24) | (11, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 56 |
| 41-42 | Di chuyển hướng 3 (`3`) | (11, 23) | (11, 24) | Dự kiến đến điểm hẹn tọa độ (11, 24) | 55 |
| 43-44 | Di chuyển hướng 3 (`3`) | (11, 24) | (12, 25) | Dự kiến đến điểm hẹn tọa độ (12, 25) | 54 |
| 45-46 | Di chuyển hướng 2 (`2`) | (12, 25) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 53 |
| 47-48 | Di chuyển hướng 2 (`2`) | (13, 25) | (14, 25) | Dự kiến đến điểm hẹn tọa độ (14, 25) | 52 |
| 49 | Di chuyển hướng 3 (`3`) | (14, 25) | (14, 26) | Dự kiến đến điểm hẹn tọa độ (14, 26) | 50 |
| 50-51 | Di chuyển hướng 3 (`3`) | (14, 26) | (15, 27) | Dự kiến đến điểm hẹn tọa độ (15, 27) | 49 |
| 52-53 | Di chuyển hướng 3 (`3`) | (15, 27) | (15, 28) | Dự kiến đến điểm hẹn tọa độ (15, 28) | 48 |
| 54 | Di chuyển hướng 2 (`2`) | (15, 28) | (16, 28) | Dự kiến đến điểm hẹn tọa độ (16, 28) | 46 |
| 55 | Di chuyển hướng 3 (`3`) | (16, 28) | (17, 29) | Dự kiến đến điểm hẹn tọa độ (17, 29) | 44 |
| 56-57 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 43 |
| 58-59 | Di chuyển hướng 2 (`2`) | (18, 29) | (19, 29) | Dự kiến đến điểm hẹn tọa độ (19, 29) | 42 |
| 60 | Di chuyển hướng 2 (`2`) | (19, 29) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 40 |
| 61-62 | Di chuyển hướng 3 (`3`) | (20, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 64 |
| 63-64 | Di chuyển hướng 1 (`1`) | (20, 30) | (21, 29) | Dự kiến đến điểm hẹn tọa độ (21, 29) | 63 |
| 65-66 | Di chuyển hướng 1 (`1`) | (21, 29) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 62 |
| 67-68 | Di chuyển hướng 1 (`1`) | (21, 28) | (22, 27) | Dự kiến đến điểm hẹn tọa độ (22, 27) | 61 |
| 69-71 | Di chuyển hướng 1 (`1`) | (22, 27) | (22, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(22, 26)) | 59 |
| 72-73 | Di chuyển hướng 0 (`0`) | (22, 26) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 58 |
| 74-75 | Di chuyển hướng 0 (`0`) | (22, 25) | (21, 24) | Dự kiến đến điểm hẹn tọa độ (21, 24) | 57 |
| 76-77 | Di chuyển hướng 0 (`0`) | (21, 24) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 56 |
| 78-79 | Di chuyển hướng 0 (`0`) | (21, 23) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 55 |
| 80-81 | Di chuyển hướng 5 (`5`) | (20, 22) | (19, 22) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 54 |
| 82-83 | Di chuyển hướng 0 (`0`) | (19, 22) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 53 |
| 84-86 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 51 |
| 87-88 | Di chuyển hướng 0 (`0`) | (18, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 50 |
| 89-90 | Di chuyển hướng 5 (`5`) | (18, 19) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 49 |
| 91 | Di chuyển hướng 0 (`0`) | (17, 19) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 47 |
| 92 | Di chuyển hướng 5 (`5`) | (16, 18) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 45 |
| 93-94 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 44 |
| 95-96 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 43 |
| 97-98 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 18)) | 42 |
| 99-100 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 41 |
| 101 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 39 |
| 102-103 | Di chuyển hướng 4 (`4`) | (11, 20) | (11, 21) | Dự kiến đến điểm hẹn tọa độ (11, 21) | 38 |
| 104-105 | Di chuyển hướng 5 (`5`) | (11, 21) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 37 |
| 106-107 | Di chuyển hướng 5 (`5`) | (10, 21) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 36 |
| 108-109 | Di chuyển hướng 4 (`4`) | (9, 21) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 35 |
| 110-111 | Di chuyển hướng 5 (`5`) | (8, 22) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 34 |
| 112-113 | Di chuyển hướng 4 (`4`) | (7, 22) | (7, 23) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 23)) | 33 |
| 114-115 | Di chuyển hướng 4 (`4`) | (7, 23) | (6, 24) | Dự kiến đến điểm hẹn tọa độ (6, 24) | 32 |
| 116-117 | Di chuyển hướng 4 (`4`) | (6, 24) | (6, 25) | Dự kiến đến điểm hẹn tọa độ (6, 25) | 31 |
| 118-119 | Di chuyển hướng 4 (`4`) | (6, 25) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 30 |
| 120-121 | Di chuyển hướng 4 (`4`) | (5, 26) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 29 |
| 122 | Di chuyển hướng 5 (`5`) | (5, 27) | (4, 27) | Dự kiến đến điểm hẹn tọa độ (4, 27) | 27 |
| 123-124 | Di chuyển hướng 5 (`5`) | (4, 27) | (3, 27) | Dự kiến đến điểm hẹn tọa độ (3, 27) | 26 |
| 125-126 | Di chuyển hướng 4 (`4`) | (3, 27) | (2, 28) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 28)) | 25 |
| 127-223 | Chờ 97 bước (`-97`) | (2, 28) | (2, 28) | Dự kiến đứng yên tại (2, 28); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 28)) | 25 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (0, 0) (ô=0)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(20, 30))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(20, 30))
- Mảng hành động đã gửi server: `[2, 2, 3, 4, 5, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 1, 2, 3, 4, 4, 3, 4, 3, 4, 3, 3, 4, 4, 4, 3, 3, 3, 3, 4, 4, 3, 4, 4, 3, 3, 2, 2, 2, 2, 3, 3, 4, 4, -131]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 10 |
| 2-3 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 8 |
| 4-5 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 6 |
| 6-7 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 5 |
| 8-9 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 64 |
| 10-11 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 63 |
| 12-13 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 62 |
| 14-15 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 61 |
| 16-17 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 60 |
| 18-19 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 59 |
| 20-21 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 58 |
| 22-24 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 56 |
| 25-26 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 55 |
| 27-28 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 54 |
| 29-30 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 53 |
| 31 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 51 |
| 32-33 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 50 |
| 34 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 48 |
| 35-36 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 47 |
| 37-38 | Di chuyển hướng 1 (`1`) | (14, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 46 |
| 39-40 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 44 |
| 41-42 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 43 |
| 43-44 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 42 |
| 45-46 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 40 |
| 47-48 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 39 |
| 49 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 37 |
| 50-51 | Di chuyển hướng 3 (`3`) | (15, 8) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 36 |
| 52-53 | Di chuyển hướng 4 (`4`) | (16, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 35 |
| 54-55 | Di chuyển hướng 3 (`3`) | (15, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 34 |
| 56-57 | Di chuyển hướng 3 (`3`) | (16, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 33 |
| 58-59 | Di chuyển hướng 4 (`4`) | (16, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 32 |
| 60-61 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 31 |
| 62 | Di chuyển hướng 4 (`4`) | (15, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 29 |
| 63 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 27 |
| 64-65 | Di chuyển hướng 3 (`3`) | (15, 16) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 26 |
| 66 | Di chuyển hướng 3 (`3`) | (16, 17) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 24 |
| 67 | Di chuyển hướng 3 (`3`) | (16, 18) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 22 |
| 68 | Di chuyển hướng 4 (`4`) | (17, 19) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 20 |
| 69 | Di chuyển hướng 4 (`4`) | (16, 20) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 18 |
| 70-71 | Di chuyển hướng 3 (`3`) | (16, 21) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 17 |
| 72 | Di chuyển hướng 4 (`4`) | (16, 22) | (16, 23) | Dự kiến đến điểm hẹn tọa độ (16, 23) | 15 |
| 73 | Di chuyển hướng 4 (`4`) | (16, 23) | (15, 24) | Dự kiến đến điểm hẹn tọa độ (15, 24) | 13 |
| 74-75 | Di chuyển hướng 3 (`3`) | (15, 24) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 12 |
| 76-77 | Di chuyển hướng 3 (`3`) | (16, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 11 |
| 78-79 | Di chuyển hướng 2 (`2`) | (16, 26) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 10 |
| 80-81 | Di chuyển hướng 2 (`2`) | (17, 26) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 9 |
| 82 | Di chuyển hướng 2 (`2`) | (18, 26) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 7 |
| 83-84 | Di chuyển hướng 2 (`2`) | (19, 26) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 6 |
| 85-86 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 5 |
| 87-88 | Di chuyển hướng 3 (`3`) | (21, 27) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 4 |
| 89-90 | Di chuyển hướng 4 (`4`) | (21, 28) | (21, 29) | Dự kiến đến điểm hẹn tọa độ (21, 29) | 3 |
| 91-92 | Di chuyển hướng 4 (`4`) | (21, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 64 |
| 93-223 | Chờ 131 bước (`-131`) | (20, 30) | (20, 30) | Dự kiến đứng yên tại (20, 30); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 64 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (2, 28) (ô=898)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(20, 30))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(20, 30))
- Mảng hành động đã gửi server: `[1, 2, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 3, 3, 3, 2, 3, -184]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 28) | (3, 27) | Dự kiến đến điểm hẹn tọa độ (3, 27) | 64 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 27) | (4, 27) | Dự kiến đến điểm hẹn tọa độ (4, 27) | 64 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 27) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 64 |
| 6 | Di chuyển hướng 1 (`1`) | (5, 27) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 64 |
| 7-8 | Di chuyển hướng 2 (`2`) | (5, 26) | (6, 26) | Dự kiến đến điểm hẹn tọa độ (6, 26) | 64 |
| 9-10 | Di chuyển hướng 2 (`2`) | (6, 26) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 64 |
| 11-12 | Di chuyển hướng 1 (`1`) | (7, 26) | (8, 25) | Dự kiến đến điểm hẹn tọa độ (8, 25) | 64 |
| 13 | Di chuyển hướng 2 (`2`) | (8, 25) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 64 |
| 14-15 | Di chuyển hướng 2 (`2`) | (9, 25) | (10, 25) | Dự kiến đến điểm hẹn tọa độ (10, 25) | 64 |
| 16-17 | Di chuyển hướng 2 (`2`) | (10, 25) | (11, 25) | Dự kiến đến điểm hẹn tọa độ (11, 25) | 64 |
| 18-19 | Di chuyển hướng 2 (`2`) | (11, 25) | (12, 25) | Dự kiến đến điểm hẹn tọa độ (12, 25) | 64 |
| 20-21 | Di chuyển hướng 2 (`2`) | (12, 25) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 64 |
| 22-23 | Di chuyển hướng 2 (`2`) | (13, 25) | (14, 25) | Dự kiến đến điểm hẹn tọa độ (14, 25) | 64 |
| 24 | Di chuyển hướng 2 (`2`) | (14, 25) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 64 |
| 25-27 | Di chuyển hướng 2 (`2`) | (15, 25) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 64 |
| 28-29 | Di chuyển hướng 3 (`3`) | (16, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 64 |
| 30-31 | Di chuyển hướng 2 (`2`) | (16, 26) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 64 |
| 32-33 | Di chuyển hướng 3 (`3`) | (17, 26) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 64 |
| 34 | Di chuyển hướng 3 (`3`) | (18, 27) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 64 |
| 35-36 | Di chuyển hướng 3 (`3`) | (18, 28) | (19, 29) | Dự kiến đến điểm hẹn tọa độ (19, 29) | 64 |
| 37 | Di chuyển hướng 2 (`2`) | (19, 29) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 64 |
| 38-39 | Di chuyển hướng 3 (`3`) | (20, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 64 |
| 40-223 | Chờ 184 bước (`-184`) | (20, 30) | (20, 30) | Dự kiến đứng yên tại (20, 30); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 64 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (2, 3) (ô=98)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 2)
- Mảng hành động đã gửi server: `[0, -220]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 64 |
| 4-223 | Chờ 220 bước (`-220`) | (1, 2) | (1, 2) | Dự kiến đứng yên tại (1, 2); hướng tới tọa độ (1, 2) | 64 |

