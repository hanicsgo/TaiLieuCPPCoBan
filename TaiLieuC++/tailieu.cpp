
/*
    @author : Hai Tran
*/

/*

BÀI 1: LÀM QUEN VỚI NGÔN NGỮ LẬP TRÌNH.

#include <iostream> : là một chỉ thị tiền xử lý chứa nội dung của tập tin header chuẩn của C++. 
Là một tập tin header/thư viện chuẩn của C++ chứa các định nghĩa cho các dòng xuất/nhập, đầu vào/đầu ra 
tiêu chuẩn của chương trình. Các định nghĩa này được bao gồm trong namespace std.

using namespace std: thông báo cho complier là mình đang sử dụng std namespace. 
Thay vì các bạn phải khai báo std:: trước mỗi lần sử dụng cout hoặc cin… 
(Ví dụ: std::cout«“Hello World!”«std::endl;) thì đây là cách mà có thể tiết kiệm thời gian và 
tránh việc thiếu sót khi các bạn sử dụng các thành phần trong std namespace.

Hàm main(): là hàm chính, nơi sự thực thi chương trình bắt đầu, 
bắt buộc phải có và chỉ có một hàm main duy nhất trong chương trình và ở đây do int đứng trước main() 
nên nó phải luôn trả về một kiểu số int. Có nhiều cách khai báo hàm main. 
Đối với các bạn mới học C++ mình khuyến khích các bạn sử dụng cách khai báo hàm main như trên.

int: được gọi là kiểu trả về của hàm. Hàm sẽ không yêu cầu giá trị trả về nếu nó là hàm void

Lệnh cout: có tác dụng in ra màn hình tất cả những gì nằm trong dấu ngoặc “ “.

Lệnh endl: cho phép ta xuống dòng. Cách khác: cout«“Hello World \n”;

Lệnh return 0: kết thúc hàm main và trả về một giá trị. Ở đây ta trả về 0. 
Đây là giá trị thường được sử dụng để làm giá trị trả về của hàm int main().

*/

/*
#include <iostream> // in thư viện

using namespace std;

int main()
{
    // in ra giá trị main
    cout<<"Hello World!"<<endl;
    
    // Gía trị trả về hàm main 
    return 0;
}
*/

/*
    VD1: Hiện ra màn hình thông tin sau.
    ----------------------------------
        OUTPUT: Toi ten la "Tran Hoang Hai"
                        Toi bi ngu
                Hien tai dang hoc lap trinh  
    ----------------------------------
*/

/*
#include <iostream>

using namespace std;

int main(){
    cout << "Toi ten la Tran Hoang Hai" << endl;
    cout << "\t Toi bi ngu" << endl;
    cout << "Hien tai toi dang hoc lap trinh" << endl;
}

*/

/*
    CÁC TOÁN TỬ TRONG LẬP TRÌNH
    - Toán tử số học:
        + Tổng: +
        + Hiệu: -
        + Tích: *
        + Thương: /
        + Chia dư mô đun: % (Ví dụ 3/2=1 dư 1 thì output sẽ hiện là 1)

    Ví dụ: 
        cout << "Tong =" << 2+3; (OUTPUT: 5)
        cout << "Hieu =" << 2-3; (OUTPUT: -1)
        cout << "Tich =" << 2*3; (OUTPUT: 6)
        cout << "Thuong =" << 2/3; (OUTPUT: 0)
        cout << "Modun =" << 2%3; (OUTPUT: 2)
        
*/

/*
    BIẾN VÀ CÁCH KHAI BÁO BIẾN
    - Các biến thường gặp
        + int: Cho các biến với giá trị kiểu nguyên
        + char: Cho các biến để lưu trữ giá trị kiểu ký tự 
        + float: Cho các biến có giá trị kiểu thực dấu phẩy động
        + bool: Cho các biến để lưu trữ giá trị kiểu boolean (true hoặc false)
        + string: Cho các biến để lưu trữ giá trị chuỗi (bố của char)
        + double: Cho các biến có giá trị kiểu thực cho các giá trị lớn

    - Các biến ít gặp
        + int64_t
        + long double
        ....
        
    Ví dụ: Tên hàm + tên biến =  giá trị - int hai = 6
        int a = 5; cout << a; (Output: 5)
        char c ='A'; cout << c; (Output: A)
        float f = 3.14; cout << f; (Output: 3.14)
        bool b = true; cout << b (Output: 1 || false : 0)
        string s ='Mlem' << cout << s; (Output: Mlem)

    VD1: Bạn hãy in một số nguyên a , một chuỗi kí tự bất kì s, một số thực bất kì f.

    INPUT: 
    6
    DasuoGankTem20gg
    6.99996

    OUTPUT:
    6
    DasuoGankTem20gg
    6.99996
*/

