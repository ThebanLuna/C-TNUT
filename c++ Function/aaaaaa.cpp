#include <iostream>
#include <cmath>
using namespace std;

void tamgiac(float a, float b, float c){
	float s, cv, dt;
	cv=a+b+c;
	s=cv/2;
	dt=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"chu vi tam giac la: "<<cv<<endl;
	cout<<"dien tich tam giac la: "<<dt;
}

int main(){
	float a, b, c;
	cout<<" nhap canh a: "; cin>>a;
	cout<<" nhap canh b: "; cin>>b;
	cout<<" nhap canh c: "; cin>>c;
	tamgiac(a,b,c);
}