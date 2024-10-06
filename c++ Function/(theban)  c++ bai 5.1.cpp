#include <iostream>
#include <cmath>
using namespace std;

float Tong(int n){                   // định nghĩa hàm tên là Tong() kiểu thuực với tham số hình thức là n kiểu nguyên
	float s=0, tu;                  // ban đầu s được gán = 0; tử không được cộng dồn nên không cần gán giá trị ban đầu
	float mau=1;                   // mẫu ban đầu gán = 1, vì mẫu được cộng dồn
	for(int i=1; i<=n; i++){      // i chạy từ 1 đến n
		tu = pow(-1, i+1);       // pow là lũy thừa; tu không được cộng dồn nên chỉ có dấu bằng
		mau += pow(i, 2);       //  mẫu được cồng dồn nên có dấu +=
		s += (tu/mau);         //  s được cộng dồn nên có dấu +=
	} return s;               // sau tất cả thì lệnh return sẽ trả về kết quả của tổng s và GÁN s cho hàm Tong(n)
}

int main(){                // hàm main là nơi mà chương trình thực hiện đầu tiên. bắt buộc phải có nhé 
	int n;
	cout<<"nhap so nguyen duong n: "; cin>>n;    
	cout<<"tong s la: "<<Tong(n);      // gọi hàm và truyền tham số thực n cho hàm 
	return 0;
}