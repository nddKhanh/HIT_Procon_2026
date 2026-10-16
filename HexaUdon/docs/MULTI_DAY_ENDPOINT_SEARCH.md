# Tìm kiếm trạng thái cuối ngày

## Trạng thái

Đã triển khai dưới dạng thử nghiệm, mặc định tắt (`Solver` nhận tham số thứ ba
`multiDayEndpoints = false`). Chưa có bằng chứng tăng Daily trên `sample_16.json`;
không bật mặc định vì chi phí dự báo có thể gần 40 giây ngoài thời gian tìm tuyến.
Không sửa `.env` để bật tính năng này.

Lượt kiểm thử toàn bộ với tính năng bật cho ca hồi quy sample16 đạt
`12 Types / 56 Daily / 63 Serving` (mặc định trước thay đổi là `12/56/62`).
Đây là tăng Serving, chưa phải cải thiện Daily; không tuyên bố đạt 60/60.

## Cách hoạt động

- Thu thập các lịch tiếp tế hợp lệ với cùng hoặc nhiều Daily hơn, kể cả lịch
  có Serving thấp hơn nhưng vị trí/xăng cuối ngày khác.
- Cho phép sinh phương án tiếp xăng đúng bước cuối ngày và đổi hướng Supply
  ngay sau một cuộc tiếp tế đang di chuyển. Các phương án này không tự thay
  lịch hiện tại.
- Giữ tối đa 16 trạng thái khác nhau từ quá trình sửa tuyến; bổ sung phương án
  từ lịch cuối cùng. Giới hạn mỗi lần thu thập là 64 phương án.
- Sàng lọc bằng mô phỏng các ngày còn lại; kiểm tra các ứng viên tốt bằng bộ
  giải đầy đủ. Chỉ chấp nhận khi cả hai dự báo hoàn tất và điểm
  `(Types, Daily, Serving)` của ứng viên cao hơn phương án đang giữ.
- Dự báo giữ nguyên traffic quan sát được, không dự đoán được hành động đối thủ.
  Vì vậy điểm dự báo không bảo đảm kết quả server.
- Giới hạn thử nghiệm ở map tối đa 16×16, nhiều hơn hai đội, có ngày tiếp theo.
  Các bản đồ lớn chưa được bật tìm kiếm này.
- Dùng chung thời hạn live, tối đa thêm 40 giây, bỏ dự báo hết giờ. Tìm kiếm
  tuyến chính có thêm kiểm tra thời hạn trong duyệt đệ quy và ghép tuyến.

## Kiểm tra

`build.bat test` bao gồm kiểm tra cuộc hẹn đúng bước cuối ngày: phải sinh ra
phương án cứu xe, giữ nguyên lịch mặc định và không tìm tiếp khi đã hết giờ.

Benchmark hỗ trợ `--multi-day-endpoints` sau `--sample`:

```powershell
& .\HexaUdon\.build\branch_review\continuation_final.exe `
  --sample 'C:/Users/caida/Downloads/sample_16.json' 2 `
  --live-budget-ms 57000 --multi-day-endpoints --expect 12 56 62
```

Chạy lại cùng lệnh bỏ `--multi-day-endpoints` để so với chính sách mặc định.
Executable benchmark phải được biên dịch từ mã hiện tại; file `.build` không
được quản lý trong Git. Không có yêu cầu gửi action lên server.

## Giới hạn còn lại

Sinh thêm trạng thái tiếp tế chưa giải quyết được đầy đủ việc phân công lại
các điểm ghé giữa nhiều Patrol. Loại có ID 10 trong sample16 vẫn thường bị bỏ
ở ngày 2–4. Không có ràng buộc đặc biệt theo ID hoặc tọa độ của sample trong code.
Muốn vượt mốc 56 Daily cần tiếp tục kiểm chứng cách đổi đồng thời nhiều tuyến,
thay vì chỉ tăng thời gian cho nhóm phương án tiếp tế hiện có.
