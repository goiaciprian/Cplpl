//minicalc.cpp -- PbInfo --

/*

Cerinţa
Se citesc de la tastatură 3 numere naturale, a, b, c. Să se realizeze cu a și b operația codificată prin numărul c.

Date de intrare
Programul va citi de la tastatură 3 numere naturale.

Date de ieşire
Dacă al treilea număr este 1 programul va afișa pe ecran suma primelor două numere.

Dacă al treilea număr este 2 programul va afișa pe ecran diferența dintre primul număr și al doilea.

Dacă al treilea număr este 3 programul va afișa pe ecran produsul primelor două numere.

Dacă al treilea număr este 4 programul va afișa pe ecran câtul împărțirii dintre primul număr și al doilea.

Dacă al treilea număr este 5 programul va afișa pe ecran restul împărțirii dintre primul număr și al doilea.

Restricţii şi precizări
Primele două numere sunt naturale, mai mici decât 32676.
Primul număr este mai mare sau egal cu al doilea.
Al doilea număr este nenul.
Al treilea număr este din mulțimea {1,2,3,4,5}.

 */

#include <iostream>
using namespace std;

int main(void)
{

    int a, b, c;

    cin >> a >> b >>c;

    if((a<32676) && (b<32676) && (a >= b) && (b != 0))
    {
        switch (c)
        {
        case 1:
            cout << a+b;
            break;
        case 2:
            cout << a-b;
            break;
        case 3:
            cout << a*b;
            break;
        case 4:
            cout << a/b;
            break;
        case 5:
            cout << a%b;
            break;
        }
        return 0;
    }
    else return 0;
}