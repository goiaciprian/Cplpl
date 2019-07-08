/*luniramase.cpp -- PbInfo -- ;

Cerința
Se citește de la tastatură un număr natural ce reprezintă 
o lună a anului (dacă citim 3 ne referim la a treia lună, deci Martie). 
Programul va afișa (câte unul pe rând) numele lunilor rămase în acel an 
după cea citită. Se garantează că se introduce de la intrare o valoare 
cuprinsă între 1 și 11. Se recomandă utilizarea instrucțiunii switch.

Date de intrare
Programul citește de la tastatură un număr l.

Date de ieșire
Programul va afișa, câte una pe rând, cu inițială mare, lunile rămase după cea cu numărul citit.

 */

#include <iostream>
using namespace std;

int main()
{
    int l;
    cin >> l;

    switch (l)
    {
    case 1:
        cout << "Februarie" << "\n" << "Martie" << "\n" << "Aprilie" << "\n";
        cout << "Mai" << "\n" << "Iunie" << "\n" << "Iulie" << "\n" << "August" << "\n";
        cout << "Septembrie" << "\n" << "Octombrie" << "\n" << "Noiembrie" << "\n";
        cout << "Decembrie";
        break;
    case 2:
        cout << "Martie" << "\n" << "Aprilie" << "\n";
        cout << "Mai" << "\n" << "Iunie" << "\n" << "Iulie" << "\n" << "August" << "\n";
        cout << "Septembrie" << "\n" << "Octombrie" << "\n" << "Noiembrie" << "\n";
        cout << "Decembrie";
        break;
    case 3:
        cout << "Aprilie" << "\n";
        cout << "Mai" << "\n" << "Iunie" << "\n" << "Iulie" << "\n" << "August" << "\n";
        cout << "Septembrie" << "\n" << "Octombrie" << "\n" << "Noiembrie" << "\n";
        cout << "Decembrie";
        break;
    case 4:
        cout << "Mai" << "\n" << "Iunie" << "\n" << "Iulie" << "\n" << "August" << "\n";
        cout << "Septembrie" << "\n" << "Octombrie" << "\n" << "Noiembrie" << "\n";
        cout << "Decembrie";
        break;
    case 5:
        cout << "Iunie" << "\n" << "Iulie" << "\n" << "August" << "\n";
        cout << "Septembrie" << "\n" << "Octombrie" << "\n" << "Noiembrie" << "\n";
        cout << "Decembrie";
        break;
    case 6:
        cout << "Iulie" << "\n" << "August" << "\n";
        cout << "Septembrie" << "\n" << "Octombrie" << "\n" << "Noiembrie" << "\n";
        cout << "Decembrie";
        break;
    case 7:
        cout << "August" << "\n";
        cout << "Septembrie" << "\n" << "Octombrie" << "\n" << "Noiembrie" << "\n";
        cout << "Decembrie";
        break;
    case 8:
        cout << "Septembrie" << "\n" << "Octombrie" << "\n" << "Noiembrie" << "\n";
        cout << "Decembrie";
        break;
    case 9:
        cout << "Octombrie" << "\n" << "Noiembrie" << "\n";
        cout << "Decembrie";
        break;
    case 10:
        cout << "Noiembrie" << "\n";
        cout << "Decembrie";
        break;
    case 11:
        cout << "Decembrie";
        break;
    }

    return 0;
}