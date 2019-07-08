//sumcifre.cpp -- PbInfo -- 100;
#include <iostream>

int main()
{
    int sum=0;
    std::string numar;
    std::cin >> numar;

    if(numar.length() != 2)
    {
        return 1;
    }

    for(char var: numar)
    {
        int temp = (int)var - 48;
        sum += temp;
    }

    std::cout << sum << std::endl;

    return 0;
}
