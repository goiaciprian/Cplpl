//trapez.cpp -- PbInfo --  Raspuns asteptat 6.08, output 6.009 pentru 6 2 5;
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float b, B, l, c, h, d, f;
    cin >> B >> b >> l;

    c = (B-b)/2;
    h = sqrt((l*l) - (c*c));
    f = b + c;
    d = sqrt(h*h+f*f);

    cout << d;


    return 0;
}