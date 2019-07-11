/*Prod2cons.cpp -- PbInfo -- 100;

Cerinţa
Se citește un număr natural n. Să se stabilească
dacă n poate fi scris ca produs de două numere naturale consecutive.

Date de intrare
Programul citește de la tastatură numărul n.

Date de ieşire
Programul afișează pe ecran două numere naturale consecutive
al căror produs este n, ordonate crescător și separate printr-un
spațiu, dacă există sau mesajul NU EXISTA, dacă nu există două astfel de numere.

Restricţii şi precizări
1 ≤ n ≤ 1.000.000.000

Exemplu
Intrare

12
Ieșire

3 4
 */

#include <iostream>
#include <cmath>
using namespace std;

int a, rad;

int main()
{
    cin >> a;
    rad = sqrt(a);
    rad *(rad + 1) == a ? cout << rad << " " << rad + 1 : cout << "NU EXISTA";
    return 0;
}