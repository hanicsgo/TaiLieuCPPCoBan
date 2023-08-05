/*
    @Author: Hai Tran
*/

/*
    Bài 9: Cấu trúc Struct

    - Định nghĩa: Cấu trúc (Struct) trong C++ là một kiểu dữ liệu người dùng tự định nghĩa, cho phép bạn tổ chức các thành phần
    dữ liệu khác nhau thành một đơn vị logic. Đối với C++, struct là một dạng của class, nó tương tự như class,
    nhưng mặc định các thành phần dữ liệu của nó là public (có thể truy cập từ bên ngoài).

    - Cấu trúc cho phép định nghĩa các thành phần dữ liệu (như biến) và các phương thức (như hàm) mà bạn muốn sử dụng 
    để làm việc với dữ liệu đó.

    - Cú pháp: 

    struct TenCauTruc{
        kieudulieu1 tenbien1;
        kieudulieu2 tenbien2;
        ...
        kieudulieuN tenbienN

        // Các hàm thành viên ( phương thức tùy chọn )
    };

    VD:
    // Định nghĩa cấu trúc
    struct SinhVien{
        string hoTen;
        int tuoi;
        string lop;
    }

    int main(){
        // Khởi tạo một biến thuộc cấu trúc Struc SinhVien
        SinhVien sv;
        sv.hoten = "Tran Hoang Hai";
        sv.tuoi ="20";
        sv.lop= "HK29";

        // Truy cập và in thông tin sinh viên
        cout << "Ho ten " << sv.hoten << endl;
        cout << "Tuoi " << sv.tuoi << endl;
        cout << "Lop " << sv.lop << endl;
    }
*/
    
/*
    Toán tử dấu chấm và toán tử mũi tên ( Toán tử thành viên )

    - Toán tử dấu chấm (Dot Operator) là một toán tử quan trọng trong nhiều ngôn ngữ lập trình, bao gồm C, C++, Java, C#, Python và nhiều ngôn ngữ khác. 
    Toán tử này được sử dụng để truy cập các thành viên (members) của một cấu trúc (struct) hoặc một đối tượng (object) trong các ngôn ngữ hướng đối tượng.

    + Toán tử dấu chấm được sử dụng để truy cập các thành viên của đối tượng thông qua tên đối tượng trực tiếp, không thông qua con trỏ.

    + Toán tử dấu chấm thích hợp khi bạn đang làm việc trực tiếp với đối tượng, không thông qua con trỏ.
    VD:

    struct Point {
        int x;
        int y;
    };

    int main() {
        // Khởi tạo và gán giá trị cho biến Point
        Point p1;
        p1.x = 10; // Gán giá trị cho thành viên x của lớp Point
        p1.y = 20; // Gán giá trị cho thành viên y của lớp Point

        // In ra giá trị của biến Point
        cout << "p1.x = " << p1.x << ", p1.y = " << p1.y << endl;
    }

    - Toán tử mũi tên (Array Operator) là một toán tử quan trọng trong nhiều ngôn ngữ lập trình, bao gồm C, C++, Java, C#, Python và nhiều ngôn ngữ khác. 
    Toán tử này được sử dụng để truy cập các thành viên (members) của một cấu trúc (struct) hoặc một lớp (class) trong các ngôn ngữ hướng đối tượng.

    + Toán tử mũi tên được sử dụng để truy cập các thành viên của đối tượng thông qua con trỏ trỏ tới đối tượng.

    + Toán tử mũi tên thích hợp khi bạn đang làm việc với con trỏ đến đối tượng và muốn truy cập các thành viên của đối tượng thông qua con trỏ đó.
    VD: #include <iostream>

    struct Point {
        int x;
        int y;
    };

    int main() {
        Point* p = new Point(); // Khởi tạo một con trỏ trỏ tới đối tượng Point.

        p->x = 10; // Truy cập thành viên x của đối tượng mà con trỏ p trỏ tới bằng toán tử mũi tên.
        p->y = 20; // Truy cập thành viên y của đối tượng mà con trỏ p trỏ tới bằng toán tử mũi tên.

        cout << "x: " << p->x << ", y: " << p->y << endl; // In giá trị của thành viên x và y của đối tượng mà con trỏ p trỏ tới.

        delete p; // Giải phóng bộ nhớ khi không cần sử dụng con trỏ p nữa.
}

*/

/*
    - Sự khác nhau giữa về toán tử dấu chấm với toán tử mũi tên nếu dùng function

    VD:
    // Định nghĩa cấu trúc Sinh Viên
    struct sinhVien{
        string hoTen;
        int maSV;
    };

    // Hàm nhập thông tin cho sinh viên dùng cho toán tử dấu chấm
    void nhapThongTinSinhVien(SinhVien& sv) {
        cin.ignore();
        cout << "Ho Ten: ";
        getline(cin, sv.hoTen);
        cout << "Ma Sinh Vien: ";
        cin >> sv.maSV;
    }

    // Hàm nhập thông tin cho sinh viên dùng cho toán tử mũi tên
    void nhapThongTinSinhVien(SinhVien* sv) {
        cin.ignore();
        cout << "Ho Ten: ";
        getline(cin, sv->hoTen);
        cout << "Ma Sinh Vien: ";
        cin >> sv->maSV;
    }

    - Tóm lại, nó chỉ khác ở phần tham số. Một bên là dùng &, bên còn lại dùng *.
*/

