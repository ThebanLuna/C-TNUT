#include <bits/stdc++.h>
using namespace std;

int nhohon100(int n){
	if(n < 100)
		return 1;
		else return 0;
}

int main(){
	int i, n, a[40], j, b[40];
	cout<<"nhap so luong phan tu mang: "; cin>>n;
	for(i = 0; i < n; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
	cout<<"cac phan tu co gia tri nho hon 100 la: ";
	for(i = 0; i < n; i++){
		if(nhohon100(a[i]) == 1){
			cout<<a[i]<<"; ";
		}
	}
	
	cout<<"cac so chan trong mang theo thu tu giam dan la: ";
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			b[dem] = a[i];
			dem++;
		}
	}
	for(int i = 0; i < dem - 1; i++){
		for(int j = i + 1; j < dem; j++)
			if(b[i] < b[j])
			swap(b[i], b[j]);
		}
	}
	for(int i = 0; i < dem; i++){
		cout<<b[i]<<"; ";
	}
}