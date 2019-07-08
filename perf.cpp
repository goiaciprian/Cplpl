//perf.cpp -- PbInfo --

#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int x;
    cin >> x;

    if ((int)sqrt(x)==(float)sqrt(x)) cout << "DA";
    else cout << "NU";

    return 0;
}