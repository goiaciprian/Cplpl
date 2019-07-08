/*MinMax2.cpp -- PbInfo -- ;

Cerința
Se dau 2 numere naturale cu exact 3 cifre fiecare, să se afișeze cel 
mai mare și cel mai mic număr de două cifre scris cu o cifră din primul
număr și cu o cifră din al doilea.

Date de intrare
Programul citește de la tastatură 2 numere separate prin spații.

Date de ieșire
Programul va afișa pe ecran cel mai mare și cel mai mic număr de
două cifre scris cu o cifră din primul număr și cu o cifră din al
doilea în această ordine, separate prin spații.

 */
// Moi - 20 pct???;
// #include <iostream>
// using namespace std;

// int main(void)
// {
//     int num1, num2, s, S, z, Z, u, U, m1, m2;
//     cin >> num1 >> num2;

//     s=num1/100;
//     z=(num1/10)%10;
//     u=num1%10;

//     S=num2/100;
//     Z=(num2/10)%10;
//     U=num2%10;

// cout << s << " " << z << " " << u << "\n";
// cout << S << " " << Z << " " << U;

// if((s>z) && (s>u)) m1=s;
// else if((z>s)&&(z>u)) m1=z;
// else m1=u;

// cout << m1 << "\n";

// if((S>Z) && (S>U)) m2=S;
// else if((Z>S)&&(Z>U)) m2=Z;
// else m2=U;

// cout << m2 << "\n";

// if((s<z) && (s<u)) num1=s;
// else if((z<s)&&(z<u)) num1=z;
// else num1=u;

// cout << num1 << "\n";

// if((S<Z) && (S<U)) num2=S;
// else if((Z<S)&&(Z<U)) num2=Z;
// else num2=U;

// cout << num1 << "\n";

//     cout << m2 << m1 << " ";
//     cout << num2 << num1;

//     return 0;
// }

//brainly 20 pct;
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    int min_a = a % 10;
    int max_a = a % 10;

    a = a / 10;

    if (a % 10 < min_a)
        min_a = a % 10;

    if (a % 10 > max_a)
        max_a = a % 10;

    a = a / 10;

    if (a % 10 < min_a)
        min_a = a % 10;

    if (a % 10 > max_a)
        max_a = a % 10;

    int min_b = b % 10;
    int max_b = b % 10;

    b = b / 10;

    if (b % 10 < min_b)
        min_b = b % 10;

    if (b % 10 > max_b)
        max_b = b % 10;

    b = b / 10;

    if (b % 10 < min_b)
        min_b = b % 10;

    if (b % 10 > max_b)
        max_b = b % 10;

    int max, min;

    if (min_a < min_b)
        min = min_a * 10 + min_b;
    else
        min = min_b * 10 + min_a;

    if (max_a > max_b)
        max = max_a * 10 + max_b;
    else
        max = max_b * 10 + max_a;

    cout << max << " " << min;

    return 0;
}