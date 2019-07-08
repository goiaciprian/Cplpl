//schimbarecifre.cpp -- PbInfo -- 100;
#include <iostream>

int main()
{
    std::string numar, nrInvers="";
    std::cin >> numar;

    if(numar.length() != 2) { return 1; }

    char zeci = numar[0];
    char unitati = numar[1];

    nrInvers.push_back(unitati);
    nrInvers.push_back(zeci);

    int pP = std::stoi(nrInvers);

    std::cout << pP*pP << std::endl;

    return 0;
}