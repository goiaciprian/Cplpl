/*cifrezecimale.cpp -- PbInfo -- 100;

Cerința
Se consideră șirul de cifre zecimale obținut prin scrierea consecutivă a numerelor naturale de la 10 la 99: 101112131415...9596979899.

Pentru un k dat, să se afișeze cifra ce apare în acest șir pe poziția k.

Date de intrare
Programul citește de la tastatură numărul k.

Date de ieșire
Programul va afișa pe ecran valoarea C, reprezentând cifra situată pe poziția k în șir de mai sus.

Restricții și precizări
1 ≤ k ≤ 180

Exemplu
Intrare

5
Ieșire

1
Explicație
A cincea cifră din șir este 1.
 */

#include <iostream>
using namespace std;

int n, linie, C, rest;

int main(void)
{
    cin >> n;
    linie = n/20 + 1;

    if (n%2) C=linie;
    else
    {
        rest = n%20;
        if (rest==0) C=9;
        else C=(n%20)/2-1;
    }
    cout << C;
    return 0;
}