#include <iostream>
#include <cmath>
using namespace std;

int scp(int n){                                   // hàm tên là scp, kiểu data int; tham số hình thức là n, kiểu data int 
	if(sqrt(n) == (int) sqrt(n)){                // scp là căn của nó là số nguyên 
		return 1;                               // nếu là điều kiện trong if đúng thì trả về 1 
	} else return 0;
}

int main(){
	int n, a[100], i;                           // a[100] là cấp cho mảng bộ nhớ để lưu 100 giá trị 
	cout<<"nhap so phan tu mang: "; cin>>n;
	for(i = 0; i < n; i++){                    // vòng lặp for này để nhập mảng từ a[0] đến a[n-1] và lưu vào bộ nhớ 
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
	cout<<"cac scp trong mang la: ";
	for(i = 0; i < n; i++){
		if(scp(a[i]) == 1){                 // duyệt mảng từ a[0] đến a[n-1], gán thằng a[i] vào tham số hình thức n . và gọi hàm để kiểm tra và in ra.....
			cout<<a[i]<<" ;";
		}
	}
}