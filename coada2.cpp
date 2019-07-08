//coada2.cpp -- PbInfo -- ;
#include <iostream>
#include <fstream>
using namespace std;

/*
Andrei și Mihai stau la coada la magazin pentru a-și cumpăra bomboane.
Andrei este în fața lui Mihai la coadă, iar între cei doi se afla alte x
persoane. Mihai a observat că în total, ​în fata lui , se afla ​y ​persoane,
iar Andrei a observat că în spatele ​lui se află z persoane.

Știind numerele ​x y z , aflați câte persoane sunt la coadă în total.
Uneori, însă, e posibil ca aceștia să fi numărat greșit numărul de persoane,
și să nu se poată calcula numărul total de persoane din coada. În acest caz
trebuie sa afișați ​-1.
*/

int main()
{
    long long x, y, z, t;// x - persoane intre cei doi, y - persoane in fata, z - persoane in spate;  
    ifstream myfile("coada2.in");
    ofstream outFile("coada2.out");
    myfile >> x >> y >> z;

    if(x>=y or x>=z)
    {
        outFile << -1;
        return 0;
    }
    t = y + z -x;
    outFile << ((t<2) ? -1: t)
    myfile.close();
    outFile.close();
}