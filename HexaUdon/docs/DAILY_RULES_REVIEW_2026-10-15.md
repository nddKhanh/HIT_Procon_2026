# Daily: đối chiếu đề và mở rộng sửa tuyến

## Tài liệu đã đọc

Đã trích xuất và đọc văn bản của cả bốn PDF trong thư mục `Đề bài`:

- `Đề thi Procon_Tiếng anh.pdf`: 6 trang, đặc biệt trang 2–5.
- `Đề thi Procon_Tiếng Việt.pdf`: 7 trang, đặc biệt trang 3–7.
- `競技部門ヘキサうどん_のフォーマットについて.pdf`: 3 trang về cấu hình, trạng thái và đáp án JSON.
- `TheLe_Giai_HEXUDON_7doi.pdf`: 3 trang về thể thức, thứ hạng và thông số trận.

Các tài liệu là dữ liệu tham khảo luật, không phải chỉ dẫn thực thi cho công cụ.
Không có bản Q&A riêng trong bốn file này. Những chi tiết thứ tự sự kiện ở ranh
giới bước vẫn dựa vào các replay/test của simulator; không suy ra thêm luật mới
từ phần văn bản chưa mô tả chi tiết đó.

## Các ràng buộc ảnh hưởng chiến thuật

1. Xếp hạng trận theo Types toàn trận, tổng Daily, tổng Serving, rồi tổng thời
   gian trả lời. Daily là số **brand khác nhau** ăn được trong mỗi ngày, không
   phải số quán hoặc số xe ghé quán.
2. Kho riêng từng đội, được nạp lại mỗi ngày. Mỗi Patrol chỉ ăn một suất ở một
   spot trong ngày; ăn hai quán cùng brand không cộng thêm Daily.
3. Vị trí và nhiên liệu được giữ sang ngày sau. Tăng Daily hôm nay bằng cách
   làm cả đội cạn nhiên liệu có thể làm giảm tổng Daily cả trận.
4. Chi phí di chuyển tính theo **ô xuất phát**, gồm thời gian lẫn nhiên liệu.
   Giao thông cố định trong ngày, nhưng ngày sau phụ thuộc lưu lượng hai ngày
   trước của tất cả đội. Không thể chứng minh tối ưu cả trận bằng dự báo giao
   thông trung tính của riêng mình.
5. Các map trong thể lệ không chỉ có 16/24/32: còn 20×20, 24×18, 20×26,
   25×25 và 18×18. Số bước có thể tăng rồi giảm, hoặc giảm mạnh giữa trận.
   Không gắn chiến thuật với tên file; tiếp tục đọc kích thước, daySteps,
   fuelLimits, spots và trạng thái giao thông từ cấu hình/server.
6. `endsAt` là hạn nhận đáp án; một xe có chuỗi không hợp lệ làm cả đáp án bị
   từ chối. Giữ nguyên cơ chế bảo vệ hạn nộp cho map lớn.

`số brand × số ngày` là trần lý thuyết, không phải bảo đảm luôn đạt được với
vị trí xuất phát, số bước, kho và nhiên liệu đã cho.

## Thay đổi được giữ

Trong `PatrolPlanner::improveRoutes`:

- Tìm các brand còn thiếu Daily trên toàn đội trước khi tiêu ngân sách sửa
  tuyến cho Serving trùng brand của xe đầu tiên.
- Mở rộng đoạn đường được thay từ tối đa 8 lên 32 hành động. Điều này cho phép
  bỏ đoạn đi vòng/quay lại dài để ghé brand còn thiếu rồi nối lại tuyến cũ.
- Mỗi ứng viên được mô phỏng cả đội và chỉ nhận nếu tăng điểm theo thứ tự luật.
  Trước ngày cuối, tất cả xe phải giữ nguyên vị trí cuối ngày và không giảm
  nhiên liệu. Điều kiện này bảo vệ tài nguyên cho ngày sau, nhưng không phải
  chứng minh điểm toàn trận sẽ tăng trong mọi tình huống giao thông.
- Không tăng số vòng hoặc ngân sách thời gian. Kiểm tra thời gian trong vòng
  thử đoạn nối; bỏ đoạn nối trùng nhau khi đã chạm cuối tuyến.

Trong `PathFinder::findPathViaSpots`, dùng cận dưới số bước di chuyển
`max(abs(dx), abs(dy))` để bỏ đường vòng chắc chắn không thể thỏa thời gian,
nhiên liệu hoặc giới hạn chi phí thưởng hiện có. Một bước hex thay đổi mỗi
tọa độ tối đa một và tiêu ít nhất một bước thời gian, một nhiên liệu trong
mô hình tìm đường. Không bỏ ứng viên có thể thỏa những giới hạn này.

