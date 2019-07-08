/*cifmax3.cpp -- PbInfo -- ;

Cerinţa
Se citește de la tastatură un număr natural de 3 cifre. Să se afișeze pe ecran cea mai mare cifră a sa.

Date de intrare
Programul va citi de la tastatură un număr natural, de 3 cifre.

Date de ieşire
Programul va afişa pe ecran cea mai mare cifră a numărului citit.

 */

#include <iostream>
using namespace std;

int main(void)
{
    int n, a, b, c;
    cin >> n;
    
    a=n/100;
    b=n/10;
    c=n%10;
    // cout << a << " " << b%10 << " " << c;
    if ((a>b%10) && (a>c)) cout << a;
    else if ((b%10>a) && (b%10>c)) cout << b%10;
    else cout <<c;

    return 0;
}