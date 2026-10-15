# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 36
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 3) (ô=56)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=1, tọa độ=(7, 0))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=1, tọa độ=(7, 0))
- Mảng hành động đã gửi server: `[5, 1, 1, 0, -30]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=4, tọa độ=(7, 3)) | 5 |
| 2-3 | Di chuyển hướng 1 (`1`) | (7, 3) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 4 |
| 4 | Di chuyển hướng 1 (`1`) | (7, 2) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 2 |
| 5 | Di chuyển hướng 0 (`0`) | (8, 1) | (7, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(7, 0)) | 0 |
| 6-35 | Chờ 30 bước (`-30`) | (7, 0) | (7, 0) | Dự kiến đứng yên tại (7, 0); mục tiêu Spot #2 (thương hiệu=1, tọa độ=(7, 0)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 14) (ô=236)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=11, tọa độ=(14, 15))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=11, tọa độ=(14, 15))
- Mảng hành động đã gửi server: `[3, 2, -34]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (12, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 4 |
| 1 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=11, tọa độ=(14, 15)) | 2 |
| 2-35 | Chờ 34 bước (`-34`) | (14, 15) | (14, 15) | Dự kiến đứng yên tại (14, 15); mục tiêu Spot #15 (thương hiệu=11, tọa độ=(14, 15)) | 2 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 2) (ô=45)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=3, tọa độ=(15, 1))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=3, tọa độ=(15, 1))
- Mảng hành động đã gửi server: `[1, 1, 3, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 5 |
| 2 | Di chuyển hướng 1 (`1`) | (14, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 3 |
| 3-4 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 2 |
| 5-35 | Chờ 31 bước (`-31`) | (15, 1) | (15, 1) | Dự kiến đứng yên tại (15, 1); mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 2 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 8) (ô=130)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=6, tọa độ=(2, 8))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=6, tọa độ=(2, 8))
- Mảng hành động đã gửi server: `[-36]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-35 | Chờ 36 bước (`-36`) | (2, 8) | (2, 8) | Dự kiến đứng yên tại (2, 8); mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 2 |

