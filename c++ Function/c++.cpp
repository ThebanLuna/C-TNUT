//theban k225520114084
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long lt=1, x;
	int y;
	cin>>x>>y;
	
	for(int i=1; i<=y; i++){
		lt*=x;
	} cout<<lt;
}