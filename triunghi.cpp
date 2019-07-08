//triunghi.cpp -- PbInfo --

#include <iostream>
using namespace std;

int main(void)
{
    float a, b, c;
    cin >> a >> b >> c;

    if(a>0 && b>0 && c>0)
    {
        if((a+b>c) && (a+c>b) && (c+b>a)) cout << "da";
        else cout << "nu";
    }

    return 0;
}