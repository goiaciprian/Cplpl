//disc.cpp -- PbInfo -- numai 20p pe site;
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double pin = (atan(1)) * 4;
    double raza;
    cin >> raza;

    cout << setprecision(15) << pin * (raza * raza) << " ";
    cout << setprecision(15) << 2 * pin * raza;

    return 0;
}