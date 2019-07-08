#include <iostream>
#include <string>

int main()
{
    int numar;
    std::string prim, dua;

    std::cin >> numar;
    if(std::to_string(numar).length() > 2)
    {
        exit(0);
    }

    if(std::to_string(numar).length() != 1)
    {
        std::string altString = std::to_string(numar);
        prim = altString[0];
        dua = altString[1];
    }

    if(numar <= 15)
    {
        std::cout << numar*numar << std::endl;
    }
    else if(15 < numar && numar <= 30)
    {
        std::cout << std::stoi(prim)+std::stoi(dua) << std::endl;
    }
    else
    {
        std::cout << std::stoi(prim) * std::stod(dua) << std::endl;
    }

    return 0;
}