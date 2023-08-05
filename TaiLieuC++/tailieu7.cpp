/*
    @author: Hai Tran
*/

/*
    Bài 7: Hàm ( Function )

    - Định nghĩa: hàm (function) là một khối mã được định nghĩa và được đặt tên để thực hiện một tác vụ cụ thể hoặc một chuỗi các tác vụ liên quan. 
    Hàm giúp chia nhỏ chương trình thành các phần nhỏ hơn, dễ quản lý và tái sử dụng. Hàm giúp tăng tính cấu trúc, tạo code dễ đọc, dễ bảo trì và giúp tăng tính 
    mô-đun trong lập trình.

    - Cú pháp:
    <kiểu dữ liệu trả về> <tên hàm>(<danh sách tham số>) {
        // Khối mã thực hiện các tác vụ của hàm
        // ...
        return <giá trị trả về>; // (nếu hàm có kiểu dữ liệu trả về)
    }

    Trong đó:
    - <kiểu dữ liệu trả về> là kiểu dữ liệu của giá trị mà hàm sẽ trả về sau khi thực hiện tác vụ. Nếu hàm không trả về giá trị nào, kiểu dữ liệu trả về được khai báo là void.
    - <tên hàm> là tên của hàm, đó là cái tên mà bạn sẽ sử dụng để gọi hàm.
    - <danh sách tham số> là danh sách các tham số mà hàm nhận vào (nếu có). Các tham số được phân tách bởi dấu phẩy, mỗi tham số có dạng <kiểu dữ liệu> <tên tham số>.
    - Trong khối mã của hàm, bạn thực hiện các tác vụ cần thiết để thực hiện mục tiêu của hàm.
    - Nếu hàm có kiểu dữ liệu trả về (khác void), bạn cần sử dụng lệnh return để trả về giá trị thích hợp. 
    Trong trường hợp này, giá trị được trả về phải có kiểu dữ liệu khớp với kiểu dữ liệu trả về của hàm.

    VD1: 
    int tong(int a, int b) {
        int sum = a + b;
        return sum;
    }

*/

/*
    Các loại hàm phổ biến thường gặp
    
    - Hàm không trả về (void functions):
    + Đây là các hàm không trả về giá trị nào sau khi thực hiện tác vụ. Chúng được khai báo với kiểu dữ liệu trả về là void. 
    Chức năng chủ yếu của các hàm này là thực hiện một loạt các tác vụ mà không cần trả lại kết quả.
    
    void HelloWorld(){
        cout << "Hello, world!";
    }
    
    - Hàm trả về giá trị (non-void functions):
    + Đây là các hàm có kiểu dữ liệu trả về là một giá trị cụ thể sau khi thực hiện xong. Hàm trả về giá trị được khai báo với kiểu dữ liệu tương ứng với giá trị mà hàm sẽ trả về.

    int add(int a, int b){
        return a + b;
    }

    - Hàm trả về địa chỉ (address functions):
    + Đây là một loại hàm trả về giá trị của kiểu con trỏ hoặc kiểu tham chiếu. Điều này cho phép hàm trả về một con trỏ hoặc tham chiếu đến một đối tượng hoặc biến nào đó, 
    thay vì trả về giá trị đơn giản.

    int* createIntArray(int size) {
        int* arr = new int[size]; // Tạo mảng động
        return arr; // Trả về địa chỉ của mảng
    }

    - Hàm tham chiếu (reference functions):
    + Đây là các hàm mà các tham số được truyền vào thông qua tham chiếu (reference) thay vì sao chép giá trị của tham số. Khi sử dụng hàm tham chiếu, 
    thay đổi giá trị của tham số trong hàm sẽ ảnh hưởng đến giá trị của biến gốc bên ngoài hàm.

    void doubleValue(int& x) {
        x *= 2;
    }

    - Hàm có tham số mặc định (default parameter functions):
    + Hàm có tham số mặc định là các hàm cho phép bạn định nghĩa một giá trị mặc định cho các tham số. Nếu gọi hàm mà không truyền đối số cho các tham số có giá trị mặc định, 
    thì hàm sẽ sử dụng giá trị mặc định được định nghĩa.

    int power(int base, int exponent = 2) {
        int result = 1;
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        return result;
    }

    - Hàm inline (inline functions):
    + Hàm inline là các hàm được đề xuất trình biên dịch sử dụng inline, tức là thay thế mã của hàm trực tiếp vào nơi gọi hàm, thay vì gọi hàm thông qua địa chỉ.

    inline int multiply(int a, int b) {
        return a * b;
    }

    - Hàm lambda (lambda functions):
    + Hàm lambda là các hàm vô danh được định nghĩa ngay lập tức và có thể sử dụng một cách tạm thời trong một ngữ cảnh cụ thể. Hàm lambda thường được sử dụng trong các hàm như 
    std::for_each, std::sort,...

    auto square = [](int x) { return x * x; };
*/

