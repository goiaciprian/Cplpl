//timcp.cpp -- PbInfo -- ;
#include <iostream>
using namespace std;

/* Determinati ora peste x minute
*/

int main()
{
    int h1, m1, h2, m2=0, x, mi; // h - ora , m - minute;
    cin >> h1>> m1 >> x;
    mi = m1 + x;
    h2 = h1 + mi/60;
    m2 = mi % 60;
    cout << h2%24 << " " << m2;
    return 0;
}