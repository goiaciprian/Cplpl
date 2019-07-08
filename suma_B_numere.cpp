/*suma_B_numere.cpp -- PbInfo -- ;

Cerinţă
Se dau 2 numere naturale, a şi b. Să se determine dacă a se poate scrie că suma de b numere naturale consecutive.

Date de intrare
Programul citeşte de la tastatură cele 2 numere a şi b.

Date de ieşire
Programul va afişa pe ecran numărul mesajul DA dacă a se poate scrie că suma de b numere naturale, iar NU în caz contrar.

Restricţii şi precizări
1 ≤ a ≤ 100.000.000
1 ≤ b ≤ 25.000
Exemplu:
Intrare

12 3 
Ieşire

DA 
Explicaţie
12 = 3 + 4 + 5
 */

#include <iostream>
using namespace std;

int a, b;

int main()
{
    cin >> a >> b;

    if((a - ( b * (b-1)/2)) % b == 0) cout << "DA";
    else cout << "NU";

    return 0;
}
