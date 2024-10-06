#include <bits/stdc++.h>
using namespace std;

bool nhohon100chiahet3(int n){
	if((n < 100) && (n % 3 == 0))	// nếu nhỏ hơn 100 và chia hết cho số khác thì ae thay số khác vào 
	return true;                    // lớn hơn 100 thì thay cái này >
	else return false;				// không chia hết thì thay cái dấu != vào 
}									// nhớ PHẢI ĐỔI TÊN HÀM THEO ĐẦU BÀI

int main(){
	int n, i, a[100];
	cout<<"nhap so phan tu mang: "; cin>>n;
	for(i = 0; i < n; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
	cout<<"cac so chia het cho 3 va 5 trong mang la: ";
	for(i = 0; i < n; i++){
		if(nhohon100chiahet3(a[i])){
			cout<<a[i]<<"; ";
		}	
	}
	
}