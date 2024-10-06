#include<iostream>
#include<cmath>
using namespace std;
                                        
float cong(float a, float b){
	return a+b;
}

float tru(float a, float b){
	return a-b;
}

float nhan(float a, float b){
	return a*b;
}

float chia(float a, float b){
	if(b==0){            // nếu b == 0 thì trả về kết quả bằng 0 cho hàm chia()
		return 0;
	} else               // nếu b khác 0 thì trả về kết quả của a/b
	return a/b;
}

int main(){                                      // phải nhớ  hàm main được coi là điểm bắt đầu thực hiện của chương trình
	float a, b;
	cout<<"nhap a: "; cin>>a;
	cout<<"nhap b: "; cin>>b;
	cout<<a<<" + "<<b<<" = "<<cong(a,b)<<endl;      // dòng 28- 31: gọi hàm và truyền tham số thực cho hàm (tham số thực còn được gọi là đối số)
	cout<<a<<" - "<<b<<" = "<<tru(a,b)<<endl;
	cout<<a<<" * "<<b<<" = "<<nhan(a,b)<<endl;
	cout<<a<<" / "<<b<<" = "<<chia(a,b)<<endl;
	
}