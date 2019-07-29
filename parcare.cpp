#define as " "
#include <iostream>
#include <fstream>
using namespace std;

ifstream inFile("parcare.in");
ofstream outFile("parcare.out");

int main()
{
    int inZi, inLuna, inOra, inMinute, outZi, outLuna, outOra, outMinute, optiune, tarif;
    int nrZile, timp, suma;
    inFile >> inZi >> inLuna >> inOra >> inMinute;
    inFile >> outZi >> outLuna >> outOra >> outMinute;
    inFile >> tarif;
    inFile >> optiune;
    inFile.close();

    nrZile = 0;
    suma = 0;

    if(outZi < inZi) {
        if ( inLuna == 1 || inLuna == 3 || inLuna == 5 || inLuna == 7 || inLuna == 8 || inLuna == 10 || inLuna == 12)
            nrZile = (31 - inZi) + outZi;
        else if (inLuna == 4 || inLuna == 6 || inLuna == 9 || inLuna == 11)
            nrZile = (30 - inZi) + outZi;
        else if (inLuna == 2)
            nrZile = (28 - inZi) + outZi;
    } else {
        nrZile = outZi - inZi;
    }


    int intrare = (inOra*60) + inMinute;
    int iesire = (outOra*60) + outMinute;

    timp = (nrZile*1440) + (iesire-intrare);

    if (optiune == 1) 
        outFile << timp;
    else {
        if (timp > 15) {
            if (timp % 60 == 0) 
                suma = (timp/60) * tarif;
            else 
                suma = ((timp/60) * tarif) + tarif;
        }
        outFile << suma;
    }

    cout<<suma;
    outFile.close();
    return 0;
}