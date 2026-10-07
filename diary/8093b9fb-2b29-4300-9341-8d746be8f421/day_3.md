# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 40
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 0) (ô=7)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 0)
- Mảng hành động đã gửi server: `[-40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-39 | Chờ 40 bước (`-40`) | (7, 0) | (7, 0) | Dự kiến đứng yên tại (7, 0); hướng tới tọa độ (7, 0) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 15) (ô=254)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 15)
- Mảng hành động đã gửi server: `[-40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-39 | Chờ 40 bước (`-40`) | (14, 15) | (14, 15) | Dự kiến đứng yên tại (14, 15); hướng tới tọa độ (14, 15) | 2 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 0) (ô=14)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=3, tọa độ=(15, 1))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=3, tọa độ=(15, 1))
- Mảng hành động đã gửi server: `[3, -38]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 0 |
| 2-39 | Chờ 38 bước (`-38`) | (15, 1) | (15, 1) | Dự kiến đứng yên tại (15, 1); mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 8) (ô=130)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 8)
- Mảng hành động đã gửi server: `[-40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-39 | Chờ 40 bước (`-40`) | (2, 8) | (2, 8) | Dự kiến đứng yên tại (2, 8); hướng tới tọa độ (2, 8) | 2 |

