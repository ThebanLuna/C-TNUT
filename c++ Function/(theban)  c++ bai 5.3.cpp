#include <iostream>
#include <cmath>
using namespace std;

float Tong(int n){
	float s=0, tu;
	float mau;
	for(int i=1; i<=n; i++){
		tu = pow(-1, i+1);
		mau = 2*i - 1;
		s += (tu/mau);
	} return s;
}

int main(){
	int n;
	cout<<"nhap so nguyen duong n: "; cin>>n;
	cout<<"tong s la: "<<Tong(n);
	return 0;
}