/* aproapek.cpp -- PbInfo -- ;
   Cerinţa
Se dau două numere naturale nenule n și k. Să se determine multiplul lui k cel mai apropiat de n.

Date de intrare
Programul citește de la tastatură numerele n și k, în această ordine.

Date de ieşire
Programul afișează pe ecran numărul p, reprezentând multiplul lui k cel mai apropiat de n.

Restricţii şi precizări
1 ≤ k ≤ n ≤ 1.000.000
dacă există mai mulți multipli ai lui k la fel de apropiați de n, se va afișa cel mai mic.


*/
#include <iostream>
using namespace std;

int main(void)
{
    int n, k, i, m1, m2, dm1, dm2, m;

    cin >> n >> k;
    i = n/k;
    m1 = k*i;
    m2 = k*(i+1);

    if((m1 > n) && (m2 > n))
    {
        dm1 = m1 - n;
        dm2 = n - m2;
    } else {
        dm1 = n - m1;
        dm2 = m2 - n;
    }

    if (dm1 > dm2) m = m2;
    else m = m1;

    cout << m;

    return 0;
}