#include <iostream>
#include <cmath>
#include <limits.h>                       //khai báo thư viện này để dùng INT_MIN hoặc INT_MAX nha ae 
using namespace std;

void elementMax(int n, int a[], int &max, int &vitri){      // có dấu "&" là tham chiếu nhé ae.
	max = INT_MIN;                           // gán INT_MIN cho max là cách nhanh nhất để tìm số lớn nhất 
	vitri = -1;								// gán số bao nhiêu cũng được, nhưng phải gán số âm nhé.
	for(int i = 0; i < n; i++){
			if((max < a[i]) && (a[i] % 2 == 0)){
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
	
	elementMax(n, a, max, vitri);     // gọi hàm nè 
	if(vitri != -1){                 // nếu điều kiện này đúng thì thực hiện các lệnh bên trong if, nếu sai thì thực hiện lệnh bên trong else 
		cout<<"gia tri chan max la: "<<max<<"\nvi tri cua element co gia tri chan max la: a["<<vitri<<"]";
	} else cout<<"nhap so chan vao nhé cưng "; 
	return 0;
}