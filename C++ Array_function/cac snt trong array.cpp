#include <iostream>
#include <cmath>
using namespace std;

int snt(int n){
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			dem++;
		}
	}
		if(dem == 2){
		return 1;
		} else return 0; 
}

int main(){
	int n, a[100], i;
	cout<<"nhap so luong phan tu mang: "; cin>>n;
	for(i = 1; i <= n; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
	
	cout<<"cac snt trong mang la: ";
	for(i = 1; i <= n; i++){
		if(snt(a[i]) == 1){
			cout<<a[i]<<"; ";
		}
	}
}