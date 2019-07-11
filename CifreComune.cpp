/*CifreComune.cpp -- PbInfo -- 100;

Cerinţa
Se citesc două numere naturale n m cu exact două cifre fiecare. Să se decidă dacă cele două numere au cifre comune.

Date de intrare
Programul citește de la tastatură numerele n m.

Date de ieşire
Programul afișează pe ecran mesajul da dacă cele două numere au cifre comune, respectiv nu în caz contrar.

Restricţii şi precizări
10 ≤ n,m ≤ 99

Exemplu
Intrare

27 62
Ieșire

da
 */

#include <iostream>
using namespace std;

int m, n, a, b;

int main()
{
    cin >> m >> n;

    a = m/10;
    b = m%10;
    m = n/10;
    n %= 10;

    if((a==m) || (a==n)) {cout << "da";return 0;}
    else if((b==m) || (b==n)) {cout << "da";return 0;}
    else cout << "nu";

    return 0;
}