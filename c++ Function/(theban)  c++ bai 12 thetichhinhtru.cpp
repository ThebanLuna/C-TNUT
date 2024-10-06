#include<iostream>
#include<cmath>
using namespace std;
const float PI=3.14;                     //  hằng số tên là PI, kiểu thực, giá trị = 3.14

float V_hinh_tru(float r, float l){     // định nghĩa hàm tên là V_hinh_tru() kiểu thực với hai tham số hình thức là r và l kiểu thực
	return PI*r*r*l;                    // trả về kết quả 
}

int main(){                          // phải nhớ  hàm main được coi là điểm bắt đầu thực hiện của chương trình
	float r, l;
	cout<<"nhap ban kinh hinh tru "; cin>>r;
	cout<<"nhap chieu dai hinh tru "; cin>>l;
	cout<<"the tich hinh tru V = "<<V_hinh_tru(r, l);  // gọi hàm và truyền tham số thực r và l cho hàm 
}