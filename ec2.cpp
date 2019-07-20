/*ec2.cpp -- PbInfo -- 100;
Cerința
Se citesc de la tastatura 3 valori reale a, b , c. Rezolvați ecuația de gradul doi cu a*x2+b*x+c=0

Date de intrare
Programul citește de la tastatură numerele a b c .

Date de ieșire
Programul va afișa pe ecran:

mesajul Nu are solutii reale, dacă ecuatia nu are soluții reale
mesajul Radacina dubla X, dacă ecuația are o singură soluție, unde X este soluția determinată
X1 X2, dacă ecuația are două soluții reale distincte, unde X1 și X2 sunt cele două soluții, X1 > X2
Restricții și precizări
a b c sunt numere reale, a≠0.
numerele afișate vor avea două zecimale
Exemplu 1:
Intrare

1.25 0 -1.25
Ieșire

1.00 -1.00
Exemplu 2:
Intrare

1 -2 1
Ieșire

Radacina dubla 1.00
Exemplu 3:
Intrare

2 1 2
Ieșire

Nu are solutii reale
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

long double a, b, c, delta, x1, x2;

int main()
{
    cin >> a >> b >> c;
    delta = b*b - 4*a*c;

    cout << fixed;
    cout << setprecision(2);

    if(delta>0)
    {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        if (x1 > x2) cout << x1 << ' ' << x2;
        else cout << x2 << ' ' << x1;
    }
    else if (delta == 0)
    {
        x1 = -b/2*a;
        cout << "Radacina dubla " << x1;
    }
    else cout << "Nu are solutii reale";

    return 0;
}