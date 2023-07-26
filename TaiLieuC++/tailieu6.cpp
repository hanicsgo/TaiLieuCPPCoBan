/*
    @author: @Hai Tran
*/

/*
    Bài 6: Xâu ký tự và xử lý xâu ( String )

    + Định nghĩa: Xâu ký tự (hay còn được gọi là chuỗi) là một chuỗi các ký tự liên tiếp trong một ngôn ngữ lập trình. 
    Xâu ký tự thường được sử dụng để lưu trữ và xử lý thông tin văn bản, ví dụ như các từ, câu, đoạn văn, địa chỉ email, tên người dùng, v.v.

    + Trong C++, xâu ký tự được biểu diễn bằng kiểu dữ liệu std::string trong thư viện chuẩn <string>. 
    Kiểu dữ liệu này cung cấp các phương thức và toán tử để thực hiện các thao tác như truy cập, thay đổi, nối, so sánh, tìm kiếm, 
    cắt và xử lý các xâu ký tự.

    + Khai báo: string <tên_chuỗi>

    VD1: 
    #include <string>

    string myString;  // Khai báo xâu ký tự rỗng
    string myString = "Hello";  // Khai báo và gán giá trị cho xâu ký tự 

    VD2:      
    string myString; getline(cin, s);
    cout << myString;


*/

/*
    Các hàm cơ bản có sẵn trong thư viện String
    - Hàm length() hoặc size(): Trả về độ dài của xâu ký tự.
        string str = "Hello";
        int len = str.length();  // len = 5

    - Hàm empty(): Kiểm tra xem xâu ký tự có rỗng hay không.
        string str = "Hello";
        bool isEmpty = str.empty();  // isEmpty = false (0)

    - Hàm append() hoặc +=: Nối một xâu ký tự hoặc một phần của xâu vào cuối xâu hiện tại.
        string str = "Hello";
        str.append(" World!");  // str = "Hello World!"
        str += " Welcome!";  // str = "Hello World! Welcome!"

    - Hàm insert(): Chèn một xâu ký tự hoặc một phần của xâu vào vị trí xác định trong xâu hiện tại.
        string str = "Hello";
        str.insert(5, " World!");  // str = "Hello World!"

    - Hàm erase(): Xóa một phần của xâu ký tự từ vị trí bắt đầu cho đến vị trí kết thúc.
        string str = "Hello World!";
        str.erase(6, 6);  // str = "Hello!"

    - Hàm replace(): Thay thế một phần của xâu ký tự bằng một xâu ký tự khác.
        string str = "Hello World!";
        str.replace(6, 5, "Universe");  // str = "Hello Universe!"  

    - Hàm substr(): Trích xuất một phần của xâu ký tự thành một xâu ký tự mới.
        string str = "Hello World!";
        string sub = str.substr(6, 5);  // sub = "World"

    - Hàm find(): Tìm kiếm một xâu ký tự hoặc một ký tự trong xâu và trả về vị trí xuất hiện đầu tiên.
        string str = "Hello World!";
        size_t pos = str.find("World");  // pos = 6

    - Hàm compare(): So sánh hai xâu ký tự và trả về kết quả so sánh.
        string str1 = "Hello";
        string str2 = "World";
        int result = str1.compare(str2);  // result < 0 (str1 < str2)
*/

/* 
    Một số ý nghĩa chính của việc xử lý xâu ký tự trong lập trình:

    - Lưu trữ và xử lý thông tin văn bản: Xâu ký tự cho phép chúng ta lưu trữ và thao tác với các dữ liệu văn bản như từ, câu, đoạn văn, 
    tên người dùng, địa chỉ email, v.v. Điều này cho phép chúng ta xây dựng các ứng dụng như bộ gõ, trình duyệt web, ứng dụng chat, v.v.

    - Truy cập và thay đổi phần tử: Xâu ký tự cho phép chúng ta truy cập và thay đổi các phần tử trong xâu, như là một chuỗi các ký tự. 
    Điều này giúp chúng ta thực hiện các tác vụ như tách từng ký tự, trích xuất một phần của xâu, thay thế giá trị, v.v.

    - Ghép nối và tách xâu ký tự: Chúng ta có thể ghép nối (nối) các xâu ký tự lại với nhau để tạo thành một xâu lớn hơn, 
    hoặc tách xâu thành các phần tử nhỏ hơn để thao tác độc lập với từng phần tử. Điều này hữu ích trong việc xử lý và 
    tạo ra các đoạn văn bản phức tạp hơn.

    - So sánh và tìm kiếm: Xâu ký tự cho phép chúng ta so sánh hai xâu để kiểm tra xem chúng có bằng nhau hay không. 
    Chúng ta cũng có thể tìm kiếm từ khóa hoặc mẫu trong xâu, để xác định vị trí xuất hiện đầu tiên hoặc tất cả các vị trí của từ khóa/mẫu đó.

    - Định dạng và xuất dữ liệu: Xâu ký tự cho phép chúng ta định dạng dữ liệu và tạo ra các chuỗi ký tự theo một mẫu cụ thể. 
    Điều này rất hữu ích khi chúng ta muốn xuất dữ liệu theo một định dạng cụ thể, ví dụ như in ra dữ liệu theo định dạng thời gian, 
    số thập phân, v.v.

    - Tóm lại, xử lý xâu ký tự trong lập trình cung cấp các công cụ và phương pháp để làm việc với dữ liệu văn bản một cách linh hoạt và tiện lợi. 
    Việc nắm vững các phương thức và kỹ thuật xử lý xâu ký tự trong ngôn ngữ lập trình giúp chúng ta xây dựng các ứng dụng mạnh mẽ và 
    hiệu quả trong việc xử lý ngôn ngữ tự nhiên và tương tác với người dùng.
*/

