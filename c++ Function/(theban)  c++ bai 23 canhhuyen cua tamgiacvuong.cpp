#include <iostream>
#include <cmath>
using namespace std;

float canh_huyen(float a, float b){     // khai báo hàm tên là canh_huyen() kiểu thực với hai tham số hình thức là a và b kiểu thực
	return sqrt((a*a)+(b*b));          // trả về kết quả (cho hàm canh_huyen()) như công thức đã cho khi người dùng nhập a, b vào
}

int main(){                                  // phải nhớ  hàm main được coi là điểm bắt đầu thực hiện của chương trình
	float a, b;
	cout<<"nhap canh ke cua tam giac vuong: "; cin>>a;
	cout<<"nhap canh doi cua tam giac vuong: "; cin>>b;
	cout<<"canh huyen cua tam giac vuong la: "<<canh_huyen(a, b);  // gọi hàm canh_huyen() và truyền tham số thực a, b vào hàm để hiện thị giá trị đã được trả về cho hàm ở dòng 6
}