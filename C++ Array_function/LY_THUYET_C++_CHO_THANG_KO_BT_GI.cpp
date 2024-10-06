#include <iostream>	// iostream là thư viện input, output của C++ (đầu vào, ra)
#include <cmath>	// cmath là thư viện toán, dùng để gọi các hàm pow(), sqrt,....
using namespace std; // namespace là không gian tên, std là standard (tiêu chuẩn)
					// using namespace std là dùng không gian tên theo tiêu chuẩn std.
					
// dòng 7; 8; 9  khai báo biến toàn cục.
#define G 9.8  // define là định nghĩa 
const float PI = 3.14; // const là hằng số
int m = 8;

// dòng 12 là ta định nghĩa hàm 
int hamtong(x, y){	// x và y là tham số hình thức, đổi thành a b c d e f... cũng được;
	int x, y;
	return x + y;	// return là trả về;
}


// dòng 19 đến dòng 26 là hàm main, nơi chương trình bắt đầu chạy.
int main(){
	// dòng xxx khai báo biến cục bộ i, a, b. 
	int i, a, b; 
	a = 5;
	b = 6;
	             				//đối số  a; b hay còn gọi là tham số thực sự
	cout<<"tong cua a va b la: "<<hamtong(a, b); // đây là lời gọi hàm: hamtong(a, b); tham số thực sự là a, b;
}

note: đây là 1 phần lý thuyết rất cơ bản phải nhớ.