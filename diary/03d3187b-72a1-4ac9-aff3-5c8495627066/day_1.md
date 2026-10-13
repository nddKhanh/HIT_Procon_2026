# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 36
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (15, 12) (ô=207)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 12)
- Mảng hành động đã gửi server: `[-36]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-35 | Chờ 36 bước (`-36`) | (15, 12) | (15, 12) | Dự kiến đứng yên tại (15, 12); hướng tới tọa độ (15, 12) | 6 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 15) (ô=254)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 15)
- Mảng hành động đã gửi server: `[-36]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-35 | Chờ 36 bước (`-36`) | (14, 15) | (14, 15) | Dự kiến đứng yên tại (14, 15); hướng tới tọa độ (14, 15) | 10 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 2) (ô=45)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=3, tọa độ=(15, 1))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=3, tọa độ=(15, 1))
- Mảng hành động đã gửi server: `[1, 1, 3, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 5 |
| 2 | Di chuyển hướng 1 (`1`) | (14, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 3 |
| 3-4 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 2 |
| 5-35 | Chờ 31 bước (`-31`) | (15, 1) | (15, 1) | Dự kiến đứng yên tại (15, 1); mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 2 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 10) (ô=161)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=10, tọa độ=(1, 15))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=10, tọa độ=(1, 15))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 3, 4, 5, 5, 5, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 15 |
| 2 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 13 |
| 3 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến di chuyển đến (3, 12); hướng tới tọa độ (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 11 |
| 4-5 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 10 |
| 6-7 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 9 |
| 8 | Di chuyển hướng 4 (`4`) | (4, 14) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới tọa độ (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 7 |
| 9 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến di chuyển đến (3, 15); hướng tới tọa độ (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 5 |
| 10 | Di chuyển hướng 5 (`5`) | (3, 15) | (2, 15) | Dự kiến di chuyển đến (2, 15); hướng tới tọa độ (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 3 |
| 11 | Di chuyển hướng 5 (`5`) | (2, 15) | (1, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 15)) | 1 |
| 12-35 | Chờ 24 bước (`-24`) | (1, 15) | (1, 15) | Dự kiến đứng yên tại (1, 15); mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 15)) | 1 |

