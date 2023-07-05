/*
    @author : Hai Tran
*/

/*
    BÀI 2: MỆNH ĐỀ IF-ELSE, SWITCH CASE VÀ ỨNG DỤNG

    -IF ELSE
        + Cấu trúc:

        if (điều kiện){
        - Câu lệnh
        - Khối lệnh sẽ được thực hiện nếu <điều kiện> đúng.
        }
        else{
        - Câu lệnh
        - Khối lệnh sẽ được thực hiện nếu <điều kiện> sai.
        }        

    VD: Bạn cho một số nguyên a. Hãy kiểm tra xem số đó có phải số chẵn không.
    INPUT: 2
    OUTPUT: Day la so chan

    #include <iostream>

    using namespace std;

    int main(){
        int a; cin >> a;
        if(a%2==0){
            cout << "Day la so chan";
        }
        else{
            cout << "Day la so le";
        }
    }
*/

/*
    - TOÁN TỬ 3 NGÔI
        + Cấu trúc:

        condition ? giá trị đúng : giá trị sai;

        VD: Bạn cho một số nguyên a,b. Tìm số lớn nhất trong 2 số đó.

        // Keyword
        int check = ( n%2==0 ) ? "So chan ": " So le";
        cout << check;

    - Lưu ý: Không phải bài toán nào cũng dùng cách này, chỉ thực sự có những bài toán cơ bản mới dùng tới toán tử 3 ngôi.
    
*/

/*
    -IF - ELSE IF - ELSE
        + Cấu trúc:

        if (điều kiện){
        - Câu lệnh
        - Khối lệnh sẽ được thực hiện nếu <điều kiện> đúng.
        }
        else if(diều kiện){
        - Câu lệnh
        - Khối lệnh sẽ được thực hiện nếu <điều kiện if> sai.
        }   
        else{
        - Câu lệnh
        - Khối lệnh sẽ được thực hiện nếu <điều kiện> sai.
        }     

    VD2: Nhập điểm trung bình của một học sinh từ bàn phím, sau đó in ra màn hình xếp loại của học sinh này.
    Học sinh giỏi - 8 tới 10 điểm
    Học sinh khá - 6.5 tới 8 điểm
    Học sinh trung bình - 5 tới 6.5 điểm
    Học sinh yếu - dưới 5 điểm

    Nhập hạnh kiểm của một học sinh từ bàn phím, sau đó in ra màn hình xếp loại của học sinh này.
    - Hạnh kiểm tốt - dưới 3 lỗi
    - Hạnh kiếm khá - từ 3 tới 5 lỗi
    - Hạnh kiếm trung bình - từ 5-8 lỗi
    - Hạnh kiểm yếu - từ 8 lỗi trở lên.

    INPUT: 
    7.9
    3
    OUTPUT:
    Xep loai Gioi
    Hanh Kiem Tot

    #include<iostream>

    using namespace std;

    int main(){

    float diem; cout <<"Nhap diem trung binh: "; cin >> diem;
    int hk; cout <<"Nhap so lan vi pham: "; cin >> hk;

    // Xếp loại điểm trung bình của học sinh
    if(diem >=8 && diem <=10)
        cout << "Xep loai Gioi";

    else if(diem <8 && diem >=6.5)
        cout <<"Xep loai Kha";

    else if(diem<6.5 && diem>=5)
        cout << "Xep loai Trung binh";

    else cout << "Xep loai Yeu";

    cout << endl; 

    // Xếp loại học lực của học sinh
    if(hk<=3)
        cout << "Hanh kiem Tot";

    else if(hk>3 && hk <=5)
        cout << "Hanh kiem Kha";

    else if(hk>5 && hk <=8)
        cout << "Hanh kiem Trung Binh";

    else cout << "Hanh kiem Yeu";

    return 0;
    }

*/

/*
    SWITCH - CASE

    + Cấu trúc
    switch (biểu thức hoặc tham số)
    ​{
    case constant1:
        // statements
        break;
    case constant2:
        // statements
         break;
    ...
    ...
    ...
    case constant n:
        // statements
         break;
    default:
     // default statements

    - Với expression phải bắt buộc là giá trị hằng, có thể là biểu thức nhưng kết quả cần là hằng số. Trong đó, expression sẽ được so sánh với các giá trị của các case.
    - Nếu có 1 case nào đó khớp giá trị, các khối lệnh tương ứng sau case đó sẽ được thực hiện cho tới khi gặp lệnh break. Do đó, nếu chúng ta không sử dụng break thì tất cả các case kể từ case khớp giá trị đều được thực hiện.
    - Case default sẽ được thực hiện nếu không có case nào khớp giá trị với expression. 

}   
*/