//buletin.cpp
#include <iostream>
using namespace std;


int main()
{
    long long n, a, l, z;
    cin >> n;

    n=n/1000000;
    z=n%100;
    n=n/100;
    l=n%100;
    n=n/100;
    a=n%100;
    n=n/100;

    if (a<10) cout << 0;
    cout << a << " ";
    if (l<10) cout << 0;
    cout << l << " ";
    if (z<10) cout << 0;
    cout << z;

    return 0;
}