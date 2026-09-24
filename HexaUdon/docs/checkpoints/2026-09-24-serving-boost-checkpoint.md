# Checkpoint — serving boost sau khi khóa coverage

Ngày tạo: 2026-09-24

## Mục tiêu đang thực hiện

Triển khai pha tăng `servings` chỉ sau khi coverage đã tốt, theo đúng thứ tự thắng `(match brands, daily brands, servings)`. Không sửa hay cắt route Supply trong pha này.

## Dữ liệu đã xác nhận

- Trận `5b55b3a6-d3a3-45d5-8e70-c50e73774400`: `22/22` match brands, `132/132` daily brands, `261/594` servings.
- Vì hai tiêu chí đầu đã đạt trần, cải tiến an toàn kế tiếp là tăng servings nhưng không giảm chúng.
- `MoveSimulator` cung cấp vị trí, nhiên liệu và collection theo từng step; đủ để đánh giá chính xác một thay thế ở đuôi route.
- `Solver.cpp` hiện xếp `nextReachableBrands` trước `result.collections.size()` trong `evaluateCandidate`. Điều này không cùng thứ tự với luật thắng.

## Thay đổi cần áp dụng khi tiếp tục

1. Trong `HexaUdon/src/solver/Solver.cpp`, đổi candidate rank thành:
   `{newTypes, dailyBrands, servings, nextReachableBrands, patrolFuel}`.
2. Sau `refineCandidate`, thêm `boostServings` có giới hạn:
   - chỉ thử thay thế từ đầu hoặc 12 action cuối của mỗi Patrol;
   - nhắm tối đa 12 spot còn stock cao;
   - giữ nguyên toàn bộ route Supply;
   - dùng `MoveSimulator::simulateDay` để chấp nhận duy nhất proposal hợp lệ có servings tăng và không giảm fresh/daily brands;
   - đặt `metadataStale = true` để metadata kế hoạch được dựng lại ở cuối `solve`.
3. Thêm một test hồi quy cho luật tie-break servings và một test end-to-end cho serving boost; sau đó chạy toàn bộ test suite.

## Trạng thái mã nguồn lúc checkpoint

Không có thay đổi source đã lưu. Hai lần áp dụng patch bằng công cụ tích hợp bị lỗi `path contains a reparse point`; thử áp dụng unified diff qua `git apply` không còn xuất hiện trong worktree sau đó. Khi tiếp tục, xác minh `git diff` ngay sau từng patch trước khi build.

Các diary chưa theo dõi của người dùng phải giữ nguyên:

- `diary/5b55b3a6-d3a3-45d5-8e70-c50e73774400/`
- `diary/72fbc1ac-64b6-4753-9576-07481d341098/`

## Kiểm thử đã chạy

Lệnh đầy đủ đã chạy thành công trong phiên này (trước khi xác nhận patch không còn trong worktree):

```powershell
g++ -std=c++17 -Iinclude -Ithird_party tests/test_all.cpp src/io/JsonReader.cpp src/io/JsonWriter.cpp src/io/DiaryWriter.cpp src/map/Map.cpp src/solver/ActionValidator.cpp src/solver/PathFinder.cpp src/solver/SpotScorer.cpp src/solver/PatrolPlanner.cpp src/solver/SupplyPlanner.cpp src/solver/MoveSimulator.cpp src/solver/Solver.cpp src/api/GameApiClient.cpp src/api/HttpClient.cpp -lwininet -o .build/test_all_serving_boost.exe
.\.build\test_all_serving_boost.exe
```

Kết quả: toàn bộ unit test và server replay hiện có pass. Cần chạy lại sau khi patch được lưu bền vững.

## Điểm dừng

Đã biên dịch một probe tạm (`.build/serving_probe.exe`) để tìm fixture nhỏ kích hoạt boost, nhưng chưa chạy vì người dùng yêu cầu checkpoint. Không có thay đổi server hoặc trận đấu nào được gửi.

## Tiếp tục sau checkpoint

- Đã đổi candidate rank sang thứ tự chính thức và thêm `boostServings` sau Supply refinement.
- Boost chỉ giữ proposal hợp lệ, không giảm match/daily brands và tăng servings; route Supply không bị chỉnh trong pha này.
- Cập nhật test shared-stock để kiểm tra 2 servings được ưu tiên khi coverage bằng nhau.
- Build và toàn bộ `test_all` đã pass sau thay đổi.
