//numar.cpp -- PbInfo --;
#include <iostream>

int main()
{
    int nr;
    std::string numar, suteUnitati = "";
    std::cin >> numar;

    if(numar.length() != 3)
    {
        return 1;
    }

    char sute = numar[0];
    char unitati = numar[2]; 

    suteUnitati += sute;
    suteUnitati += unitati;

    nr = std::stoi(suteUnitati);

    std::cout << nr*nr << std::endl;

    return 0;
}
