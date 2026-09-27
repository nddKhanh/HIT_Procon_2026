# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 256
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 12 | #0 | #4 | (20, 11) | 0 | 64 |
| 97 | #0 | #4 | (20, 11) | 16 | 64 |
| 120 | #1 | #4 | (13, 12) | 8 | 64 |
| 120 | #2 | #4 | (13, 12) | 1 | 64 |
| 185 | #0 | #4 | (13, 12) | 4 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 11) (ô=372)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(23, 29)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(23, 29)
- Mảng hành động đã gửi server: `[-13, 5, 5, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 0, 5, 5, 2, 3, 2, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 3, 2, 2, 3, 3, 3, 2, 2, 3, 3, 2, 2, 2, 1, 2, 2, 2, 2, 0, 1, 1, 1, 1, 1, 1, 0, 5, 5, 5, 4, 4, 5, 4, 5, 4, 4, 0, 5, 0, 0, 0, 1, 0, 0, 4, 4, 4, 4, 4, 4, 5, 4, 4, 4, 4, 0, 5, 5, 5, 5, 5, 5, 5, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 3, 2, 3, 3, 3, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-12 | Chờ 13 bước (`-13`) | (20, 11) | (20, 11) | Dự kiến đứng yên tại (20, 11); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 64 |
| 13-14 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 63 |
| 15-16 | Di chuyển hướng 5 (`5`) | (19, 11) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 62 |
| 17-18 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 61 |
| 19-20 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 60 |
| 21-22 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 59 |
| 23-26 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 57 |
| 27-28 | Di chuyển hướng 0 (`0`) | (15, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 56 |
| 29-30 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 55 |
| 31 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 53 |
| 32-33 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 52 |
| 34-35 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 51 |
| 36-37 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 50 |
| 38-39 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 49 |
| 40-41 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 3)) | 48 |
| 42-43 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 47 |
| 44-45 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 46 |
| 46-47 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 45 |
| 48-49 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 44 |
| 50 | Di chuyển hướng 0 (`0`) | (6, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 42 |
| 51-52 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 41 |
| 53-54 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 2)) | 40 |
| 55-56 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 39 |
| 57-58 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 38 |
| 59-60 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 37 |
| 61 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 35 |
| 62-63 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 34 |
| 64-65 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 33 |
| 66 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 31 |
| 67-68 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 30 |
| 69-70 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 29 |
| 71-72 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 28 |
| 73-74 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 27 |
| 75-76 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 26 |
| 77-78 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 25 |
| 79-80 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 24 |
| 81-82 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 23 |
| 83-84 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 22 |
| 85-88 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 20 |
| 89-90 | Di chuyển hướng 3 (`3`) | (17, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 19 |
| 91-92 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 18 |
| 93-94 | Di chuyển hướng 2 (`2`) | (18, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 17 |
| 95-96 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 64 |
| 97-98 | Di chuyển hướng 3 (`3`) | (20, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 63 |
| 99-100 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 62 |
| 101 | Di chuyển hướng 2 (`2`) | (21, 13) | (22, 13) | Dự kiến đến điểm hẹn tọa độ (22, 13) | 60 |
| 102-103 | Di chuyển hướng 2 (`2`) | (22, 13) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 59 |
| 104-105 | Di chuyển hướng 2 (`2`) | (23, 13) | (24, 13) | Dự kiến đến điểm hẹn tọa độ (24, 13) | 58 |
| 106 | Di chuyển hướng 1 (`1`) | (24, 13) | (24, 12) | Dự kiến đến điểm hẹn tọa độ (24, 12) | 56 |
| 107-108 | Di chuyển hướng 2 (`2`) | (24, 12) | (25, 12) | Dự kiến đến điểm hẹn tọa độ (25, 12) | 55 |
| 109-110 | Di chuyển hướng 2 (`2`) | (25, 12) | (26, 12) | Dự kiến đến điểm hẹn tọa độ (26, 12) | 54 |
| 111-112 | Di chuyển hướng 2 (`2`) | (26, 12) | (27, 12) | Dự kiến đến điểm hẹn tọa độ (27, 12) | 53 |
| 113-114 | Di chuyển hướng 2 (`2`) | (27, 12) | (28, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(28, 12)) | 52 |
| 115-116 | Di chuyển hướng 0 (`0`) | (28, 12) | (28, 11) | Dự kiến đến điểm hẹn tọa độ (28, 11) | 51 |
| 117-118 | Di chuyển hướng 1 (`1`) | (28, 11) | (28, 10) | Dự kiến đến điểm hẹn tọa độ (28, 10) | 50 |
| 119 | Di chuyển hướng 1 (`1`) | (28, 10) | (29, 9) | Dự kiến đến điểm hẹn tọa độ (29, 9) | 48 |
| 120-121 | Di chuyển hướng 1 (`1`) | (29, 9) | (29, 8) | Dự kiến đến điểm hẹn tọa độ (29, 8) | 47 |
| 122-123 | Di chuyển hướng 1 (`1`) | (29, 8) | (30, 7) | Dự kiến đến điểm hẹn tọa độ (30, 7) | 46 |
| 124 | Di chuyển hướng 1 (`1`) | (30, 7) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 44 |
| 125-126 | Di chuyển hướng 1 (`1`) | (30, 6) | (31, 5) | Dự kiến đến điểm hẹn tọa độ (31, 5) | 43 |
| 127-128 | Di chuyển hướng 0 (`0`) | (31, 5) | (30, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(30, 4)) | 42 |
| 129-130 | Di chuyển hướng 5 (`5`) | (30, 4) | (29, 4) | Dự kiến đến điểm hẹn tọa độ (29, 4) | 41 |
| 131-132 | Di chuyển hướng 5 (`5`) | (29, 4) | (28, 4) | Dự kiến đến điểm hẹn tọa độ (28, 4) | 40 |
| 133-134 | Di chuyển hướng 5 (`5`) | (28, 4) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 39 |
| 135-136 | Di chuyển hướng 4 (`4`) | (27, 4) | (27, 5) | Dự kiến đến điểm hẹn tọa độ (27, 5) | 38 |
| 137-138 | Di chuyển hướng 4 (`4`) | (27, 5) | (26, 6) | Dự kiến đến điểm hẹn tọa độ (26, 6) | 37 |
| 139 | Di chuyển hướng 5 (`5`) | (26, 6) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 35 |
| 140-141 | Di chuyển hướng 4 (`4`) | (25, 6) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 34 |
| 142 | Di chuyển hướng 5 (`5`) | (25, 7) | (24, 7) | Dự kiến đến điểm hẹn tọa độ (24, 7) | 32 |
| 143-144 | Di chuyển hướng 4 (`4`) | (24, 7) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 31 |
| 145-146 | Di chuyển hướng 4 (`4`) | (23, 8) | (23, 9) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(23, 9)) | 30 |
| 147-148 | Di chuyển hướng 0 (`0`) | (23, 9) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 29 |
| 149 | Di chuyển hướng 5 (`5`) | (22, 8) | (21, 8) | Dự kiến đến điểm hẹn tọa độ (21, 8) | 27 |
| 150-151 | Di chuyển hướng 0 (`0`) | (21, 8) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 26 |
| 152-153 | Di chuyển hướng 0 (`0`) | (21, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 25 |
| 154-155 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 24 |
| 156-157 | Di chuyển hướng 1 (`1`) | (20, 5) | (20, 4) | Dự kiến đến điểm hẹn tọa độ (20, 4) | 23 |
| 158 | Di chuyển hướng 0 (`0`) | (20, 4) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 21 |
| 159-161 | Di chuyển hướng 0 (`0`) | (20, 3) | (19, 2) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(19, 2)) | 19 |
| 162-163 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 18 |
| 164-165 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 17 |
| 166-167 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 16 |
| 168 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 14 |
| 169 | Di chuyển hướng 4 (`4`) | (17, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 12 |
| 170-171 | Di chuyển hướng 4 (`4`) | (17, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 11 |
| 172-175 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 9 |
| 176-177 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 8 |
| 178-180 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 6 |
| 181-182 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 5 |
| 183-184 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 64 |
| 185-186 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 63 |
| 187 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 61 |
| 188 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 59 |
| 189-190 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 58 |
| 191-192 | Di chuyển hướng 5 (`5`) | (10, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 57 |
| 193-195 | Di chuyển hướng 5 (`5`) | (9, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 55 |
| 196-197 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 54 |
| 198-199 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(6, 11)) | 53 |
| 200-201 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 52 |
| 202 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 50 |
| 203-204 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 49 |
| 205-206 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 48 |
| 207-208 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 47 |
| 209-211 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 45 |
| 212-213 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 44 |
| 214 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 42 |
| 215-216 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 41 |
| 217-218 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 40 |
| 219-220 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 39 |
| 221-223 | Di chuyển hướng 3 (`3`) | (12, 20) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 37 |
| 224-225 | Di chuyển hướng 3 (`3`) | (13, 21) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 36 |
| 226-227 | Di chuyển hướng 3 (`3`) | (13, 22) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 35 |
| 228-229 | Di chuyển hướng 3 (`3`) | (14, 23) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 34 |
| 230-231 | Di chuyển hướng 3 (`3`) | (14, 24) | (15, 25) | Dự kiến đến điểm hẹn tọa độ (15, 25) | 33 |
| 232-233 | Di chuyển hướng 3 (`3`) | (15, 25) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 32 |
| 234 | Di chuyển hướng 3 (`3`) | (15, 26) | (16, 27) | Dự kiến đến điểm hẹn tọa độ (16, 27) | 30 |
| 235 | Di chuyển hướng 2 (`2`) | (16, 27) | (17, 27) | Dự kiến đến điểm hẹn tọa độ (17, 27) | 28 |
| 236-237 | Di chuyển hướng 2 (`2`) | (17, 27) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 27 |
| 238-239 | Di chuyển hướng 2 (`2`) | (18, 27) | (19, 27) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 27)) | 26 |
| 240-241 | Di chuyển hướng 2 (`2`) | (19, 27) | (20, 27) | Dự kiến đến điểm hẹn tọa độ (20, 27) | 25 |
| 242-244 | Di chuyển hướng 3 (`3`) | (20, 27) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 23 |
| 245-246 | Di chuyển hướng 2 (`2`) | (20, 28) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 22 |
| 247-248 | Di chuyển hướng 3 (`3`) | (21, 28) | (22, 29) | Dự kiến đến điểm hẹn tọa độ (22, 29) | 21 |
| 249 | Di chuyển hướng 3 (`3`) | (22, 29) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 19 |
| 250-251 | Di chuyển hướng 3 (`3`) | (22, 30) | (23, 31) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 31)) | 18 |
| 252-253 | Di chuyển hướng 0 (`0`) | (23, 31) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 17 |
| 254-255 | Di chuyển hướng 1 (`1`) | (22, 30) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 16 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (6, 11) (ô=358)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(13, 12))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(13, 12))
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 2, 2, 2, 2, -241]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 18 |
| 2 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 16 |
| 3-4 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 15 |
| 5-6 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 14 |
| 7 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 12 |
| 8-9 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 11 |
| 10-11 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 10 |
| 12-14 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 8 |
| 15-255 | Chờ 241 bước (`-241`) | (13, 12) | (13, 12) | Dự kiến đứng yên tại (13, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 64 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 12) (ô=397)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(30, 4))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(30, 4))
- Mảng hành động đã gửi server: `[-120, 0, 1, 0, 0, 0, 0, 0, 0, 0, 3, 3, 2, 2, 2, 3, 3, 3, 2, 1, 1, 1, 1, 1, 1, 4, 4, 3, 3, 3, 3, 3, 4, 4, 1, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 2, 2, 2, -51]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-119 | Chờ 120 bước (`-120`) | (13, 12) | (13, 12) | Dự kiến đứng yên tại (13, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 64 |
| 120-121 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 63 |
| 122 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 61 |
| 123-124 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 60 |
| 125-127 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 58 |
| 128 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 56 |
| 129-130 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 55 |
| 131-132 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 54 |
| 133-134 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 53 |
| 135-136 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 3)) | 52 |
| 137-138 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 51 |
| 139-140 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 50 |
| 141-142 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 49 |
| 143-144 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 48 |
| 145-146 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 47 |
| 147-148 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 46 |
| 149 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 44 |
| 150-151 | Di chuyển hướng 3 (`3`) | (15, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 43 |
| 152-153 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 42 |
| 154-157 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 40 |
| 158-159 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 39 |
| 160 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 37 |
| 161 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 35 |
| 162-163 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 34 |
| 164-165 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(19, 2)) | 33 |
| 166-167 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 32 |
| 168-169 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 31 |
| 170-171 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 30 |
| 172 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 28 |
| 173-174 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 27 |
| 175-176 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 26 |
| 177-178 | Di chuyển hướng 3 (`3`) | (20, 8) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 25 |
| 179 | Di chuyển hướng 4 (`4`) | (21, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 23 |
| 180-181 | Di chuyển hướng 4 (`4`) | (20, 10) | (20, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 22 |
| 182-183 | Di chuyển hướng 1 (`1`) | (20, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 21 |
| 184-185 | Di chuyển hướng 1 (`1`) | (20, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 20 |
| 186 | Di chuyển hướng 2 (`2`) | (21, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 18 |
| 187 | Di chuyển hướng 1 (`1`) | (22, 9) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 16 |
| 188 | Di chuyển hướng 2 (`2`) | (22, 8) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 14 |
| 189-190 | Di chuyển hướng 2 (`2`) | (23, 8) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 13 |
| 191-192 | Di chuyển hướng 1 (`1`) | (24, 8) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 12 |
| 193 | Di chuyển hướng 1 (`1`) | (25, 7) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 10 |
| 194-195 | Di chuyển hướng 2 (`2`) | (25, 6) | (26, 6) | Dự kiến đến điểm hẹn tọa độ (26, 6) | 9 |
| 196 | Di chuyển hướng 1 (`1`) | (26, 6) | (27, 5) | Dự kiến đến điểm hẹn tọa độ (27, 5) | 7 |
| 197-198 | Di chuyển hướng 1 (`1`) | (27, 5) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 6 |
| 199-200 | Di chuyển hướng 2 (`2`) | (27, 4) | (28, 4) | Dự kiến đến điểm hẹn tọa độ (28, 4) | 5 |
| 201-202 | Di chuyển hướng 2 (`2`) | (28, 4) | (29, 4) | Dự kiến đến điểm hẹn tọa độ (29, 4) | 4 |
| 203-204 | Di chuyển hướng 2 (`2`) | (29, 4) | (30, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(30, 4)) | 3 |
| 205-255 | Chờ 51 bước (`-51`) | (30, 4) | (30, 4) | Dự kiến đứng yên tại (30, 4); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(30, 4)) | 3 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (10, 3) (ô=106)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(23, 31))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(23, 31))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 4, 4, 3, 4, 3, 4, 4, 4, 4, 4, 4, 4, 4, 5, 4, 5, 4, 4, 5, 5, 2, 2, 3, 2, 2, 2, 3, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 2, 3, -167]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 63 |
| 2-3 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 62 |
| 4-5 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 61 |
| 6-7 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 60 |
| 8-9 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 59 |
| 10 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 57 |
| 11-12 | Di chuyển hướng 4 (`4`) | (12, 9) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 56 |
| 13-14 | Di chuyển hướng 3 (`3`) | (11, 10) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 55 |
| 15 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 53 |
| 16-17 | Di chuyển hướng 3 (`3`) | (11, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 52 |
| 18-19 | Di chuyển hướng 4 (`4`) | (12, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 51 |
| 20-21 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 50 |
| 22-23 | Di chuyển hướng 4 (`4`) | (11, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 49 |
| 24 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 47 |
| 25-27 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 45 |
| 28-29 | Di chuyển hướng 4 (`4`) | (9, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 44 |
| 30-31 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 43 |
| 32-33 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 42 |
| 34-35 | Di chuyển hướng 5 (`5`) | (8, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 41 |
| 36 | Di chuyển hướng 4 (`4`) | (7, 21) | (6, 22) | Dự kiến đến điểm hẹn tọa độ (6, 22) | 39 |
| 37-38 | Di chuyển hướng 5 (`5`) | (6, 22) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 38 |
| 39 | Di chuyển hướng 4 (`4`) | (5, 22) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 36 |
| 40 | Di chuyển hướng 4 (`4`) | (5, 23) | (4, 24) | Dự kiến đến điểm hẹn tọa độ (4, 24) | 34 |
| 41 | Di chuyển hướng 5 (`5`) | (4, 24) | (3, 24) | Dự kiến đến điểm hẹn tọa độ (3, 24) | 32 |
| 42-43 | Di chuyển hướng 5 (`5`) | (3, 24) | (2, 24) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 24)) | 31 |
| 44-45 | Di chuyển hướng 2 (`2`) | (2, 24) | (3, 24) | Dự kiến đến điểm hẹn tọa độ (3, 24) | 30 |
| 46-47 | Di chuyển hướng 2 (`2`) | (3, 24) | (4, 24) | Dự kiến đến điểm hẹn tọa độ (4, 24) | 29 |
| 48 | Di chuyển hướng 3 (`3`) | (4, 24) | (5, 25) | Dự kiến đến điểm hẹn tọa độ (5, 25) | 27 |
| 49-50 | Di chuyển hướng 2 (`2`) | (5, 25) | (6, 25) | Dự kiến đến điểm hẹn tọa độ (6, 25) | 26 |
| 51-52 | Di chuyển hướng 2 (`2`) | (6, 25) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 25 |
| 53-54 | Di chuyển hướng 2 (`2`) | (7, 25) | (8, 25) | Dự kiến đến điểm hẹn tọa độ (8, 25) | 24 |
| 55-56 | Di chuyển hướng 3 (`3`) | (8, 25) | (8, 26) | Dự kiến đến điểm hẹn tọa độ (8, 26) | 23 |
| 57 | Di chuyển hướng 2 (`2`) | (8, 26) | (9, 26) | Dự kiến đến điểm hẹn tọa độ (9, 26) | 21 |
| 58 | Di chuyển hướng 2 (`2`) | (9, 26) | (10, 26) | Dự kiến đến điểm hẹn tọa độ (10, 26) | 19 |
| 59 | Di chuyển hướng 2 (`2`) | (10, 26) | (11, 26) | Dự kiến đến điểm hẹn tọa độ (11, 26) | 17 |
| 60-61 | Di chuyển hướng 3 (`3`) | (11, 26) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 16 |
| 62-63 | Di chuyển hướng 2 (`2`) | (12, 27) | (13, 27) | Dự kiến đến điểm hẹn tọa độ (13, 27) | 15 |
| 64-65 | Di chuyển hướng 2 (`2`) | (13, 27) | (14, 27) | Dự kiến đến điểm hẹn tọa độ (14, 27) | 14 |
| 66-67 | Di chuyển hướng 2 (`2`) | (14, 27) | (15, 27) | Dự kiến đến điểm hẹn tọa độ (15, 27) | 13 |
| 68-70 | Di chuyển hướng 2 (`2`) | (15, 27) | (16, 27) | Dự kiến đến điểm hẹn tọa độ (16, 27) | 11 |
| 71 | Di chuyển hướng 2 (`2`) | (16, 27) | (17, 27) | Dự kiến đến điểm hẹn tọa độ (17, 27) | 9 |
| 72-73 | Di chuyển hướng 2 (`2`) | (17, 27) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 8 |
| 74-75 | Di chuyển hướng 2 (`2`) | (18, 27) | (19, 27) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 27)) | 7 |
| 76-77 | Di chuyển hướng 2 (`2`) | (19, 27) | (20, 27) | Dự kiến đến điểm hẹn tọa độ (20, 27) | 6 |
| 78-80 | Di chuyển hướng 3 (`3`) | (20, 27) | (20, 28) | Dự kiến đến điểm hẹn tọa độ (20, 28) | 4 |
| 81-82 | Di chuyển hướng 3 (`3`) | (20, 28) | (21, 29) | Dự kiến đến điểm hẹn tọa độ (21, 29) | 3 |
| 83-84 | Di chuyển hướng 3 (`3`) | (21, 29) | (21, 30) | Dự kiến đến điểm hẹn tọa độ (21, 30) | 2 |
| 85-86 | Di chuyển hướng 2 (`2`) | (21, 30) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 1 |
| 87-88 | Di chuyển hướng 3 (`3`) | (22, 30) | (23, 31) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 31)) | 0 |
| 89-255 | Chờ 167 bước (`-167`) | (23, 31) | (23, 31) | Dự kiến đứng yên tại (23, 31); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 31)) | 0 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (18, 4) (ô=146)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(13, 12))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(13, 12))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 4, 4, -85, 5, 5, 0, 0, 0, 5, 4, 4, 4, 4, -136]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 64 |
| 2 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 64 |
| 3-4 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 64 |
| 5-6 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 64 |
| 7-8 | Di chuyển hướng 3 (`3`) | (20, 8) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 64 |
| 9 | Di chuyển hướng 4 (`4`) | (21, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 64 |
| 10-11 | Di chuyển hướng 4 (`4`) | (20, 10) | (20, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 64 |
| 12-96 | Chờ 85 bước (`-85`) | (20, 11) | (20, 11) | Dự kiến đứng yên tại (20, 11); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 11)) | 64 |
| 97-98 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 64 |
| 99-100 | Di chuyển hướng 5 (`5`) | (19, 11) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 64 |
| 101-102 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 64 |
| 103-104 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 64 |
| 105-106 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 64 |
| 107-110 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 64 |
| 111-112 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 64 |
| 113-115 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 64 |
| 116-117 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 64 |
| 118-119 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 64 |
| 120-255 | Chờ 136 bước (`-136`) | (13, 12) | (13, 12) | Dự kiến đứng yên tại (13, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 12)) | 64 |

