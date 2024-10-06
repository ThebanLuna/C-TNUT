#include <iostream>
#include <cmath>
using namespace std;

float luythua(int x, int y){            // định nghĩa hàm tên là luythua() và truyền tham số hình thức x và y cho hàm 
	float lt=1;                         // biến lt ban đầu cho bằng 1 vì đúng với công thức và không làm sai giá trị vòng lặp ban đầu, cấm đượccho = 0 khi ta nhân dồn.
	for(int i=1; i<=y; i++){            // x^y tương đương với x*x*x*x*x*.... số lượng x sẽ bằng giá trị y
		lt*=x;                          // nên ta sẽ lặp đi lặp lại x *x*x*x đến đủ số lượng x mà thằng y cho. OK nhé
	}return lt;                         // cuối cùng thì trả về giá trị lt cho hàm luythua()
}
int main(){                 // phải nhớ  hàm main được coi là điểm bắt đầu thực hiện của chương trình
	int x, y;
	cout<<"nhap so nguyen x: "; cin>>x;
	cout<<"nhap so nguyen y: "; cin>>y;
	cout<<" luy thua cua "<<x<<"^"<<y<<" = "<<luythua(x, y); //gọi hàm và truyền tham số thực(đối số) x và y cho hàm 
}
