//Timp1.cpp -- PbInfo -- ;
#include <iostream>
using namespace std;

int h1, m1, xH, yM, h2, m2, hTemp, mTemp;

int main()
{
    cin >> h1 >> m1 >> xH >> yM;

    mTemp = m1 + yM;
    hTemp = h1 + mTemp/60;
    h2 = xH + hTemp;
    m2 = mTemp% 60;
    cout << h2%24 << " " << m2;


    return 0;
}