#include <iostream>
#include <cmath>
using namespace std;// khong hieu dau bai

int chan_le(int x){
	if(x%2==0) return 0;
	else return 1;
}

int main(){
	int x;
	cout<<"nhap x: "; cin>>x;
	if(chan_le(x)==0) cout<<x<<" la so chan";
	else cout<<x<<" la so le";
}