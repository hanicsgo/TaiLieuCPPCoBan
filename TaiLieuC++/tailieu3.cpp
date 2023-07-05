/*
    @author : @Hai Tran
*/

/*
    BÀI 3: VÒNG LẶP FOR, WHILE, DO WHILE

    + Cấu trúc:

    for (khởi tạo giá trị biến lặp; điều kiện lặp; cập nhật biến lặp)
    {
        // các lệnh cần lặp
    }

    - Khởi tạo: Đây là nơi bạn khởi tạo biến đếm vòng lặp. Nó chỉ được thực thi một lần ở đầu vòng lặp.
    - Điều kiện: Đây là điều kiện được kiểm tra trước mỗi lần lặp của vòng lặp. Nếu điều kiện là đúng, vòng lặp tiếp tục thực thi. Nếu điều kiện sai, vòng lặp kết thúc.
    - Cập nhật: Đây là nơi bạn cập nhật biến đếm vòng lặp. Nó được thực thi ở cuối mỗi lần lặp của vòng lặp.

    VD1:     
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
        }

    OUTPUT: 1 2 3 4 5 6 7 8 9 10.

    VD2: Tìm tổng và tích của 10 số tự nhiên đầu tiên.
    INPUT: 10 3628800
    OUTPUT 55
    // C1: Vòng lặp for (Bài toán dùng big o(n))
    int n; cin >> n;
    int sum = 0, factorial = 1;
    for(int i = 1; i<=n ; i++){
        sum += i;
    }
    cout << sum << endl;

    for(int i = 1; i<=n ; i++){
        factorial *= i;
    }
    cout << factorial;
    }

    // C2: Bài toán dùng big o(1)

    int n; cin >> n;
    int sum = n(n+1)/2;
    cout << sum << endl;

    VD3: Bạn cho n số hạng của số tự nhiên chẵn và tổng của chúng.
    INPUT: 10
    OUTPUT: 30

    int n; cin >> n;
    int sum = 0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum +=i;
        }
    }
    cout << sum;
*/

/*
    WHILE
    
    + Cấu trúc: 

    while (điều_kiện) {
    // mã để thực thi
    }

    - Điều kiện được đánh giá trước mỗi vòng lặp. Nếu điều kiện là đúng, mã bên trong vòng lặp được thực thi. Nếu điều kiện là sai, vòng lặp kết thúc và chương trình tiếp tục thực thi với câu lệnh sau vòng lặp.
    - Bên trong vòng lặp, bạn có thể bao gồm bất kỳ mã C++ hợp lệ nào mà bạn muốn lặp lại.
    - Sau khi thực thi mã bên trong vòng lặp, chương trình quay lại đầu vòng lặp và đánh giá lại điều kiện. Quá trình này tiếp tục cho đến khi điều kiện trở thành sai.

    #include <iostream>

    using namespace std;

    int main(){
        int n,i; cin >> n >> i;

        while(n<=i){
            cout << n << " ";
            n++;
        }
    }

    VD1: Nhập số nguyên n in ra các số chẵn.
    INPUT: 2
    OUTPUT: 2 4 6 8 10

    #include <iostream>

    using namespace std;

    int main(){
        int n,i; cin >> n >> i;

        while(n<=i){
        if(n%2==0){
            cout << n;
        }
        n++;
    }
}
*/

/*
    DO - WHILE

    do {
        // Thực hiện các lệnh bên trong vòng lặp
    } while (điều kiện);

    - Điều kiện là một biểu thức hoặc biểu thức điều kiện. Các lệnh bên trong vòng lặp sẽ được thực hiện trước khi điều kiện được kiểm tra. Nếu điều kiện là đúng (true), vòng lặp sẽ tiếp tục thực thi, và quá trình này sẽ lặp lại cho đến khi điều kiện trở thành sai (false).

    Một số điểm quan trọng về vòng lặp do-while:

    - Lệnh bên trong vòng lặp được thực hiện ít nhất một lần, ngay cả khi điều kiện ban đầu là sai.
    - Sau khi thực hiện lệnh bên trong, điều kiện sẽ được kiểm tra. Nếu điều kiện là đúng (true), vòng lặp sẽ tiếp tục. Nếu điều kiện là sai (false), vòng lặp sẽ kết thúc và chương trình sẽ tiếp tục thực thi các lệnh tiếp theo sau vòng lặp.
    - Vòng lặp do-while thường được sử dụng khi bạn muốn đảm bảo rằng một khối lệnh được thực hiện ít nhất một lần trước khi kiểm tra điều kiện.

    #include <iostream>

    using namespace std;

    int main() {
        int n; cin >> 5 

        do {
        cout << n << " ";
        n++;
        } while (n <= 5);

    return 0;
    }

    INPUT: 1
    OUTPUT : 1 2 3 4 5
*/

/*
    SỰ KHÁC NHAU CỦA WHILE VÀ DO WHILE

    - Điều kiện kiểm tra:

        + Trong vòng lặp while, điều kiện được kiểm tra trước khi thực hiện lần đầu tiên. Nếu điều kiện sai (false) từ đầu, vòng lặp không được thực thi.

        + Trong vòng lặp do-while, lần thực hiện đầu tiên được thực hiện trước khi điều kiện được kiểm tra. Vòng lặp được thực hiện ít nhất một lần, ngay cả khi điều kiện là sai (false).

    - Vị trí điều kiện:

        + Trong vòng lặp while, điều kiện được đặt ở đầu vòng lặp, trước khi thực hiện các lệnh bên trong.

        + Trong vòng lặp do-while, điều kiện được đặt ở cuối vòng lặp, sau khi đã thực hiện các lệnh bên trong ít nhất một lần.

    - Flow control (Điều khiển luồng):

        + Vòng lặp while sẽ không thực hiện bất kỳ lệnh bên trong nếu điều kiện kiểm tra từ đầu là sai (false).

        + Vòng lặp do-while sẽ thực hiện ít nhất một lần, ngay cả khi điều kiện kiểm tra từ đầu là sai (false).

    #include <iostream>

    using namespace std;

    int main() {
    int x = 5;

    cout << "Vòng lặp while:" << endl;
    while (x < 5) {
        cout << x << " ";
        x++;
    }
    cout << endl;

    cout << "Vòng lặp do-while:" << endl;
    do {
        cout << x << " ";
        x++;
    } while (x < 5);

    return 0;
}

    OUTPUT : Vòng lặp while:
             Vòng lặp do-while: 5
*/
