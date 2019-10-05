/**

Algoritm care face conversia banilor din euro in lei si imparte leii in bancnote de 50, 10 ,5 lei

*/

#include <iostream>
#include <stdlib.h> //atof
#include <fstream>

using namespace std;

void convertor(double, double);

int main(int argc, char** argv) 
{ 
    double const curs { atof(argv[1]) };
    int i  {100}, n { atoi(argv[2]) };

    for (; i <= n; i += 100) {
        convertor(curs, i);
    }
    
    return 0; 
}

void convertor(double curs, double sumaBani) {

    double sumaSchimbata { curs * sumaBani };
    int banc50 {}, banc10 {}, banc5 {}, banc1 {};
    ofstream outFile;
    
    if ( sumaSchimbata >= 50 ) {
        banc50 = sumaSchimbata / 50;
        sumaSchimbata -= banc50 * 50;
    }

    if ( sumaSchimbata >= 10 ) {
         banc10 = sumaSchimbata / 10;
         sumaSchimbata -= banc10 * 10;
    }

    if (sumaSchimbata >= 5) {
        banc5 = sumaSchimbata / 5;
        sumaSchimbata -= banc5 * 5;
    } else {
        banc1 = sumaSchimbata;
    }

    // cout << "\nCurs euro - lei: " << curs << "\n"
    //      << "Suma de bani inainte de conversie: " << sumaBani << " euro" << "\n\n"
    //      << "Suma de bani dupa conversie: " << (curs * sumaBani) << " lei" << "\n"
    //      << "Suma de bani dupa conversie: " << (curs * sumaBani) * 10 << " ron" << "\n\n"
    //      << "Bancnote de 50 lei: " << banc50 << "\n"
    //      << "Bancnote de 10 lei: " << banc10 << "\n"
    //      << "Bancnote de  5 lei: " << banc5 << "\n"
    //      << "Bancnote de  1 leu: " << banc1 << "\n\n"; 

    outFile.open("C:\\Users\\camio\\Desktop\\numere.txt", ios_base::app);
    outFile << "\nCurs euro - lei: " << curs << "\n"
            << "Suma de bani inainte de conversie: " << sumaBani << " euro" << "\n\n"
            << "Suma de bani dupa conversie: " << (curs * sumaBani) << " lei" << "\n"
            << "Suma de bani dupa conversie: " << (curs * sumaBani) * 10 << " ron" << "\n\n"
            << "Bancnote de 50 lei: " << banc50 << "\n"
            << "Bancnote de 10 lei: " << banc10 << "\n"
            << "Bancnote de  5 lei: " << banc5 << "\n"
            << "Bancnote de  1 leu: " << banc1 << "\n\n";

}