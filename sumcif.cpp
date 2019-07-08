//sumcif.cpp --PbInfo -- 100;

#include <iostream>

int main()
{
    int sum=0;
    std::string numar;
    std::cin >> numar;

    for(char var: numar)
    {
        int temp = (int)var - 48;
        // std::cout << temp << "\n";
        sum += temp; 
    }

    std::cout << sum << std::endl;

    return 0;
}