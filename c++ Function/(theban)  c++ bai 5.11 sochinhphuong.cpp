#include <iostream>
#include <cmath>
using namespace std;

bool chinhphuong(int n){              // kiểu bool chỉ trả về hai giá trị đúng -- sai; true -- false; định nghĩa hàm và truyền tham số hình thức n cho hàm 
	if(sqrt(n) == int (sqrt(n)) )    // scp là số mà căn của nó là số nguyên nên ta sẽ làm như dòng này là nhanh nhất; 
	return true;                     // nếu căn của n vẫn == số nguyên căn của n thì đúng là số chính phương. trả về true
	else 
	return false;                   // ngược lại line 8
}

int main(){
	int n;
	cout<<"nhap so nguyen n: "; cin>>n;
		if(chinhphuong(n)){                  // dòng này tao gọi hàm để cho nó làm việc nhé
		cout<<n<<" la so chinh phuong"<<endl;
	} else cout<<n<<" khong la so chinh phuong"<<endl;
	cout<<"cac so chinh phuong lon hon 1 nho hon "<<n<<" la: ";
	for(int i=2; i<n; i++){            // tao cho i chạy từ số 2 đến n-1, để xem số nào là số chính phương trong dãy i
		if(chinhphuong(i))             // gọi hàm và truyền tham số thực i cho hàm , nếu dòng 8
		cout<<i<<"; ";                 // thì hiển thị ra scp 
	}
}