#include <bits/stdc++.h>
using namespace std;

bool chiahet3va5(int n){
	if((n % 3 == 0) && (n % 5 == 0))
	return true;
	else return false;
}

int main(){
	int n, i, a[100];
	cout<<"nhap so phan tu mang: "; cin>>n;
	for(i = 0; i < n; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
	cout<<"cac so chia het cho 3 va 5 trong mang la: ";
	for(i = 0; i < n; i++){
		if(chiahet3va5(a[i])){
			cout<<a[i]<<"; ";
		}	
	}
	
}