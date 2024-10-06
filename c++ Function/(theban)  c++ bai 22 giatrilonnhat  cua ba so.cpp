#include <iostream>
#include <cmath>
using namespace std;

int max(int a, int b, int c){        //định nghĩa một hàm tên là max() kiểu int chưá tham số hình thức là a, b, c kiểu int
	if(a>b&&a>c) return a;           // nếu a>=b và a>=c thì trả về giá trị lớn nhất là a cho hàm max(). 
	else if( b>a&&b>c) return b;
	else if( c>a&&c>b) return c;
}

/* các mày nên làm cách dưới này: 
int max(int a, int b, int c){
    int Max = a;    khai báo biến Max kiểu int và gán giá trị của a cho Max; dấu = là gán giá trị bên phải dấu = cho bên trái dấu = (gán a cho Max), dấu == là dấu bằng, hai dấu đó khác nhau nhé;
    if(Max < b) Max = b;          nếu Max < b thì gán b cho Max 
    else if(Max < c) Max = c;     nếu Max < c thì gán c cho Max
    return Max;                   sau cùng thì Max chỉ mang một giá trị lớn nhất và trả về giá trị đó cho hàm max()
}  */

int main(){
	int a, b, c;     // khai báo ba biến kiểu nguyên 
	cout<<" nhap ba gia tri a; b; c: "<<endl; cin>>a>>b>>c;     // endl là để xuống dòng mới. có thể dùng /n cũng được ( vd: cout<<" nhap ba gia tri a; b; c: /n";)
	cout<<" gia tri lon nhat trong ba so: "<<a<<"; "<<b<<"; "<<c<<" la: "<<max(a, b, c);    // gọi hàm max() để in ra màn hình một trong ba giá trị lớn nhất được trả về ở dòng 6 or 7 or 8
}