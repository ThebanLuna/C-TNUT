#include <iostream>
#include <cmath>
using namespace std;

int sochan(int n, int a[]){
	int s = 0, dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			s += a[i];
			dem++;
		}
	}return s/dem;
}

int main(){
	int n, a[100], i;
	cout<<"nhap n: "; cin>>n;
	for(i = 0; i < n; i++){
		cout<<"a["<<i<<"] = "; cin>> a[i];
	}
	cout<<"tong s = "<<sochan(n, a);
}