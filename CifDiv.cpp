/*CifDiv.cpp -- PbInfo -- 100 pct;
Cerinţa
Se citesc două numere naturale n m cu exact trei cifre fiecare. Să se afle câte cifre din n divid pe m.

Date de intrare
Programul citește de la tastatură numerele n m.

Date de ieşire
Programul afișează pe ecran valoarea cerută.

Restricţii şi precizări
100 ≤ n,m ≤ 999

Exemplu
Intrare

273 600
Ieșire

2
Explicație
Cifrele 2 și 3 din 273 îl divid pe 600.
 */

#include <iostream>
using namespace std;

int n, m, s, z, u, total;

int main()
{
    cin >> n >> m;

    s = n/100;
    z = (n/10)%10;
    u = n%10;

    if (m%s==0) total++;
    if (z!=0 && m%z==0) total++;
    if (m%u==0) total++;

    cout << total;

    return 0;
}