/*
    Ứng dụng của hàm trong lập trình

    - Tái sử dụng mã nguồn (Code reusability): Điều quan trọng về hàm là nó cho phép bạn viết một lần và sử dụng nhiều lần. Thay vì phải sao chép mã nguồn một cách lặp đi lặp lại, 
    bạn có thể định nghĩa một hàm và gọi nó từ bất kỳ đâu cần thiết. Điều này giúp giảm sự trùng lặp mã và làm cho mã của bạn dễ bảo trì hơn.

    - Tính cấu trúc và tổ chức mã nguồn: Hàm giúp bạn chia chương trình thành các phần nhỏ hơn và định nghĩa các chức năng cụ thể. Điều này giúp làm cho mã nguồn của bạn có cấu trúc, dễ đọc và dễ hiểu.

    - Tối ưu hóa và hiệu suất: Việc sử dụng hàm cho phép bạn tối ưu hóa mã của mình bằng cách tách các phần logic thành các hàm riêng biệt. Bằng cách làm như vậy, 
    bạn có thể tập trung vào việc tối ưu hóa các phần quan trọng hơn và giảm thiểu sự lặp lại code.

    - Giấu thông tin (Encapsulation): Hàm cho phép giấu thông tin của các phần mã nguồn bên trong chúng. Điều này giúp che dấu chi tiết tri thức cụ thể về việc thực hiện các chức năng, 
    cho phép bạn chỉ tập trung vào việc sử dụng các hàm mà không cần biết cách nó hoạt động bên trong.

    - Tính module và chia chương trình thành các phần nhỏ hơn: Sử dụng hàm giúp bạn chia chương trình thành các phần nhỏ hơn và các module độc lập. 
    Điều này giúp quản lý chương trình dễ dàng hơn và tạo điều kiện để làm việc song song giữa các thành viên trong nhóm.

    - Tái sử dụng thư viện và code từ bên ngoài: Hàm cung cấp cách để tái sử dụng thư viện và mã nguồn được viết bởi người khác. 
    Bạn có thể sử dụng các hàm có sẵn trong các thư viện tiêu chuẩn hoặc bên ngoài để thực hiện các tác vụ phức tạp mà không cần phải viết lại code từ đầu.

    - Giảm độ phức tạp của mã nguồn: Hàm giúp giảm độ phức tạp của mã nguồn bằng cách tách các chức năng khác nhau thành các hàm riêng biệt. Điều này làm cho mã nguồn dễ đọc và dễ hiểu hơn.
*/

/*
    Định nghĩa và ứng dụng của hàm STL

    - Hàm STL (Standard Template Library) trong C++ là một bộ thư viện chuẩn cung cấp một tập hợp các template và hàm để thực hiện các thao tác thường gặp trên các cấu trúc dữ liệu và thuật toán. 
    STL cung cấp các container (bao gồm vector, list, set, map, v.v.) để lưu trữ dữ liệu và các algorithm (bao gồm sort, search, transform, v.v.) để thực hiện các thao tác xử lý dữ liệu. 
    STL là một trong những tính năng mạnh mẽ và quan trọng nhất trong ngôn ngữ C++, nó giúp giảm đáng kể công việc lập trình, tối ưu hóa hiệu suất, và tăng tính hiệu quả của chương trình.

    + Tối ưu hóa code và tái sử dụng: STL cung cấp các container và algorithm đã được triển khai sẵn, cho phép bạn sử dụng chúng để giải quyết các vấn đề phổ biến mà không cần phải viết lại mã nguồn từ đầu. 
    Điều này giúp tối ưu hóa code và tái sử dụng code đã được kiểm tra và tối ưu hóa.

    + Giảm độ phức tạp của code: STL cung cấp các hàm và template đã được tối ưu hóa, giúp giảm độ phức tạp của code. Với STL, bạn có thể thực hiện các thao tác phức tạp như sắp xếp, tìm kiếm, 
    và xử lý dữ liệu một cách dễ dàng và hiệu quả.

    + Tối ưu hóa hiệu suất: STL được thiết kế để cung cấp hiệu suất cao, với các thuật toán và cấu trúc dữ liệu được tối ưu hóa để làm việc hiệu quả với dữ liệu lớn.

    + Tiêu chuẩn hóa và chuyển đổi code: STL là một tiêu chuẩn của ngôn ngữ C++, điều này giúp giảm thiểu sự phụ thuộc vào hệ thống và giúp chuyển đổi code giữa các hệ điều hành và trình biên dịch khác nhau.

    + Giảm thời gian phát triển: Các container và algorithm trong STL giúp giảm thời gian phát triển vì bạn không cần phải viết các hàm và cấu trúc dữ liệu từ đầu. 
    Chỉ cần sử dụng các thành phần có sẵn trong STL và tập trung vào giải quyết vấn đề chính của bài toán.

    + Code dễ đọc và bảo trì: STL cung cấp các thành phần có tên gọi rõ ràng và tính chất mô tả tốt, làm cho code dễ đọc và dễ bảo trì. 
    Bạn có thể dễ dàng nhận ra các phần tử trong code và hiểu rõ mục đích của từng phần tử.

    - Tóm lại, STL trong C++ là một bộ thư viện mạnh mẽ và quan trọng, giúp giảm độ phức tạp của code, tối ưu hóa hiệu suất và tăng tính hiệu quả của chương trình. 
    Nó giúp cho việc lập trình trở nên dễ dàng và tiết kiệm thời gian, đồng thời đảm bảo tính chuẩn và khả năng chuyển đổi giữa các hệ thống.
*/