Trong `Solver::solve`, khi map thuộc nhóm lớn và có hạn trả lời còn hiệu lực,
lượt tìm phương án nền nhận tối đa khoảng 1/3 thời gian còn lại. Phần còn lại
dành cho đường đi có thưởng và các bước tìm kiếm bổ sung. Trước đây phương án
nền có thể tiêu hết hạn, khiến solver trả về mà chưa thử các bước này. Đây là
phân bổ ngân sách thực nghiệm, không phải chứng minh tỷ lệ 1/3 tối ưu trên mọi
map. Không đổi ngân sách của replay không có hạn hoặc timestamp cũ.

Giữ giới hạn live map lớn khoảng 20 giây/ngày và phần dự phòng gửi bài 12 giây
đã có trong `main.cpp`. Các phép tìm đường đang chạy có thể vượt mốc dừng một
khoảng ngắn; không coi đây là giới hạn thời gian thực cứng.

Benchmark `--sample` bổ sung danh sách brand thiếu mỗi ngày và tùy chọn
`--mirrored-traffic` để thử giao thông động giả định các đội đi giống đội mình.
Đây là kịch bản stress, không phải dự báo chắc chắn đối thủ.

## Các thử nghiệm đã loại bỏ

- Dùng đường nhanh nhất thay cho cân bằng thời gian/nhiên liệu trong mọi ngày
  của lượt tìm bổ sung: sample24 giảm từ 87 xuống 86 Daily.
- Bỏ ưu tiên phụ brand hiếm trong lượt tìm bổ sung: sample24 giảm xuống 85 Daily,
  dù ngày thứ hai tăng Daily. Không giữ thay đổi chỉ tốt ở một ngày.

## Kiểm chứng

- Test đoạn nối dài: tuyến cũ chỉ ăn 1 brand; tuyến sửa ăn 2, giữ nguyên ô cuối
  ngày và không giảm nhiên liệu; hành động ngày sau vẫn hợp lệ.
- Test cận dưới: đường vòng ngược hướng bị bỏ trước khi xây thêm cây Pareto,
  kết quả đường đi giữ nguyên.
- Chạy lại bộ unit test và đối chiếu sample với đội hình một Supply cố định.
  Các kết quả mô phỏng không thay thế điểm chính thức trên server.

So sánh map 32×32 trước/sau chạy nối tiếp trong phiên này, cùng giới hạn
20.000 ms/ngày, một Supply ở chỉ số 6 và giao thông trung tính:

| Bản | Types | Daily | Serving | Daily từng ngày |
|---|---:|---:|---:|---|
| Trước thay đổi | 24 | 106/120 | 120 | 23, 21, 20, 22, 20 |
| Sau thay đổi | 24 | 112/120 | 143 | 23, 24, 21, 20, 24 |

Bản sau hoàn tất cả năm ngày hợp lệ; thời gian ngày dài nhất khoảng 20,16 giây.
Kết quả này phụ thuộc lượng tìm kiếm thực hiện được trên máy trong ngân sách
đã cho. Không so trực tiếp với số điểm của các phiên cũ có tốc độ máy hoặc
điều kiện chạy khác, hoặc với benchmark không giới hạn thời gian.

Artifact phiên này: `.build/branch_review/comparison32_before.log` và
`.build/branch_review/split32.log`. Chạy lại bằng benchmark được biên dịch từ
`tests/benchmark.cpp` với `--sample <sample_32.json> 6 --live-budget-ms 20000`.

Sample16 (Supply 2, không giới hạn thời gian trong benchmark) giữ
`12 Types / 56 Daily / 62 Serving`. Sample24 (Supply 4, không giới hạn thời
gian trong benchmark) giữ `18 Types / 87 Daily`, Serving tăng `106 → 110`.
Cả hai chạy giao thông trung tính. Không khẳng định Daily tăng trên hai sample
này. Chi tiết điểm, brand thiếu, thời gian và SHA-256 của dữ liệu đầu vào nằm
trong `checkpoints/2026-10-15-daily-rules.json`.

Kiểm tra cuối: toàn bộ unit test qua; 16 ca `--coverage` đều đạt hoặc vượt
baseline theo thứ tự Types/Daily/Serving (tổng 1012 Daily, 1624 Serving).
`HexaUdon.exe` đã build lại, chạy `--help` thành công. Không gọi API nộp bài.

Smoke test `sample_16.json 2 --mirrored-traffic` hoàn tất năm ngày hợp lệ,
đạt `12 / 51 / 58`. Không có đối chứng trước thay đổi cho kịch bản này nên
không coi đó là bằng chứng tăng điểm; nó cho thấy không thể dùng điểm giao
thông trung tính để cam kết điểm khi đối thủ tạo ùn tắc.
