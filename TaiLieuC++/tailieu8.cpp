/*
    @Author: Hai Tran
*/

/* 
    Bài 8: Con trỏ ( Pointer )

    - Định nghĩa: Con trỏ (pointer) là một biến được dùng để lưu trữ địa chỉ của biến khác. Khác với tham chiếu, con trỏ là một biến có địa chỉ độc lập,
     nhưng giá trị trong vùng nhớ của con trỏ lại chính là địa chỉ của biến mà nó trỏ tới (hoặc một địa chỉ ảo).

    - Cú pháp: 

    data_type *pointer_name;
    data_type *pointer_name = nullptr (NULL); // Khởi tạo con trỏ với giá trị null

    VD:

    int number = 10; // Khai báo biến nguyên
    int *ptr;        // Khai báo con trỏ kiểu int
    ptr = &number;   // Gán địa chỉ của biến 'number' cho con trỏ 'ptr'

    // In ra giá trị của biến 'number' và địa chỉ mà con trỏ 'ptr' đang trỏ tới
    cout << "Value of number: " << number << endl;
    cout << "Address stored in ptr: " << ptr << endl;
    return 0;

    VD2: 

    int number = 10;
    int *ptr = &number;

    // In ra giá trị của biến 'number' thông qua con trỏ 'ptr'
    cout << "Value of number using ptr: " << *ptr << endl;
    return 0;
*/

/*
    Ứng dụng của con trỏ

    - Quản lý bộ nhớ động: Con trỏ cho phép cấp phát và giải phóng bộ nhớ động trong chương trình. Điều này cho phép bạn tao cấu trúc dữ liệu linh hoạt.
    Điều này cho phép bạn tạo các cấu trúc dữ liệu linh hoạt như mảng động, danh sách liên kết, cây nhị phân... ( Ứng dụng trong CTDL & GT )

    - Truyền tham chiếu đến hàm: Sử dụng con trỏ làm tham số của hàm cho phép bạn truyền địa chỉ của biến vào hàm thay vì giá trị của biến. 
    Điều này giúp tránh việc sao chép dữ liệu và tiết kiệm bộ nhớ khi làm việc với dữ liệu lớn.

    - Cấu trúc dữ liệu phức tạp: Con trỏ cho phép bạn tạo các cấu trúc dữ liệu phức tạp như danh sách liên kết, cây nhị phân, đồ thị, v.v. 
    Điều này rất hữu ích khi xử lý các bài toán phức tạp.

    - Quản lý mảng đa chiều: Con trỏ cũng có thể được sử dụng để quản lý mảng đa chiều. Bạn có thể sử dụng con trỏ hai chiều để truy cập và thao tác với mảng hai chiều.

    - Các thuật toán tiến hóa: Con trỏ thường được sử dụng trong các thuật toán tiến hóa như cắt giảm (crossover) và đột biến (mutation) để thực hiện thao tác trực tiếp trên các 
    thành phần của dữ liệu.

    - Truy cập vào phần tử của mảng: Con trỏ cho phép bạn truy cập vào các phần tử của mảng thông qua các phép toán con trỏ, giúp bạn thực hiện các thao tác xử lý mảng một cách hiệu quả.

    - Xử lý chuỗi ký tự: Con trỏ có thể được sử dụng để xử lý chuỗi ký tự trong C++. Điều này hỗ trợ trong việc thao tác và thay đổi nội dung của chuỗi một cách linh hoạt.

    - Xử lý tập tin: Con trỏ có thể được sử dụng để đọc và ghi dữ liệu vào tập tin. Điều này cho phép bạn thao tác với các tệp dữ liệu phức tạp.

*/  

