# Space-Shooter # (INT2215-2022)
Đây là một tựa game shoot em up (hay còn gọi là bắn may bay) khá đơn giản mà mình làm cho bài tập lớn của trường. Mặc dù gameplay khá đơn giản nhưng mình có đầu tư khá nhiều vào phần đồ họa. Các bạn có thể tham code ở trên.
Link demo project: https://www.youtube.com/watch?v=mrsT_WofAQ0

## 1. Mô tả về game
- Game thuộc dòng shoot em up, một dòng phụ của dòng game shooter
- Sau khi bật game, một màn hình logo sẽ hiện ra, chuyển đổi qua lại với bảng điểm. Bấm CTRL để bắt đầu vào chơi
- Bấm CTRL để bắn và di chuyển bằng các nút mũi tên
- Người chơi phải bắn hạ kẻ địch, đồng thời né đạn và thu thập điểm
- Tất cả mọi thứ đều one-shot

## 2. Cách lấy file project về máy
- Cách clone project về máy rất đơn giản, các bạn có thể down file .zip về sau đó giải nén, hoặc có thể tạo 1 folder mới rồi dùng git clone, hoặc đơn giản hơn nũa thì hãy tải git desktop sau đó chép đường link liên kết của project này vào và clone về
- Trong file project đã bao gồm cả các file cần thiết của thư viện SDL2 (có bao gồm SDL2_image, SDL2_mixer) nên rất tiện để các bạn link trực tiếp vào project của mình
- Project được code và build trên Visual Studio 2022, sau khi clone về chỉ cần dùng Local window debugger là game sẽ chạy và tạo file .exe , nếu như các bạn sử dụng IDE khác thì hãy lên mạng và tìm cách build file dành cho IDE đó

## 3. Các kĩ năng áp dụng trong code game
- Quản lí objects bằng linked list
- Collision detection
- Slope calculation: áp dụng để đạn của kẻ địch luôn bắn vào vị trí người chơi
- Đồ họa (kể cả text) và âm thanh sử dụng thư viện SDL2_image và SDL2_mixer
