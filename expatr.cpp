#include <iostream>
#include <cmath>
using namespace std;

double a, a2, a4, sum1, sumRad;

int main()
{
    cin >> a;

    a2 = a * a;
    a4 = a * a * a * a;

    sumRad = sqrt(a2+a4);
    sum1 = (3*(a2+a4))/(a2+a4+sumRad);

    cout << sum1 + sumRad;

    return 0;
}
