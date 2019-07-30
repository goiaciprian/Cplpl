/*

Cerința
Pentru numerotarea paginilor unei serii enciclopedice 
formate din unul sau mai multe volume se presupune 
că se folosesc n cifre. Fiecare volum are 300 de pagini, 
eventual cu excepţia ultimului volum care ar putea avea mai puţine.

Pentru n dat, să se determine numărul de volume din serie 
V şi numărul de pagini P ale ultimului volum. Dacă nu este posibilă 
numerotarea paginilor folosind n cifre, se va afişa mesajul IMPOSIBIL.

Date de intrare
Programul citește de la tastatură numărul n.

Date de ieșire
Programul va afișa pe ecran numerele V P, separate prin exact un spaţiu, sau mesajul IMPOSIBIL.

Restricții și precizări
1 ≤ n ≤ 1 000 000 000
numerotarea paginilor se face începând cu 1
Exemplul 1
Intrare

999
Ieșire

2 105
Exemplul 2
Intrare

900
Ieșire

IMPOSIBIL
 */

#include <iostream>
using namespace std;

int n, c, cvNumarMagic = 792;
// bool ok = true;

int main()
{
    cin >> n;
    c = n % cvNumarMagic;
     
    if (c == 0) { cout << n / cvNumarMagic << ' ' << c; return 0;}
    if ( c <= 92007 - 9) { cout << n / cvNumarMagic + 1 << ' ' << c; return 0;}
    else
    {
        c -= 9;
        if ( c <= 180 )
           if (c % 2)
             cout << "IMPOSIBIL";
           else
           {
               cout << n / cvNumarMagic + 1 << ' ' << 9 + c/2;
               return 0;
           }
        else
        {
            c -= 180;
            if (c % 3) cout << "IMPOSIBIL";
            else
            {
                cout << n / cvNumarMagic + 1 << ' ' << 9+90+c/3;
                return 0;
            }
        }       
    }
} // 90 pct - brainly;