#include <iostream>

using namespace std;

int main(){
    int a; cin >> a;
    string s; cin >> s;
    float f; cin >> f;
    cout << a << endl;
    cout << s << endl;
    cout << f << endl;
}

/*
    THUẬT TOÁN
    - Định nghĩa: Là một dãy hữu hạn các thao tác được bố trí theo một trình tự xác định (Dữ liệu -> THUẬT TOÁN -> Kết quả)

    - CÁC BƯỚC GIẢI BÀI TẬP LẬP TRÌNH:
        + Nghiên cứu đề bài (Ở đây chúng ta phải đọc đề bài và phải hiểu thật rõ bản chất của đề bài đưa ra)
        + Xác định giải thuật (Ở đây chúng ta sẽ phần nghĩ xem mình sẽ dùng cú pháp câu lệnh gì để giải quyết)
        + Cài đặt bằng các dòng lệnh (Ở đây chúng ta thực hiện câu lệnh cú pháp để tìm kết quả)

    -Ví dụ: Bạn được cho 2 số nguyên. Hãy tìm số lớn nhất trong 2 số đã cho.

        int a,b; cin >> a >> b;
        // Thuật toán cơ bản
        if (a>b){
            cout << a;
        }
        else{
            cout << b;
        }

        // Toán tử 3 ngôi tìm số lớn nhất trong 2 số
        int a,b; cin >> a >> b;
        int max = (a > b)? a:b;

        cout << max;
        
    VD2: Bạn được cho 3 số nguyên. Hãy tìm số lớn nhất trong 3 số đã cho.
        int a, b, c; cin >> a >> b >> c;
        int max = a;
        if (max < b){
            max = b;
        }
        if (max < c){
            max = c;
        }
        cout << max;
    }

        // Toán tử 3 ngôi tìm số lớn nhất trong 3 số
        int a,b,c; cin >> a >> b >> c;
        int max = ( a > b && a > c)? a : ((b > a && b > c)? b : c);
        cout << max;

    VD3: Giải phương trình P(x): ax + b = 0 (Phương trình bậc nhất một ẩn)
    - Hướng dẫn: 1. Nếu a = 0 thì có trường hợp 
                    b = 0 (Với mọi x là nghiệm)
                    Phương trình vô nghiệm
                 2. Nếu a!= 0 thì nghiệm sẽ là x = -b/a;
        
        int a,b; cin >> a >> b;
        int x = -b/a;
        if(a==0){
            if(b==0){
                cout << "Moi x la nghiem";
            }
            else{
                cout << "Phuong trinh vo nghiem";
            }
        }
        else{
            cout << "Nghiem la: " << x << endl;
        }
    }

*/

/*
    BÀI TẬP VỀ NHÀ
    BT1: Bạn được cung cấp 2 số nguyên a và b. Nhiệm vụ bạn cần làm là đưa ra tổng 2 số đã nhập.
    INPUT: 2 4
    OUTPUT: 6

    BT2: Bạn được cung cấp 2 số nguyên a và b. Nhiệm vụ bạn cần làm là đưa ra trung bình cộng của hai số đã nhập.
    INPUT: 2 3
    OUTPUT: 2.5

    BT3: Bạn được cung cấp 3 số nguyên a, b, d. Nhiệm vụ bạn cần làm là đưa ra chu vi, diện tích của hình chữ nhật, hình vuông và hình tròn.
    INPUT: 3 4 4 
    OUTPUT: 14 12 
            12 9
            25.12 50.24 

*/



