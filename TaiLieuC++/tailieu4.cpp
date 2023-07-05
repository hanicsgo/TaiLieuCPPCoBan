/*
    Bài 4: Mảng một chiều (1D Array)
*/

/*
    - Array

        + Định nghĩa: 

            - Mảng là một cấu trúc dữ liệu cho phép lưu trữ nhiều phần tử cùng kiểu dữ liệu trong một khối bộ nhớ liên tiếp. 
            Mảng được sử dụng để lưu trữ và xử lý các tập hợp dữ liệu một cách hiệu quả.

            - Để khai báo một mảng trong C++, bạn chỉ định kiểu dữ liệu của các phần tử và kích thước của mảng. 
            Cú pháp để khai báo một mảng như sau:

        + Cấu trúc

            <kiểu dữ liệu> <tên mảng>[<kích thước>];

        VD: int myArray[5];

            + Ở đây chúng ta tạo ra mảng gồm 5 kích thước.

        VD2: int myArray[5] = {1,2,3,4,5};

            + Ở đây chúng ta tạo ra mảng gồm 5 kích thước và 5 phần tử.

        VD3: int myArray[n] = {m};

            + Ở đây chúng ta tạo ra mảng gồm n kích thước mà m phần tử.

            - Tuy nhiên, trong mọi bài toán không cần dùng nhất thiết tạo mảng kích thước và phần tử như trên kia.
        
        VD4: Bạn được cung cấp một mảng số nguyên n phần tử a1,a2,...,an. Hiện ra mảng vừa nhập

        - Dữ liệu:  Dòng đầu tiên nhập số nguyên n (1 <= n <= 1000)
                    Dòng thứ hai nhập n số nguyên a1,a2,...,an(1<=ai<=10^9)

        INPUT: 5
        1 2 3 4 5
        OUTPUT: 1 2 3 4 5

        int n; cin >> n;
        int arr[n];
        // Nhập mảng
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        // In mảng
        for(int i=0;i<n;i++){
            cout >> arr[i] >> " ";
        }

        VD5: Bạn được cung cấp một mảng số nguyên n phần tử a1,a2,...,an. Hiện ra phần tử có giá trị cao nhất trong mảng.

        - Dữ liệu:  Dòng đầu tiên nhập số nguyên n (1 <= n <= 1000)
                    Dòng thứ hai nhập n số nguyên a1,a2,...,an(1<=ai<=10^9)

        INPUT: 5
        3 9 6 5 8
        OUTPUT: 9

        C1: Tự định nghĩa.
        int n; cin >> n;
        int a[n];

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int max = a[0]; // gán phần tử giả sử lớn nhẩt
        for(int i=0; i<n; i++){
            if(max < a[i]){
                max = a[i];
            }
        }
        cout << max;

        C2: Dùng thư viện algorithm cho hàm maxElement. Không khuyến khích dùng nếu chưa học tới pointer

        int n; cin >> n;
        int a[n];

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        //a là con trỏ tới phần tử đầu tiên của mảng.
        //a + n là con trỏ tới phần tử sau phần tử cuối cùng của mảng. Điều này xác định phạm vi tìm kiếm của hàm max_element.

        int *maxElement = max_element(a, a + n);
        cout << *maxElement;

    https://cplusplus.com/reference/algorithm/max_element/

    VD6: Bạn được cung cấp mảng số nguyên n phần tử a1, a2, …, an và một số nguyên x. 
    Bạn cần đưa ra “YES” nếu trong mảng tồn tại số nguyên x bạn nhập, ngược lại đưa ra "NO"

    - Dữ liệu:  Dòng đầu tiên chứa số nguyên n và x (1 ≤ n ≤ 1000, 1 ≤ x ≤ 10^9)
	            Dòng thứ 2 chứa n số nguyên a1, a2, …, an (1 ≤ ai ≤ 10^9) 

    INPUT: 5 3
    1 3 7 2 8
    OUTPUT: YES

    int n,x; cin >> n >> x;
    for(int i=0; i<n; i++){
        cout << a[i];
    }

    bool check = true;
    for(int i=0; i<n; i++){
        if(a[i] == x){
            check = true;
            break;
        }
    }
    
    if(check == true) cout << "Yes";

    else cout << "No";
}

*/

/*
    * Bài tập vận dụng:
    - VD1: Bạn được cung cấp mảng số nguyên n phần tử a1, a2, …, an. Bạn cần đưa ra màn hình các số chẵn trong mảng.
    - Dữ liệu:
	    + Dòng đầu tiên chứa số nguyên n
	    + Dòng thứ 2 chứa n số nguyên a1, a2, .., an.

    INPUT: 5
    1 2 3 4 5
    OUTPUT: 2 4

    int n,x; cin >> n >> x;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i] == x){
            check = true;
            break;
        }
    }
    
    if(check) cout << "Yes";

    else cout << "No";

    - VD2: Bạn được cung cấp mảng gồm n phần tử số nguyên a1, a2, …, an.  Xuất ra các số nguyên tố trong mảng.
    - Dữ liệu: 
	    + Dòng đầu tiên chứa số nguyên n (1 < n < 1000)
	    + Dòng thứ 2 chứa n số nguyên a1, a2, …, an.

    INPUT: 5
    1 2 3 4 5
    OUPUT: 2 3 5

    int n; cin >> n;

    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        bool soNguyenTo = true;
        if (a[i] < 2) {
            soNguyenTo = false;
        } else {
            for (int j = 2; j <= a[i]/2; j++) {
                if (a[i] % j == 0) {
                    soNguyenTo = false;
                    break;
                }
            }
        }
        
        if (soNguyenTo) {
            cout << a[i] << " ";
        }
    }
*/

