//calculator.cpp -- PbInfo --

#include <iostream>
using namespace std;

int main(void)
{
    char operatie;
    int a, b;
    cin >> a >> b >> operatie;

    switch (operatie)
    {
    case '+':
        cout << a + b;
        break;

    case '-':
        if(a>b) cout << a - b;
        else cout << b-a;
        break;

    case '*':
        cout << a * b;
        break;

    case '/':
        if(a>b) cout << a / b;
        else cout << b / a;

    default:
        break;
    }

    return 0;
}