// elimcifra.cpp -- PbInfo -- 100;

#include <iostream>

int main()
{
    std::string numar;
    std::cin >> numar;

    char prim = numar[0];
    char ultim = numar[2];

    std::string altNumar;

    altNumar += prim;
    altNumar += ultim;

    std::cout << altNumar << std::endl;

    return 0;
}