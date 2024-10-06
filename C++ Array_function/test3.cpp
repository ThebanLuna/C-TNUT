#include <iostream>
#include <cmath>
using namespace std;

int scp(int n){                                   // hàm tên là scp, kiểu data int; tham số hình thức là n, kiểu data int 
	if(sqrt(n) == (int) sqrt(n)){                // scp là căn của nó là số nguyên 
		return 1;                               // nếu là điều kiện trong if đúng thì trả về 1 
	} else return 0;
}

int main(){
	int n;
	cout<<"nhap mot so: "; cin>>n;
	if(scp(n) == 1){
		cout<<n<<" la so chinh phuong";
	} 
	else cout<<n<<" khong phai la so chinh phuong";
}