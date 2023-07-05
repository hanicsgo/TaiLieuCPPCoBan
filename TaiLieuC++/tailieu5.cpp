/*
    @author: @Hai Tran
*/

/*
    Bài 5: Mảng 2 chiều (2D Array)

    + Định nghĩa:

        - Mảng hai chiều, còn được gọi là ma trận, là một cấu trúc dữ liệu trong lập trình được sử dụng để lưu trữ và quản lý các giá trị trong một bảng hai chiều có hàng và cột.

        - Trong hầu hết các ngôn ngữ lập trình, bạn có thể khai báo và sử dụng mảng hai chiều bằng cách sử dụng cú pháp tương tự như mảng một chiều, nhưng bạn cần chỉ định kích thước của mảng theo hàng và cột.

    + Cấu trúc

        <kiểu_dữ_liệu> <tên_mảng>[<kích_thước_hàng>][<kích_thước_cột>];

    VD1: int myArray[3][4]

        + Ở đây chúng ta tạo ra mảng gồm 3 kích thước hàng, 4 kích thước cột.

    VD2: int myArray[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12} hoặc 
        
         int myArray[3][4] = {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
         };

        + Ở đây chúng ta tạo ra mảng gồm 3 kích thước hàng, 4 kích thước cột và 12 phần tử

    VD3: int myArray[n][m] = {k}

        + Ở đây chúng ta tạo ra mảng gồm n kích thước hàng, m kích thước hàng và k = n * m phần tử.

    VD4: Bạn được cung cấp một mảng số nguyên n hàng, m cột với n và m là số hàng và số cột tương ứng. Hiện ra mảng vừa nhập

        - Dữ liệu:  Dòng đầu tiên nhập số nguyên n,m (1 <= n,m <= 1000)
                    Dòng thứ hai nhập n hàng, m cột với số nguyên a1,a2,...,a[n][m] (1<=a[i][j]<=10^9)

        INPUT: 4 4
        OUTPUT: 1 2 3 4
                5 6 7 8
                9 10 11 12
                13 14 15 16

        int n,m; cin >> n >> m;
        int a[n][m];

        // Nhập mảng
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
    
        // In mảng
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        
    VD5: Bạn được cung cấp một mảng số nguyên n hàng, m cột với n và m là số hàng và số cột tương ứng. Đưa ra các phần tử trên hàng đầu tiên.

        - Dữ liệu:  Dòng đầu tiên nhập số nguyên n,m (1 <= n,m <= 1000)
                    Dòng thứ hai nhập n hàng, m cột với số nguyên a1,a2,...,a[n][m] (1<=a[i][j]<=10^9)

        INPUT: 2 3
        2 3 5
        4 5 1
        OUTPUT: 2 3 5

        int n,m; cin >> n >> m;
        int a[n][m];

        // Nhập mảng
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
    
        // In mảng
        for(int i=0; i<m; i++){
            cout << a[0][i] << " ";
        }
*/      

/*
    - Bài tập vận dụng:

    - VD1: Bạn được cung cấp một mảng số nguyên n hàng, m cột với n và m là số hàng và số cột tương ứng và số nguyên k. Đưa ra tổng các phần tử trên hàng k.
    - Dữ liệu:  Dòng đầu tiên nhập số nguyên n hàng ,m cột (1 <= n,m <= 1000)
                Dòng thứ hai nhập số nguyên k (1 <= k <= 1000)
                Dòng thứ ba nhập n hàng, m cột với số nguyên a1,a2,...,a[n][m] (1<=a[i][j]<=10^9)

    INPUT: 2 3 
           1
           2 3 4
           5 6 7
    OUTPUT: 9

    int n,m; cin >> n >> m;
    int k; cin >> k;
    int a[n][m];

     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    
    int sum = 0;
    for(int i=0; i<m; i++){
        sum += a[k-1][i];
    }

    cout << sum;

    - VD2: Bạn được cung cấp một mảng số nguyên n hàng, m cột với n và m là số hàng và số cột tương ứng. Đưa ra các phần tử trên hàng đầu tiên sau khi đã sắp xếp các phần tử theo chiều nhỏ tới lớn.
    - Dữ liệu:  Dòng đầu tiên nhập số nguyên n hàng ,m cột (1 <= n,m <= 1000)
                Dòng thứ hai nhập n hàng, m cột với số nguyên a1,a2,...,a[n][m] (1<=a[i][j]<=10^9)

    INPUT: 2 3
           7 3 4
           5 4 1
    OUTPUT: 3 4 7
            5 4 1
    
    int n,m; cin >> n >> m;
    int a[n][m];

    // Nhập mảng
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    // Sắp xếp
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j+=){
            if(a[0][i] > a[0][j]){

                // Đổi chỗ vị trí
                int t = a[0][i];
                a[0][i] = a[0][j];
                a[0][j] = t;
            }
        }
    }

    // In mảng
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
*/

