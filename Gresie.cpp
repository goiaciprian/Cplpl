/*Gresie.cpp -- PbInfo -- 100 pct;

Cerinţa
Se consideră o încăpere de formă dreptunghiulară cu dimensiunile a b.
Încăperea trebuie pavată cu gresie de formă pătratică, de dimensiune d.
Știind că o bucată de gresie se poate folosi întreagă sau tăiată, să se
determine numărul minim de bucăți de gresie sunt necesare pentru pavarea
încăperii.

Date de intrare
Programul citește de la tastatură numerele naturale a b d.

Date de ieşire
Programul afișează pe ecran numărul minim de bucăți de gresie necesare
pentru pavarea încăperii.

Restricţii şi precizări
1 ≤ d ≤ a,b ≤ 32000
din motive estetice, pentru fiecare piesă de gresie tăiată se folosește
o bucată întreagă.

Exemplu
Intrare

12 17 3 
Ieșire

24
*/

#include <iostream>
using namespace std;

int a, b, d, L=0, l=0;

int main()
{
    cin >> a >> b >> d;

    a%d==0 ? L=a/d : L = a/d+1;
    b%d==0 ? l=b/d : l = b/d+1;

    cout << l*L;

    return 0;
}
