#include <iostream>
#include <cmath>
using namespace std;

float pi(){
	return 2*asin(1.0);  // trả về luôn kết quả ứng tương ứng với công thức đã cho 
}

int main(){
	cout<<"gia tri cua pi = "<<pi();
}