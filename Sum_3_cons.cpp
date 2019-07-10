/*Sum_3_cons.cpp -- PbInfo -- 100;

Cerinţa
Se citește un număr natural n. Să se stabilească dacă n poate
fi scris ca sumă de trei numere naturale consecutive.

Date de intrare
Programul citește de la tastatură numărul n.

Date de ieşire
Programul afișează pe ecran trei numere naturale consecutive
a căror sumă este n, ordonate crescător și separate prin exact
un spațiu, dacă există sau mesajul NU EXISTA, dacă nu există trei
astfel de numere.

Restricţii şi precizări
1 ≤ n ≤ 1.000.000.000

Exemplu
Intrare

9
Ieșire

2 3 4
 */

#include <iostream>
using namespace std;

int a;

int main()
{
    cin >> a;

    if(a/3-1+a/3+a/3+1==a) cout << a/3-1 << " " << a/3 << " " << a/3+1;
    else cout << "NU EXISTA";

    return 0;
}