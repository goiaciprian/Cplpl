/*Calendar.cpp -- PbIndo -- 90 pct;

Cerinţa
Se citesc 3 numere naturale z l a. Să se decidă dacă reprezintă o
dată calendaristică corectă, în format zi luna an.

Date de intrare
Programul citește de la tastatură numerele z l a.

Date de ieşire
Programul afișează pe ecran mesajul DA, dacă cele trei numere
formează o dată calendaristică corectă, respectiv NU în caz contrar.

Restricţii şi precizări
1850 ≤ a ≤ 2500
0 ≤ z,l ≤ 100

Exemplu
Intrare
29 2 2000

Ieșire
DA
*/

#include <iostream>
using namespace std;

int z, l, an;

int main()
{
    cin >> z >> l >> an;

    switch (l)
    {
    case 1:
        if (z > 31)
            cout << "NU";
        else
            cout << "DA";
        break;
    case 2:
        if ((z > 29) && ((an % 4 == 0 && an % 100 != 0) || an % 400 == 0))
            cout << "NU";
        else if ((z > 28) && ((an % 4 != 0 && an % 200 == 0) || an % 400 != 0))
            cout << "NU";
        else
            cout << "DA";
        break;
    case 3:
        if (z > 31)
            cout << "NU";
        else
            cout << "DA";
        break;
    case 4:
        if (z > 30)
            cout << "NU";
        else
            cout << "DA";
        break;
    case 5:
        if (z > 31)
            cout << "NU";
        else
            cout << "DA";
        break;
    case 6:
        if (z > 30)
            cout << "NU";
        else
            cout << "DA";
        break;
    case 7:
        if (z > 31)
            cout << "NU";
        else
            cout << "DA";
        break;
    case 8:
        if (z > 31)
            cout << "NU";
        else
            cout << "DA";
        break;
    case 9:
        if (z > 30)
            cout << "NU";
        else
            cout << "DA";
        break;
    case 10:
        if (z > 31)
            cout << "NU";
        else
            cout << "DA";
        break;
    case 11:
        if (z > 30)
            cout << "NU";
        else
            cout << "DA";
        break;
    case 12:
        if (z > 31)
            cout << "NU";
        else
            cout << "DA";
        break;
    }

    return 0;
}
