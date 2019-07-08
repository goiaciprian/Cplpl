//melc.cpp
#include <iostream>
using namespace std;

float v, T;
int t, d;

int main()
{
    cin >> v >> d;
    v = v * 1000 / 60;
    T = 1.0 * v / d;
    t = (int)T;
    if (T > t)
        ++t;
    cout << t;

    return 0;
}