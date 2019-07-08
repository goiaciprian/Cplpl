//dreptunghi.cpp -- PbInfo -- ;

#include <iostream>
#include <cmath>
using namespace std;

long long a, b, P, A, D;

int main(void)
{
    cin >> a >> b;

    if ((a<0) || (b<0)) return 0;

    P = 2*(a+b);
    A = a * b;
    D = pow( sqrt(a*a + b*b),2);

    cout << P << " " << A << " " << D;

    return 0;
}