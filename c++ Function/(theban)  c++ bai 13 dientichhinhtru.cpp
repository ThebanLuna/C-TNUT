#include<iostream>
#include<cmath>
using namespace std;
const float PI=3.14;                       // hằng số tên là PI, kiểu thực, có  giá trị == 3.14 

float S_hinh_tru(float r, float l){      // định nghĩa hàm S_hinh_tru() kiểu thực với hai tham số hình thức là r và l kiểu thực
	return 2*PI*r*l;                    // trả về kết quả cho hàm S_hinh _tru()
}

int main(){                           // phải nhớ  hàm main được coi là điểm bắt đầu thực hiện của chương trình
	float r, l;
	cout<<"nhap ban kinh hinh tru "; cin>>r;
	cout<<"nhap chieu dai hinh tru "; cin>>l;
	cout<<"dien tich hinh tru S = "<<S_hinh_tru(r, l);  //gọi hàm và truyền tham số thực r, l  vào hàm 
}