# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 88
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 28) (ô=910)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 28)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 28)
- Mảng hành động đã gửi server: `[-88]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-87 | Chờ 88 bước (`-88`) | (14, 28) | (14, 28) | Dự kiến đứng yên tại (14, 28); hướng tới tọa độ (14, 28) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (13, 0) (ô=13)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=4, tọa độ=(16, 4))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=4, tọa độ=(16, 4))
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 4, 3, -73]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (13, 0) | (14, 0) | Dự kiến di chuyển đến (14, 0); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 9 |
| 2-3 | Di chuyển hướng 2 (`2`) | (14, 0) | (15, 0) | Dự kiến di chuyển đến (15, 0); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 8 |
| 4-6 | Di chuyển hướng 3 (`3`) | (15, 0) | (16, 1) | Dự kiến di chuyển đến (16, 1); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 6 |
| 7-9 | Di chuyển hướng 3 (`3`) | (16, 1) | (16, 2) | Dự kiến di chuyển đến (16, 2); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 4 |
| 10-11 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 3 |
| 12-14 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 1 |
| 15-87 | Chờ 73 bước (`-73`) | (16, 4) | (16, 4) | Dự kiến đứng yên tại (16, 4); mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 1 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (5, 23) (ô=741)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 23)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 23)
- Mảng hành động đã gửi server: `[-88]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-87 | Chờ 88 bước (`-88`) | (5, 23) | (5, 23) | Dự kiến đứng yên tại (5, 23); hướng tới tọa độ (5, 23) | 3 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (31, 0) (ô=31)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(31, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(31, 0)
- Mảng hành động đã gửi server: `[-88]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-87 | Chờ 88 bước (`-88`) | (31, 0) | (31, 0) | Dự kiến đứng yên tại (31, 0); hướng tới tọa độ (31, 0) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (26, 18) (ô=602)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(26, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(26, 18)
- Mảng hành động đã gửi server: `[-88]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-87 | Chờ 88 bước (`-88`) | (26, 18) | (26, 18) | Dự kiến đứng yên tại (26, 18); hướng tới tọa độ (26, 18) | 2 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (5, 12) (ô=389)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 12)
- Mảng hành động đã gửi server: `[-88]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-87 | Chờ 88 bước (`-88`) | (5, 12) | (5, 12) | Dự kiến đứng yên tại (5, 12); hướng tới tọa độ (5, 12) | 0 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (0, 30) (ô=960)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(0, 30)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(0, 30)
- Mảng hành động đã gửi server: `[-88]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-87 | Chờ 88 bước (`-88`) | (0, 30) | (0, 30) | Dự kiến đứng yên tại (0, 30); hướng tới tọa độ (0, 30) | 6 |

