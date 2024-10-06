#include <iostream>
#include <cmath>
using namespace std;

int luythua(int x, int y){
    float lt=1;
    for(int i=1; i<=y; i++){
        lt*=x;
    }return lt;
}

int main(){
    int x, y;
    cout<<"nhap x: "; cin>>x;
    cout<<"nhap y: "; cin>>y;
    cout<<"luy thua "<<x<<" mu "<<y<<" la "<<luythua(x, y);
}