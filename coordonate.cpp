//coordonate.cpp -- PbInfo --

/*
Se consideră un pătrat mare împărțită în n x n pătrățele identice.
Pătratul are deci n linii și n coloane (numerotate de la 1 la n),
iar în fiecare pătrățel este trecut câte un număr natural cuprins
între 1 și n2, ca în exemplul de mai jos în care n = 4:

n - latura patratului
x , y - pozitii in patratul cu n latura
val - o valoare din patrat la x, y

i, j - pozitii in patrat
v - alta valoare la i, j 

 */

#include <iostream>
using namespace std;

long long n, x, y, val;

int main(void)
{
    cin >> n >> x >> y >>  val;
    cout << n*(x-1)+y << " ";

    if(val%n==0) cout << val/n << " " << n;
    else cout << val/n+1 << " " << val%n;

    return 0;
}