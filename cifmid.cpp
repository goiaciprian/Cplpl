/*cifmid.cpp -- PbInfo -- ;

Cerinţa
Se citește de la tastatură un număr natural de 3 cifre, distincte. Să se afișeze pe ecran cifra din mijloc, ca valoare.

Date de intrare
Programul va citi de la tastatură un număr natural de 3 cifre.

Date de ieşire
Programul va afişa pe ecran cifra care nu este nici minimă și nici maximă.

 */

#include <iostream>
using namespace std;

int main(void)
{
    int x, a, b, c;
    cin >> x;

    a=x/100;
    b=x/10;
    b%=10;
    c=x%10;
    
    if ( ( (a>b) && (a<c) ) || ( (a<b) && (a>c) ) ) cout << a;
    else if ( ( (b>a) && (b<c) ) || ( (b<a) && (b>c) )) cout << b;
    else cout << c;

    return 0;
}