#include <iostream>
#include <cmath>
using namespace std;

int tbcchan(int n, int a[]){
	int s = 0;
	for(int i = 0; i < n; i++){
		s += a[i];
	} return s;
}

int main(){
	int a[100], n, i;
	float s = 0.0;
	cout<<"nhap vao so phan tu mang: "; cin>>n;
	for(i = 0; i < n; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
  	cout<<"tbc cua cac phan tu trong mang la: "<< tbcchan(n, a)/n;
	return 0; 
}