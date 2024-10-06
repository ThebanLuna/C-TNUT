#include <iostream>
#include <cmath>
using namespace std; //bài này éo bt làm, phải học thuộc công thức lập trình

int ucln(int a, int b){            //định nghĩa hàm và truyền tham số hình thức cho hàm 
	if(a>0 && b>0){               // nếu a>0 && b>0 thì thực thi các câu lệnh trong {}
		while(a != b){           // lặp cho đến khi nào a == b thì dừng lại
			if(a>b){             // nếu a > b thì sẽ thực thi dòng 11,  a-=b
				a -= b;
			}
			else{                // các thường hợp còn lại thì b -= a
				b -= a;
			}
		} return a;             // đoạn này return a hay b đều đc vì sau tất cả (vòng lặp cuối) thì chắc chắn a=b (while a != b)
	}return 0;                  // nếu a<=0 hoặc b<=0 thì trả về giá trị 0. ý nghĩa là không hợp lệ 
}

int bcnn(int a, int b){          // phải nhớ  hàm main được coi là điểm bắt đầu thực hiện của chương trình
	int tich = a*b;
	return tich/ucln(a,b);      
}

int main(){
	int a, b;
	cout<<" nhap so nguyen duong a va b "; cin>>a>>b;
	cout<<"bcnn la: "<<bcnn(a,b);            // gọi hàm và truyền tham số thực a và b cho hàm 
}