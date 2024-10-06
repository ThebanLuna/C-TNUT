#include <iostream>
#include<cmath>
using namespace std;
const float PI=3.14;               // khai báo hằng số bên ngoài hàm là khai báo toàn cục nhé 

float r_hinh_tron(float cv){     // định nghĩa hàm, truyền tham số hình thức cv cho hàm 
	return cv/(2*PI);           // trả về kết quả cho hàm 
}

float S_hinh_tron(float cv){
	return PI*pow(r_hinh_tron(cv),2);
}

int main(){                        // phải nhớ  hàm main được coi là điểm bắt đầu thực hiện của chương trình
	float cv;                      
	cout<<"nhap chu vi hinh tron = "; cin>>cv;
	cout<<"ban kinh hinh tron la: "<<r_hinh_tron(cv)<<endl;     // gọi hàm và truyền tham số thực cv cho hàm 
	cout<<"dien tich hinh tron la: "<<S_hinh_tron(cv);          //gọi hàm và truyền tham số thực cv cho hàm      
}