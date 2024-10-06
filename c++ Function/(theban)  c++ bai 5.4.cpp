#include <iostream>
#include <cmath>
using namespace std;

float Tong(int n, int x){
	float s=2001, tu;
	float mau=1;
	for(int i=1; i<=n; i++){
		tu = x+i;
		mau *= i;
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