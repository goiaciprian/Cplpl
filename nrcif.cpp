/*nrcic.cpp -- PbInfo -- ;

Cerinţa
Se citește de la tastatură un număr natural de maxim 3 cifre. Să se determine câte cifre are.

Date de intrare
Programul va citi de la tastatură un număr natural de 3 cifre.

Date de ieşire
Programul va afişa pe ecran numărul de cifre ale valorii citite.

 */

#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    if(n/100 > 0) cout << 3;
    else if (n/10 >0) cout << 2;
    else cout << 1;
    return 0;
}