#include <iostream>

int main()
{
    std::string acelNumar;
    int numar;
    do
    {
        std::cin >> numar;
    } while (std::to_string(numar).length() != 3);

    acelNumar = std::to_string(numar);
    
    if(acelNumar[0] == acelNumar[1] && acelNumar[1] == acelNumar[2] && acelNumar[0] == acelNumar[2])
    {
        std::cout << "da" << std::endl;

    }else
    {
        std::cout << "nu" << std::endl;

    }
    return 0;
}