/*
    Ứng dụng của con trỏ trong mảng, hàm, cấp phát động...

    - Ứng dụng con trỏ trong mảng là một khái niệm quan trọng trong ngôn ngữ lập trình C++ và các ngôn ngữ lập trình khác. 
    Con trỏ là một biến chứa địa chỉ của một biến khác. Khi sử dụng con trỏ trong mảng, chúng ta có thể thực hiện các thao tác với mảng một cách linh hoạt và hiệu quả hơn.

    1. Truy cập và thao tác phần tử mảng: Sử dụng con trỏ, chúng ta có thể dễ dàng truy cập và thay đổi giá trị của các phần tử trong mảng.

    int main() {
        int arr[] = {1, 2, 3, 4, 5};
        int *ptr = arr;

        // Truy cập và in giá trị các phần tử trong mảng
        for (int i = 0; i < 5; i++) {
            cout << *ptr << " ";
            ptr++; // Di chuyển con trỏ đến phần tử tiếp theo trong mảng
        }
        cout << endl;
    }

    2. Truyền mảng vào hàm: Khi chúng ta truyền một mảng vào hàm, chúng ta thực tế là truyền địa chỉ của phần tử đầu tiên trong mảng. 
    Hàm có thể sử dụng con trỏ để thao tác với mảng.

    void printArray(int *arr, int size) {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int main() {
        int arr[] = {1, 2, 3, 4, 5};
        int size = sizeof(arr) / sizeof(arr[0]);

        printArray(arr, size);

    }

    3. Cấp phát động mảng (Dynamic array allocation) là quá trình cấp phát bộ nhớ cho một mảng trong thời gian chạy của chương trình, thay vì cấp phát trong thời gian biên dịch. 
    Trong nhiều trường hợp, chúng ta không biết trước kích thước chính xác của mảng mà phải dựa vào dữ liệu đầu vào hoặc các yếu tố khác để xác định kích thước mảng.
    
        + Một số tình huống mà cấp phát động mảng được sử dụng bao gồm:

        + Nhập dữ liệu từ người dùng: Khi người dùng nhập vào số lượng phần tử của mảng, chúng ta sẽ cấp phát động một mảng có kích thước tương ứng.

        + Đọc dữ liệu từ tệp tin: Khi đọc dữ liệu từ tệp tin, chúng ta cũng thường không biết trước số lượng phần tử cần lưu trữ trong mảng.

        + Dùng mảng có kích thước đủ lớn: Trong một số trường hợp, chúng ta muốn sử dụng mảng có kích thước lớn để chắc chắn đủ để chứa dữ liệu, sau đó chỉ sử dụng một phần của mảng.

        + Trong C++, để cấp phát động mảng, chúng ta sử dụng toán tử new để cấp phát bộ nhớ động và toán tử delete để giải phóng bộ nhớ đã cấp phát sau khi không cần sử dụng nữa.

        + Lưu ý rằng khi sử dụng cấp phát động mảng, chúng ta cần chịu trách nhiệm giải phóng bộ nhớ đã cấp phát bằng cách sử dụng delete[] sau khi không còn sử dụng mảng. 
        Điều này giúp tránh lãng phí bộ nhớ và ngăn chặn lỗi memory leak.

    int main() {
        int size;
        cout << "Nhap kich thuoc cua mang: ";
        cin >> size;

        // Cấp phát động mảng
        int *arr = new int[size];

        // Thao tác với mảng
        for (int i = 0; i < size; i++) {
            cout << "Nhap phan tu thu " << i + 1 << ": ";
            cin >> arr[i];
        }

        // In mảng
        for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
        }
        cout << endl;

        // Giải phóng bộ nhớ động
        delete[] arr;
    }
*/

/*
    Quán lý bộ nhớ trong con trỏ

    - Định nghĩa: Quản lý bộ nhớ là một khái niệm quan trọng trong lập trình đối với việc sử dụng con trỏ và cấp phát động bộ nhớ. 
    Khi sử dụng con trỏ và cấp phát bộ nhớ động (bằng new), chúng ta cần chịu trách nhiệm giải phóng bộ nhớ sau khi không còn sử dụng nữa để tránh lãng phí bộ nhớ và 
    ngăn chặn lỗi memory leak (rò rỉ bộ nhớ).

    - Có hai toán tử chính được sử dụng để quản lý bộ nhớ khi sử dụng con trỏ:

        + Toán tử new: Toán tử new được sử dụng để cấp phát động bộ nhớ. Khi sử dụng new, bạn cần chú ý rằng cần phải giải phóng bộ nhớ bằng cách sử dụng toán tử delete sau 
        khi không còn sử dụng đối tượng được cấp phát động.

        + Toán tử delete: Toán tử delete được sử dụng để giải phóng bộ nhớ đã được cấp phát động trước đó bằng new. Việc giải phóng bộ nhớ này sẽ trả lại bộ nhớ cho hệ thống 
        để sử dụng lại.

    VD: 

    int main() {
    // Cấp phát động một biến kiểu int
    int* ptr = new int;
    *ptr = 10;

    cout << "Gia tri cua bien con tro: " << *ptr << endl;

    // Giải phóng bộ nhớ sau khi không còn sử dụng biến con trỏ
    delete ptr;

    // Khi sử dụng con trỏ sau khi đã giải phóng bộ nhớ, có thể xảy ra lỗi không xác định
    // Ví dụ:
    // cout << "Gia tri cua bien con tro sau khi giai phong: " << *ptr << endl;

    }

    - Trong ví dụ trên, chúng ta cấp phát động một biến kiểu int bằng toán tử new và gán giá trị 10 cho nó. Sau đó, chúng ta giải phóng bộ nhớ bằng toán tử delete khi 
    không còn sử dụng biến con trỏ. Nếu chúng ta cố gắng sử dụng con trỏ sau khi đã giải phóng bộ nhớ, điều này sẽ dẫn đến lỗi không xác định (undefined behavior) vì bộ nhớ đã 
    được giải phóng và không còn thuộc về chương trình nữa.

    - Chúng ta cần luôn đảm bảo giải phóng bộ nhớ khi không còn sử dụng các đối tượng được cấp phát động bằng new để đảm bảo ứng dụng của chúng ta hoạt động một cách 
    hiệu quả và tránh rò rỉ bộ nhớ.

*/