/*
    VECTOR - THƯ VIỆN TRONG C++

    - Định nghĩa: Trong C++, vector là một kiểu dữ liệu dùng để lưu trữ một mảng động có thể thay đổi kích thước. 
    Nó thuộc vào thư viện tiêu chuẩn vector và cung cấp các phương thức và tính năng linh hoạt cho việc quản lý mảng.

    - Lưu ý: Một số điểm quan trọng về vector trong C++:

        + Vector cho phép lưu trữ các phần tử có cùng kiểu dữ liệu, như số nguyên, số thực, chuỗi, đối tượng...

        + Vector tự động quản lý kích thước mảng và có thể thay đổi số lượng phần tử theo nhu cầu.

        + Vector cung cấp các phương thức như push_back, pop_back, insert, erase để thêm, xóa, chèn phần tử vào mảng.

        + Vector hỗ trợ truy cập phần tử bằng cách sử dụng toán tử [] hoặc phương thức at(), và cũng cho phép lấy kích thước mảng thông qua phương thức size().

    - Ví dụ minh họa việc sử dụng Vector trong C++:

        + Khai báo vector:

        vector<T> name(size);

        - Trong đó, size là kích thước ban đầu của vector.

        + Thêm phần tử vào vector:

        name.push_back(value);

        - Trong đó, value là giá trị của phần tử cần thêm vào vector.

        ....

    - Ví dụ cụ thể:

    #include <iostream>
    #include <vector>

    using namespace std;

    int main() {
        int n; cin >> n;
        vector<int> numbers(n);

        // Nhập dữ liệu vào vector
        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
        }

        // Truy cập phần tử theo chỉ số
        cout << "Phan tu tai vi tri 1: " << numbers[1] << endl;

        // Truy cập phần tử theo chỉ số
        cout << "Phan tu tai vi tri 2: " << numbers[2] << endl;

        // Truy cập phần tử sử dụng phương thức at()
        cout << "Phan tu tai vi tri 3: " << numbers.at(3) << endl;

        // Truy cập phần tử đầu tiên
        cout << "Phan tu dau tien: " << numbers.front() << endl;

        // Truy cập phần tử cuối cùng
        cout << "Phan tu cuoi cung: " << numbers.back() << endl;
    }
    INPUT: 
    5
    1 2 3 4 5

    OUTPUT:
    Phan tu tai vi tri 1: 2
    Phan tu tai vi tri 2: 3
    Phan tu tai vi tri 3: 4
    Phan tu dau tien: 1
    Phan tu cuoi cung: 5


    Tham khảo: https://cplusplus.com/reference/vector/vector/

    - Lưu ý: Nhìn chung hàm vector chỉ sử dụng cho những bài nâng cao hoặc OOP( Lập trình hướng đối tượng ). 
    Cho nên các bài cơ bản chúng ta không nhất thiết phải dùng.

*/

/*
    - Sự khác nhau quan trọng giữa Mảng (Array) và Vector

        1. Kích thước tĩnh vs kích thước linh hoạt:
            + Mảng (Array) có kích thước tĩnh, được xác định tại thời điểm biên dịch và không thể thay đổi sau đó.
            + Vector có kích thước linh hoạt, có thể tự động thay đổi kích thước khi cần thiết.

        2. Quản lý bộ nhớ:
            + Mảng yêu cầu xác định trước kích thước và sử dụng một khối liên tục trong bộ nhớ.
            + Vector quản lý bộ nhớ tự động và có khả năng mở rộng hoặc thu hẹp kích thước một cách linh hoạt.

        3. Thao tác với phần tử:
            + Mảng có cú pháp truy cập phần tử đơn giản bằng chỉ số mảng (array index).
            + Vector cung cấp các phương thức và toán tử để thao tác với phần tử, bao gồm truy cập, thêm, xóa và sắp xếp các phần tử.

        4. Tính linh hoạt và tiện ích:
            + Vector cung cấp nhiều phương thức và chức năng hỗ trợ, như thêm/xóa phần tử ở đầu hoặc cuối vector, sao chép vector, 
            tìm kiếm phần tử, sắp xếp và nhiều hơn nữa.
            + Mảng có tính chất đơn giản hơn và hạn chế trong việc thay đổi kích thước và các phép toán phức tạp.

    - Tóm lại: Vector là một lớp trong STL của C++ có thể coi là một phiên bản nâng cao của mảng, 
    với khả năng quản lý bộ nhớ linh hoạt và cung cấp nhiều phương thức và chức năng hỗ trợ. 
    Mảng là một cấu trúc dữ liệu cơ bản và đơn giản hơn, phù hợp cho các trường hợp cần một kích thước tĩnh và 
    không cần tính linh hoạt lớn.
*/