#include <iostream>
#include <cmath>
using namespace std;

float Tong(int n, int x){
	float s=0, tu = 0;
	float mau;
	for(int i=1; i<=n; i++){
		tu += i*i;
		mau = x + (i + 1);
		s += (tu/mau);
	} return s;
}

int main(){
	int n, x;
	cout<<"nhap so nguyen duong n: "; cin>>n;
	cout<<"nhap so nguyen duong x: "; cin>>x;
	cout<<"tong s la: "<<Tong(n,x);
	return 0;
}