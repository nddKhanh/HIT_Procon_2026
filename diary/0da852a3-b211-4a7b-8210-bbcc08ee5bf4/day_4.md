# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 218
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
- Mảng hành động đã gửi server: `[-218]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-217 | Chờ 218 bước (`-218`) | (24, 9) | (24, 9) | Dự kiến đứng yên tại (24, 9); hướng tới tọa độ (24, 9) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 22) (ô=706)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 22)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 22)
- Mảng hành động đã gửi server: `[-218]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-217 | Chờ 218 bước (`-218`) | (2, 22) | (2, 22) | Dự kiến đứng yên tại (2, 22); hướng tới tọa độ (2, 22) | 1 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 14) (ô=459)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 14)
- Mảng hành động đã gửi server: `[-218]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-217 | Chờ 218 bước (`-218`) | (11, 14) | (11, 14) | Dự kiến đứng yên tại (11, 14); hướng tới tọa độ (11, 14) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 19) (ô=616)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=2, tọa độ=(8, 21))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=2, tọa độ=(8, 21))
- Mảng hành động đã gửi server: `[4, 3, -214]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (8, 19) | (7, 20) | Dự kiến di chuyển đến (7, 20); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 2 |
| 2-3 | Di chuyển hướng 3 (`3`) | (7, 20) | (8, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(8, 21)) | 1 |
| 4-217 | Chờ 214 bước (`-214`) | (8, 21) | (8, 21) | Dự kiến đứng yên tại (8, 21); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(8, 21)) | 1 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (8, 3) (ô=104)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 3)
- Mảng hành động đã gửi server: `[-218]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-217 | Chờ 218 bước (`-218`) | (8, 3) | (8, 3) | Dự kiến đứng yên tại (8, 3); hướng tới tọa độ (8, 3) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (0, 23) (ô=736)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(0, 23)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(0, 23)
- Mảng hành động đã gửi server: `[-218]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-217 | Chờ 218 bước (`-218`) | (0, 23) | (0, 23) | Dự kiến đứng yên tại (0, 23); hướng tới tọa độ (0, 23) | 0 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (12, 9) (ô=300)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 9)
- Mảng hành động đã gửi server: `[-218]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-217 | Chờ 218 bước (`-218`) | (12, 9) | (12, 9) | Dự kiến đứng yên tại (12, 9); hướng tới tọa độ (12, 9) | 3 |

### Xe #7 - Tuần tra

- Vị trí đầu ngày: (12, 9) (ô=300)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 9)
- Mảng hành động đã gửi server: `[-218]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-217 | Chờ 218 bước (`-218`) | (12, 9) | (12, 9) | Dự kiến đứng yên tại (12, 9); hướng tới tọa độ (12, 9) | 2 |

