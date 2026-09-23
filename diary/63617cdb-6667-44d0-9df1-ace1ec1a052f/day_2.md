# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 55
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (15, 7) (ô=190)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 7)
- Mảng hành động đã gửi server: `[-55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-54 | Chờ 55 bước (`-55`) | (15, 7) | (15, 7) | Dự kiến đứng yên tại (15, 7); hướng tới tọa độ (15, 7) | 2 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (10, 25) (ô=635)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 25)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 25)
- Mảng hành động đã gửi server: `[-55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-54 | Chờ 55 bước (`-55`) | (10, 25) | (10, 25) | Dự kiến đứng yên tại (10, 25); hướng tới tọa độ (10, 25) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 6) (ô=160)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(8, 7))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(8, 7))
- Mảng hành động đã gửi server: `[5, 4, 5, -49]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (8, 7) (Spot #6 (thương hiệu=6, tọa độ=(8, 7))) | 2 |
| 2-3 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (8, 7) (Spot #6 (thương hiệu=6, tọa độ=(8, 7))) | 1 |
| 4-5 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 7)) | 0 |
| 6-54 | Chờ 49 bước (`-49`) | (8, 7) | (8, 7) | Dự kiến đứng yên tại (8, 7); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 7)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 10) (ô=257)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 10)
- Mảng hành động đã gửi server: `[-55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-54 | Chờ 55 bước (`-55`) | (7, 10) | (7, 10) | Dự kiến đứng yên tại (7, 10); hướng tới tọa độ (7, 10) | 1 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (4, 0) (ô=4)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 0)
- Mảng hành động đã gửi server: `[-55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-54 | Chờ 55 bước (`-55`) | (4, 0) | (4, 0) | Dự kiến đứng yên tại (4, 0); hướng tới tọa độ (4, 0) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (24, 18) (ô=474)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(22, 16))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(22, 16))
- Mảng hành động đã gửi server: `[0, 0, 0, 1, 4, 4, -43]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (24, 18) | (24, 17) | Dự kiến di chuyển đến (24, 17); hướng tới tọa độ (23, 14) (Spot #13 (thương hiệu=13, tọa độ=(23, 14))) | 6 |
| 2-3 | Di chuyển hướng 0 (`0`) | (24, 17) | (23, 16) | Dự kiến di chuyển đến (23, 16); hướng tới tọa độ (23, 14) (Spot #13 (thương hiệu=13, tọa độ=(23, 14))) | 5 |
| 4-5 | Di chuyển hướng 0 (`0`) | (23, 16) | (23, 15) | Dự kiến di chuyển đến (23, 15); hướng tới tọa độ (23, 14) (Spot #13 (thương hiệu=13, tọa độ=(23, 14))) | 4 |
| 6-7 | Di chuyển hướng 1 (`1`) | (23, 15) | (23, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(23, 14)) | 3 |
| 8-9 | Di chuyển hướng 4 (`4`) | (23, 14) | (23, 15) | Dự kiến di chuyển đến (23, 15); hướng tới tọa độ (22, 16) (Spot #14 (thương hiệu=14, tọa độ=(22, 16))) | 2 |
| 10-11 | Di chuyển hướng 4 (`4`) | (23, 15) | (22, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(22, 16)) | 1 |
| 12-54 | Chờ 43 bước (`-43`) | (22, 16) | (22, 16) | Dự kiến đứng yên tại (22, 16); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(22, 16)) | 1 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (2, 19) (ô=477)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(5, 19))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(5, 19))
- Mảng hành động đã gửi server: `[2, 2, 2, -49]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 19) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (5, 19) (Spot #2 (thương hiệu=2, tọa độ=(5, 19))) | 2 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 19) | (4, 19) | Dự kiến di chuyển đến (4, 19); hướng tới tọa độ (5, 19) (Spot #2 (thương hiệu=2, tọa độ=(5, 19))) | 1 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 19) | (5, 19) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 19)) | 0 |
| 6-54 | Chờ 49 bước (`-49`) | (5, 19) | (5, 19) | Dự kiến đứng yên tại (5, 19); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 19)) | 0 |

### Xe #7 - Tuần tra

- Vị trí đầu ngày: (18, 0) (ô=18)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 0)
- Mảng hành động đã gửi server: `[-55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-54 | Chờ 55 bước (`-55`) | (18, 0) | (18, 0) | Dự kiến đứng yên tại (18, 0); hướng tới tọa độ (18, 0) | 1 |

