#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float S = 0 ;
	int i, dem = 0, a[10];
    for ( i = 0; i < 10; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    for ( i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 1)
        {
            S += a[i];
            dem++;
        }
    }
    cout << "TBSL = " << S / dem;
}