# Bài tập lớn AP - Space-Shooter # (INT2215-2022)
Đây là một tựa game shoot em up (hay còn gọi là bắn may bay) khá đơn giản mà mình làm cho bài tập lớn của trường. Mặc dù gameplay khá đơn giản nhưng mình có đầu tư khá nhiều vào phần đồ họa. Các bạn có thể tham khảo code ở trên.
Link demo project: https://www.youtube.com/watch?v=mrsT_WofAQ0

<img src="res/demo.png" alt="drawing" width="400"/>

## Mô tả về các đối tượng trong trò chơi

- ![](res/sprites/player_down.png) *Shooter* là nhân vật chính của trò chơi. Shooter có thể di chuyển theo 4 hướng trái/phải/lên/xuống hoặc theo góc chéo theo sự điều khiển của người chơi.
- ![](res/sprites/balloom_left1.png) *Enemy* là các đối tượng mà Shooter phải tiêu diệt. Enemy xuất hiện ngẫu nhiên và có tốc độ di chuyển ngẫu nhiêu. Khi bị tiêu diệt Enemy sẽ sinh ra Point để Shooter thu thập.
- ![](res/sprites/bomb.png) *Bullet* là đối tượng mà cả Shooter và Enemy đều có thể bắn ra. Shooter có thể bắn Bullet liên tục bằng nút CTRL, còn Enemy bắn Bullet với rate ngẫu nhiên. Bullet của Enemy luôn bay theo hướng về vị trí hiện tại của Shooter.
- ![](res/sprites/bomb.png) *Point* là đối tượng mà Enemy sẽ sinh ra khi bị tiêu diệt. Người chơi cần phải thu thập Point để có thể tăng điểm. Point sẽ di chuyển theo hướng ngẫu nhiên và nảy lại nếu chạm phải rìa màn hình của trò chơi. Point có thời gian sống giới hạn và sẽ biến mất nếu Shooter không kịp thu thập.

## Mô tả game play và xử lý va chạm
- Di chuyển Shooter bằng các nút mũi tên ↑↓←→ và bắn đạn bằng nút CTRL.
- Trong một màn chơi, Shooter sẽ được người chơi di chuyển, bắn hạ kẻ địch, đồng thời né đạn và thu thập điểm với mục tiêu là đạt số điểm cao nhất có thể.
- Shooter sẽ bị giết khi va chạm với Enemy hoặc bị trúng đạn của Enemy. Lúc đấy trò chơi kết thúc.
- Enemy bị tiêu diệt khi trúng đạn của player.

## Cách cài đặt project
- Cách clone project về máy rất đơn giản, các bạn có thể down file .zip về sau đó giải nén, hoặc có thể tạo 1 folder mới rồi dùng git clone, hoặc đơn giản hơn nũa thì hãy tải git desktop sau đó chép đường link liên kết của project này vào và clone về
- Trong file project đã bao gồm cả các file cần thiết của thư viện SDL2 (có bao gồm SDL2_image, SDL2_mixer) nên rất tiện để các bạn link trực tiếp vào project của mình
- Project được code và build trên Visual Studio 2022, sau khi clone về chỉ cần dùng Local window debugger là game sẽ chạy và tạo file .exe , nếu như các bạn sử dụng IDE khác thì hãy lên mạng và tìm cách build file dành cho IDE đó

## Các kĩ năng áp dụng trong code game
- Quản lí objects bằng linked list
- Collision detection
- Slope calculation: áp dụng để đạn của kẻ địch luôn bắn vào vị trí người chơi
- Đồ họa và âm thanh sử dụng thư viện SDL2_image và SDL2_mixer
