//luna.cpp
#include <iostream>
using namespace std;

int x;

int main()
{
    cin >> x;

    switch (x)
    {
    case 1:
        cout << "ianuarie";
        break;
    
    case 2:
        cout << "februarie";
        break;

    case 3:
        cout << "martie";
        break;

    case 4:
        cout << "aprilie";
        break;

    case 5:
        cout << "mai";
        break;

    case 6:
        cout << "iunie";
        break;

    case 7:
        cout << "iulie";
        break;

    case 8:
        cout << "august";
        break;
    
    case 9:
        cout << "septembrie";
        break;

    case 10:
        cout << "octombrie";
        break;

    case 11:
        cout << "noiembrie";
        break;

    case 12:
        cout << "decembrie";
        break;

    default:
        break;
    }

    return 0;
}