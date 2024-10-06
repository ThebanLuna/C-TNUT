#include <iostream>
#include <cmath>
using namespace std;
                                 // số hoàn hảo là số seach google
bool hoanhao(int n){            // kiểu bool chỉ trả về hai giá trị đúng hoặc sai; tham số hình thức n ở hàm trong dòng này nè
	int tong = 0;              //giá trị ban đầu của tong = 0
	for(int i=1; i<n; i++){   // i chạy từ 1 đến n
		if(n%i == 0){        // nếu n chia hết cho i thì 
			tong += i;      //                           tong += i; sau mỗi lần lặp thì tong được cộng dồn nhé
		}
	} 
	if(tong == n)          // sau khi lặp xong thì thằng if này sẽ lấy giá trị của biến tong ở dòng 10 xem nó có bằng n không
		return true ;     // nếu bằng n thì trả về giá trị true ( đúng là số hoàn hảo) cho hàm hoanhao(n)
	else                  //
	return false;        // ngược lại nếu biến tong khác n thì sẽ trả về false cho hàm hoanhao(n)
}

int main(){           // hàm main là nơi đầu tiên mà chương trình bắt đầu thực hiện
	int n;
	cout<<"nhap n: "; cin>>n;
	if(hoanhao(n) ) cout<<n<<" la so hoan hao";       // kiểu bool thì sẽ viết hơi khác tí; n trong hàm trong dòng này là tham số thực nhé
	else cout<<n<<" khong phai la so hoan hao";
	
}