/*

Cerința
În regatul lui Cătălin și al lui Sebi există 3 elfi magici, fiecare având 
vârsta formată dintr-o singură cifră. Fie aceste cifre x, y, z. Ei au 
aflat că se ține un sfat al bătrânilor în care pot participa doar elfii 
ale căror vârste sunt numere de 3 cifre. Pentru a fi şi ei prezenţi, cei 
trei elfi magici își folosesc puterile pentru a-și uni vârstele într-un 
singur număr de 3 cifre. Transformarea lor este perfectă doar dacă obţin, 
alăturând vârstele lor, un număr par de 3 cifre.

Să se afișeze câte transformări perfecte pot avea loc, alăturând cele 
trei vârste și cea mai mare valoare de trei cifre dintre aceste transfo
rmări perfecte. Dacă nu pot forma nici un număr par de trei cifre, elfii 
nu pot participa la sfat și se va afișa mesajul Poate data viitoare!.

Date de intrare
Fișierul de intrare elfii.in conține pe prima linie x y z, trei 
numere naturale separate prin câte un spaţiu, reprezentând vârstele celor trei elfi magici.

Date de ieșire
Fișierul de ieșire elfii.out va conține pe prima linie numărul de 
transformări perfecte și pe următoarea linie maximul obţinut prin aceste transformări.

Restricții și precizări
0 ≤ x, y, z ≤ 9
Dacă avem 2 sau 3 elfi cu vârste egale, prin combinarea acestora se vor 
obține mai multe transformările identice și fiecare se va lua în considerare la numărare.
Exemplul 1
elfii.in

1 3 5
elfii.out

Poate data viitoare! */

#include <iostream>
#include <fstream>
using namespace std;

ifstream inFile("elfii.in");
ofstream outFile("elfii.out");
int x, y, z, nrPare, cMM;

int main()
{
    inFile >> x >> y >> z;
    inFile.close();

    if ((x*100+y*10+z) % 2 == 0)
        if (x != 0) ++nrPare; //135
    if ((y*100+x*10+z) % 2 == 0)
        if (y != 0) ++nrPare; //315
    if ((z*100+y*10+x) % 2 == 0)
        if (z != 0) ++nrPare; //531
    if ((x*100+z*10+y) % 2 == 0)
        if (x !=0 ) ++nrPare; //153
    if ((y*100+z*10+x) % 2 == 0)
        if (y != 0) ++nrPare; //351
    if ((z*100+x*10+y) % 2 == 0)
        if (z != 0) ++nrPare; //513

    cMM = x*100+y*10+z;
    cMM < (y*100+x*10+z) ? cMM = y*100+x*10+z: cMM = cMM;
    cMM < (z*100+y*10+x) ? cMM = z*100+y*10+x: cMM = cMM;
    cMM < (x*100+z*10+y) ? cMM = x*100+z*10+y: cMM = cMM;
    cMM < (y*100+z*10+x) ? cMM = y*100+z*10+x: cMM = cMM;
    cMM < (z*100+x*10+y) ? cMM = z*100+x*10+y: cMM = cMM;

    if (nrPare == 0) outFile << "Poate data viitoare!";
    else outFile << nrPare << "\n" << cMM;

    outFile.close();

    return 0;
} // 100 pct;