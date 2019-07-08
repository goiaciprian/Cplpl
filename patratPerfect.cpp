#include <iostream>
#include <cmath>

int main()
{
    int numar;
    std::cin >> numar;

    if((int)std::sqrt(numar) == std::sqrt(numar))
    {
        std::cout << "da" << std::endl;
    }
    else
    {
        std::cout << "nu" << std::endl;
    }
    return 0;
}