/*
    Ứng dụng của việc xử lý xâu ký tự trong lập trình

    - Bộ gõ: Các bộ gõ và bộ gõ tự động sử dụng xử lý xâu ký tự để phân tích và dự đoán từ hoặc câu tiếp theo trong quá trình gõ. Xây dựng bộ gõ thông qua việc xử lý xâu ký tự giúp tăng tốc độ gõ, sửa lỗi chính tả và cung cấp gợi ý từ.

    - Trình duyệt web: Trình duyệt sử dụng xử lý xâu ký tự để phân tích và hiển thị các đoạn văn bản, URL, HTML, CSS, JavaScript và các tài liệu web khác.

    - Ứng dụng chat: Ứng dụng chat sử dụng xử lý xâu ký tự để phân tích và hiển thị tin nhắn từ người dùng, thực hiện xử lý ngôn ngữ tự nhiên như xử lý emoji, xử lý từ khóa, kiểm tra lỗi chính tả và tạo thông điệp động.

    - Xử lý văn bản: Xử lý xâu ký tự cho phép tìm kiếm từ khóa, đếm số từ, trích xuất thông tin từ các văn bản, thay thế từ hoặc câu, tách từ hoặc câu thành các thành phần riêng lẻ và thực hiện các phép biến đổi khác trên văn bản.

    - Định dạng dữ liệu: Xử lý xâu ký tự cho phép định dạng dữ liệu theo các chuẩn như định dạng ngày tháng, định dạng số thập phân, định dạng tiền tệ, v.v. Điều này rất hữu ích khi hiển thị thông tin hoặc lưu trữ dữ liệu theo một định dạng cụ thể.

    - Xử lý ngôn ngữ tự nhiên: Xử lý xâu ký tự được sử dụng rộng rãi trong xử lý ngôn ngữ tự nhiên, bao gồm phân tích từ (tokenization), tách câu, phân tích cú pháp (parsing), trích xuất thông tin, tìm kiếm từ khóa, dịch máy, phân loại văn bản, v.v.

    - Xử lý file và nhập/xuất dữ liệu: Xử lý xâu ký tự cho phép đọc và ghi dữ liệu từ file văn bản, xử lý định dạng file, tách dữ liệu vào cấu trúc dữ liệu phù hợp và hiển thị dữ liệu ra màn hình hoặc lưu trữ.
*/

/*
    Bài tập vận dụng:
    - VD1: Đếm có bao nhiêu khoảng trắng trong chuỗi.
    INPUT: tao dep trai vcl
    OUTPUT : 3

    string s; getline(cin, s);
    int count = 0;
    for (char c : s) {
        if (c == ' ') {
            count++;
        }
    }
    cout << count << endl;

    - VD2: Bạn được cung cấp một chuỗi ký tự s. Nhiệm vụ bạn cần làm là đưa ra chuỗi s sau khi đảo ngược các phần tử trong chuỗi.
    INPUT: iaH 
    OUTPUT: Hai

    string s; getline(cin, s);
    string reverse;
    for (int i = s.length() - 1; i >= 0; --i) {
        reverse += s[i];
    }
    cout << reverse << endl;

    - VD3: Đổi tất cả các kí tự có trong chuỗi thành chữ thường
    INPUT: HAI
    OUTPUT: hai

    string s; getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
    cout << s << endl;

    - VD4: Đổi tất cả các kí tự có trong chuỗi thành chữ viết hoa
    INPUT: hai
    OUTPUT: HAI

    string s; getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 97 && s[i] <= 122) {
            s[i] = s[i] - 32;
        }
    }
    cout << s << endl;
    return 0;

    - VD5: Đổi các từ ở đầu câu sang chữ hoa và những từ không phải đầu câu sang chữ thường
    INPUT: TraN hOanG haI
    OUTPUT: Tran Hoang Hai

    string s; getline(cin, s);
    s[0] = toupper(s[0]); // Chuyển đổi ký tự đầu tiên
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == ' ') {
            s[i + 1] = toupper(s[i + 1]); // Chuyển đổi ký tự tiếp theo sau khoảng trắng thành chữ in hoa.
            i++; // Bỏ qua ký tự tiếp theo,
        } else {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += s[i] + 32;
            }
        }
    }

    cout << s << endl;
*/
