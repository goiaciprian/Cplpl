// isoscel.cpp -- PbInfo -- 80;

#include <iostream>
using namespace std;

int main(void)
{
    double a, b, c;
    cin >> a >> b >> c;

    if ((a != 0) && (b != 0) && (c != 0) && (a + b > c) && (a + c > b) && (c + b > a))
    {

        if ((a == b && b != c) || (c == a && a != b) || (b == c && c != a))
        {
            cout << "Formeaza triunghi isoscel";
        }
        else
        {
            cout << "Nu formeaza triunghi isoscel";
        }
    }
    else
        cout << "Nu formeaza triunghi";

    return 0;
}