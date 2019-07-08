// sir7.cpp -- PbInfo --

/*
9 19 39 49 69 79 99 109 129 139 159...............
7 17 37 47 67 77 97 107 127 137 157...............
 */

#include <iostream>
using namespace std;

long long p, k, j;

int main(void)
{
    cin >> p >> k;
    j = k / 2;
    if (k % 2)
        cout << p + j * 30;
    else
        cout << p + j * 10 + (j - 1) * 20;
    return 0;
}