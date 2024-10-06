#include <iostream>
#include <cmath>
using namespace std;

int lonthu2(int n, int a[]){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++)
		if(a[i] < a[j]){              // sắp xếp mảng theo thứ tự giảm dần giá trị  
			swap(a[i], a[j]);        //swap để đổi chỗ cho nhau, dùng thư viện <iostream> 
		} 
	}
	int max = a[0];
	for(int i = 1; i < n; i++){
		if(max < a[i]){
			max = a[i];
			break;				// vòng for dòng 6 làm cho a[0] là GTLN rồi; 
		}						// nên ta chỉ cần duyệt mảng cho đến khi điều kiện đúng 1 lần, để ý i = 1;
	} return max;				// rồi dùng break để thoát khỏi vòng lặp và lưu giá trị lớn thứ 2 của mảng cho max;
}								// lý do duyệt mảng theo cách này là vì 1 mảng có nhiều giá trị lớn nhất bằng nhau 

int main(){
	int n, i, a[100];
	cout<<"nhap so luong phan tu mang: "; cin>>n;
	for(i = 0; i < n; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
	cout<<"so lon thu hai trong mang la: "<<lonthu2(n, a);
}

/*       CÁCH KHÁC 
khai báo <limits.h> để dùng INT_MIN 
int lonthu2(int n, int a[]) {
    int max1 = a[0]; // Lưu giá trị lớn nhất
    int max2 = INT_MIN; // Lưu giá trị lớn thứ hai

    for (int i = 1; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2 && a[i] < max1) {
            max2 = a[i];
        }
    }

    return max2;
}
*/