//CheckColor.cpp -- PbInfo -- 70pct;

#include <iostream>
using namespace std;

int main(void)
{
    int r, g, b;
    cin>> r >> g >> b;

    if ((r>255) || (g>255) || (b>2500) || (r<0) || (g<0) || (b<0))
    {
        cout << "NU E CULOARE";
        return 0;
    }

    if( ((0<r-g) && (r-g<10)) || ((0<r-b) && (r-b<10)) || ((0<g-r) && (g-r<10)) || ((0<g-b) && (g-b<10)) || ((0<b-r) && (b-r<10)) || ((0<b-g) && (b-g<10))) cout << "GRI";
    else cout << "CULOARE";

    return 0;
}