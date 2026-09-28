# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 179
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (24, 9) (ô=312)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(24, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(24, 9)
- Mảng hành động đã gửi server: `[-179]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-178 | Chờ 179 bước (`-179`) | (24, 9) | (24, 9) | Dự kiến đứng yên tại (24, 9); hướng tới tọa độ (24, 9) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 22) (ô=706)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 22)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 22)
- Mảng hành động đã gửi server: `[-179]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-178 | Chờ 179 bước (`-179`) | (2, 22) | (2, 22) | Dự kiến đứng yên tại (2, 22); hướng tới tọa độ (2, 22) | 1 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 14) (ô=459)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 14)
- Mảng hành động đã gửi server: `[-179]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-178 | Chờ 179 bước (`-179`) | (11, 14) | (11, 14) | Dự kiến đứng yên tại (11, 14); hướng tới tọa độ (11, 14) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 21) (ô=680)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(8, 19))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(8, 19))
- Mảng hành động đã gửi server: `[0, 1, -175]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 21) | (7, 20) | Dự kiến di chuyển đến (7, 20); hướng tới tọa độ (8, 19) (Spot #3 (thương hiệu=3, tọa độ=(8, 19))) | 4 |
| 2-3 | Di chuyển hướng 1 (`1`) | (7, 20) | (8, 19) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 19)) | 3 |
| 4-178 | Chờ 175 bước (`-175`) | (8, 19) | (8, 19) | Dự kiến đứng yên tại (8, 19); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 19)) | 3 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (8, 3) (ô=104)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 3)
- Mảng hành động đã gửi server: `[-179]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-178 | Chờ 179 bước (`-179`) | (8, 3) | (8, 3) | Dự kiến đứng yên tại (8, 3); hướng tới tọa độ (8, 3) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (0, 23) (ô=736)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(0, 23)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(0, 23)
- Mảng hành động đã gửi server: `[-179]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-178 | Chờ 179 bước (`-179`) | (0, 23) | (0, 23) | Dự kiến đứng yên tại (0, 23); hướng tới tọa độ (0, 23) | 0 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (12, 9) (ô=300)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 9)
- Mảng hành động đã gửi server: `[-179]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-178 | Chờ 179 bước (`-179`) | (12, 9) | (12, 9) | Dự kiến đứng yên tại (12, 9); hướng tới tọa độ (12, 9) | 3 |

### Xe #7 - Tuần tra

- Vị trí đầu ngày: (14, 6) (ô=206)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(12, 9))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(12, 9))
- Mảng hành động đã gửi server: `[5, 4, 4, 4, -171]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 5 |
| 2-3 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 4 |
| 4-5 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 3 |
| 6-7 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 9)) | 2 |
| 8-178 | Chờ 171 bước (`-171`) | (12, 9) | (12, 9) | Dự kiến đứng yên tại (12, 9); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 9)) | 2 |