/*
    Các bài tập về Struct

    Bài tập 1: Quản lý danh sách sinh viên
    Hãy tạo một cấu trúc (struct) để đại diện cho thông tin của một sinh viên gồm các thành phần: Họ tên, Mã số sinh viên, Điểm toán và Điểm văn. 
    Sau đó, viết chương trình cho phép người dùng nhập thông tin của n sinh viên và hiển thị thông tin chi tiết của từng sinh viên, cùng với tổng điểm và 
    điểm trung bình của từng sinh viên.
    
    VD: 
    #include <iostream>
    #include <string>

    using namespace std;

    struct SinhVien{
        string hoTen;
        int maSV;
        float diemToan;
        float diemVan;
    };

    // Hàm nhập thông tin cho sinh viên
    void nhapThongTinSinhVien(SinhVien& sv) {
       cin.ignore();
       cout << "Ho Ten: ";
       getline(cin, sv.hoTen);
       cout << "Ma Sinh Vien: ";
       cin >> sv.maSV;
       cout << "Diem Toan: ";
       cin >> sv.diemToan;
       cout << "Diem Van: ";
       cin >> sv.diemVan;
    }

    // Hàm hiển thị thông tin của một sinh viên
    void hienThiThongTinSinhVien(SinhVien& sv) {
        cout << "Ho Ten: " << sv.hoTen << endl;
        cout << "Ma Sinh Vien: " << sv.maSV << endl;
        cout << "Diem Toan: " << sv.diemToan << endl;
        cout << "Diem Van: " << sv.diemVan << endl;
    }

    int main(){
       int n;
       cout << "Nhap so luong sinh vien: ";
       cin >> n;

       SinhVien *danhSachSV = new SinhVien[n];

       for (int i = 0; i < n; i++){
            cout << "Nhap thong tin cho sinh vien thu " << i + 1 << endl;
            nhapThongTinSinhVien(danhSachSV[i]);
       }

       cout << "Thong tin cua cac sinh vien" << endl;

       for (int i = 0; i < n; i++){
            cout << "Sinh vien thu " << i + 1 << endl;
            hienThiThongTinSinhVien(danhSachSV[i]);

            float tongDiem = danhSachSV[i].diemToan + danhSachSV[i].diemVan;
            float diemTrungBinh = tongDiem / 2.0;

            cout << "Tong diem " << tongDiem << endl;
            cout << "Diem trung binh " << diemTrungBinh << endl;
       }

        delete[] danhSachSV;
}
*/

/*
    Lời cuối cùng của mình ( @Hai Tran )

    - Tới đây, các bạn đã học xong 80% cơ bản của C++ rồi. Lời đầu tiên, mình xin được cám ơn các bạn đã chú ý tới cuổi bài lý thuyết của chương này.

    - Tuy rằng, mình biết tài liệu mình soạn có chỗ sai, có chỗ thiễu mong các bạn, các quý độc giả cho mình xin nhận xét, đánh giá để mình rút kinh nghiệm cho các tài liệu xuất 
    bản về sau.

    - Có các hướng đi mình xin được gửi options cho các bạn tham khảo.

    + Sau khi các bạn học xong cơ bản rồi, các bạn có thể chọn học sang OOP hoặc CTGL & GT. Học được cả 2 thì rất tốt.

    + Còn nếu các bạn cảm thấy khó khăn trong việc học C++, bạn có thể chuyển sang các ngôn ngữ khác để học và đi làm .
        VD: 1. Các bạn thiên về thiết kế giao diện thì các bạn có thể chọn làm Web Developer (Front-end) gồm các framework như ReactJS, VueJS, NextJS... hoặc UI/UX...
            2. Các bạn thiên về thuật toán thì các bạn có thể chọn làm AI (Artificial intelligence), DE (Data Engineer) hoặc Database...
            3. Các bạn thiên về công nghệ hơn thì cũng có thể lựa chọn DS (Data Sciencetist) cũng là một lựa chọn không tồi...

    - Sau cùng, mỗi một lựa chọn là một quyết định của đời người. Vì vậy, nếu còn là học sinh hay sinh viên, hãy chủ động tìm tòi, học hỏi càng nhiều càng tốt.
    Dĩ nhiên trên kia cũng chỉ là các options mình đề ra cho mọi người tham khảo.

    - Cuối cùng, mình xin cảm ơn các bạn vì đã ghé qua tài liệu của mình. Hi vọng tài liệu của mình giúp ích cho các bạn. ^.^

    Contact với mình qua: 

    Facebook: https://www.facebook.com/hanifancy
    Instagram: https://www.instagram.com/kophaihaitran/
    Linkedin: https://www.linkedin.com/in/hanifancy/
    Github: https://github.com/hanicsgo
    Steam: https://steamcommunity.com/id/haniicsgo
*/

