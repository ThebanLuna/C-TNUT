#include <iostream>
#include <cmath>
using namespace std;

float Tong(int n, int a){
	float s=2000, tu;
	float gt=1;
	for(int i=1; i<=n; i++){
		tu = pow(2, i);
		gt *= i;
		s += (tu/(a+gt));
	} return s;
}

int main(){
	int n, a;
	cout<<"nhap so nguyen duong n: "; cin>>n;
	cout<<"nhap so nguyen duong a: "; cin>>a;
	cout<<"tong s la: "<<Tong(n,a);
	return 0;
}