/*
    Nạp chồng hàm

    - Định nghĩa: Nạp chồng hàm (function overloading) cho phép bạn định nghĩa nhiều hàm cùng tên nhưng với số lượng hoặc kiểu dữ liệu tham số khác nhau. 
    Khi bạn gọi hàm, trình biên dịch sẽ xác định hàm cụ thể được gọi dựa trên số lượng và kiểu dữ liệu của tham số được truyền vào.

    // Hàm tính tổng hai số nguyên
    int add(int a, int b) {
        return a + b;
    }

    // Hàm tính tổng ba số nguyên
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Hàm tính tổng hai số thực
    double add(double a, double b) {
        return a + b;
    }

    int main() {
        int x = 5, y = 10, z = 15;
        double d1 = 3.5, d2 = 2.7;

        std::cout << "Tong hai so nguyen: " << add(x, y) << std::endl;
        std::cout << "Tong ba so nguyen: " << add(x, y, z) << std::endl;
        std::cout << "Tong hai so thuc: " << add(d1, d2) << std::endl;
    }
*/

/*
    Tham trị và tham chiếu

    - Tham trị (pass by value):
    + Khi bạn truyền một đối số vào một hàm theo cách tham trị, hàm sẽ tạo một bản sao của giá trị đó và làm việc với bản sao đó. 
    Các thay đổi trong hàm không ảnh hưởng đến giá trị gốc của biến ở ngoài hàm.
    VD:

    void value(int x) {
        x = 100;
    }

    int main() {
        int number = 42;
        value(number);
        std::cout << number; // Kết quả: 42, giá trị gốc không thay đổi
        return 0;
    }

    - Tham chiếu (pass by reference):
    + Khi bạn truyền một đối số vào một hàm theo cách tham chiếu, hàm sẽ làm việc trực tiếp với biến gốc thông qua một tên tham chiếu, 
    và các thay đổi trong hàm sẽ ảnh hưởng trực tiếp đến giá trị của biến gốc.
    VD:


    void value(int &x) {
        x = 100;
    }

    int main() {
        int number = 42;
        value(number);
        std::cout << number; // Kết quả: 100, giá trị gốc bị thay đổi
        return 0;
    }

    - Lưu ý rằng khi sử dụng tham chiếu, bạn cần đảm bảo rằng biến truyền vào phải là một biến hợp lệ, tức là không phải là một biểu thức hoặc hằng số. 
    Vì tham chiếu không thể liên kết với một giá trị không có địa chỉ trong bộ nhớ.

    - Đôi khi, việc sử dụng tham trị hay tham chiếu phụ thuộc vào mục đích sử dụng và yêu cầu của chương trình. 
    Khi bạn muốn chỉ thực hiện các thay đổi cục bộ trong hàm và giữ nguyên giá trị gốc ở ngoài hàm, thì tham trị là lựa chọn phù hợp. 
    Trong khi đó, nếu bạn muốn thay đổi giá trị biến gốc từ trong hàm, thì tham chiếu sẽ là lựa chọn hữu ích.
*/



