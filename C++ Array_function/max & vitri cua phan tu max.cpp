#include <iostream>
#include <cmath>
using namespace std;

void elementMax(int n, int a[], int &max, int &vitri){
	max = a[0];
	vitri = 0;
	for(int i = 1; i < n; i++){
		if(max < a[i]){
			max = a[i];
			vitri = i;
		}
	}
}

int main(){
	int n, a[100], i, max, vitri;
	cout<<"nhap so phan tu mang: "; cin>>n;
	for(i = 0; i < n; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
	elementMax(n, a, max, vitri);
	cout<<"gia tri max la: "<<max;
	cout<<"\nvi tri cua gia tri max la: a["<<vitri<<"]";
}