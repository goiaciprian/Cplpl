/*Calendar1.cpp -- PbInfo -- 100 pct;

Cerinţa
Se citesc 3 numere naturale z1 l1 a1, reprezentând o dată
calendaristică corectă, în format zi luna an. Să se afişeze data zilei următoare.

Date de intrare
Programul citește de la tastatură numerele z1 l1 a1.

Date de ieşire
Programul afișează pe ecran numerele z2 l2 a2, separate
prin exact un spaţiu, reprezentând data zilei următoare.

Restricţii şi precizări
data calendaristică citită este corectă

Exemplu
Intrare

28 2 2000
Ieșire

29 2 2000
 */

#include <iostream>
using namespace std;

int zi, ln, an;
bool bisect = false;

int main()
{
    cin >> zi >> ln >> an;

    if (( an % 4 == 0 && an % 100 != 0 ) || an % 400 == 0 ) bisect = true;

    switch(ln)
    {
        case 1:
            if(zi>=31) cout << (zi+1)-31 << " " << ln+1 << " " << an;
            else cout << zi + 1 << " " << ln << " " << an;
            break;
        case 2:
            if(bisect)
            {
                if(zi>=29) cout << (zi+1) - 29 << " " << ln+1 << " " << an;
                else cout << zi+1 << " " << ln << " " << an;
            }
            else
            {
                if(zi>=28) cout << (zi+1) - 28 << " " << ln+1 << " " << an;
                else cout << zi+1 << " " << ln << " " << an;
            }
            break;
        case 3:
            if(zi>=31) cout << (zi+1) - 31 << " " << ln+1 << " " << an;
            else cout << zi+1 << " " << ln << " " << an;
            break;
        case 4:
            if(zi>=30) cout << (zi+1) - 30 << " " << ln+1 << " " << an;
            else cout << zi+1 << " " << ln << " " << an;
            break;
        case 5:
            if(zi>=31) cout << (zi+1) - 31 << " " << ln+1 << " " << an;
            else cout << zi+1 << " " << ln << " " << an;
            break;
        case 6:
            if(zi>=30) cout << (zi+1) - 30 << " " << ln+1 << " " << an;
            else cout << zi+1 << " " << ln << " " << an;
            break;
        case 7:
            if(zi>=31) cout << (zi+1) - 31 << " " << ln+1 << " " << an;
            else cout << zi+1 << " " << ln << " " << an;
            break;
        case 8:
            if(zi>=31) cout << (zi+1) -31 << " " << ln+1 << " " << an;
            else cout << zi+1 << " " << ln << " " << an;
            break;
        case 9:
            if(zi>=30) cout << (zi+1) - 30 << " " << ln+1 << " " << an;
            else cout << zi+1 << " " << ln << " " << an;
            break;
        case 10:
            if(zi>=31) cout << (zi+1) - 31 << " " << ln+1 << " " << an;
            else cout << zi+1 << " " << ln << " " << an;
            break;
        case 11:
            if(zi>=30) cout << (zi+1) - 30 << " " << ln+1 << " " << an;
            else cout << zi+1 << " " << ln << " " << an;
            break;
        case 12:
            if(zi>=31) cout << (zi+1) - 31 << " " << (ln+1)-12 << " " << an+1;
            else cout << zi+1 << " " << ln << " " << an;
    }
    return 0;
}