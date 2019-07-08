//sumpatratecifre.cpp -- PbInfo -- ;
#include <iostream>

int main()
{
    int suma=0;
    std::string numar;
    std::cin >> numar;

    for(char var: numar)
    {
        int temp = (int)var - 48;
        suma += temp*temp;

    }

    std::cout << suma << std::endl;

    return 0;
}