/*
    Con trỏ lạc trong C++
    
    - Định nghĩa: Trong C++, con trỏ lạc (hay còn gọi là con trỏ "wild pointer") là một con trỏ mà giá trị địa chỉ mà nó trỏ đến là không xác định, không hợp lệ, 
    hoặc chưa được khởi tạo. Con trỏ lạc thường xuất hiện khi chúng ta khai báo một con trỏ mà không cấp phát bộ nhớ cho nó hoặc không gán giá trị ban đầu.

    - Việc sử dụng con trỏ lạc có thể dẫn đến những hậu quả nguy hiểm, bao gồm:

        + Segmentation fault (lỗi chia cho 0): Khi bạn cố gắng truy cập đến một vùng nhớ không hợp lệ mà con trỏ lạc trỏ tới, chương trình có thể bị crash và gặp lỗi 
        "segmentation fault".

        + Undefined behavior (hành vi không xác định): Khi bạn thao tác với con trỏ lạc, hành vi của chương trình là không xác định, điều này có nghĩa là chương trình có thể 
        chạy mà không có lỗi rõ ràng, nhưng kết quả không đoán trước được và có thể sai lệch.

    - Để tránh con trỏ lạc, chúng ta nên luôn cẩn thận khi khai báo và sử dụng con trỏ:

        + Khởi tạo giá trị: Luôn khởi tạo con trỏ bằng giá trị địa chỉ hợp lệ trước khi sử dụng nó.

        + Gán giá trị NULL: Nếu không có giá trị hợp lệ nào để gán cho con trỏ, hãy gán cho nó giá trị NULL để tránh trỏ đến vùng nhớ ngẫu nhiên.

        + Kiểm tra hợp lệ trước khi sử dụng: Trước khi sử dụng con trỏ, hãy kiểm tra xem nó có trỏ đến một vùng nhớ hợp lệ hay không.
    
    VD: 


    int main() {
        int* ptr; // Khai báo một con trỏ mà chưa cấp phát bộ nhớ

        // Đoạn code dưới đây có thể dẫn đến undefined behavior hoặc segmentation fault
        // vì con trỏ ptr chưa được khởi tạo và có thể trỏ đến vùng nhớ ngẫu nhiên.
        *ptr = 10;
        cout << *ptr << endl;

        // Chúng ta nên khởi tạo giá trị cho con trỏ hoặc gán giá trị NULL trước khi sử dụng.
        // int* ptr = nullptr; // Gán giá trị NULL cho con trỏ
        // hoặc
        // int num = 10;
        // int* ptr = &num; // Khởi tạo con trỏ và trỏ đến biến num

    }
*/

/*
    Tham số con trỏ truyền giá trị

    - Trong C++, khi bạn truyền một con trỏ vào một hàm dưới dạng tham số giá trị, thực chất bạn đang truyền giá trị của địa chỉ mà con trỏ trỏ tới. 
    Khi hàm được gọi, một bản sao của địa chỉ đó được tạo ra và truyền vào hàm. Do đó, bất kể hàm có thay đổi giá trị của con trỏ trong hàm hoặc không, 
    giá trị của con trỏ trong hàm gọi sẽ không bị ảnh hưởng.

    VD:

    // Hàm thay đổi giá trị con trỏ được truyền vào nhưng không ảnh hưởng đến giá trị gốc
    void changeValue(int* ptr) {
        *ptr = 100; // Thay đổi giá trị của biến mà con trỏ trỏ tới
    }

    // Hàm in giá trị của con trỏ trong hàm gọi
    void printValue(int* ptr) {
        cout << "Gia tri cua con tro trong ham printValue: " << *ptr << endl;
    }

    int main() {
       int num = 10;
       int* ptr = &num;

        cout << "Gia tri cua bien num truoc khi goi ham changeValue: " << num << endl;
        changeValue(ptr); // Truyền con trỏ vào hàm
        cout << "Gia tri cua bien num sau khi goi ham changeValue: " << num << endl;

        cout << "Gia tri cua con tro truoc khi goi ham printValue: " << *ptr << endl;
        printValue(ptr); // Truyền con trỏ vào hàm
        cout << "Gia tri cua con tro sau khi goi ham printValue: " << *ptr << endl;

    }

    OUTPUT: Gia tri cua bien num truoc khi goi ham changeValue: 10
            Gia tri cua bien num sau khi goi ham changeValue: 100
            Gia tri cua con tro truoc khi goi ham printValue: 100
            Gia tri cua con tro sau khi goi ham printValue: 100
*/
