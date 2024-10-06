#include <iostream>
#include <cmath>
using namespace std;

float giaithua(int n){
	float s = 1;
	for(int i=1; i<=n; i++){
		s *= i;
	} return s;
}

int main(){
	int n;
	cout<<"nhap n: "; cin>>n;
	cout<<" giai thua cua "<<n<<" = "<< giaithua(n);
}