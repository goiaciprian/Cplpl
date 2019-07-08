#include <iostream>

int main()
{
    int numar;
    std::cin >> numar;
    if (numar == 0)
    {
        std::cout<<"null"<<std::endl;
    }else if(numar > 0)
    {
        std::cout << "pozitiv" << std::endl;
    }else
    {
        std::cout << "negativ" << std::endl;
    }
    
    return 0;
}