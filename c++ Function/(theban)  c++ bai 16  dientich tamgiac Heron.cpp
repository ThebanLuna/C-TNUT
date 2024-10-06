#include <iostream>
#include <cmath>
using namespace std;

float S_tam_giac(float a, float b, float c){      // định nghĩa hàm tên là S_tam_giac(), hàm này kiểu thực, với ba tham số hình thức a, b, c đều kiểu thực 
	float p = (a+b+c)/2;                          // 
	return sqrt(p*(p-a)*(p-b)*(p-c));              // trả về thẳng kết quả theo công thức luôn. trả về cho hàm S_tam_giac()
}

int main(){                           // phải nhớ  hàm main được coi là điểm bắt đầu thực hiện của chương trình
	float a, b, c;                    // khai báo ba biến a, b, c kiểu nguyên
	cout<<"nhap canh a cua tam giac ";cin>>a;
	cout<<"nhap canh b cua tam giac ";cin>>b;
	cout<<"nhap canh c cua tam giac ";cin>>c;
	cout<<"dien tich tam giac co chieu dai ba canh "<<a<<"; "<<b<<"; "<<c<<" = "<<S_tam_giac(a, b, c);  //gọi hàm và truyền tham số thực vào hàm. a, b, c ở trong hàm ở dòng này mới là tham số thực nè.
}