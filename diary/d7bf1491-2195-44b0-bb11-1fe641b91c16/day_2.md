# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 42
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Chỉ số hiệu suất

- Patrol movement steps: 8
- Patrol wait steps: 202
- Servings mô phỏng: 5
- Servings / 100 movement steps: 62.5

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 7) (ô=133)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(11, 14))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(11, 14))
- Movement steps / wait steps: 2 / 40
- Servings mô phỏng: 1
- Lý do chờ cuối kế hoạch: INSUFFICIENT_DAY_STEPS
- Mảng hành động đã gửi server: `[4, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (14, 7) | (13, 8) | Dự kiến di chuyển đến (13, 8); hướng tới tọa độ (11, 14) (Spot #1 (thương hiệu=1, tọa độ=(11, 14))) | 1 |
| 2-41 | Chờ 40 bước (`-40`) | (13, 8) | (13, 8) | Dự kiến đứng yên tại (13, 8); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 14)) | 1 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 7) (ô=133)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(10, 3))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(10, 3))
- Movement steps / wait steps: 2 / 40
- Servings mô phỏng: 1
- Lý do chờ cuối kế hoạch: NO_FUEL
- Mảng hành động đã gửi server: `[0, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (10, 3) (Spot #5 (thương hiệu=5, tọa độ=(10, 3))) | 0 |
| 2-41 | Chờ 40 bước (`-40`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(10, 3)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 13) (ô=231)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(16, 13))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(16, 13))
- Movement steps / wait steps: 4 / 38
- Servings mô phỏng: 1
- Lý do chờ cuối kế hoạch: NO_FUEL
- Mảng hành động đã gửi server: `[2, 2, -38]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới tọa độ (16, 13) (Spot #10 (thương hiệu=10, tọa độ=(16, 13))) | 1 |
| 2-3 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới tọa độ (16, 13) (Spot #10 (thương hiệu=10, tọa độ=(16, 13))) | 0 |
| 4-41 | Chờ 38 bước (`-38`) | (12, 13) | (12, 13) | Dự kiến đứng yên tại (12, 13); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(16, 13)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 13) (ô=232)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 13)
- Movement steps / wait steps: 0 / 42
- Servings mô phỏng: 1
- Lý do chờ cuối kế hoạch: NO_FUEL
- Mảng hành động đã gửi server: `[-42]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-41 | Chờ 42 bước (`-42`) | (11, 13) | (11, 13) | Dự kiến đứng yên tại (11, 13); hướng tới tọa độ (11, 13) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (10, 13) (ô=231)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 13)
- Movement steps / wait steps: 0 / 42
- Servings mô phỏng: 1
- Lý do chờ cuối kế hoạch: NO_FUEL
- Mảng hành động đã gửi server: `[-42]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-41 | Chờ 42 bước (`-42`) | (10, 13) | (10, 13) | Dự kiến đứng yên tại (10, 13); hướng tới tọa độ (10, 13) | 0 |

