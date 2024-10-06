#include <iostream>
#include <cmath>
using namespace std;

bool kt_arm(int n){
	int s = 0, tam = n, du;
	while(tam > 0){
		du = tam % 10;
		s += du*du*du;
		tam /= 10;
	}
	if (s == n) return true;
	else return false;
}

int main(){
	int n, a[100], i, m;
	cout<<"nhap so phan tu mang: "; cin>>m;
	for(i = 0; i < m; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
	cout<<"gia tri armstrong trong mang la: ";
	for(i = 0; i < m; i++){	
		if(kt_arm(a[i])) cout<<a[i]<<"; ";
	}
	
}                    