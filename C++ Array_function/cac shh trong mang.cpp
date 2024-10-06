#include <iostream>
#include <cmath>
using namespace std;

int shh(int n){
	int s = 0;
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			s += i;
		}
	}
	if(s == n){
		return 1;
	} else return 0;
}

int main(){
	int n, i, a[100];
	cout<<"nhap so phan tu mang: "; cin>>n;
	for(i = 0; i < n; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
	cout<<"cac so hoan hao trong mang la: ";
	for(i = 0; i < n; i++){
		if(shh(a[i]) == 1){
			cout<<a[i]<<"; ";
		}
	}
}