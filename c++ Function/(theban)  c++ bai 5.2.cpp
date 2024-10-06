#include <iostream>
#include <cmath>
using namespace std;

float Tong(int n){                   // khai báo hàm Tong, kiểu float (thực), với tham số hình thức là n thuộc kiểu int (nguyên) 
	float s=0, tu;                  // s ban đầu bằng 0; tử không được cộng dồn nên không cần gán giá trị ban đầu 
	float gt=1;                    // (vd: giai thừa của 5 = 1*2*3*4*5)  gán giá trị của giai thừa đầu tiên bằng 1 vì nếu gán = 0 thì nhân với cái gì cũng bằng 0 (ở dòng 10)
	for(int i=1; i<=n; i++){      //  i chạy từ 1 đến n, sau mỗi lần lặp thì i tăng lên 1 đơn vị (i++)
		tu = pow(-2, i);         //  
		gt *= i;                // công thức giai thừa bắt buộc phải nhớ: gt *= i (trong trường hợp 1! 2! 3! 4!....) nhân dồn nên sẽ có *=
		s += (tu/gt);          // 
	} return s;               // trả về giá trị s và gán s cho hàm Tong(n)
}

int main(){                                      // main là nơi mà chương tình thực hiện đầu tiên. bắt buộc phải có
	int n;                                      // nhớ khai báo biến 
	cout<<"nhap so nguyen duong n: "; cin>>n;
	cout<<"tong s la: "<<Tong(n);             // gọi hàm Tong(n) truyền tham số thực n cho hàm 
	return 0;
}