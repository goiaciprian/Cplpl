//paznici1.cpp
#include <iostream>
using namespace std;

int main()
{
    int n, m, pm, pn;
    cin >> m >> n;

    if(m % 2 == 0) pm = m/2;
    else pm = m/2 + 1;

    if(n % 2==0) pn = n/2;
    else pn = n/2 + 1;

    cout << pm * pn;

    return 0;
}