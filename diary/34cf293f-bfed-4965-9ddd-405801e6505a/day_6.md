# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 256
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #1 | #6 | (20, 29) | 63 | 64 |
| 2 | #5 | #6 | (20, 29) | 63 | 64 |
| 7 | #1 | #6 | (20, 26) | 60 | 64 |
| 31 | #2 | #7 | (16, 3) | 14 | 64 |
| 33 | #0 | #6 | (19, 22) | 2 | 64 |
| 34 | #2 | #7 | (15, 3) | 63 | 64 |
| 50 | #5 | #7 | (15, 3) | 23 | 64 |
| 53 | #3 | #7 | (15, 3) | 29 | 64 |
| 54 | #5 | #7 | (15, 3) | 61 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (23, 3) (ô=119)
- Nhiên liệu đầu ngày: 28
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(20, 2))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(20, 2))
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 4, 4, 4, 4, 4, 3, 3, 4, 4, 4, 4, 3, 4, 3, 3, -1, 4, 3, 3, 3, 3, 4, 3, 4, 0, 5, 0, 0, 0, 5, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 2, 2, 3, 2, 1, 1, -150]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (23, 3) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 27 |
| 2-3 | Di chuyển hướng 3 (`3`) | (22, 4) | (23, 5) | Dự kiến đến điểm hẹn tọa độ (23, 5) | 26 |
| 4-5 | Di chuyển hướng 4 (`4`) | (23, 5) | (22, 6) | Dự kiến đến điểm hẹn tọa độ (22, 6) | 25 |
| 6-7 | Di chuyển hướng 4 (`4`) | (22, 6) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 24 |
| 8-9 | Di chuyển hướng 4 (`4`) | (22, 7) | (21, 8) | Dự kiến đến điểm hẹn tọa độ (21, 8) | 23 |
| 10 | Di chuyển hướng 4 (`4`) | (21, 8) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 21 |
| 11 | Di chuyển hướng 4 (`4`) | (21, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 19 |
| 12 | Di chuyển hướng 4 (`4`) | (20, 10) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 17 |
| 13-14 | Di chuyển hướng 4 (`4`) | (20, 11) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 16 |
| 15-16 | Di chuyển hướng 3 (`3`) | (19, 12) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 15 |
| 17-18 | Di chuyển hướng 3 (`3`) | (20, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 14 |
| 19 | Di chuyển hướng 4 (`4`) | (20, 14) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 12 |
| 20-21 | Di chuyển hướng 4 (`4`) | (20, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 11 |
| 22-23 | Di chuyển hướng 4 (`4`) | (19, 16) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 10 |
| 24 | Di chuyển hướng 4 (`4`) | (19, 17) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 8 |
| 25-26 | Di chuyển hướng 3 (`3`) | (18, 18) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 7 |
| 27 | Di chuyển hướng 4 (`4`) | (19, 19) | (18, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(18, 20)) | 5 |
| 28-29 | Di chuyển hướng 3 (`3`) | (18, 20) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 4 |
| 30-32 | Di chuyển hướng 3 (`3`) | (19, 21) | (19, 22) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 64 |
| 33 | Chờ 1 bước (`-1`) | (19, 22) | (19, 22) | Dự kiến đứng yên tại (19, 22); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 64 |
| 34-35 | Di chuyển hướng 4 (`4`) | (19, 22) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 63 |
| 36-38 | Di chuyển hướng 3 (`3`) | (19, 23) | (19, 24) | Dự kiến đến điểm hẹn tọa độ (19, 24) | 61 |
| 39-40 | Di chuyển hướng 3 (`3`) | (19, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 60 |
| 41 | Di chuyển hướng 3 (`3`) | (20, 25) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 58 |
| 42-43 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 57 |
| 44-45 | Di chuyển hướng 4 (`4`) | (21, 27) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 56 |
| 46 | Di chuyển hướng 3 (`3`) | (20, 28) | (21, 29) | Dự kiến đến điểm hẹn tọa độ (21, 29) | 54 |
| 47-48 | Di chuyển hướng 4 (`4`) | (21, 29) | (20, 30) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(20, 30)) | 53 |
| 49-50 | Di chuyển hướng 0 (`0`) | (20, 30) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 52 |
| 51-52 | Di chuyển hướng 5 (`5`) | (20, 29) | (19, 29) | Dự kiến đến điểm hẹn tọa độ (19, 29) | 51 |
| 53 | Di chuyển hướng 0 (`0`) | (19, 29) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 49 |
| 54-55 | Di chuyển hướng 0 (`0`) | (18, 28) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 48 |
| 56 | Di chuyển hướng 0 (`0`) | (18, 27) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 46 |
| 57-58 | Di chuyển hướng 5 (`5`) | (17, 26) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 45 |
| 59-60 | Di chuyển hướng 0 (`0`) | (16, 26) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 44 |
| 61-62 | Di chuyển hướng 0 (`0`) | (16, 25) | (15, 24) | Dự kiến đến điểm hẹn tọa độ (15, 24) | 43 |
| 63-64 | Di chuyển hướng 1 (`1`) | (15, 24) | (16, 23) | Dự kiến đến điểm hẹn tọa độ (16, 23) | 42 |
| 65 | Di chuyển hướng 1 (`1`) | (16, 23) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 40 |
| 66 | Di chuyển hướng 0 (`0`) | (16, 22) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 38 |
| 67-68 | Di chuyển hướng 0 (`0`) | (16, 21) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 37 |
| 69 | Di chuyển hướng 1 (`1`) | (15, 20) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 35 |
| 70 | Di chuyển hướng 0 (`0`) | (16, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 33 |
| 71-72 | Di chuyển hướng 1 (`1`) | (15, 18) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 32 |
| 73 | Di chuyển hướng 0 (`0`) | (16, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 30 |
| 74-75 | Di chuyển hướng 0 (`0`) | (15, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 29 |
| 76 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 27 |
| 77 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 25 |
| 78-79 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 24 |
| 80 | Di chuyển hướng 1 (`1`) | (15, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 22 |
| 81-82 | Di chuyển hướng 1 (`1`) | (16, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 21 |
| 83-84 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 20 |
| 85-86 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 19 |
| 87-88 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 18 |
| 89 | Di chuyển hướng 0 (`0`) | (17, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 16 |
| 90-91 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 15 |
| 92-93 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 13 |
| 94-95 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 12 |
| 96-97 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 11 |
| 98-99 | Di chuyển hướng 2 (`2`) | (17, 3) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 10 |
| 100 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 8 |
| 101 | Di chuyển hướng 2 (`2`) | (18, 4) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 6 |
| 102-104 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 4 |
| 105 | Di chuyển hướng 1 (`1`) | (20, 3) | (20, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 2 |
| 106-255 | Chờ 150 bước (`-150`) | (20, 2) | (20, 2) | Dự kiến đứng yên tại (20, 2); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 2 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (20, 30) (ô=980)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=2, tọa độ=(0, 0))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=2, tọa độ=(0, 0))
- Mảng hành động đã gửi server: `[0, 1, 1, 0, 5, 5, 5, 5, 0, 5, 5, 5, 0, 5, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 5, 0, 1, -176]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 30) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 64 |
| 2-3 | Di chuyển hướng 1 (`1`) | (20, 29) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 63 |
| 4 | Di chuyển hướng 1 (`1`) | (20, 28) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 61 |
| 5-6 | Di chuyển hướng 0 (`0`) | (21, 27) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 64 |
| 7-8 | Di chuyển hướng 5 (`5`) | (20, 26) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 63 |
| 9-10 | Di chuyển hướng 5 (`5`) | (19, 26) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 62 |
| 11 | Di chuyển hướng 5 (`5`) | (18, 26) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 60 |
| 12-13 | Di chuyển hướng 5 (`5`) | (17, 26) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 59 |
| 14-15 | Di chuyển hướng 0 (`0`) | (16, 26) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 58 |
| 16-17 | Di chuyển hướng 5 (`5`) | (16, 25) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 57 |
| 18-20 | Di chuyển hướng 5 (`5`) | (15, 25) | (14, 25) | Dự kiến đến điểm hẹn tọa độ (14, 25) | 55 |
| 21 | Di chuyển hướng 5 (`5`) | (14, 25) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 53 |
| 22-23 | Di chuyển hướng 0 (`0`) | (13, 25) | (12, 24) | Dự kiến đến điểm hẹn tọa độ (12, 24) | 52 |
| 24-25 | Di chuyển hướng 5 (`5`) | (12, 24) | (11, 24) | Dự kiến đến điểm hẹn tọa độ (11, 24) | 51 |
| 26-27 | Di chuyển hướng 0 (`0`) | (11, 24) | (11, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 50 |
| 28-29 | Di chuyển hướng 1 (`1`) | (11, 23) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 49 |
| 30-31 | Di chuyển hướng 1 (`1`) | (11, 22) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 48 |
| 32-33 | Di chuyển hướng 1 (`1`) | (12, 21) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 47 |
| 34-35 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 46 |
| 36 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 18)) | 44 |
| 37-38 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 43 |
| 39-40 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 42 |
| 41 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 40 |
| 42-44 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 38 |
| 45-46 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 37 |
| 47-48 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 36 |
| 49 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 34 |
| 50-51 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 33 |
| 52 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 31 |
| 53-54 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 30 |
| 55-56 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 29 |
| 57-58 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 28 |
| 59 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 26 |
| 60-61 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 25 |
| 62-63 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 24 |
| 64-65 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 23 |
| 66-67 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 22 |
| 68-69 | Di chuyển hướng 0 (`0`) | (3, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 21 |
| 70-71 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 20 |
| 72-73 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 19 |
| 74-75 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 18 |
| 76-77 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 17 |
| 78-79 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 16 |
| 80-255 | Chờ 176 bước (`-176`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 16 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (23, 3) (ô=119)
- Nhiên liệu đầu ngày: 28
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=3, tọa độ=(22, 26))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=3, tọa độ=(22, 26))
- Mảng hành động đã gửi server: `[0, 5, 5, 4, 4, 5, 0, 5, 5, -15, 5, 0, 5, 5, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 4, 4, 3, 3, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 1, 2, -129]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (23, 3) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 27 |
| 2-3 | Di chuyển hướng 5 (`5`) | (22, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 26 |
| 4-6 | Di chuyển hướng 5 (`5`) | (21, 2) | (20, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 24 |
| 7-8 | Di chuyển hướng 4 (`4`) | (20, 2) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 23 |
| 9 | Di chuyển hướng 4 (`4`) | (20, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 21 |
| 10-12 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 19 |
| 13 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 17 |
| 14 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 15 |
| 15-16 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 14 |
| 17-31 | Chờ 15 bước (`-15`) | (16, 3) | (16, 3) | Dự kiến đứng yên tại (16, 3); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 64 |
| 32-33 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 64 |
| 34-35 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 62 |
| 36 | Di chuyển hướng 5 (`5`) | (14, 2) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 60 |
| 37-38 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 59 |
| 39 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 57 |
| 40-42 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 55 |
| 43-44 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 54 |
| 45-46 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 52 |
| 47-48 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 50 |
| 49-50 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 49 |
| 51-52 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 48 |
| 53-54 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 47 |
| 55-56 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 45 |
| 57-58 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 43 |
| 59-60 | Di chuyển hướng 3 (`3`) | (3, 1) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 42 |
| 61-62 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 41 |
| 63-64 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 40 |
| 65-66 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 39 |
| 67-68 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 38 |
| 69-70 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 37 |
| 71 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 35 |
| 72-73 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 34 |
| 74-75 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 33 |
| 76-77 | Di chuyển hướng 3 (`3`) | (7, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 32 |
| 78 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 30 |
| 79-80 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 29 |
| 81 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 27 |
| 82-83 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 26 |
| 84-85 | Di chuyển hướng 3 (`3`) | (9, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 25 |
| 86-87 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 24 |
| 88-89 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 23 |
| 90-91 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 22 |
| 92-93 | Di chuyển hướng 3 (`3`) | (11, 19) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 21 |
| 94-95 | Di chuyển hướng 3 (`3`) | (11, 20) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 20 |
| 96-97 | Di chuyển hướng 4 (`4`) | (12, 21) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 19 |
| 98-99 | Di chuyển hướng 4 (`4`) | (11, 22) | (11, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 18 |
| 100-101 | Di chuyển hướng 3 (`3`) | (11, 23) | (11, 24) | Dự kiến đến điểm hẹn tọa độ (11, 24) | 17 |
| 102-103 | Di chuyển hướng 3 (`3`) | (11, 24) | (12, 25) | Dự kiến đến điểm hẹn tọa độ (12, 25) | 16 |
| 104-105 | Di chuyển hướng 2 (`2`) | (12, 25) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 15 |
| 106-107 | Di chuyển hướng 2 (`2`) | (13, 25) | (14, 25) | Dự kiến đến điểm hẹn tọa độ (14, 25) | 14 |
| 108 | Di chuyển hướng 2 (`2`) | (14, 25) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 12 |
| 109-111 | Di chuyển hướng 2 (`2`) | (15, 25) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 10 |
| 112-113 | Di chuyển hướng 3 (`3`) | (16, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 9 |
| 114-115 | Di chuyển hướng 2 (`2`) | (16, 26) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 8 |
| 116-117 | Di chuyển hướng 2 (`2`) | (17, 26) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 7 |
| 118 | Di chuyển hướng 2 (`2`) | (18, 26) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 5 |
| 119-120 | Di chuyển hướng 2 (`2`) | (19, 26) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 4 |
| 121-122 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(21, 27)) | 3 |
| 123-124 | Di chuyển hướng 1 (`1`) | (21, 27) | (21, 26) | Dự kiến đến điểm hẹn tọa độ (21, 26) | 2 |
| 125-126 | Di chuyển hướng 2 (`2`) | (21, 26) | (22, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(22, 26)) | 1 |
| 127-255 | Chờ 129 bước (`-129`) | (22, 26) | (22, 26) | Dự kiến đứng yên tại (22, 26); mục tiêu Spot #13 (thương hiệu=3, tọa độ=(22, 26)) | 1 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (20, 30) (ô=980)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=2, tọa độ=(0, 0))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=2, tọa độ=(0, 0))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 5, 0, 5, 5, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 5, 0, 1, -168]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (20, 30) | (21, 29) | Dự kiến đến điểm hẹn tọa độ (21, 29) | 63 |
| 2-3 | Di chuyển hướng 1 (`1`) | (21, 29) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 62 |
| 4-5 | Di chuyển hướng 1 (`1`) | (21, 28) | (22, 27) | Dự kiến đến điểm hẹn tọa độ (22, 27) | 61 |
| 6-8 | Di chuyển hướng 1 (`1`) | (22, 27) | (22, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(22, 26)) | 59 |
| 9-10 | Di chuyển hướng 0 (`0`) | (22, 26) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 58 |
| 11-12 | Di chuyển hướng 0 (`0`) | (22, 25) | (21, 24) | Dự kiến đến điểm hẹn tọa độ (21, 24) | 57 |
| 13-14 | Di chuyển hướng 0 (`0`) | (21, 24) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 56 |
| 15-16 | Di chuyển hướng 0 (`0`) | (21, 23) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 55 |
| 17-18 | Di chuyển hướng 0 (`0`) | (20, 22) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 54 |
| 19-20 | Di chuyển hướng 0 (`0`) | (20, 21) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 53 |
| 21-22 | Di chuyển hướng 0 (`0`) | (19, 20) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 52 |
| 23 | Di chuyển hướng 1 (`1`) | (19, 19) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 50 |
| 24-25 | Di chuyển hướng 0 (`0`) | (19, 18) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 49 |
| 26 | Di chuyển hướng 1 (`1`) | (19, 17) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 47 |
| 27-28 | Di chuyển hướng 0 (`0`) | (19, 16) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 46 |
| 29 | Di chuyển hướng 0 (`0`) | (19, 15) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 44 |
| 30-31 | Di chuyển hướng 0 (`0`) | (18, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 43 |
| 32-33 | Di chuyển hướng 0 (`0`) | (18, 13) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 42 |
| 34-35 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 41 |
| 36-37 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 39 |
| 38-39 | Di chuyển hướng 0 (`0`) | (16, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 38 |
| 40-41 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 37 |
| 42-43 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 36 |
| 44 | Di chuyển hướng 0 (`0`) | (17, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 34 |
| 45-46 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 33 |
| 47-48 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 31 |
| 49-50 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 30 |
| 51-52 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 64 |
| 53-54 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 62 |
| 55 | Di chuyển hướng 5 (`5`) | (14, 2) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 60 |
| 56-57 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 59 |
| 58 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 57 |
| 59-61 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 55 |
| 62-63 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 54 |
| 64-65 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 52 |
| 66-67 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 50 |
| 68-69 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 49 |
| 70-71 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 48 |
| 72-73 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 47 |
| 74-75 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 45 |
| 76-77 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 43 |
| 78-79 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 42 |
| 80-81 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 41 |
| 82-83 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 40 |
| 84-85 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 39 |
| 86-87 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 38 |
| 88-255 | Chờ 168 bước (`-168`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 38 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (2, 28) (ô=898)
- Nhiên liệu đầu ngày: 25
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=5, tọa độ=(16, 25))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=5, tọa độ=(16, 25))
- Mảng hành động đã gửi server: `[1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 3, 2, 3, 3, 2, 2, 2, 2, -222]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 28) | (3, 27) | Dự kiến đến điểm hẹn tọa độ (3, 27) | 24 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 27) | (4, 27) | Dự kiến đến điểm hẹn tọa độ (4, 27) | 23 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 27) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 22 |
| 6 | Di chuyển hướng 1 (`1`) | (5, 27) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 20 |
| 7-8 | Di chuyển hướng 1 (`1`) | (5, 26) | (6, 25) | Dự kiến đến điểm hẹn tọa độ (6, 25) | 19 |
| 9-10 | Di chuyển hướng 1 (`1`) | (6, 25) | (6, 24) | Dự kiến đến điểm hẹn tọa độ (6, 24) | 18 |
| 11-12 | Di chuyển hướng 1 (`1`) | (6, 24) | (7, 23) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 23)) | 17 |
| 13-14 | Di chuyển hướng 1 (`1`) | (7, 23) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 16 |
| 15-16 | Di chuyển hướng 2 (`2`) | (7, 22) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 15 |
| 17-18 | Di chuyển hướng 2 (`2`) | (8, 22) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 14 |
| 19-20 | Di chuyển hướng 3 (`3`) | (9, 22) | (10, 23) | Dự kiến đến điểm hẹn tọa độ (10, 23) | 13 |
| 21 | Di chuyển hướng 2 (`2`) | (10, 23) | (11, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=4, tọa độ=(11, 23)) | 11 |
| 22-23 | Di chuyển hướng 3 (`3`) | (11, 23) | (11, 24) | Dự kiến đến điểm hẹn tọa độ (11, 24) | 10 |
| 24-25 | Di chuyển hướng 3 (`3`) | (11, 24) | (12, 25) | Dự kiến đến điểm hẹn tọa độ (12, 25) | 9 |
| 26-27 | Di chuyển hướng 2 (`2`) | (12, 25) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 8 |
| 28-29 | Di chuyển hướng 2 (`2`) | (13, 25) | (14, 25) | Dự kiến đến điểm hẹn tọa độ (14, 25) | 7 |
| 30 | Di chuyển hướng 2 (`2`) | (14, 25) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 5 |
| 31-33 | Di chuyển hướng 2 (`2`) | (15, 25) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 3 |
| 34-255 | Chờ 222 bước (`-222`) | (16, 25) | (16, 25) | Dự kiến đứng yên tại (16, 25); mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 3 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (20, 30) (ô=980)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(23, 3))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(23, 3))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 0, 5, 0, 0, 5, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 2, 5, 0, 5, 5, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 5, 0, 1, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 3, -117]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 30) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 64 |
| 2-3 | Di chuyển hướng 5 (`5`) | (20, 29) | (19, 29) | Dự kiến đến điểm hẹn tọa độ (19, 29) | 63 |
| 4 | Di chuyển hướng 0 (`0`) | (19, 29) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 61 |
| 5-6 | Di chuyển hướng 0 (`0`) | (18, 28) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 60 |
| 7 | Di chuyển hướng 0 (`0`) | (18, 27) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 58 |
| 8-9 | Di chuyển hướng 5 (`5`) | (17, 26) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 57 |
| 10-11 | Di chuyển hướng 0 (`0`) | (16, 26) | (16, 25) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(16, 25)) | 56 |
| 12-13 | Di chuyển hướng 0 (`0`) | (16, 25) | (15, 24) | Dự kiến đến điểm hẹn tọa độ (15, 24) | 55 |
| 14-15 | Di chuyển hướng 5 (`5`) | (15, 24) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 54 |
| 16-18 | Di chuyển hướng 0 (`0`) | (14, 24) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 52 |
| 19-20 | Di chuyển hướng 0 (`0`) | (14, 23) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 51 |
| 21 | Di chuyển hướng 0 (`0`) | (13, 22) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 49 |
| 22-23 | Di chuyển hướng 0 (`0`) | (13, 21) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 48 |
| 24-25 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 47 |
| 26 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 18)) | 45 |
| 27-28 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 44 |
| 29-30 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 43 |
| 31 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 41 |
| 32 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 39 |
| 33 | Di chuyển hướng 1 (`1`) | (11, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 37 |
| 34-35 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 36 |
| 36-37 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 35 |
| 38 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 33 |
| 39 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 31 |
| 40-41 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 30 |
| 42 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 28 |
| 43 | Di chuyển hướng 1 (`1`) | (13, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 26 |
| 44-45 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 25 |
| 46-47 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 24 |
| 48-49 | Di chuyển hướng 1 (`1`) | (14, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 64 |
| 50-51 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 62 |
| 52-53 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 64 |
| 54-55 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 62 |
| 56 | Di chuyển hướng 5 (`5`) | (14, 2) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 60 |
| 57-58 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 59 |
| 59 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 57 |
| 60-62 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 55 |
| 63-64 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 54 |
| 65-66 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 52 |
| 67-68 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 50 |
| 69-70 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 49 |
| 71-72 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 48 |
| 73-74 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 47 |
| 75-76 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 45 |
| 77-78 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 1)) | 43 |
| 79-80 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 42 |
| 81-82 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 41 |
| 83-84 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 2)) | 40 |
| 85-86 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 39 |
| 87-88 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(0, 0)) | 38 |
| 89-90 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 37 |
| 91-92 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 35 |
| 93-94 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 33 |
| 95-96 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 32 |
| 97-98 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 31 |
| 99 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 29 |
| 100-101 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 28 |
| 102-103 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 27 |
| 104-105 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 26 |
| 106-107 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 24 |
| 108-109 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 22 |
| 110-111 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 21 |
| 112-114 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 19 |
| 115-116 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 17 |
| 117-118 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 16 |
| 119-120 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 15 |
| 121-122 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 14 |
| 123-124 | Di chuyển hướng 2 (`2`) | (17, 1) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 13 |
| 125-126 | Di chuyển hướng 2 (`2`) | (18, 1) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 12 |
| 127-129 | Di chuyển hướng 2 (`2`) | (19, 1) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 10 |
| 130-131 | Di chuyển hướng 3 (`3`) | (20, 1) | (20, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 2)) | 9 |
| 132-133 | Di chuyển hướng 2 (`2`) | (20, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 8 |
| 134-136 | Di chuyển hướng 2 (`2`) | (21, 2) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 6 |
| 137-138 | Di chuyển hướng 3 (`3`) | (22, 2) | (23, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 5 |
| 139-255 | Chờ 117 bước (`-117`) | (23, 3) | (23, 3) | Dự kiến đứng yên tại (23, 3); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(23, 3)) | 5 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (20, 30) (ô=980)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(19, 22))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(19, 22))
- Mảng hành động đã gửi server: `[0, 0, 1, 1, 0, 0, 0, 1, -241]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 30) | (20, 29) | Dự kiến đến điểm hẹn tọa độ (20, 29) | 64 |
| 2-3 | Di chuyển hướng 0 (`0`) | (20, 29) | (19, 28) | Dự kiến đến điểm hẹn tọa độ (19, 28) | 64 |
| 4 | Di chuyển hướng 1 (`1`) | (19, 28) | (20, 27) | Dự kiến đến điểm hẹn tọa độ (20, 27) | 64 |
| 5-6 | Di chuyển hướng 1 (`1`) | (20, 27) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 64 |
| 7-8 | Di chuyển hướng 0 (`0`) | (20, 26) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 64 |
| 9 | Di chuyển hướng 0 (`0`) | (20, 25) | (19, 24) | Dự kiến đến điểm hẹn tọa độ (19, 24) | 64 |
| 10-11 | Di chuyển hướng 0 (`0`) | (19, 24) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 64 |
| 12-14 | Di chuyển hướng 1 (`1`) | (19, 23) | (19, 22) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 64 |
| 15-255 | Chờ 241 bước (`-241`) | (19, 22) | (19, 22) | Dự kiến đứng yên tại (19, 22); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 22)) | 64 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (1, 2) (ô=65)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 3)
- Mảng hành động đã gửi server: `[2, 2, 3, 2, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 5, -223]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 64 |
| 2-3 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 64 |
| 4-5 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 64 |
| 6-7 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 64 |
| 8-9 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 64 |
| 10-11 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 64 |
| 12 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 64 |
| 13-14 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 64 |
| 15 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 64 |
| 16-17 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 64 |
| 18-19 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 64 |
| 20-21 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 64 |
| 22 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 64 |
| 23-24 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 64 |
| 25-26 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 64 |
| 27-28 | Di chuyển hướng 1 (`1`) | (14, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 64 |
| 29-30 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 3)) | 64 |
| 31-32 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 64 |
| 33-255 | Chờ 223 bước (`-223`) | (15, 3) | (15, 3) | Dự kiến đứng yên tại (15, 3); hướng tới tọa độ (15, 3) | 64 |

