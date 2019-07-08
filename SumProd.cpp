/*SumProd.cpp -- PbInfo -- ;

Cerința
Se dau trei numere naturale a b c. Să se determine cea mai mare
valoare care se poate obține prin înmulțirea a două dintre numere
și adunarea rezultatului cu al treilea.

Date de intrare
Programul citește de la tastatură numerele a b c.

Date de ieșire
Programul va afișa pe ecran numărul R, reprezentând maximul determinat.

Restricții și precizări
0 ≤ a,b,c ≤ 1000

Exemplu
Intrare

 3 2 4
Ieșire

14
Explicație
Cea mai mare valoare care se poate obține este 3 * 4 + 2 = 14.

 */

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, p1, p2, p3, last;
    cin >> a >> b >> c;

    p1 = a*b;
    p2 = a*c;
    p3 = b*c;

    if ((p1 > p2) && (p1>p3)) last = p1+c;
    else if ((p2>p1) && (p2>p3)) last = p2+b;
    else last = p3+a;

    cout << last;

    return 0;
}