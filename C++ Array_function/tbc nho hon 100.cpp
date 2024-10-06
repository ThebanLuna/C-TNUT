#include <bits/stdc++.h>
using namespace std;

bool nhohon100(int n){
	if(n < 100)          
	return true;                   
	else return false;			 
}									

int main(){
	int n, i, a[100];
	cout<<"nhap so phan tu mang: "; cin>>n;
	for(i = 0; i < n; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
	float s = 0;
	int dem = 0;
	cout<<"tbc cac so nho hon 100 la: ";
	for(i = 0; i < n; i++){
		if(nhohon100(a[i]) ){
			s += a[i];
			dem++;
		}	
	}
	cout<<s/dem;
}