/*
    Sự khác nhau về mảng một chiều (1D Array) và mảng hai chiều (2D Array)

    - Mảng một chiều (1D Array)
        + Còn được gọi là mảng một chiều hoặc mảng một chiều tuyến tính.
        + Dữ liệu trong mảng được lưu trữ theo một hàng ngang duy nhất.
        + Các phần tử trong mảng được truy cập bằng chỉ số (index) duy nhất.
        + Mảng một chiều có kích thước được xác định bởi số lượng phần tử trong mảng.

    - Ví dụ: int myArray[5]; là một mảng một chiều có kích thước 5.

    - Mảng hai chiều (2D Array):
        + Còn được gọi là mảng hai chiều hoặc mảng hai chiều lưới.
        + Dữ liệu trong mảng được lưu trữ trong một cấu trúc dạng lưới gồm hàng và cột.
        + Các phần tử trong mảng được truy cập bằng chỉ số hàng và chỉ số cột.
        + Mảng hai chiều có kích thước được xác định bởi số lượng hàng và số lượng cột trong mảng.

    - Ví dụ: int matrix[3][4]; là một mảng hai chiều với 3 hàng và 4 cột.

    - Tóm lại: Sự khác nhau giữa mảng một chiều và mảng hai chiều nằm chủ yếu ở cách dữ liệu được tổ chức và 
    cách truy cập vào các phần tử. Mảng một chiều chỉ có một chiều dữ liệu tuyến tính, trong khi mảng hai chiều có 
    cấu trúc lưới với hàng và cột. Khi truy cập vào phần tử, mảng một chiều chỉ cần chỉ số duy nhất, 
    trong khi mảng hai chiều yêu cầu chỉ số hàng và chỉ số cột.
*/

/*
    Ứng dụng của mảng một chiều (1D Array) và mảng hai chiều (2D Array)

    - Mảng một chiều (1D):
        + Sử dụng để lưu trữ danh sách các phần tử có cùng kiểu dữ liệu, chẳng hạn như một danh sách sinh viên, một danh sách điểm số, một dãy số nguyên, v.v.
        + Thường được sử dụng trong các thuật toán đơn giản như tìm kiếm tuyến tính, sắp xếp, đếm, v.v.
        + Dễ dàng truy cập và thao tác các phần tử bằng chỉ số duy nhất.

    - Mảng hai chiều (2D):
        + Sử dụng để lưu trữ dữ liệu có cấu trúc lưới, chẳng hạn như ma trận, bảng điểm, hình ảnh, v.v.
        + Phù hợp cho việc xử lý dữ liệu hai chiều như hàng và cột, vị trí trong một lưới.
        + Được sử dụng trong các thuật toán liên quan đến ma trận như ma trận biến đổi, nhân ma trận, tìm kiếm trong ma trận, v.v.
        + Cung cấp khả năng tổ chức và truy xuất dữ liệu theo hàng và cột.

    - Tóm lại: Tùy thuộc vào bài toán và yêu cầu cụ thể, lập trình viên có thể lựa chọn sử dụng mảng một chiều hoặc 
    mảng hai chiều để lưu trữ và xử lý dữ liệu. Mảng một chiều thích hợp cho các tình huống đơn giản, 
    trong khi mảng hai chiều thích hợp cho các cấu trúc dữ liệu phức tạp hơn và các bài toán liên quan đến ma trận 
    hoặc lưới dữ liệu hai chiều.
*/

/*
    Cách sử dụng Vector trong mảng hai chiều (2D Array)
    VD:
    int n, m; cin >> n >> m;

    // Khởi tạo một vector 2D với kích thước n hàng, m cột và giá trị ban đầu là 0
    vector<vector<int>> a(n, vector<int>(m, 0));

    // Nhập mảng
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    // In mảng
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
*/

/*
    Mảng đa chiều (Multidimensional Array) (Tham khảo)

    - Định nghĩa: Là một cấu trúc dữ liệu trong lập trình mà cho phép lưu trữ dữ liệu theo nhiều chiều hoặc kích thước. 
    Nó là một tập hợp các phần tử có cùng kiểu dữ liệu, được tổ chức thành các chiều và chỉ số.

        + Mảng đa chiều được tổ chức thành các mức hoặc chiều tương ứng với số chiều của mảng. 
    Mỗi mức hoặc chiều chứa một mảng 1 chiều, trong đó các phần tử được xác định bằng các chỉ số.

    - Cấu trúc: <kiểu_dữ_liệu> <tên_mảng>[kích_thước_chiều][<kích_thước_hàng>][<kích_thước_cột>];

    VD1: int myArray3D[2][3][4]

    + Ở đây chúng ta tạo ra mảng gồm 2 kích thước chiều, 3 kích thước hàng, 4 kích thước cột.

    VD2: int myArray3D[2][3][4] = {1,2,3,4,5,6,...,23,24} hoặc

         int myArray3D[2][3][4] = {
        {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
        },

        {
            {13,14,15,16},
            {17,18,19,20},
            {21,22,23,24}
        },
    };

    + Ở đây chúng ta tạo ra mảng gồm 2 kích thước chiều, 3 kích thước hàng, 4 kích thước cột và 24 phần tử.

    
    VD2: int myArray3D[n][m][l] = {k};

    + Ở đây chúng ta tạo ra mảng gồm n kích thước chiều, m kích thước hàng, l kích thước cột và k = n * m * l phần tử.
*/

