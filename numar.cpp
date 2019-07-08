//numar.cpp -- PbInfo --;
#include <iostream>

int main()
{
    int prod;
    std::string numar;
    std::cin >> numar;

    if(numar.length() != 3)
    {
        return 1;
    }

    int sute = (int)numar[0] - 48;
    int unitati = (int)numar[2] - 48;
    prod = sute * unitati;

    std::cout << prod << std::endl;

    return 0;
}
