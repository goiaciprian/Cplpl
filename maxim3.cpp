/* maxim3.cpp -- PbInfo -- 0pct??;

Cerinţa
Calculaţi maximul celor 3 numere date.

Date de intrare
Fişierul de intrare maxim3.in conţine pe prima linie 3 numere întregi separate prin spaţii.

Date de ieşire
Fişierul de ieşire maxim3.out va conţine pe prima linie numărul max, reprezentând maximul numerelor din fişierul de intrare.

Restricţii şi precizări
valoare absolută a numerelor din fişierul de intrare va fi mai mică decât 2.000.000.000

Exemplu
maxim3.in

125 68 200
maxim3.out

200
 */

#include <iostream>
#include <fstream>
using namespace std;

ifstream inFile("maxim3.in");
ofstream outFile("maxim3.out");

int a, b, c, maxim;

int main()
{
    inFile >> a >> b >> c;
    inFile.close();
    if (a>b && a>c) maxim=a;
    else if (b>a && b>c) maxim=b;
    else if (c>a && c>b) maxim=c;
    outFile << maxim;
    outFile.close();
    return 1;
}
