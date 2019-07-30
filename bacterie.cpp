/*bacterie.cpp -- PbInfo -- ; */

#include <iostream>
#include <fstream>
using namespace std;


int main() {

    ifstream inFile("bacterie.in");
    ofstream outFile("bacterie.out");
    int randuri, coloane, nrComitate, min, comitateInfectate;
    inFile >> randuri >> coloane;
    inFile.close();

    nrComitate = randuri * coloane;
    if (randuri > coloane)
        min = coloane;
    else 
        min = randuri;
    
    comitateInfectate = (min * (min+1)) / 2;
    outFile << nrComitate - comitateInfectate;
    outFile.close();

    return 0;
} // 70 pct;