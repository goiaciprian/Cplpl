//mediaArmonica.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long n = 0;
    long long float x, sumaFrac;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sumaFrac += 1 / x;
    }
    cout << fixed << setprecision(2) << n / sumaFrac;

    return 0;
}