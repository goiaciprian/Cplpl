/*ciford.cpp -- PbInfo -- ;

Cerinţa
Se citește de la tastatură un număr natural de 3 cifre. Să se afișeze cifrele sale în ordine crescătoare.

Date de intrare
Programul va citi de la tastatură un număr natural, de 3 cifre.

Date de ieşire
Programul va afişa pe ecran cifrele numărului citit, în ordine crescătoare, separate prin exact un spațiu.

Restricţii şi precizări
Numărul citit de la tastatură este natural, de 3 cifre

Exemplu
Intrare

101
Ieșire

0 1 1
 */

// #include <iostream>
// using namespace std;

//     int n, s, z, u;

// int main()
// {
//     cin >> n;

//     s=n/100;
//     z=(n/10)%10;
//     u=n%10;

//     if ((s<z) && (s<u)) cout << s << " ";
//     else if ((z<s) && (z<u)) cout << z << " ";
//     else cout << u << " ";

//     if (((s<z) && (s>u)) || ((s>z) && (s<u))) cout << s << " ";
//     else if (((z<s) && (z>u)) || ((z>s) && (z<u))) cout << z << " ";
//     else cout << u << " ";

//     if ((s>z) && (s>u)) cout << s;
//     else if ((z>s) && (z>u)) cout << z;
//     else cout << u;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;
    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;
    if (c <= b && b <= a)
    {
        cout << c << " " << b << " " << a;
    }
    else if (c <= a && a <= b)
        {
            cout << c << " " << a << " " << b;
        }
    else if (a <= c && c <= b)
    {
        cout << a << " " << c << " " << b;
    }
    else if (a <= b && b <= c)
    {
        cout << a << " " << b << " " << c;
    }
    else if (b <= c && c <= a)
    {
        cout << b << " " << c << " " << a;
    }
    else if (b <= a && a <= c)
    {
        cout << b << " " << a << " " << c;
    }

    return 0;
}
