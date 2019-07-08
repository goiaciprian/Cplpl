//zmeu.cpp -- PnInfo Concurs -- 100;
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    long long n, m, nrFacute, ramas, necesar;
    ifstream inFile("zmeu.in");
    ofstream outFile("zmeu.out");
    
    inFile >> n >> m;
    inFile.close();

    nrFacute = n/(m*2);
    ramas = n%(m*2);
    necesar = m*2 - ramas;

    cout << nrFacute << " " << necesar;

    outFile << nrFacute << "\n" << necesar;
    outFile.close();

    return 0;
}