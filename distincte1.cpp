/*distincte1.cpp -- PbInfo -- ;

Cerinţa
Se citesc de la tastatură trei numere naturale. Să se determine numărul de valori distincte.

Date de intrare
Programul va citi de la tastatură trei numere naturale.

Date de ieşire
Programul va afișa numărul de valori distincte care apar.

Restricţii şi precizări
Numerele citite sunt cuprinse între 0 și 1.000.000.000, inclusiv.

Exemplu
Intrare

100 41 100
Ieșire

2
 */

#include <iostream>
using namespace std;

int a, b, c;

int main()
{
    cin >> a >> b >> c;

    if ((a==b) && (a==c)) cout << 1;
    else if ((a==b) && (a!=c)) cout << 2;
    else if ((a!=b) && (a==c)) cout << 2;
    else if ((b==c) && (b!=a)) cout << 2;
    else cout << 3;

    return 0;
}