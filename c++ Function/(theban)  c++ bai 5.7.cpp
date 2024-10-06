#include <iostream>
#include <cmath>
using namespace std;

float Tong(int n, int x){
	float s = 0;
	for(int i=1; i<=n; i++){
		s += sqrt(x + s);
	} return s;
}

int main(){
	int n, x;
	cout<<" nhap so nguyen n: "; cin>>n;
	cout<<" nhap so nguyen x: "; cin>>x;
	cout<<"tong s = "<<Tong(n, x);
}